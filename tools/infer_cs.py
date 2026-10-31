"""infer_cs.py - transform pseudo-C exports into readable pseudo-C# (phase P0).

Usage:  python tools/infer_cs.py [--assembly Assembly-CSharp]

Reads  pseudoc/<assembly>/*.c   (written by tools/il2cpp_ghidra.py export)
Writes pseudoc-cs/<assembly>/*.cs

Output is a *reading aid*, not compilable C#: lambdas/foreach/async and
generic code were already lowered by the AOT compiler, so they appear as
loops / state machines here.

P0 rules
--------
R1  function header         <- exact C# declaration from the dump.cs skeleton
R2  MethodInfo*             <- dropped from headers and call argument lists
R3  Type__Method(...)       <- recv.Method(...)   (instance)
                               Type.Method(...)   (static)
                               Type__get_X -> recv.X / Type.X
                               $$.ctor        -> new Type(...)
                               recv.set_X(v)  -> recv.X = v      (statement)
R4  __this / ptr->field     <- this / .field    (managed refs are not pointers)
R5  class-init blocks       <- if (DAT_...== 0) { unnamed_function_1099... }
                               removed; stray 1099/94848 statements dropped
R6  StringLiteral_N         <- real literal from script.json
R9  halt_trap()             <- throw null;
    struct return (sret)    <- *__ret = e; return;  ->  return e;
    cosmetic                <- Ammo_o* -> Ammo, X_array -> X[]
"""
import argparse
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
WORKSPACE = os.path.dirname(HERE)
DUMP_DIR = os.path.join(WORKSPACE, "il2cppdumper")

SKEL_START = "/* ===== C# ====="
SKEL_END = "===== C# end ====="

DECL_RE = re.compile(
    r"^\s*(?:(?:public|private|protected|internal|static|virtual|override|sealed"
    r"|abstract|new|extern|unsafe|async|partial|readonly)\s+)*"
    r"([\w\.<>,\[\]\*\?\s`]+?)\s+([\w\.`]+)\s*\((.*?)\)\s*\{\s*\}\s*$")

IDENT_RE = re.compile(r"[A-Za-z_]\w*")
INIT_CALLS = ("unnamed_function_1099(", "unnamed_function_94848(")

C_BODY_OPEN = re.compile(r"(?m)^\{\s*$")
C_BODY_CLOSE = re.compile(r"(?m)^\}\s*$")
# pure C local declaration, e.g. "  bool bVar1;" / "  int iVar1, iVar2;"
C_DECL_LINE = re.compile(
    r"^\s*(?!(?:return|goto|throw|else|case|do|new|break|continue)\b)"
    r"[A-Za-z_][\w` \t]*?[\s*]+[A-Za-z_]\w*(\[[0-9]*\])?"
    r"(\s*,\s*\**[A-Za-z_]\w*(\[[0-9]*\])?)*\s*;$")
STATS = {}

PRIM = {"int32_t": "int", "uint32_t": "uint", "int8_t": "sbyte", "uint8_t": "byte",
        "int16_t": "short", "uint16_t": "ushort", "int64_t": "long", "uint64_t": "ulong",
        "Single": "float", "Boolean": "bool", "Char": "char"}

NS_PREFIXES = ("UnityEngine_", "System_Collections_", "System_", "DG_Tweening_",
               "Cinemachine_", "BehaviorDesigner_", "Newtonsoft_", "Il2Cpp_")


# ------------------------------------------------------------------ helpers
def strip_generics(s):
    out, depth = [], 0
    for ch in s:
        if ch == "<":
            depth += 1
        elif ch == ">":
            depth -= 1
        elif depth == 0:
            out.append(ch)
    return "".join(out)


def sanitize(name):
    return re.sub(r"[^A-Za-z0-9_.$]", "_", name)


def skip_string(s, i):
    q = s[i]
    i += 1
    while i < len(s):
        if s[i] == "\\":
            i += 2
            continue
        if s[i] == q:
            return i + 1
        i += 1
    return len(s)


def match_delim(s, open_idx):
    """Index of the bracket/paren/brace matching s[open_idx]; -1 if unbalanced."""
    closes = ")]}"
    o = s[open_idx]
    c = closes["([{".index(o)]
    depth, i, n = 0, open_idx, len(s)
    while i < n:
        ch = s[i]
        if ch in "\"'":
            i = skip_string(s, i)
            continue
        if s.startswith("/*", i):
            j = s.find("*/", i + 2)
            i = j + 2 if j >= 0 else n
            continue
        if ch in "([{":
            depth += 1
        elif ch in closes or ch in "([{":
            if ch == c:
                depth -= 1
                if depth == 0:
                    return i
            elif ch in closes:
                depth -= 1
        i += 1
    return -1


def split_top(s):
    """Split on top-level commas, skipping strings/comments/nested brackets."""
    out, cur, depth, i, n = [], [], 0, 0, len(s)
    while i < n:
        c = s[i]
        if c in "\"'":
            j = skip_string(s, i)
            cur.append(s[i:j])
            i = j
            continue
        if s.startswith("/*", i):
            j = s.find("*/", i + 2)
            cur.append(s[i:(j + 2 if j >= 0 else n)])
            i = j + 2 if j >= 0 else n
            continue
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == "," and depth == 0:
            out.append("".join(cur))
            cur = []
            i += 1
            continue
        cur.append(c)
        i += 1
    if cur:
        out.append("".join(cur))
    return [a.strip() for a in out]


def parse_signature(sig):
    m = re.match(r"^(.*?)\s+[A-Za-z_]\w*\s*\((.*)\);\s*$", (sig or "").strip())
    if not m:
        return None, []
    ret = m.group(1).strip()
    params = []
    for p in split_top(m.group(2)):
        if not p:
            continue
        bits = p.rsplit(" ", 1)
        params.append((bits[0].strip() if len(bits) > 1 else "(?)", bits[-1].strip()))
    return ret, params


def cs_type(tok):
    tok = tok.strip()
    star = "*" in tok
    base = strip_generics(tok.replace("*", "")).strip()
    for k, v in PRIM.items():
        if base == k or base.endswith("." + k):
            base = base.replace(k, v) if base == k else base[: base.rfind(k)] + v
            break
    if star:
        return base  # managed reference in C#
    return base


def cs_simple(name):
    return name.rsplit(".", 1)[-1]


def cs_method_name(meth):
    return meth.rsplit(".", 1)[-1]


# ----------------------------------------------------------------- metadata
def load_script():
    with open(os.path.join(DUMP_DIR, "script.json"), encoding="utf-8") as fh:
        data = json.load(fh)
    strings = {i + 1: r.get("Value", "") for i, r in enumerate(data["ScriptString"])}
    syms = {}
    for rec in data["ScriptMethod"]:
        name = rec["Name"]
        if "$$" not in name:
            continue
        cls, meth = name.split("$$", 1)
        ret_s, params = parse_signature(rec.get("Signature", ""))
        info = {"cls": strip_generics(cls), "meth": meth, "params": params,
                "ret": ret_s, "inst": any(nm == "__this" for _, nm in params),
                "ambig": False}
        key = sanitize(name)
        for k in (key, key.replace("$", "_"), key.replace("$", "_").replace(".", "_")):
            other = syms.get(k)
            if other is None:
                syms[k] = info
            elif (other["cls"], other["meth"]) != (info["cls"], info["meth"]):
                syms[k]["ambig"] = True
    return strings, syms


def header_from_sym(info):
    """Approximate C# header when the dump.cs skeleton has no declaration."""
    if info["meth"] in (".ctor", ".cctor"):
        args = [cs_type(t) + " " + n for t, n in info["params"]
                if n not in ("__this", "method")]
        return "public %s(%s)" % (cs_simple(info["cls"]), ", ".join(args))
    ret = "void" if info["ret"] in (None, "void", "") else cs_type(info["ret"])
    if info["ret"] and info["ret"] != "void":
        sret_like = not info["ret"].endswith("*")
        if sret_like and info["ret"] not in PRIM and info["ret"] != "void":
            pass  # struct-by-value: cs_type already turns it into the value type
    modifiers = "public" if not info["inst"] else "public"  # visibility unknown in P0
    args = [cs_type(t) + " " + n for t, n in info["params"]
            if n not in ("__this", "method")]
    return "%s%s %s(%s)" % (modifiers + " ", ret, cs_method_name(info["meth"]),
                            ", ".join(args))


# ------------------------------------------------------------------ parsing
def parse_source(text):
    """-> (skeleton_text, decl_map, [(symbol, code_text)])"""
    skelet, decls, chunks = "", {}, []
    i = text.find(SKEL_START)
    if i >= 0:
        j = text.find(SKEL_END, i)
        if j > 0:
            skelet = text[i:j + len(SKEL_END)]
            for ln in skelet.splitlines():
                m = DECL_RE.match(ln.rstrip())
                if m:
                    decls.setdefault(m.group(2), m.group(0).rstrip())

    pos = 0
    while True:
        a = text.find("// ---- ", pos)
        if a < 0:
            break
        b = text.find(" ----", a + 8)
        c = text.find("// ---- ", a + 8)
        if c < 0:
            c = len(text)
        chunk = text[a:c]
        lines = chunk.splitlines()
        start = 2 if (len(lines) > 1 and lines[1].strip().startswith("// C#:")) else 1
        code = strip_c_frame("\n".join(lines[start:]), STATS)
        chunks.append((text[a + 8:b].strip(), code))
        pos = c
    return skelet, decls, chunks


# --------------------------------------------------------------- transforms
def strip_c_frame(code, stats):
    """Drop the C function signature line, outer { }, C local decl block and
    the trailing `return;` - the .cs wrapper provides its own header/braces."""
    m_open = C_BODY_OPEN.search(code)
    m_close = None
    if m_open:
        for m in C_BODY_CLOSE.finditer(code, m_open.end()):
            m_close = m            # last match = function-ending brace
    if m_open and m_close:
        body = code[m_open.end():m_close.start()]
        stats["frames"] += 1
    else:                          # unexpected layout: keep as-is
        body = code
    lines = body.splitlines()
    # join Ghidra continuation lines: a statement was wrapped (trailing
    # comma, dangling operator, or '(' opened on the next physical line)
    joined = []
    open_stmt = None
    for ln in lines:
        st = ln.strip()
        if not st and open_stmt is None:
            continue
        if st.startswith(("//", "/*")):
            if open_stmt is not None:   # flush partial statement first
                joined.append(open_stmt)
                open_stmt = None
            joined.append(st)
            continue
        if open_stmt is None:
            open_stmt = st
        else:
            open_stmt = open_stmt + " " + st
        # a statement is complete at ; { } or when it is structurally empty
        if open_stmt.endswith((";", "{", "}")):
            joined.append(open_stmt)
            open_stmt = None
    if open_stmt is not None:
        joined.append(open_stmt)
    lines = joined
    decls = []
    kept = []
    for ln in lines:
        st = ln.strip()
        if st and C_DECL_LINE.match(ln):
            decls.append(st)
            continue
        kept.append(ln)
    if decls:
        stats["decl_lines"] += 1
    while kept and not kept[0].strip():
        kept.pop(0)
    while kept and not kept[-1].strip():
        kept.pop()
    if kept and kept[-1].strip() == "return;":
        if "__ret" not in body:      # fix_sret still needs the anchor `return;`
            kept.pop()
            while kept and not kept[-1].strip():
                kept.pop()
    out = "\n".join(kept)
    if decls:
        out = "// locals: %s\n%s" % ("  ".join(d.rstrip(";") for d in decls), out)
    return out


def remove_init_blocks(body, stats):
    pos = 0
    while True:
        j = body.find("if (", pos)
        if j < 0:
            break
        end = match_delim(body, j + 3)
        if end < 0:
            pos = j + 3
            continue
        cond = body[j + 4:end]
        k = end + 1
        while k < len(body) and body[k] in " \t\r\n":
            k += 1
        if k >= len(body) or body[k] != "{":
            pos = j + 3
            continue
        close = match_delim(body, k)
        if close < 0:
            pos = j + 3
            continue
        block = body[k:close + 1]
        if (re.search(r"DAT_ram_|\+\s*0x74\b|_TypeInfo", cond)
                and any(call in block for call in INIT_CALLS)):
            tail = close + 1
            while tail < len(body) and body[tail] in " \t":
                tail += 1
            if tail < len(body) and body[tail] == "\n":
                tail += 1
            body = body[:j] + body[tail:]
            stats["init_blocks"] += 1
        else:
            pos = j + 3          # scan nested ifs inside this block, too
    kept = []
    for ln in body.splitlines():
        st = ln.strip()
        if st.startswith(INIT_CALLS):
            stats["init_lines"] += 1
            continue
        if re.match(r"^DAT_ram_[0-9a-f]+ = ", st):
            stats["init_lines"] += 1
            continue
        kept.append(ln)
    body = "\n".join(kept)
    # safety net: init-if whose block became empty (cond-only DAT checks)
    def _empty_if(m):
        stats["empty_ifs"] += 1
        return ""
    body = re.sub(r"(?m)^[ \t]*if \(\s*DAT_ram_[0-9a-f]+[^()\n]*\) \{\s*\}\s*\n?",
                  _empty_if, body)
    return body


def fix_sret(body, stats):
    m = re.search(r"^\s*\*__ret\s*=\s*", body, re.M)
    if not m:
        return body
    i = m.end()
    depth = 0
    while i < len(body):
        c = body[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
        elif c == ";" and depth == 0:
            break
        i += 1
    expr = body[m.end():i].strip().rstrip(";")
    bump = body.find("return;", i)
    nxt = body.find("*__ret", i + 1)
    if bump < 0 or (0 <= nxt < bump):
        return body
    stats["sret"] += 1
    return body[:m.start()] + "return " + expr + ";" + body[bump + len("return;"):]


def wrap_recv(expr):
    e = expr.strip()
    if re.fullmatch(r"[A-Za-z_][\w\.\[\]]*", e):
        return e
    return "(" + e + ")"


def rewrite_calls(text, syms, stats):
    out = []
    pos = 0
    while True:
        m = IDENT_RE.search(text, pos)
        if not m:
            out.append(text[pos:])
            break
        token, j = m.group(0), m.end()
        while j < len(text) and text[j] in " \t\r\n":
            j += 1
        close = match_delim(text, j) if (j < len(text) and text[j] == "(") else -1
        info = syms.get(token)
        if j >= len(text) or text[j] != "(" or close < 0 or info is None:
            out.append(text[pos:m.end()])
            pos = m.end()
            continue
        if info.get("ambig"):
            out.append(text[pos:close + 1])
            pos = close + 1
            continue
        args = [rewrite_calls(a, syms, stats) for a in split_top(text[j + 1:close])]
        repl = build_call(info, args, stats)
        if repl is None:
            out.append(text[pos:close + 1])
        else:
            stats["calls"] += 1
            out.append(text[pos:m.start()] + repl)
        pos = close + 1
    return "".join(out)


def build_call(info, args, stats):
    meth, cls = info["meth"], info["cls"]
    inst = info["inst"]
    if args and "MethodInfo" in args[-1]:
        args = args[:-1]
    if meth in (".ctor", ".cctor"):
        if inst and args:                     # first arg = object under construction
            args = args[1:]
        stats["ctor"] += 1
        return "new %s(%s)" % (cs_simple(cls), ", ".join(args))
    if inst:
        if not args:
            return None
        recv = wrap_recv(args[0])
        rest = ", ".join(args[1:])
        if meth.startswith("get_"):
            return "%s.%s" % (recv, cs_method_name(meth[4:]))
        if meth.startswith("set_"):
            stats["setters"] += 1
            return "%s.set_%s(%s)" % (recv, cs_method_name(meth[4:]), rest)
        return "%s.%s(%s)" % (recv, cs_method_name(meth), rest)
    if meth.startswith("get_") and not args:
        return "%s.%s" % (cs_simple(cls), cs_method_name(meth[4:]))
    return "%s.%s(%s)" % (cs_simple(cls), cs_method_name(meth), ", ".join(args))


def fold_helpers(text, stats):
    # unnamed_function_95402(TypeInfo) -> new TypeName()
    def repl_new(m):
        typ = m.group(1).strip()
        if typ.endswith("_TypeInfo"):
            stats["helpers"] += 1
            return "new %s()" % typ[:-len("_TypeInfo")]
        return m.group(0)

    text = re.sub(r"unnamed_function_95402\(\s*([A-Za-z_][\w\.]*)\s*\)", repl_new, text)

    # unnamed_function_65370(recv, TypeInfo) -> recv.GetComponent<TypeName>()
    def repl_get(m):
        recv = m.group(1).strip()
        typ = m.group(2).strip()
        if typ.endswith("_TypeInfo"):
            stats["helpers"] += 1
            return "%s.GetComponent<%s>()" % (recv, typ[:-len("_TypeInfo")])
        return m.group(0)

    text = re.sub(r"unnamed_function_65370\(\s*(.+?)\s*,\s*([A-Za-z_][\w\.]*)\s*\)", repl_get, text)

    # unnamed_function_44679(a, b, 0) -> (a != b)   (Object.op_Inequality)
    def repl_ineq(m):
        a = m.group(1).strip()
        b = m.group(2).strip()
        if b == "0":
            b = "null"
        stats["helpers"] += 1
        return "(%s != %s)" % (a, b)

    text = re.sub(r"unnamed_function_44679\(\s*(.+?)\s*,\s*(.+?)\s*,\s*0\s*\)", repl_ineq, text)
    return text


def fold_runtime(text, stats):
    # runtime class-init guard: if (*(T *)(X + 0x74) == 0) { unnamed_function_94848(X); }
    lines = text.splitlines(keepends=True)
    out = []
    i = 0
    n = len(lines)
    while i < n:
        m = re.search(r"if \(\*\([^)]*\) \(([A-Za-z_][\w\.]*) \+ 0x74\) == 0\)", lines[i])
        if (m is not None and i + 2 < n
                and "unnamed_function_94848" in lines[i + 1]
                and lines[i + 2].strip() == "}"):
            stats["guards"] += 1
            i += 3
            if i < n and lines[i].strip() == "":
                i += 1
            continue
        out.append(lines[i])
        i += 1
    text = "".join(out)

    # type-metadata init guard: if ((*(T)(EXPR + 0xbd) & 1) == 0) { EXPR = unnamed_function_95087(EXPR); }
    lines = text.splitlines(keepends=True)
    out = []
    i = 0
    n = len(lines)
    while i < n:
        m = re.search(r"if \(\(\*\([^)]*\) \((.+?) \+ 0xbd\) & 1\) == 0\)", lines[i])
        if (m is not None and i + 2 < n
                and "unnamed_function_95087" in lines[i + 1]
                and lines[i + 2].strip() == "}"):
            stats["guards"] += 1
            i += 3
            if i < n and lines[i].strip() == "":
                i += 1
            continue
        out.append(lines[i])
        i += 1
    text = "".join(out)

    # virtual-call annotation
    def _virt(m):
        stats["virtuals"] += 1
        return m.group(0) + " /* virtual */"

    text = re.sub(r"\(\*\*\(code \*\*\).*?\)\)", _virt, text)
    return text


def fix_statements(text, stats):
    out = []
    for ln in text.splitlines():
        st = ln.rstrip()
        m = re.match(r"^(\s*)(.+)\.set_([A-Za-z_]\w*)\((.*)\);\s*$", st)
        if m and "set_" not in m.group(4):
            stats["setters"] += 1
            st = "%s%s.%s = %s;" % (m.group(1), m.group(2), m.group(3), m.group(4).strip())
        st = re.sub(r"do\s*\{\s*halt_trap\(\);\s*\}\s*while\s*\(\s*true\s*\);",
                    "throw null;", st)
        st = st.replace("halt_trap();", "throw null;")
        out.append(st)
    return "\n".join(out)


def polish(text, strings, stats):
    text = text.replace("->", ".")
    text = re.sub(r"\b__this\b", "this", text)
    # receivers got wrapped while `->` was still present; unwrap simple chains
    text = re.sub(r"\(\s*([A-Za-z_][\w\.]*)\s*\)(\.)", r"\1\2", text)
    text = re.sub(r"(\S)\s+;", r"\1;", text)

    def type_tok(m):
        w = m.group(0)
        base = w[:-2]
        for p in NS_PREFIXES:
            if base.startswith(p) and len(base) > len(p):
                return p[:-1].replace("_", ".") + "." + base[len(p):].replace("_", ".")
        return base

    text = re.sub(r"\b[A-Za-z_]\w*_o\b", type_tok, text)
    text = re.sub(r"\b[A-Za-z_]\w*_array\b",
                  lambda m: type_tok(re.match(r"(.*?)_array$", m.group(0))), text)

    def lit(m):
        val = strings.get(int(m.group(1)))
        if val is None:
            return m.group(0)
        stats["strings"] += 1
        return json.dumps(val, ensure_ascii=False)

    text = re.sub(r"StringLiteral_(\d+)(\s*/\*[^*]*\*/)?", lit, text)
    text = re.sub(r"\n{3,}", "\n\n", text)
    return text


def reindent(body, pad):
    lines = [("" if not ln.strip() else pad + ln.strip()) for ln in body.splitlines()]
    while lines and lines[-1] == "":
        lines.pop()
    return "\n".join(lines)


# ------------------------------------------------------------------- driver
def transform_method(symbol, code, decls, syms, strings, stats):
    cls = symbol.split("$$")[0] if "$$" in symbol else ""
    meth = symbol.split("$$", 1)[1] if "$$" in symbol else symbol
    header = None
    decl = decls.get(meth)
    if decl is None and "." in meth:
        decl = decls.get(meth.rsplit(".", 1)[-1])
    if decl is not None:
        header = re.sub(r"\s*\{\s*\}\s*$", "", decl).strip()
        if ".ctor" in header:
            header = re.sub(r"\bvoid\s+\.ctor\b", cs_simple(cls), header)
    else:
        info = syms.get(sanitize(symbol)) or syms.get(sanitize(symbol).replace("$", "_"))
        if info is not None and not info.get("ambig"):
            header = header_from_sym(info)
        else:
            header = "public /* unresolved decl */ %s::%s()" % (cs_simple(cls), cs_method_name(meth))

    body = remove_init_blocks(code, stats)
    body = fix_sret(body, stats)
    body = rewrite_calls(body, syms, stats)
    body = fold_helpers(body, stats)
    body = fold_runtime(body, stats)
    body = fix_statements(body, stats)
    body = polish(body, strings, stats)
    return header, reindent(body, "    ")


def run(assembly):
    strings, syms = load_script()
    print("script.json: %d strings, %d symbols" % (len(strings), len(syms)))
    sdir = os.path.join(WORKSPACE, "pseudoc", assembly)
    odir = os.path.join(WORKSPACE, "pseudoc-cs", assembly)
    os.makedirs(odir, exist_ok=True)
    stats = STATS
    stats.clear()
    stats.update({"init_blocks": 0, "init_lines": 0, "empty_ifs": 0,
                  "calls": 0, "ctor": 0, "setters": 0, "strings": 0,
                  "sret": 0, "headers": 0, "methods": 0, "frames": 0,
                  "decl_lines": 0, "helpers": 0, "guards": 0,
                  "virtuals": 0})
    n_files = 0
    for fn in sorted(os.listdir(sdir)):
        if not fn.endswith(".c"):
            continue
        text = open(os.path.join(sdir, fn), encoding="utf-8").read()
        skelet, decls, chunks = parse_source(text)
        title = os.path.splitext(fn)[0]
        out = [
            "// pseudo-C# - inferred from Ghidra pseudo-C (phase P0). Reading aid.",
            "// NOT compilable C#. Source: pseudoc/%s/%s" % (assembly, fn),
            "// The dump.cs C# skeleton is preserved below as a comment.",
            "",
            skelet or "/* skeleton missing */",
            "",
        ]
        for symbol, code in chunks:
            header, body = transform_method(symbol, code, decls, syms, strings, stats)
            stats["methods"] += 1
            out.append(header)
            out.append("{")
            if body:
                out.append(body)
            out.append("}")
            out.append("")
        with open(os.path.join(odir, title + ".cs"), "w", encoding="utf-8", newline="\n") as fh:
            fh.write("\n".join(out) + "\n")
        n_files += 1
    return n_files, stats


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--assembly", default="Assembly-CSharp")
    args = ap.parse_args()
    n_files, stats = run(args.assembly)
    print("files=%d methods=%d" % (n_files, stats["methods"]))
    for k in ("methods", "frames", "init_blocks", "init_lines", "empty_ifs",
              "calls", "ctor", "setters", "strings", "sret", "helpers",
              "guards", "virtuals"):
        print("  %-12s %d" % (k, stats[k]))


if __name__ == "__main__":
    main()
