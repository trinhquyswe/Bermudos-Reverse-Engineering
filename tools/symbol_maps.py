"""symbol_maps.py - builds the lookup tables used by the P1 converter (c2cs.py).

Usage:  python tools/symbol_maps.py

Reads   build.wasm                         element section: table index -> wasm function index
        il2cppdumper/script.json           ScriptMethod: table index + managed name
        il2cppdumper/dump.cs               static field offsets (// 0xNN)
Writes  tools/symbol_maps.json

native_calls   wasm function index N -> "Type.Method" for N that is shared by exactly one
               managed name (the table index is script.json Address, mapped through the
               element section). Replaces unnamed_function_N( in P1 output.
ambiguous      N -> [names] for functions shared by several managed methods (identical
               code folded by the linker). Not applied; reported only.
static_fields  "<Ns>_<Type>_TypeInfo" -> {"type": "<Ns>.<Type>", "fields": {offset: name},
               "types": {offset: C# type text}} from the dump.cs static fields. Used for
               Raw accesses at TypeInfo + 0x5c; the access type must agree with the field type.
"""

import collections
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import infer_cs as p0  # noqa: E402  (paths only)

WORKSPACE = p0.WORKSPACE
DUMP_DIR = p0.DUMP_DIR
WASM = os.path.join(WORKSPACE, "build.wasm")
DUMP_CS = os.path.join(DUMP_DIR, "dump.cs")
OUT = os.path.join(HERE, "symbol_maps.json")

NS_LINE_RE = re.compile(r"^// Namespace:(.*)$")
CLASS_LINE_RE = re.compile(
    r"^(?:public |internal |private |protected )?(?:abstract |sealed |static |partial )*"
    r"(?P<kind>class|struct|interface|enum) (?P<name>\w+(?:[./]\w+)*)")
STATIC_FIELD_RE = re.compile(
    r"^\t(?P<decl>[^(;]*?\bstatic\b[^(;]*?)\s+(?P<name>[A-Za-z_]\w*)\s*;\s*// 0x(?P<off>[0-9A-Fa-f]+)\s*$")
STATIC_MODIFIERS = {"public", "private", "internal", "protected", "static", "readonly", "volatile"}


# ------------------------------------------------------------------ wasm element table
def _leb_u(b, p):
    result = shift = 0
    while True:
        byte = b[p]
        p += 1
        result |= (byte & 0x7F) << shift
        shift += 7
        if not byte & 0x80:
            return result, p


def _leb_s(b, p):
    result = shift = 0
    while True:
        byte = b[p]
        p += 1
        result |= (byte & 0x7F) << shift
        shift += 7
        if not byte & 0x80:
            if byte & 0x40:
                result -= 1 << shift
            return result, p


def _sections(b):
    p = 8  # magic + version
    while p < len(b):
        sid = b[p]
        p += 1
        size, p = _leb_u(b, p)
        yield sid, p, p + size
        p += size


def parse_table(b):
    """Return {table index: wasm function index} for table 0."""
    table = {}
    for sid, start, _end in _sections(b):
        if sid != 9:
            continue
        p = start
        n, p = _leb_u(b, p)
        for _ in range(n):
            flags, p = _leb_u(b, p)
            table_idx, offset = 0, None
            if flags in (2, 6):
                table_idx, p = _leb_u(b, p)
            if flags in (0, 2, 4, 6):
                assert b[p] == 0x41, (flags, hex(b[p]))
                offset, p = _leb_s(b, p + 1)
                assert b[p] == 0x0B
                p += 1
            if flags in (1, 2, 3, 5, 6, 7):
                p += 1  # elemkind / reftype
            count, p = _leb_u(b, p)
            for i in range(count):
                if flags in (0, 1, 2, 3):
                    fi, p = _leb_u(b, p)
                elif b[p] == 0xD2:  # ref.func
                    fi, p = _leb_u(b, p + 1)
                    assert b[p] == 0x0B
                    p += 1
                else:  # ref.null
                    fi = None
                    p += 2
                    assert b[p] == 0x0B
                    p += 1
                if offset is not None and table_idx == 0 and fi is not None:
                    table[offset + i] = fi
    return table


# ------------------------------------------------------------------ native call names
def _balanced_generics(text):
    """True when '<' and '>' balance and only identifier, '.', ',', space or '[]' characters appear."""
    depth = 0
    for ch in text:
        if ch == "<":
            depth += 1
        elif ch == ">":
            depth -= 1
            if depth < 0:
                return False
        elif not (ch.isalnum() or ch in "_.,[] "):
            return False
    return depth == 0 and ".." not in text and not text.endswith(".")


def managed_name(raw):
    """'Type$$Method' -> 'Type.Method'. Generic arguments are kept: 'Component.GetComponent<object>'.

    Returns None for compiler-generated or otherwise non-C# names.
    """
    typ, sep, meth = raw.partition("$$")
    if not sep or not typ or not (typ[0].isalpha() or typ[0] == "_") or not _balanced_generics(typ):
        return None
    body = meth[1:] if meth.startswith(".") else meth  # .ctor / .cctor -> __ctor / __cctor
    base, lt, args = body.partition("<")
    if not re.match(r"^[A-Za-z_]\w*$", base):
        return None
    if lt and (not args.endswith(">") or not _balanced_generics(lt + args)):
        return None
    if meth.startswith("."):
        base = "__" + base
    return "%s.%s%s" % (typ, base, lt + args)


def build_native(script, table):
    raw_by_fi = collections.defaultdict(set)
    for rec in script["ScriptMethod"]:
        if "$$" not in rec["Name"]:
            continue
        fi = table.get(rec["Address"])
        if fi is not None:
            raw_by_fi[fi].add(rec["Name"])
    native, ambiguous, invalid = {}, {}, 0
    for fi, raws in raw_by_fi.items():
        if len(raws) > 1:
            ambiguous[fi] = sorted(raws)
            continue
        (raw,) = raws
        name = managed_name(raw)
        if name is None:
            invalid += 1
            continue
        native[fi] = name
    return native, ambiguous, invalid


# ------------------------------------------------------------------ dump.cs static fields
def build_statics(path):
    """Return (statics, conflicts, kinds_seen).

    kinds_seen maps each declared short type name to the set of declaration kinds
    (class, struct, interface, enum) found anywhere in dump.cs.
    """
    statics = {}
    conflicts = set()
    kinds_seen = collections.defaultdict(set)
    ns, cls, cls_key, cls_name, generic = "", None, None, None, False
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            line = line.rstrip("\r\n")
            if line.startswith("// Namespace:"):
                ns = NS_LINE_RE.match(line).group(1).strip()
                cls = None
                continue
            m = CLASS_LINE_RE.match(line)
            if m:
                raw_name = m.group("name")
                kinds_seen[re.split(r"[./]", raw_name)[-1]].add(m.group("kind"))
                cls_name = raw_name
                rest = line[m.end():m.end() + 1]
                # nested (Parent.Child / Parent/Child) or generic: no static map entry
                generic = bool(re.search(r"[./]", raw_name)) or rest == "<"
                full = (ns + "." + cls_name) if ns else cls_name
                cls = None if generic else full
                cls_key = full.replace(".", "_") + "_TypeInfo"
                continue
            if cls is None:
                continue
            fm = STATIC_FIELD_RE.match(line)
            if not fm or "const" in fm.group("decl"):
                continue
            off = int(fm.group("off"), 16)
            if off > 0xFFFF:  # thread-static / special storage, not in the statics block
                continue
            entry = statics.setdefault(cls_key, {"type": cls, "fields": {}, "types": {}})
            key = str(off)
            prev = entry["fields"].get(key)
            if prev is not None and prev != fm.group("name"):
                conflicts.add((cls_key, off))
                continue
            entry["fields"][key] = fm.group("name")
            entry["types"][key] = " ".join(
                w for w in fm.group("decl").split() if w not in STATIC_MODIFIERS)
    for cls_key, off in conflicts:
        for part in ("fields", "types"):
            statics[cls_key][part].pop(str(off), None)
    return statics, len(conflicts), kinds_seen


def main():
    with open(WASM, "rb") as fh:
        table = parse_table(fh.read())
    with open(os.path.join(DUMP_DIR, "script.json"), encoding="utf-8") as fh:
        script = json.load(fh)
    native, ambiguous, invalid = build_native(script, table)
    statics, conflicts, kinds_seen = build_statics(DUMP_CS)
    structs, enums, ambiguous_types = [], [], []
    for name, kinds in kinds_seen.items():
        if kinds & {"struct", "enum"} and len(kinds) > 1:
            ambiguous_types.append(name)  # value-type name shared with another declaration
        elif kinds == {"struct"}:
            structs.append(name)
        elif kinds == {"enum"}:
            enums.append(name)

    out = {
        "native_calls": {str(k): v for k, v in sorted(native.items())},
        "ambiguous": {str(k): v for k, v in sorted(ambiguous.items())},
        "static_fields": dict(sorted(statics.items())),
        "value_types": {
            "structs": sorted(structs),
            "enums": sorted(enums),
            "ambiguous": sorted(ambiguous_types),
        },
    }
    with open(OUT, "w", encoding="utf-8", newline="\n") as fh:
        json.dump(out, fh, indent=1)
    print("table_entries=%d" % len(table))
    print("native_calls=%d ambiguous=%d invalid_names=%d" % (len(native), len(ambiguous), invalid))
    print("static_types=%d static_fields=%d static_conflicts=%d" % (
        len(statics), sum(len(v["fields"]) for v in statics.values()), conflicts))
    print("wrote", OUT)


if __name__ == "__main__":
    main()
