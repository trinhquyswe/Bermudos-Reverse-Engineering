"""c2cs.py - phase P1: pseudo-C (pseudoc/<asm>/*.c) -> C#-syntax pseudo-C# (pseudoc-cs/<asm>/*.cs).

Usage:  python tools/c2cs.py [--assembly Assembly-CSharp] [--only Ammo ...]

Reads  pseudoc/<assembly>/*.c   (written by tools/il2cpp_ghidra.py export)
Writes pseudoc-cs/<assembly>/*.cs (overwrites the P0 reading aid of infer_cs.py)

Builds on infer_cs.py (P0), which supplies frame stripping, init-guard removal,
call rewriting and string literals. P1 adds:

  S1  class wrapper   the dump.cs skeleton (fields, attributes, method stubs) is
                      emitted as real C# instead of a comment; each stub receives
                      its body. Methods with no stub are appended to the class.
  S2  locals          `// locals:` declarations become C# declarations initialised
                      with `default`; arrays become `T[] x = new T[n];`; residual
                      `T x [n];` statements are converted in place.
  S3  types           undefined*/float4/float8/ulonglong/... -> C# primitives;
                      `X_o *` casts -> `(X)`; `(MethodInfo *)0x0` -> null;
                      `(MethodInfo *)x` -> x; SQRT/ABS -> Mathf.Sqrt/Mathf.Abs.
  S4  raw memory      *(T *)(E)          -> Raw.Read<T>(E)
                      *(T *)(E) = V;     -> Raw.Write<T>(E, V);
                      **(T **)(E)        -> Raw.Deref(Raw.Read<object>(E))
                      (**(code **)(E))(a) -> Raw.VCall(E)(a)
  S5  indentation     rebuilt from brace depth (P0 flattened it).

Result is syntactically valid C#. Calls to unnamed_function_N become Type.Method when
the wasm function has exactly one managed name, and static Raw accesses at
<Type>_TypeInfo + 0x5c become Type.field when the access type matches the field type
(lookup tables: tools/symbol_maps.json, built by tools/symbol_maps.py). Everything else
stays unresolved: unnamed_function_N, DAT_ram_* globals, CONCAT44, param_N/local_*
names and Raw.* accessors.
"""

import argparse
import collections
import json
import os
import re
import sys
from collections import defaultdict, deque

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import infer_cs as p0  # noqa: E402  (P0 transforms are reused, not copied)

WORKSPACE = p0.WORKSPACE

KEYWORDS = {"return", "goto", "throw", "else", "case", "do", "new", "break",
            "continue", "while", "if", "for", "switch", "default", "using", "null"}
PRIM_OUT = {"int", "uint", "short", "ushort", "byte", "sbyte", "long", "ulong",
            "float", "double", "bool", "char", "object"}
TYPE_MAP = {
    "undefined": "byte", "undefined1": "byte", "undefined2": "ushort",
    "undefined3": "uint", "undefined4": "int", "undefined5": "long",
    "undefined6": "long", "undefined7": "long", "undefined8": "long",
    "uchar": "byte", "char": "sbyte", "ulonglong": "ulong", "longlong": "long",
    "float4": "float", "float8": "double", "float10": "double",
    "code": "object", "Single": "float", "Boolean": "bool", "Char": "char",
}
TYPE_MAP.update(p0.PRIM)

GHIDRA_WORD_RE = re.compile(r"\b(undefined\d?|uchar|ulonglong|longlong|float4|float8|float10)\b")
CAST_WORD_RE = re.compile(r"\(\s*(%s)\s*\)" % "|".join(
    re.escape(k) for k in sorted(TYPE_MAP, key=len, reverse=True)))
PTR_CAST_RE = re.compile(r"\(\s*([A-Za-z_][\w\.]*)\s*(\*+)\s*\)")
METHINFO_NULL_RE = re.compile(r"\(\s*MethodInfo\s*\*\s*\)\s*0x0\b")
METHINFO_CAST_RE = re.compile(r"\(\s*MethodInfo\s*\*\s*\)\s*")

# raw memory access (S4)
CAND_RE = re.compile(r"\(\*\*\(code \*\*\)|\*+\(")
VCALL_HEAD = "(**(code **)"
HEAD_RE = re.compile(r"\*+\(\s*([A-Za-z_][\w\. ]*?)\s*(\*+)\s*\)\s*")
STARS_RE = re.compile(r"\*+")
IDENT_RE = re.compile(r"[A-Za-z_]\w*")
WRITE_RE = re.compile(r"\s*=(?!=)")

# declarations (S2)
DECL_FIRST_RE = re.compile(
    r"^(?P<type>.*?)\s*(?P<stars>\*+)?\s*(?P<name>[A-Za-z_]\w*)\s*(?P<dims>(?:\[\s*\d*\s*\]\s*)*)$")
DECL_NEXT_RE = re.compile(
    r"^(?P<stars>\*+)?\s*(?P<name>[A-Za-z_]\w*)\s*(?P<dims>(?:\[\s*\d*\s*\]\s*)*)$")
RESID_DECL_RE = re.compile(
    r"^(?P<type>[A-Za-z_][\w\.]*)\s*(?P<stars>\*+)?\s*(?<=[\s*])(?P<name>[A-Za-z_]\w*)\s*"
    r"(?P<dims>(?:\[\s*\d*\s*\]\s*)*);$")

STR_LIT_RE = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'')
LINE_COMMENT_RE = re.compile(r"//.*$")
CLASS_RE = re.compile(r"\b(?:class|struct|interface|enum)\s+([A-Za-z_]\w*)")
UNRESOLVED_RE = re.compile(r"^public\s*(?:/\*.*?\*/\s*)?(\w+)::(\w+)\(\)")
CTOR_RE = re.compile(r"\bvoid\s+\.c?ctor\b")

# Ghidra's leading __ret: a return buffer (written via *__ret) or the instance pointer
RET_RE = re.compile(r"\b__ret\b")
RET_WRITE_RE = re.compile(r"\*\s*(?:\([^()]*\)\s*)?__ret\s*=(?!=)|__ret\s*\[|&\s*__ret\b")
THIS_PTR_RE = re.compile(r"\b__this\b")
STATIC_HDR_RE = re.compile(r"\bstatic\b")

STAT_NAMES = ("methods", "raw", "raw_write", "vcall", "stub_filled", "appended",
              "unbalanced", "decl_lines", "unparsed_local",
              "native_call", "native_kept", "static_read", "static_write",
              "static_unmapped", "static_type_skip", "ret_this", "ret_kept", "ret_static")


# ------------------------------------------------------- symbol maps (S7)
# tools/symbol_maps.json: wasm function index -> managed method (native_calls) and
# <Type>_TypeInfo static-field offsets with declared types (static_fields).
SYMBOL_MAPS_PATH = os.path.join(HERE, "symbol_maps.json")
NATIVE_CALL_RE = re.compile(r"\bunnamed_function_(\d+)\s*\(")
STATIC_BASE = r"Raw\.Read<(?P<base>\w+)>\(\s*(?P<ti>\w+_TypeInfo)\s*\+\s*(?:0x5c|92)\s*\)"
STATIC_OFF = r"(?:\s*\+\s*(?P<off>0x[0-9A-Fa-f]+|\d+))?"
STATIC_WRITE_RE = re.compile(r"Raw\.Write<(?P<t>\w+)>\(\s*" + STATIC_BASE + STATIC_OFF + r"\s*,")
STATIC_READ_RE = re.compile(r"Raw\.Read<(?P<t>\w+)>\(\s*" + STATIC_BASE + STATIC_OFF + r"\s*\)")
INT_ADDR_TYPES = {"int", "uint", "long", "ulong"}
PRIM_FIELD_TYPES = {"int", "uint", "short", "ushort", "byte", "sbyte", "long", "ulong",
                    "float", "double", "bool", "char"}
_MAPS = None


def symbol_maps():
    """Lazily loaded tools/symbol_maps.json; exits with a hint when it is missing."""
    global _MAPS
    if _MAPS is None:
        if not os.path.exists(SYMBOL_MAPS_PATH):
            sys.exit("missing %s: run  python tools/symbol_maps.py" % SYMBOL_MAPS_PATH)
        with open(SYMBOL_MAPS_PATH, encoding="utf-8") as fh:
            _MAPS = json.load(fh)
    return _MAPS


def static_field(typeinfo, off_text):
    """(TypeInfo symbol, offset text) -> (C# type, field name, field C# type) or None."""
    entry = symbol_maps()["static_fields"].get(typeinfo)
    if entry is None:
        return None
    key = str(int(off_text, 0)) if off_text else "0"
    name = entry["fields"].get(key)
    if name is None:
        return None
    return entry["type"], name, entry["types"].get(key, "")


def type_agrees(read_t, field_t):
    """True when a Raw access of type read_t can address a static field declared as field_t.

    Primitives need the same type. Structs need the same struct type, since a partial read
    of a struct is not the field. Enums also accept int. Reference fields are 4-byte pointers
    on wasm32, so object, int and uint reads of the slot are accepted.
    """
    if field_t in PRIM_FIELD_TYPES:
        return read_t == field_t
    short = re.split(r"[<\[]", field_t)[0].split(".")[-1]
    kinds = symbol_maps().get("value_types", {})
    if short in kinds.get("ambiguous", ()):
        # Shared short name (e.g. a value type and a class): the kind is unknown, so only
        # an exact name read is accepted.
        return read_t.split(".")[-1] == short
    if short in kinds.get("structs", ()):
        return read_t.split(".")[-1] == short
    if short in kinds.get("enums", ()):
        return read_t in ("int", "uint") or read_t.split(".")[-1] == short
    return read_t in ("object", "int", "uint") or read_t.split(".")[-1] == short


def _match_close(s, i):
    """Index of the ')' closing the '(' at s[i]; string literals skipped; -1 if unbalanced."""
    depth, k = 0, i
    while k < len(s):
        c = s[k]
        if c in "\"'":
            m = STR_LIT_RE.match(s, k)
            if m is not None:
                k = m.end()
                continue
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                return k
        k += 1
    return -1


def static_offset_ok(base_t, off_text):
    """'+ N' on the statics base is a byte offset only for a plain integer address.

    A typed (object) base is element-scaled by C pointer arithmetic, so only offset 0 is kept.
    """
    return not off_text or base_t in INT_ADDR_TYPES or int(off_text, 0) == 0


def rewrite_static_writes(text, stats):
    """Raw.Write<T>(Raw.Read<U>(X_TypeInfo + 0x5c) + off, v); -> Type.field = v;"""
    out, pos = [], 0
    for m in STATIC_WRITE_RE.finditer(text):
        if m.start() < pos:
            continue
        close = _match_close(text, text.index("(", m.start()))
        ref = None
        if static_offset_ok(m.group("base"), m.group("off")):
            ref = static_field(m.group("ti"), m.group("off"))
        if ref is None:
            stats["static_unmapped"] += 1
            continue
        if close < 0 or not type_agrees(m.group("t"), ref[2]):
            stats["static_type_skip"] += 1
            continue
        out.append(text[pos:m.start()])
        out.append("%s.%s = %s" % (ref[0], ref[1], text[m.end():close].strip()))
        stats["static_write"] += 1
        pos = close + 1
    out.append(text[pos:])
    return "".join(out)


def rewrite_static_reads(text, stats):
    """Raw.Read<T>(Raw.Read<U>(X_TypeInfo + 0x5c) + off) -> Type.field"""
    def rep(m):
        ref = None
        if static_offset_ok(m.group("base"), m.group("off")):
            ref = static_field(m.group("ti"), m.group("off"))
        if ref is None:
            stats["static_unmapped"] += 1
            return m.group(0)
        if not type_agrees(m.group("t"), ref[2]):
            stats["static_type_skip"] += 1
            return m.group(0)
        stats["static_read"] += 1
        return "%s.%s" % (ref[0], ref[1])
    return STATIC_READ_RE.sub(rep, text)


def rename_native_calls(text, stats):
    """unnamed_function_N( -> Type.Method( when N has exactly one managed name."""
    natives = symbol_maps()["native_calls"]
    def rep(m):
        name = natives.get(m.group(1))
        if name is None:
            stats["native_kept"] += 1
            return m.group(0)
        stats["native_call"] += 1
        return name + "("
    return NATIVE_CALL_RE.sub(rep, text)


# ------------------------------------------------------------------ types
def norm_class(name):
    for prefix in p0.NS_PREFIXES:
        if name.startswith(prefix) and len(name) > len(prefix):
            return prefix[:-1].replace("_", ".") + "." + name[len(prefix):]
    return name


def norm_type(text):
    """Ghidra/IL2CPP type text -> (C# base type, number of '*')."""
    t = text.replace("*", "")
    stars = text.count("*")
    base = re.sub(r"\s+", "", t)
    if base in TYPE_MAP:
        base = TYPE_MAP[base]
    elif base.endswith("_array"):
        base = norm_class(base[:-len("_array")]) + "[]"
    elif base.endswith("_o"):
        base = norm_class(base[:-len("_o")])
    else:
        base = norm_class(base)
    return base, stars


def cs_decl(type_text, extra_stars, name, dims):
    base, stars_t = norm_type(type_text or "object")
    if base == "void":
        base = "object"
    if name in CS_KEYWORDS:  # Ghidra local named 'this' is a C# keyword
        name = "@" + name
    stars = stars_t + extra_stars
    sizes = re.findall(r"\[\s*(\d*)\s*\]", dims or "")
    if sizes:
        rank = "[]" * len(sizes)
        init = "new %s[%s]" % (base, sizes[0]) if (len(sizes) == 1 and sizes[0]) else "default"
        return "%s%s %s = %s;" % (base, rank, name, init)
    if stars and base in PRIM_OUT:
        return "object %s = default; // %s*" % (name, base)
    return "%s %s = default;" % (base, name)


def locals_to_cs(items, stats):
    out = []
    for item in items:
        parts = p0.split_top(item.strip().rstrip(";").strip())
        if not parts:
            continue
        m = DECL_FIRST_RE.match(parts[0])
        if m is None:
            stats["unparsed_local"] += 1
            out.append("// unparsed local: %s" % item)
            continue
        type_text = m.group("type")
        out.append(cs_decl(type_text, len(m.group("stars") or ""), m.group("name"), m.group("dims")))
        stats["decl_lines"] += 1
        for part in parts[1:]:
            mm = DECL_NEXT_RE.match(part)
            if mm is None:
                stats["unparsed_local"] += 1
                out.append("// unparsed local: %s" % part)
                continue
            out.append(cs_decl(type_text, len(mm.group("stars") or ""), mm.group("name"), mm.group("dims")))
            stats["decl_lines"] += 1
    return out


def fix_residual_decl(line):
    m = RESID_DECL_RE.match(line)
    if m is None or m.group("type") in KEYWORDS:
        return line
    return cs_decl(m.group("type"), len(m.group("stars") or ""), m.group("name"), m.group("dims"))


# ------------------------------------------------------------- expressions
def find_semicolon(s, start):
    """Index of the statement-ending ';' at bracket depth 0, skipping string literals."""
    depth, k = 0, start
    while k < len(s):
        c = s[k]
        if c in "\"'":
            m = STR_LIT_RE.match(s, k)
            if m is not None:
                k = m.end()
                continue
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == ";" and depth <= 0:
            return k
        k += 1
    return len(s)


def rewrite_raw(s, stats):
    """*(T *)(E) reads/writes, **(T **)(E) derefs and (**(code **)(E))(a) vcalls."""
    out, pos, n = [], 0, len(s)
    while True:
        m = CAND_RE.search(s, pos)
        if m is None:
            out.append(s[pos:])
            break
        i = m.start()
        out.append(s[pos:i])
        pos = i
        if s.startswith(VCALL_HEAD, i):
            e_open = i + len(VCALL_HEAD)
            e_close = p0.match_delim(s, e_open) if (e_open < n and s[e_open] == "(") else -1
            if e_close > 0 and e_close + 1 < n and s[e_close + 1] == ")":
                stats["vcall"] += 1
                out.append("Raw.VCall(%s)" % rewrite_raw(s[e_open + 1:e_close], stats))
                pos = e_close + 2
                continue
        h = HEAD_RE.match(s, i)
        if h is None or h.group(1).strip() == "MethodInfo":
            out.append(s[i])
            pos = i + 1
            continue
        pre = STARS_RE.match(s, i).end() - i
        t_base, _ = norm_type(h.group(1))
        if t_base == "void":
            t_base = "object"
        cast_stars = len(h.group(2))
        j = h.end()
        if j < n and s[j] == "(":
            e_close = p0.match_delim(s, j)
            if e_close < 0:
                out.append(s[i])
                pos = i + 1
                continue
            addr, end = s[j + 1:e_close], e_close + 1
        else:
            m2 = IDENT_RE.match(s, j)
            if m2 is None:
                out.append(s[i])
                pos = i + 1
                continue
            addr, end = m2.group(0), m2.end()
        addr = rewrite_raw(addr, stats)
        stats["raw"] += 1
        wm = WRITE_RE.match(s, end)
        if wm is not None:
            semi = find_semicolon(s, wm.end())
            value = rewrite_raw(s[wm.end():semi].strip(), stats)
            stats["raw_write"] += 1
            if pre == 1:
                # (T **) names an object-reference slot; a scalar cast keeps its type.
                # A string literal stored through a 4-byte slot is an object reference too.
                wt = "object" if (cast_stars > 1 or value.startswith('"')) else t_base
                out.append("Raw.Write<%s>(%s, %s)" % (wt, addr, value))
            else:
                target = "Raw.Read<object>(%s)" % addr
                for _ in range(pre - 2):
                    target = "Raw.Deref(%s)" % target
                out.append("Raw.Write<object>(%s, %s)" % (target, value))
            pos = semi
            continue
        if pre == 1:
            out.append("Raw.Read<%s>(%s)" % ("object" if cast_stars > 1 else t_base, addr))
        else:
            val = "Raw.Read<object>(%s)" % addr
            for _ in range(pre - 1):
                val = "Raw.Deref(%s)" % val
            out.append(val)
        pos = end
    return "".join(out)


def _ptr_cast(m):
    base, _ = norm_type(m.group(1))
    return "(object)" if (base in PRIM_OUT or base == "void") else "(%s)" % base


def rewrite_casts(s):
    s = METHINFO_NULL_RE.sub("null", s)
    s = METHINFO_CAST_RE.sub("", s)
    s = PTR_CAST_RE.sub(_ptr_cast, s)
    s = CAST_WORD_RE.sub(lambda m: "(%s)" % TYPE_MAP[m.group(1)], s)
    s = GHIDRA_WORD_RE.sub(lambda m: TYPE_MAP[m.group(1)], s)
    s = re.sub(r"\bSQRT\(", "Mathf.Sqrt(", s)
    s = re.sub(r"\bABS\(", "Mathf.Abs(", s)
    return s


# ------------------------------------------------ identifier sanitizing (S6)
# Ghidra/IL2CPP names hold characters C# identifiers cannot: '<Start>b__3_0',
# '<>c__DisplayClass', mangled generics 'System.Action.string..int.' and Wasm imports
# 'import::env::name'. Keywords used as member names need '@'. Only outside string literals.
CS_KEYWORDS = {
    "abstract", "as", "base", "bool", "break", "byte", "case", "catch", "char", "checked",
    "class", "const", "continue", "decimal", "default", "delegate", "do", "double", "else",
    "enum", "event", "explicit", "extern", "false", "finally", "fixed", "float", "for",
    "foreach", "goto", "if", "implicit", "in", "int", "interface", "internal", "is", "lock",
    "long", "namespace", "new", "null", "object", "operator", "out", "override", "params",
    "private", "protected", "public", "readonly", "ref", "return", "sbyte", "sealed", "short",
    "sizeof", "stackalloc", "static", "string", "struct", "switch", "this", "throw", "true",
    "try", "typeof", "uint", "ulong", "unchecked", "unsafe", "ushort", "using", "virtual",
    "void", "volatile", "while",
}
CHAIN_RE = re.compile(r'(?<![\w."])[A-Za-z_]\w*(?:\.+\w*)+')
GENERIC_NAME_RE = re.compile(r"(?<![A-Za-z0-9_])<(\w*)>(?=\w)")
HDR_NAME_RE = re.compile(r"(\b(?:class|struct|interface|enum)\s+)([A-Za-z_][\w\.]*)")


def _clean_chain(m):
    parts = m.group(0).split(".")
    out = [parts[0]]
    for seg in parts[1:]:
        if not seg:
            continue
        if seg in CS_KEYWORDS:
            seg = "@" + seg
        elif seg[0].isdigit():
            seg = "_" + seg
        out.append(seg)
    return ".".join(out)


def _sanitize_code(seg):
    seg = re.sub(r"\bimport::env::(\w+)", r"import_env_\1", seg)
    seg = GENERIC_NAME_RE.sub(r"_\1_", seg)
    return CHAIN_RE.sub(_clean_chain, seg)


def sanitize_line(ln):
    out, pos = [], 0
    for m in STR_LIT_RE.finditer(ln):
        out.append(_sanitize_code(ln[pos:m.start()]))
        out.append(m.group(0))
        pos = m.end()
    out.append(_sanitize_code(ln[pos:]))
    return "".join(out)


# ------------------------------------------------------------ indentation
def brace_delta(st):
    t = STR_LIT_RE.sub('""', st)
    t = LINE_COMMENT_RE.sub("", t)
    return t.count("{") - t.count("}")


def reindent(lines):
    out, depth = [], 0
    for raw in lines:
        st = raw.strip()
        if not st:
            out.append("")
            continue
        level = max(depth - (1 if st.startswith("}") else 0), 0)
        out.append("    " * level + st)
        depth += brace_delta(st)
    return out, depth


# ----------------------------------------------------------------- bodies
def retarget_this(code, header, text, stats):
    """Rename a leading __ret to this when the body never writes through it."""
    if not RET_RE.search(code):
        return text
    if STATIC_HDR_RE.search(header or ""):
        stats["ret_static"] += 1
    elif RET_WRITE_RE.search(code) or THIS_PTR_RE.search(code):
        stats["ret_kept"] += 1
    else:
        stats["ret_this"] += 1
        return RET_RE.sub("this", text)
    return text


def build_body(symbol, code, decls, syms, strings, stats):
    header, body = p0.transform_method(symbol, code, decls, syms, strings, stats)
    decl_items, rest = [], []
    for raw in body.splitlines():
        st = raw.strip()
        if st.startswith("// locals:"):
            decl_items.extend(d for d in re.split(r"\s{2,}", st[len("// locals:"):].strip()) if d)
            continue
        rest.append(st)
    text = rewrite_casts(rewrite_raw("\n".join(rest), stats))
    text = retarget_this(code, header, text, stats)
    text = rewrite_static_writes(text, stats)
    text = rewrite_static_reads(text, stats)
    text = rename_native_calls(text, stats)
    lines = [fix_residual_decl(ln) for ln in text.split("\n")]
    decl_out = locals_to_cs(decl_items, stats)
    all_lines = decl_out + ([""] if decl_out else []) + lines
    lines, depth = reindent(all_lines)
    if depth != 0:
        stats["unbalanced"] += 1
    return header, lines


def method_block(indent, header, lines):
    out = [indent + header, indent + "{"]
    for bl in lines:
        out.append(indent + "    " + bl if bl else "")
    out.append(indent + "}")
    return out


def fix_header(h, cls_name):
    m = UNRESOLVED_RE.match(h)
    if m:
        if m.group(2) == "ctor":
            return "public %s()" % cls_name
        return "public void %s()" % m.group(2)
    return CTOR_RE.sub(cls_name, h)


# ------------------------------------------------------------- assembly
def join_split_attributes(lines):
    """dump.cs attributes can wrap onto a second physical line; rejoin with a \\n escape."""
    out, buf = [], None
    for ln in lines:
        if buf is not None:
            buf += "\\n" + ln.strip()
            if buf.count('"') % 2 == 0:
                out.append(buf)
                buf = None
            continue
        if ln.lstrip().startswith("[") and ln.count('"') % 2 == 1:
            buf = ln.rstrip()
            continue
        out.append(ln)
    if buf is not None:
        out.append(buf)
    return out


def sanitize_header(ln):
    def fix(m):
        name = re.sub(r"\.+", "_", m.group(2)).rstrip("_") or m.group(2)
        return m.group(1) + name
    return HDR_NAME_RE.sub(fix, ln)


def class_lines(skelet):
    if not skelet:
        return None
    lines = skelet.splitlines()
    if lines and lines[0].strip() == p0.SKEL_START.strip():
        lines = lines[1:]
    if lines and lines[-1].strip() == p0.SKEL_END:
        lines = lines[:-1]
    return [sanitize_header(ln) for ln in join_split_attributes(lines)]


def assemble(fn, assembly, cls_lines, bodies, stats):
    head = [
        "// pseudo-C# (phase P1) - from pseudoc/%s/%s by tools/c2cs.py" % (assembly, fn),
        "// Syntactically valid C#. Semantics are unresolved; legend:",
        "//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))",
        "//   Raw.Deref(p)                        one extra dereference of pointer p",
        "//   Raw.VCall(a)(args)                  virtual call through vtable slot a",
        "//   Type.Method(args)                   managed method (was unnamed_function_N)",
        "//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)",
        "//   this                                instance pointer (was __ret in object-style methods)",
        "//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names",
        "",
        "using System;",
        "using System.Collections.Generic;",
        "using UnityEngine;",
        "",
    ]
    if cls_lines is None:
        name = re.sub(r"\W", "_", os.path.splitext(fn)[0].split(".")[-1])
        cls_lines = ["public class %s" % name, "{", "}"]
    cls_name = None
    for ln in cls_lines:
        m = CLASS_RE.search(ln)
        if m:
            cls_name = m.group(1)
            break
    cls_name = cls_name or "Unknown"

    close = None
    for idx in range(len(cls_lines) - 1, -1, -1):
        if cls_lines[idx].strip() == "}":
            close = idx
            break
    if close is None:
        cls_lines = cls_lines + ["}"]
        close = len(cls_lines) - 1
    body_part, tail = cls_lines[:close], cls_lines[close:]

    pend = defaultdict(deque)
    for k, (meth, _, _) in enumerate(bodies):
        pend[meth].append(k)
    used = set()
    out = []
    for ln in body_part:
        m = p0.DECL_RE.match(ln.rstrip())
        if m and pend.get(m.group(2)):
            k = pend[m.group(2)].popleft()
            used.add(k)
            _, _, lines = bodies[k]
            indent = ln[: len(ln) - len(ln.lstrip())].expandtabs(4)
            hdr = re.sub(r"\s*\{\s*\}\s*$", "", ln.strip())
            hdr = CTOR_RE.sub(cls_name, hdr)
            out.extend(method_block(indent, hdr, lines))
            stats["stub_filled"] += 1
        else:
            out.append(ln.expandtabs(4).rstrip())

    extra = []
    for k, (meth, header, lines) in enumerate(bodies):
        if k in used:
            continue
        extra.extend(method_block("    ", fix_header(header, cls_name), lines))
        stats["appended"] += 1

    result = head + out
    if extra:
        result += [""] + ["    // methods without a dump.cs skeleton stub"] + extra
    result += [t.expandtabs(4).rstrip() for t in tail]
    text = "\n".join(result).rstrip().split("\n")
    return "\n".join(sanitize_line(ln) for ln in text) + "\n"


# ------------------------------------------------------------------ driver
def convert(assembly, only):
    strings, syms = p0.load_script()
    sdir = os.path.join(WORKSPACE, "pseudoc", assembly)
    odir = os.path.join(WORKSPACE, "pseudoc-cs", assembly)
    os.makedirs(odir, exist_ok=True)
    stats = collections.Counter()
    p0.STATS = stats          # P0 helpers update the same counter
    n_files = 0
    for fn in sorted(os.listdir(sdir)):
        if not fn.endswith(".c"):
            continue
        title = os.path.splitext(fn)[0]
        if only and title not in only:
            continue
        with open(os.path.join(sdir, fn), encoding="utf-8") as fh:
            text = fh.read()
        skelet, decls, chunks = p0.parse_source(text)
        bodies = []
        for symbol, code in chunks:
            header, lines = build_body(symbol, code, decls, syms, strings, stats)
            meth = symbol.split("$$", 1)[1] if "$$" in symbol else symbol
            bodies.append((meth, header, lines))
            stats["methods"] += 1
        content = assemble(fn, assembly, class_lines(skelet), bodies, stats)
        with open(os.path.join(odir, title + ".cs"), "w", encoding="utf-8", newline="\n") as fh:
            fh.write(content)
        n_files += 1
    return n_files, stats


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--assembly", default="Assembly-CSharp")
    ap.add_argument("--only", action="append", default=[],
                    help="convert only this file stem (repeatable), e.g. --only Ammo")
    args = ap.parse_args()
    n_files, stats = convert(args.assembly, set(args.only))
    print("files=%d" % n_files)
    for k in STAT_NAMES:
        print("  %-14s %d" % (k, stats[k]))


if __name__ == "__main__":
    main()
