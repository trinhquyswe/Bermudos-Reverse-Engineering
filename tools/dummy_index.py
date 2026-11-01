"""Build a method-signature index from il2cppdumper DummyDll assemblies.

Reads ECMA-335 metadata directly with dnfile (no assembly loading), so
dependency resolution is not required.

Output: tools/dummy_signatures.tsv

Columns:
  key       Namespace.Type$$Member (nested types joined with '.')
  assembly  DLL file name
  static    1 when the method is static
  generic   1 when the method has its own generic parameters
  sret      1 when the return is passed through a hidden return pointer. Fitted to
            call sites on Windows x64: a value type of size 1, 2, 4 or 8 with no
            float/double fields is returned in a register (sret 0); any other
            value type, or one of unknown layout, uses sret 1.
  return    return type name
  params    parameter type names, separated by ';'
  arity     expected native argument count:
            (instance ? 1 : 0) + params + sret + 1 (MethodInfo*)
"""

import glob
import os
import sys

import dnfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DUMMY_DIR = os.path.join(ROOT, "il2cppdumper", "DummyDll")
OUT_PATH = os.path.join(ROOT, "tools", "dummy_signatures.tsv")

PRIM = {
    0x01: "void", 0x02: "bool", 0x03: "char", 0x04: "sbyte", 0x05: "byte",
    0x06: "short", 0x07: "ushort", 0x08: "int", 0x09: "uint", 0x0A: "long",
    0x0B: "ulong", 0x0C: "float", 0x0D: "double", 0x0E: "string",
    0x16: "TypedReference", 0x18: "IntPtr", 0x19: "UIntPtr", 0x1C: "object",
}

# fullname -> "class" | "valuetype" | "enum"; filled from every assembly before methods are read
GLOBAL_KIND = {}
# fullname -> (assembly, TypeDef index) for layout computation
GLOBAL_TYPES = {}
_LAYOUT = {}

PRIM_SIZE = {
    "bool": 1, "sbyte": 1, "byte": 1, "char": 2, "short": 2, "ushort": 2,
    "int": 4, "uint": 4, "float": 4, "long": 8, "ulong": 8, "double": 8,
    "IntPtr": 8, "UIntPtr": 8, "object": 8, "string": 8,
}


def row_fullname(row):
    ns = str(getattr(row, "TypeNamespace", None) or "")
    name = str(row.TypeName)
    return f"{ns}.{name}" if ns else name


class Assembly:
    def __init__(self, path):
        self.name = os.path.basename(path)
        self.pe = dnfile.dnPE(path)
        md = self.pe.net.mdtables
        self.typedefs = list(md.TypeDef.rows) if getattr(md, "TypeDef", None) else []
        self.typerefs = list(md.TypeRef.rows) if getattr(md, "TypeRef", None) else []
        self.typespecs = list(md.TypeSpec.rows) if getattr(md, "TypeSpec", None) else []
        self.enclosing = {}
        nested = getattr(md, "NestedClass", None)
        if nested:
            for nc in nested.rows:
                self.enclosing[nc.NestedClass.row_index] = nc.EnclosingClass.row_index

    def typedef_name(self, idx):
        row = self.typedefs[idx - 1]
        enc = self.enclosing.get(idx)
        if enc:
            return self.typedef_name(enc) + "." + str(row.TypeName)
        return row_fullname(row)

    def coded_base_name(self, coded):
        row = coded.row
        if not hasattr(row, "TypeName"):
            return ""
        return row_fullname(row)

    def typedef_kind(self, idx):
        ext = self.typedefs[idx - 1].Extends
        if ext is None:
            return "class"
        base = self.coded_base_name(ext)
        if base == "System.Enum":
            return "enum"
        if base == "System.ValueType":
            return "valuetype"
        return "class"

    def typeref_name(self, idx):
        return row_fullname(self.typerefs[idx - 1])

    def decode_typespec(self, idx):
        blob = bytes(self.typespecs[idx - 1].Signature.value)
        return SigReader(self, blob).typ()


class SigReader:
    def __init__(self, asm, data):
        self.asm = asm
        self.d = data
        self.p = 0

    def u8(self):
        v = self.d[self.p]
        self.p += 1
        return v

    def cu(self):
        # compressed unsigned integer (II.23.2)
        b = self.u8()
        if b & 0x80 == 0:
            return b
        if b & 0xC0 == 0x80:
            return ((b & 0x3F) << 8) | self.u8()
        b2, b3, b4 = self.u8(), self.u8(), self.u8()
        return ((b & 0x1F) << 24) | (b2 << 16) | (b3 << 8) | b4

    def tdorref(self):
        v = self.cu()
        tag, idx = v & 3, v >> 2
        if tag == 0:
            return self.asm.typedef_name(idx), self.asm.typedef_kind(idx)
        if tag == 1:
            name = self.asm.typeref_name(idx)
            return name, GLOBAL_KIND.get(name, "class")
        return self.asm.decode_typespec(idx)

    def typ(self):
        # returns (type name, kind); kind in prim|valuetype|enum|class|ptr|byref|generic
        while True:
            t = self.u8()
            if t in (0x1F, 0x20):  # CMOD_REQD / CMOD_OPT
                self.tdorref()
                continue
            if t == 0x45:  # PINNED
                continue
            break
        if t in PRIM:
            return PRIM[t], "prim"
        if t == 0x0F:  # PTR
            n, _ = self.typ()
            return n + "*", "ptr"
        if t == 0x10:  # BYREF
            n, _ = self.typ()
            return n + "&", "byref"
        if t == 0x11:  # VALUETYPE
            return self.tdorref()
        if t == 0x12:  # CLASS
            n, _ = self.tdorref()
            return n, "class"
        if t in (0x13, 0x1E):  # VAR / MVAR
            n = self.cu()
            return ("!" if t == 0x13 else "!!") + str(n), "generic"
        if t == 0x1D:  # SZARRAY
            n, _ = self.typ()
            return n + "[]", "class"
        if t == 0x14:  # ARRAY
            n, _ = self.typ()
            rank = self.cu()
            for _ in range(self.cu()):  # sizes
                self.cu()
            for _ in range(self.cu()):  # lower bounds
                self.cu()
            return f"{n}[{',' * (rank - 1)}]", "class"
        if t == 0x15:  # GENERICINST
            ct = self.u8()
            n, _ = self.tdorref()
            args = [self.typ()[0] for _ in range(self.cu())]
            return f"{n}<{', '.join(args)}>", ("valuetype" if ct == 0x11 else "class")
        if t == 0x1B:  # FNPTR (method signature follows)
            cc = self.u8()
            if cc & 0x10:
                self.cu()
            pc = self.cu()
            self.typ()
            for _ in range(pc):
                self.typ()
            return "fnptr", "ptr"
        raise ValueError(f"unknown element type 0x{t:02x} at offset {self.p - 1}")


def member_layout(name, kind):
    # (size, align, has_float) of a field type, or None when unknown
    if kind == "prim":
        s = PRIM_SIZE.get(name)
        return (s, s, name in ("float", "double")) if s else None
    if kind == "enum":
        return (4, 4, False)
    if kind in ("class", "ptr", "byref"):
        return (8, 8, False)
    if kind == "valuetype":
        return layout_of(name)
    return None


def layout_of(fullname):
    # natural-alignment layout of a value type declared in the dummy assemblies
    if fullname in _LAYOUT:
        return _LAYOUT[fullname]
    _LAYOUT[fullname] = None  # cycle guard
    loc = GLOBAL_TYPES.get(fullname)
    if loc is None:
        return None
    asm, idx = loc
    size, align, has_float = 0, 1, False
    for fi in asm.typedefs[idx - 1].FieldList or []:
        f = fi.row
        if bool(f.Flags.fdStatic):
            continue
        r = SigReader(asm, bytes(f.Signature.value))
        if r.u8() != 0x06:
            return None
        fname, fkind = r.typ()
        lay = member_layout(fname, fkind)
        if lay is None:
            return None
        fsize, falign, ffloat = lay
        size = (size + falign - 1) // falign * falign + fsize
        align = max(align, falign)
        has_float = has_float or ffloat
    size = (size + align - 1) // align * align
    _LAYOUT[fullname] = (max(size, 1), align, has_float)
    return _LAYOUT[fullname]


def return_sret(ret, rkind):
    # Hidden return pointer (sret) rule, fitted to observed call sites on Windows x64:
    # value types of size 1/2/4/8 without float fields come back in a register.
    if rkind != "valuetype":
        return 0, ""
    lay = layout_of(ret)
    if lay is None:
        return 1, ""
    size, _, has_float = lay
    return (0 if size in (1, 2, 4, 8) and not has_float else 1), size


def describe(asm, owner, m):
    static = bool(m.Flags.mdStatic)
    r = SigReader(asm, bytes(m.Signature.value))
    cc = r.u8()
    generic = 1 if cc & 0x10 else 0
    if generic:
        r.cu()
    pc = r.cu()
    ret, rkind = r.typ()
    params = [r.typ()[0] for _ in range(pc)]
    sret, size = return_sret(ret, rkind)
    arity = (0 if static else 1) + pc + sret + 1
    return {
        "key": f"{owner}$${str(m.Name)}",
        "assembly": asm.name,
        "static": int(static),
        "generic": generic,
        "sret": sret,
        "size": size,
        "return": ret,
        "params": ";".join(params),
        "arity": arity,
    }


def main():
    paths = sorted(glob.glob(os.path.join(DUMMY_DIR, "*.dll")))
    assemblies = []
    for path in paths:
        try:
            assemblies.append(Assembly(path))
        except Exception as e:  # noqa: BLE001
            print(f"skip {os.path.basename(path)}: {e}", file=sys.stderr)

    for asm in assemblies:
        for idx in range(1, len(asm.typedefs) + 1):
            name = asm.typedef_name(idx)
            GLOBAL_KIND.setdefault(name, asm.typedef_kind(idx))
            GLOBAL_TYPES.setdefault(name, (asm, idx))

    rows = []
    errors = 0
    types = 0
    nested = 0
    for asm in assemblies:
        nested += len(asm.enclosing)
        for idx, td in enumerate(asm.typedefs, start=1):
            types += 1
            owner = asm.typedef_name(idx)
            for mi in td.MethodList or []:
                try:
                    rows.append(describe(asm, owner, mi.row))
                except Exception as e:  # noqa: BLE001
                    errors += 1
                    if errors <= 10:
                        print(f"error {asm.name} {owner}: {e}", file=sys.stderr)

    rows.sort(key=lambda r: (r["key"], r["assembly"]))
    cols = ["key", "assembly", "static", "generic", "sret", "size", "return", "params", "arity"]
    with open(OUT_PATH, "w", encoding="utf-8", newline="\n") as f:
        f.write("\t".join(cols) + "\n")
        for r in rows:
            f.write("\t".join(str(r[c]) for c in cols) + "\n")

    print(f"assemblies={len(assemblies)} types={types} nested_links={nested}")
    print(f"methods={len(rows)} unique_keys={len({r['key'] for r in rows})} "
          f"sret={sum(r['sret'] for r in rows)} generic={sum(r['generic'] for r in rows)} "
          f"errors={errors}")
    print(f"wrote {OUT_PATH}")


if __name__ == "__main__":
    main()
