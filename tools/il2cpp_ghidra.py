"""il2cpp_ghidra.py - one CLI for the Unity WebGL/IL2CPP Ghidra project.

Pipeline
--------
  info                     program statistics
  find <substr> [limit]    list matching functions
  decomp <name|addr|table#N>   decompile one function
  apply  --assembly X      name functions from il2cppdumper script.json
  types  --assembly X      create IL2CPP structs and apply typed signatures
  export --assembly X      write pseudo-C + C# skeleton per type

Address mapping
---------------
`ScriptMethod.Address` is a wasm *table index*: table[Address] -> function.
Verified against dump.cs field offsets (e.g. Ammo.GetAmmoMoveDirection reads
this+0x4C, the `Vector2 ammoMoveDirection` field).

Typing
------
`types` rebuilds the /il2cpp data types from dump.cs, then rewrites every
function prototype using script.json signatures, applying the wasm ABI:
  * struct return  -> void f(Ret_o *__ret, ...)
  * struct argument -> passed by pointer
  * instance method -> `__this`, static -> no `__this`

Data types built:
  * class structs           fields at their exact dump.cs offsets
  * value types             built from their own dump.cs field offsets
                            (Vector2/3/4, Color/Color32, Matrix4x4, LayerMask,
                            ContactFilter2D, game structs, ...)
  * enums                   real Ghidra enums with every `const` member, so the
                            decompiler prints `Chasing` instead of `1`

Enum-typed parameters/returns come from the managed declarations in dump.cs:
il2cppdumper flattens enums to `int32_t` in script.json, so `Signature` alone
cannot recover them.
"""
import argparse
import json
import os
import re
import subprocess
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
WORKSPACE = os.path.dirname(HERE)
DUMP_DIR = os.path.join(WORKSPACE, "il2cppdumper")
PROJECT_DIR = WORKSPACE
PROJECT_NAME = "ghidra"
PROGRAM_PATH = "/build.wasm"
TYPES_CS = os.path.join(HERE, "types.cs")
CATEGORY = "/il2cpp"

CS_PRIM = {
    "bool": "bool", "byte": "uint8_t", "sbyte": "int8_t", "short": "int16_t",
    "ushort": "uint16_t", "int": "int32_t", "uint": "uint32_t", "long": "int64_t",
    "ulong": "uint64_t", "float": "float", "double": "double", "char": "uint16_t",
}
PRIM_SIZE = {"bool": 1, "uint8_t": 1, "int8_t": 1, "int16_t": 2, "uint16_t": 2,
             "int32_t": 4, "uint32_t": 4, "int64_t": 8, "uint64_t": 8,
             "float": 4, "double": 8}
VECTORS = {
    "Vector2": ("x", "y"), "Vector3": ("x", "y", "z"), "Vector4": ("x", "y", "z", "w"),
    "Quaternion": ("x", "y", "z", "w"), "Color": ("r", "g", "b", "a"),
    "Rect": ("x", "y", "width", "height"),
    "Bounds": ("cx", "cy", "cz", "ex", "ey", "ez"),
}


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


def dt_name(name):
    n = re.sub(r"[^A-Za-z0-9_]", "_", name)
    return n if not n[:1].isdigit() else "_" + n


def load_script_json():
    with open(os.path.join(DUMP_DIR, "script.json"), encoding="utf-8") as fh:
        return json.load(fh)


def assembly_types(assembly):
    cache = os.path.join(DUMP_DIR, "types_%s.json" % assembly)
    if os.path.exists(cache):
        with open(cache, encoding="utf-8") as fh:
            return set(json.load(fh))
    dll = os.path.join(DUMP_DIR, "DummyDll", assembly + ".dll")
    out = subprocess.run(["dotnet", "run", TYPES_CS, "--", dll],
                         capture_output=True, text=True, check=True)
    lines = [l.strip() for l in out.stdout.splitlines() if l.strip()]
    with open(cache, "w", encoding="utf-8") as fh:
        json.dump(lines, fh, indent=0)
    return set(lines)


def methods_of(assembly, data=None):
    data = data or load_script_json()
    types = assembly_types(assembly)
    return [r for r in data["ScriptMethod"]
            if "$$" in r["Name"] and strip_generics(r["Name"].split("$$", 1)[0]) in types]


def open_project():
    import pyghidra
    pyghidra.start()
    project = pyghidra.open_project(PROJECT_DIR, PROJECT_NAME)
    prog, consumer = pyghidra.consume_program(project, PROGRAM_PATH)
    return project, prog, consumer, pyghidra


def table_target(prog, idx):
    af = prog.getAddressFactory()
    try:
        val = prog.getMemory().getInt(af.getAddressSpace("table").getAddress(idx * 4)) & 0xFFFFFFFF
    except Exception:
        return None
    if val == 0:
        return None
    return af.getAddressSpace("ram").getAddress(val)


# ----------------------------------------------------------------- dump.cs
TYPE_DECL_RE = re.compile(r"\b(class|struct|enum|interface)\s+([A-Za-z0-9_.<>`_|]+).*TypeDefIndex")
FIELD_RE = re.compile(
    r"^\s*(?:\[[^\]]*\]\s*)*"
    r"((?:(?:public|private|protected|internal|readonly|static|const|volatile|new)\s+)*)"
    r"([A-Za-z_][\w\.<>,\[\] \*]*?)\s+([A-Za-z_]\w*)\s*;\s*//\s*0x([0-9A-Fa-f]+)\s*$")
ENUM_BASE_RE = re.compile(r"^\s*(?:public|private|protected|internal)\s+(\w+)\s+value__;")
ENUM_MEMBER_RE = re.compile(
    r"^\s*public const\s+[\w\.<>]+\s+([A-Za-z_]\w*)\s*=\s*(-?\d+);")
METHOD_DECL_RE = re.compile(r"^\s*([^/].*?)\b([A-Za-z_]\w*)\s*\((.*)\)\s*\{\s*\}\s*$")

# C# underlying type -> (byte size, signed)
ENUM_BASE = {
    "byte": (1, False), "sbyte": (1, True), "short": (2, True), "ushort": (2, False),
    "int": (4, True), "uint": (4, False), "long": (8, True), "ulong": (8, False),
}


def scan_dump(wanted):
    """Parse dump.cs.

    -> (types, enums, value_structs)
       types          {full: {decl,kind,body,fields,methods,ns}}  (only `wanted`)
       enums          {full: {base, members:[(name,value)]}}      (global)
       value_structs  {full: {decl,fields,ns}}                    (global)
    """
    types, enums, value_structs = {}, {}, {}
    ns, cur = "", None

    def flush():
        nonlocal cur
        if cur is None:
            return
        if cur["kind"] == "enum":
            enums[cur["full"]] = cur
        elif cur["kind"] == "struct":
            value_structs[cur["full"]] = cur
        if cur["wanted"]:
            types[cur["full"]] = cur
        cur = None

    with open(os.path.join(DUMP_DIR, "dump.cs"), encoding="utf-8") as fh:
        for line in fh:
            if line.startswith("// Namespace: "):
                flush()
                ns = line[len("// Namespace: "):].strip()
                continue
            if cur is None:
                m = TYPE_DECL_RE.search(line)
                if not m:
                    continue
                kind, raw = m.group(1), strip_generics(m.group(2))
                full = (ns + "." if ns else "") + raw
                cur = {"full": full, "decl": line.rstrip(), "kind": kind,
                       "body": [], "fields": [], "members": [], "base": "int",
                       "methods": {}, "ns": ns, "wanted": full in wanted,
                       "skip_next": False}
                continue

            if cur["wanted"]:
                cur["body"].append(line.rstrip())

            if cur["kind"] == "enum":
                bm = ENUM_BASE_RE.match(line)
                if bm:
                    cur["base"] = bm.group(1)
                    continue
                mm = ENUM_MEMBER_RE.match(line)
                if mm:
                    cur["members"].append((mm.group(1), int(mm.group(2))))
                continue

            if cur["kind"] in ("class", "struct"):
                if line.lstrip().startswith("[Ignore("):
                    cur["skip_next"] = True
                else:
                    fm = FIELD_RE.match(line)
                    if fm:
                        mods, ctype, name, off = fm.group(1), fm.group(2), fm.group(3), fm.group(4)
                        ignored = cur["skip_next"]
                        cur["skip_next"] = False
                        if not ignored and "static" not in mods and "const" not in mods:
                            cur["fields"].append((int(off, 16), name, ctype.strip()))

            if cur["wanted"]:
                dm = METHOD_DECL_RE.match(line)
                if dm:
                    ret_raw, mname = dm.group(1).strip(), dm.group(2)
                    ret_raw = re.sub(
                        r"^(?:(?:public|private|protected|internal|static|virtual|override"
                        r"|sealed|abstract|new|extern|unsafe|partial|readonly|async)\s+)+",
                        "", ret_raw).strip()
                    entry = cur["methods"].setdefault(mname, {"params": {}, "ret": None})
                    entry["ret"] = ret_raw
                    for p in split_params(dm.group(3)):
                        p = re.sub(r"^(?:this|out|ref|in|params)\s+", "", p.strip())
                        if not p:
                            continue
                        bits = p.rsplit(" ", 1)
                        if len(bits) == 2:
                            entry["params"][bits[1].strip()] = bits[0].strip()
    flush()
    return types, enums, value_structs


class Resolver:
    """Name resolution over the full dump.cs type universe."""

    def __init__(self, enums, value_structs):
        self.enums = enums
        self.value_structs = value_structs
        self.enum_simple, self.value_simple = {}, {}
        for full in enums:
            self.enum_simple.setdefault(full.split(".")[-1], []).append(full)
        for full in value_structs:
            self.value_simple.setdefault(full.split(".")[-1], []).append(full)
        self.value_cname = {full.replace(".", "_"): full for full in value_structs}

    @staticmethod
    def _pick(table, simple, name, ns):
        if name in table:
            return name
        cands = simple.get(name)
        if not cands:
            return None
        if ns and (ns + "." + name) in cands:
            return ns + "." + name
        if ("UnityEngine." + name) in cands:
            return "UnityEngine." + name
        return sorted(cands)[0]

    def enum_full(self, name, ns=""):
        name = strip_generics(name).strip().rstrip("*").strip()
        return self._pick(self.enums, self.enum_simple, name, ns)

    def value_full(self, name, ns=""):
        name = strip_generics(name).strip().rstrip("*").strip()
        return self._pick(self.value_structs, self.value_simple, name, ns)


# ------------------------------------------------------------- ghidra types
class TypeFactory:
    def __init__(self, dtm, resolver):
        self.dtm = dtm
        self.resolver = resolver
        from ghidra.program.model.data import CategoryPath
        self.cp = CategoryPath(CATEGORY)
        self.cache = {}
        self.pending = []
        self.enum_cache = {}
        self.value_cache = {}
        self._in_progress = set()
        self._init_core()

    def _add(self, st):
        existing = self.dtm.getDataType(self.cp, st.getName())
        if existing is None:
            return self.dtm.addDataType(st, None)
        try:
            if existing.isEquivalent(st):
                return existing
        except Exception:
            pass
        try:
            return self.dtm.replaceDataType(existing, st, True)
        except Exception:
            try:
                from ghidra.util.task import ConsoleTaskMonitor
                self.dtm.remove(existing, ConsoleTaskMonitor())
                return self.dtm.addDataType(st, None)
            except Exception:
                return existing

    def flush(self):
        for st in self.pending:
            self.cache[st.getName()] = self._add(st)
        self.pending = []

    def _init_core(self):
        from ghidra.program.model.data import (StructureDataType, IntegerDataType,
                                               FloatDataType)
        for name, size in (("MethodInfo", 0x20), ("Il2CppString", 0x10),
                           ("Il2CppObject", 0x8), ("Il2CppArray", 0x10)):
            st = StructureDataType(self.cp, name, 0)
            st.add(IntegerDataType.dataType, 4, "_opaque0", None)
            if size > 4:
                st.add(IntegerDataType.dataType, size - 4, "_opaque1", None)
            self.cache[name] = self._add(st)
        for vname, coords in VECTORS.items():
            st = StructureDataType(self.cp, vname + "_o", 0)
            for c in coords:
                st.add(FloatDataType.dataType, 4, c, None)
            self.cache[vname + "_o"] = self._add(st)

    def opaque_obj(self, name):
        """Unregistered 4-byte placeholder struct (added later by flush())."""
        from ghidra.program.model.data import StructureDataType, IntegerDataType
        key = dt_name(name)
        if key in self.cache:
            return self.cache[key]
        st = StructureDataType(self.cp, key, 0)
        st.add(IntegerDataType.dataType, 4, "_opaque", None)
        self.pending.append(st)
        self.cache[key] = st
        return st

    def prim(self, p):
        from ghidra.program.model.data import (BooleanDataType, ByteDataType, SignedByteDataType,
                                               ShortDataType, UnsignedShortDataType, IntegerDataType,
                                               UnsignedIntegerDataType, LongDataType,
                                               UnsignedLongDataType, FloatDataType, DoubleDataType)
        return {
            "bool": BooleanDataType.dataType, "uint8_t": ByteDataType.dataType,
            "int8_t": SignedByteDataType.dataType, "int16_t": ShortDataType.dataType,
            "uint16_t": UnsignedShortDataType.dataType, "int32_t": IntegerDataType.dataType,
            "uint32_t": UnsignedIntegerDataType.dataType, "int64_t": LongDataType.dataType,
            "uint64_t": UnsignedLongDataType.dataType, "float": FloatDataType.dataType,
            "double": DoubleDataType.dataType,
        }[p]

    # -------------------------------------------------------------- enums
    def enum_datatype(self, full):
        """Build + register a Ghidra enum for one dump.cs enum. None if unusable."""
        if full in self.enum_cache:
            return self.enum_cache[full]
        info = self.resolver.enums.get(full) if self.resolver else None
        dt = None
        if info and info["members"]:
            size, signed = ENUM_BASE.get(info["base"], (4, True))
            members = info["members"]
            # Ghidra enums created through PyGhidra are unsigned; skip signed
            # enums that actually carry negative values (would display wrong).
            if not (signed and any(v < 0 for _, v in members)):
                from ghidra.program.model.data import EnumDataType
                e = EnumDataType(self.cp, dt_name(full), size)
                limit = 1 << (8 * size)
                seen = set()
                for name, value in members:
                    nm = dt_name(name)
                    if nm in seen or value < 0 or value >= limit:
                        continue
                    seen.add(nm)
                    try:
                        e.add(nm, value)
                    except Exception:
                        continue
                if e.getCount():
                    try:
                        dt = self._add(e)
                    except Exception:
                        dt = None
        self.enum_cache[full] = dt
        if dt is not None:
            self.cache[dt.getName()] = dt
        return dt

    # -------------------------------------------------------- value structs
    def value_datatype(self, full):
        """Recursively build a value-type struct from its dump.cs field offsets."""
        key = dt_name(full) + "_o"
        if key in self.value_cache:
            return self.value_cache[key]
        info = self.resolver.value_structs.get(full)
        if info is None or full in self._in_progress:
            return None
        self._in_progress.add(full)
        try:
            from ghidra.program.model.data import (StructureDataType, PointerDataType,
                                                   VoidDataType, ByteDataType, ArrayDataType)
            st = StructureDataType(self.cp, key, 0)
            fields = sorted(info["fields"], key=lambda f: f[0])
            cur = 0
            for i, (off, name, ctype) in enumerate(fields):
                nxt = fields[i + 1][0] if i + 1 < len(fields) else None
                size = (nxt - off) if nxt is not None else None
                if off > cur:
                    st.add(ArrayDataType(ByteDataType.dataType, off - cur, 0),
                           off - cur, "pad_%x" % cur, None)
                    cur = off
                if off < cur:
                    continue
                dt, sz = self.field_type(ctype, size, info["ns"])
                st.add(dt, sz, dt_name(name), None)
                cur = off + sz
            dt = self._add(st)
            self.value_cache[key] = dt
            self.cache[key] = dt
            return dt
        finally:
            self._in_progress.discard(full)

    # --------------------------------------------------------- field helper
    def field_type(self, ctype, size, ns="", ref_dt=None):
        from ghidra.program.model.data import (ByteDataType, ArrayDataType, PointerDataType,
                                               VoidDataType)
        ctype = ctype.strip()
        ptr = ctype.endswith("*")
        base = strip_generics(ctype.rstrip("*")).replace("[]", "").strip()

        if ptr:
            prim = prim_datatype(self, base)
            if prim is not None:
                return PointerDataType(prim), 4
            if base == "void":
                return PointerDataType(VoidDataType.dataType), 4
            if ref_dt is not None:
                return ref_dt(base), 4
            return PointerDataType(self.opaque_obj(dt_name(base) + "_o")), 4

        if ctype in CS_PRIM:
            p = self.prim(CS_PRIM[ctype])
            return p, PRIM_SIZE[CS_PRIM[ctype]]

        if base in VECTORS and base + "_o" in self.cache:
            dt = self.cache[base + "_o"]
            return dt, dt.getLength()

        enum_full = self.resolver.enum_full(base, ns) if self.resolver else None
        if enum_full:
            dt = self.enum_datatype(enum_full)
            if dt is not None:
                dt_len = dt.getLength()
                if size is None or dt_len <= size:
                    return dt, dt_len

        value_full = self.resolver.value_full(base, ns) if self.resolver else None
        if value_full and value_full.split(".")[-1] not in VECTORS:
            dt = self.value_datatype(value_full)
            if dt is not None:
                dt_len = dt.getLength()
                if size is None or dt_len <= size:
                    return dt, dt_len
                # declared value type does not fit the metadata slot
                return ArrayDataType(ByteDataType.dataType, size, 0), size
            if size is not None and size > 0:
                return ArrayDataType(ByteDataType.dataType, size, 0), size

        # class / interface / array / string reference: 4-byte pointer
        if ref_dt is not None:
            return ref_dt(base), 4
        return PointerDataType(self.opaque_obj(dt_name(base) + "_o")), 4


def build_structs(factory, types, enums, value_structs):
    from ghidra.program.model.data import (StructureDataType, PointerDataType, VoidDataType,
                                           ByteDataType, ArrayDataType)
    resolver = factory.resolver
    # Enums first: structs reference them by path, so they must exist in the DTM.
    for full in enums:
        factory.enum_datatype(full)

    objs = {full: StructureDataType(factory.cp, dt_name(full) + "_o", 0) for full in types}
    by_simple = {}
    for full in types:
        by_simple.setdefault(full.split(".")[-1], full)

    def ref_dt(base):
        full = by_simple.get(base)
        if full:
            return PointerDataType(objs[full])
        return PointerDataType(factory.opaque_obj(dt_name(base) + "_o"))

    for full, info in types.items():
        st = objs[full]
        ptr = PointerDataType(VoidDataType.dataType)
        st.add(ptr, 4, "klass", None)
        st.add(ptr, 4, "monitor", None)
        fields = sorted(info["fields"], key=lambda f: f[0])
        cur = 8
        for i, (off, name, ctype) in enumerate(fields):
            nxt = fields[i + 1][0] if i + 1 < len(fields) else None
            size = (nxt - off) if nxt is not None else None
            if off > cur:
                st.add(ArrayDataType(ByteDataType.dataType, off - cur, 0), off - cur, "pad_%x" % cur, None)
                cur = off
            if off < cur:
                continue
            dt, sz = factory.field_type(ctype, size, info["ns"], ref_dt)
            st.add(dt, sz, dt_name(name), None)
            cur = off + sz

    factory.flush()
    for full in types:
        factory.cache[dt_name(full) + "_o"] = factory._add(objs[full])
    return objs


# ---------------------------------------------------------------- signatures
def split_params(s):
    out, depth, cur = [], 0, []
    for ch in s:
        if ch in "<([":
            depth += 1
        elif ch in ">)]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    if cur:
        out.append("".join(cur).strip())
    return out


def parse_signature(sig):
    m = re.match(r"^(.*?)\s+[A-Za-z_]\w*\s*\((.*)\);$", sig.strip())
    if not m:
        return None, []
    return m.group(1).strip(), split_params(m.group(2))


def prim_datatype(factory, name):
    """C# name (int) or C name (int32_t) -> Ghidra primitive, else None."""
    if name in CS_PRIM:
        return factory.prim(CS_PRIM[name])
    if name in PRIM_SIZE:
        return factory.prim(name)
    return None


def map_sig_type(factory, tok):
    from ghidra.program.model.data import PointerDataType, VoidDataType
    tok = tok.replace("const ", "").strip()
    star = tok.endswith("*")
    base = tok[:-1].strip() if star else tok
    b = strip_generics(base).strip()
    cache = factory.cache

    if b == "void":
        return VoidDataType.dataType
    prim = prim_datatype(factory, b)
    if prim is not None and not star:
        return prim
    if b == "MethodInfo":
        return PointerDataType(cache["MethodInfo"])
    if b in ("Il2CppString", "String_t"):
        return PointerDataType(cache["Il2CppString"])
    if star or not star:
        # struct arg byval (wasm passes pointer) or X_o* / X_array*
        for v in VECTORS:
            if (b == v or b.endswith(v + "_o")) and v + "_o" in cache:
                return PointerDataType(cache[v + "_o"])
        if b in cache:
            return PointerDataType(cache[b])
        if b + "_o" in cache:
            return PointerDataType(cache[b + "_o"])
        if factory.resolver is not None and b.endswith("_o"):
            full = factory.resolver.value_cname.get(b[:-2])
            if full:
                dt = factory.value_datatype(full)
                if dt is not None:
                    return PointerDataType(dt)
    fallback = b if (b.endswith("_o") or b.endswith("_array")) else b + "_o"
    return PointerDataType(factory.opaque_obj(fallback))


def apply_signature(factory, prog, func, cls, sig, mname=None, typeinfo=None):
    from ghidra.program.model.listing import ParameterImpl, Function, Variable
    from ghidra.program.model.symbol import SourceType
    from ghidra.program.model.data import VoidDataType, PointerDataType
    from jpype import JArray

    ret_s, params = parse_signature(sig)
    if ret_s is None:
        return False

    over = {}
    if typeinfo and mname:
        over = typeinfo.get("methods", {}).get(mname, {})
    ns = typeinfo.get("ns", "") if typeinfo else ""

    ret_dt = map_sig_type(factory, ret_s)
    if over.get("ret"):
        enum_full = factory.resolver.enum_full(over["ret"], ns) if factory.resolver else None
        if enum_full:
            ret_dt = factory.enum_datatype(enum_full) or ret_dt
    sret = not ret_s.endswith("*") and ret_s not in CS_PRIM and ret_s != "void"

    specs = []
    if sret:
        specs.append(("__ret", ret_dt))
    for p in params:
        parts = p.split()
        if not parts:
            continue
        name = parts[-1]
        typetok = " ".join(parts[:-1]) if len(parts) > 1 else parts[0]
        if name == "__this":
            key = dt_name(strip_generics(cls)) + "_o"
            dt = PointerDataType(factory.cache.get(key) or factory.opaque_obj(key))
        elif name in over.get("params", {}):
            enum_full = factory.resolver.enum_full(over["params"][name], ns)
            dt = factory.enum_datatype(enum_full) if enum_full else None
            if dt is None:
                dt = map_sig_type(factory, typetok)
        else:
            dt = map_sig_type(factory, typetok)
        specs.append((dt_name(name), dt))

    factory.flush()
    plist = [ParameterImpl(n, dt, prog) for n, dt in specs]
    func.setReturnType(VoidDataType.dataType if sret else ret_dt, SourceType.USER_DEFINED)
    arr = JArray(Variable)(plist)
    func.updateFunction(func.getCallingConventionName(), func.getReturn(),
                         Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                         True, SourceType.USER_DEFINED, arr)
    return True


# ------------------------------------------------------------------ commands
def cmd_info(args):
    project, prog, consumer, pyghidra = open_project()
    try:
        from ghidra.program.model.symbol import SourceType
        fm = prog.getFunctionManager()
        print("program  :", prog.getName())
        print("language :", prog.getLanguage().getLanguageID())
        print("functions:", fm.getFunctionCount())
        print("symbols  :", sum(1 for s in prog.getSymbolTable().getAllSymbols(True)
                                if s.getSource() == SourceType.USER_DEFINED), "user-defined")
        print("il2cpp types:", sum(1 for dt in prog.getDataTypeManager().getAllDataTypes()
                                   if str(dt.getCategoryPath()).startswith(CATEGORY)))
    finally:
        prog.release(consumer)
        project.close()


def cmd_find(args):
    project, prog, consumer, pyghidra = open_project()
    try:
        fm = prog.getFunctionManager()
        needle = args.needle.lower()
        n = 0
        for f in fm.getFunctions(True):
            if needle in f.getName().lower():
                print("%s\t%s" % (f.getEntryPoint(), f.getName()))
                n += 1
                if n >= args.limit:
                    break
        print("matches:", n)
    finally:
        prog.release(consumer)
        project.close()


def cmd_decomp(args):
    project, prog, consumer, pyghidra = open_project()
    try:
        from ghidra.app.decompiler import DecompInterface
        from ghidra.util.task import ConsoleTaskMonitor
        fm = prog.getFunctionManager()
        func, target = None, args.target
        if target.startswith("table#"):
            addr = table_target(prog, int(target[6:]))
            func = fm.getFunctionAt(addr) if addr else None
        if func is None:
            addr = prog.getAddressFactory().getAddress(target)
            func = fm.getFunctionAt(addr) if addr else None
        if func is None:
            for f in fm.getFunctions(True):
                if target.lower() in f.getName().lower():
                    func = f
                    break
        if func is None:
            print("not found:", target)
            return 1
        d = DecompInterface()
        d.openProgram(prog)
        res = d.decompileFunction(func, 120, ConsoleTaskMonitor())
        if not res or not res.decompileCompleted():
            print("decompile failed")
            return 1
        print("// %s @ %s" % (func.getName(), func.getEntryPoint()))
        print(res.getDecompiledFunction().getC().replace("\r\r\n", "\n").replace("\r", ""))
    finally:
        prog.release(consumer)
        project.close()


def cmd_apply(args):
    project, prog, consumer, pyghidra = open_project()
    try:
        from ghidra.program.model.symbol import SourceType
        from ghidra.util.task import ConsoleTaskMonitor
        USER = SourceType.USER_DEFINED
        fm, st, listing = prog.getFunctionManager(), prog.getSymbolTable(), prog.getListing()
        methods = methods_of(args.assembly)
        ok = missing = conflict = 0
        with pyghidra.transaction(prog, "apply %s names" % args.assembly):
            for rec in methods:
                addr = table_target(prog, rec["Address"])
                func = fm.getFunctionAt(addr) if addr else None
                if func is None:
                    missing += 1
                    continue
                name = sanitize(rec["Name"])
                try:
                    if func.getName().startswith(("unnamed_function_", "FUN_")):
                        func.setName(name, USER)
                    else:
                        st.createLabel(addr, name, USER)
                    ok += 1
                except Exception:
                    conflict += 1
                if rec.get("Signature"):
                    try:
                        listing.setComment(addr, 0, "C#: " + rec["Signature"])
                    except Exception:
                        pass
        print("ok=%d missing=%d conflict=%d" % (ok, missing, conflict))
        prog.getDomainFile().save(ConsoleTaskMonitor())
        print("saved")
    finally:
        prog.release(consumer)
        project.close()


def cmd_types(args):
    project, prog, consumer, pyghidra = open_project()
    try:
        from ghidra.util.task import ConsoleTaskMonitor
        methods = methods_of(args.assembly)
        wanted = {strip_generics(r["Name"].split("$$", 1)[0]) for r in methods}
        types, enums, value_structs = scan_dump(wanted)
        print("types=%d enums=%d structs=%d" % (len(types), len(enums), len(value_structs)))

        factory = None
        t0 = time.time()
        applied = skipped = 0
        seen = set()
        resolver = Resolver(enums, value_structs)
        with pyghidra.transaction(prog, "build %s types" % args.assembly):
            factory = TypeFactory(prog.getDataTypeManager(), resolver)
            build_structs(factory, types, enums, value_structs)
            print("enums built=%d value structs=%d" %
                  (sum(1 for v in factory.enum_cache.values() if v is not None),
                   len(factory.value_cache)))
            fm = prog.getFunctionManager()
            for rec in methods:
                addr = table_target(prog, rec["Address"])
                if addr is None or str(addr) in seen:
                    continue
                func = fm.getFunctionAt(addr)
                if func is None:
                    skipped += 1
                    continue
                seen.add(str(addr))
                cls = strip_generics(rec["Name"].split("$$", 1)[0])
                mname = rec["Name"].split("$$", 1)[1]
                try:
                    if apply_signature(factory, prog, func, cls, rec.get("Signature", ""),
                                       mname, types.get(cls)):
                        applied += 1
                    else:
                        skipped += 1
                except Exception:
                    skipped += 1
        print("functions typed=%d skipped=%d (%.1fs)" % (applied, skipped, time.time() - t0))
        prog.getDomainFile().save(ConsoleTaskMonitor())
        print("saved")
    finally:
        prog.release(consumer)
        project.close()


def cmd_export(args):
    project, prog, consumer, pyghidra = open_project()
    try:
        from ghidra.app.decompiler import DecompInterface
        from ghidra.util.task import ConsoleTaskMonitor
        data = load_script_json()
        strings = {i: r["Value"] for i, r in enumerate(data["ScriptString"], 1)}
        methods = methods_of(args.assembly, data)
        grouped = {}
        for rec in methods:
            grouped.setdefault(strip_generics(rec["Name"].split("$$", 1)[0]), []).append(rec)
        types, _, _ = scan_dump(set(grouped))

        out_dir = os.path.join(PROJECT_DIR, "pseudoc", args.assembly)
        os.makedirs(out_dir, exist_ok=True)
        d = DecompInterface()
        d.openProgram(prog)
        monitor = ConsoleTaskMonitor()
        fm = prog.getFunctionManager()
        cache = {}
        total = failed = 0

        for tp in sorted(grouped):
            info = types.get(tp)
            decl = info["decl"] if info else "(type not found in dump.cs)"
            body = info["body"] if info else []
            fmap = {off: name for off, name, _ in info["fields"]} if info else {}
            lines = ["// %s :: %s" % (args.assembly, tp),
                     "// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler", ""]
            if info:
                lines.extend(["/* ===== C# =====", decl])
                lines.extend(body)
                lines.extend(["===== C# end =====", "*/", ""])
            else:
                lines.extend([decl, ""])

            for rec in sorted(grouped[tp], key=lambda r: r["Address"]):
                addr = table_target(prog, rec["Address"])
                func = fm.getFunctionAt(addr) if addr else None
                if func is None:
                    lines.append("// ---- %s ---- (no function)" % rec["Name"])
                    failed += 1
                    continue
                key = str(addr)
                if key not in cache:
                    res = d.decompileFunction(func, 90, monitor)
                    if res and res.decompileCompleted():
                        c = res.getDecompiledFunction().getC()
                        cache[key] = c.replace("\r\r\n", "\n").replace("\r\n", "\n").replace("\r", "\n")
                    else:
                        cache[key] = None
                ctext = cache[key]
                if ctext is None:
                    lines.append("// ---- %s ---- (decompile failed)" % rec["Name"])
                    failed += 1
                    continue
                if fmap:
                    ctext = annotate(ctext, fmap, strings)
                lines.append("// ---- %s ----" % rec["Name"])
                if rec.get("Signature"):
                    lines.append("// C#: " + rec["Signature"])
                lines.append(ctext.rstrip())
                lines.append("")
                total += 1
            with open(os.path.join(out_dir, sanitize(tp) + ".c"), "w", encoding="utf-8", newline="\n") as fh:
                fh.write("\n".join(lines) + "\n")
        print("types=%d methods=%d failed=%d" % (len(grouped), total, failed))
    finally:
        prog.release(consumer)
        project.close()


def annotate(ctext, fields, strings):
    def str_repl(m):
        val = strings.get(int(m.group(1)))
        if val is None:
            return m.group(0)
        esc = val.replace("\\", "\\\\").replace("\n", "\\n").replace("\r", "").replace('"', '\\"')
        if len(esc) > 60:
            esc = esc[:57] + "..."
        return '%s /* "%s" */' % (m.group(0), esc)

    if "StringLiteral_" in ctext:
        ctext = re.sub(r"StringLiteral_(\d+)", str_repl, ctext)

    def off_repl(m):
        off = int(m.group(1), 16)
        if off in fields:
            return "%s /* %s */" % (m.group(0), fields[off])
        return m.group(0)

    return re.sub(r"\b(?:__this|param\d+)\s*\+\s*(0x[0-9A-Fa-f]+)\b", off_repl, ctext)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    sub.add_parser("info").set_defaults(func=cmd_info)

    p = sub.add_parser("find")
    p.add_argument("needle")
    p.add_argument("limit", nargs="?", type=int, default=50)
    p.set_defaults(func=cmd_find)

    p = sub.add_parser("decomp")
    p.add_argument("target")
    p.set_defaults(func=cmd_decomp)

    for name, fn in (("apply", cmd_apply), ("types", cmd_types), ("export", cmd_export)):
        p = sub.add_parser(name)
        p.add_argument("--assembly", default="Assembly-CSharp")
        p.set_defaults(func=fn)

    args = ap.parse_args()
    return args.func(args) or 0


if __name__ == "__main__":
    sys.exit(main())
