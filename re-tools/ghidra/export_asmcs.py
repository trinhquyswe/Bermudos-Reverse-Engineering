# Export Ghidra pseudo-C for the Assembly-CSharp (game) wasm functions.
#
# Run under PyGhidra with the program already imported from Decompiled/build.named.wasm:
#   pyghidra <wasm> export_asmcs.py <index.json> <out_dir> <summary.json> [cache.jsonl]
#
# Locates each target by wasm function index via the plugin's WasmLoader, decompiles
# it, and writes one .c file per Assembly-CSharp type (mirroring the wabt-based
# Decompiled/Wasm/Assembly-CSharp tree).
#
# The optional 4th argument is a JSONL resume cache: every completed function is
# appended immediately, so an aborted/interrupted run resumes without redoing the
# decompiles. The per-type .c tree is (re)written from the cache + live results
# every CHECKPOINT_INTERVAL functions and once at the end.
#
# @category RE
import json
import os
import time
import traceback

from wasm import WasmLoader
from wasm.analysis import WasmAnalysis
from wasm.analysis import WasmPreAnalyzer
from ghidra.app.decompiler import DecompInterface
from ghidra.app.util.importer import MessageLog
from ghidra.program.model.address import AddressSet
from ghidra.util.task import ConsoleTaskMonitor

CHECKPOINT_INTERVAL = 50
TIMEOUT_SEC = 300

# Bump when the decompilation pipeline changes (e.g. pre-analysis), so that stale
# cache entries produced by older runs are ignored instead of silently reused.
CACHE_VERSION = 2

args = getScriptArgs()
index_path = args[0]
out_dir = args[1]
summary_path = args[2]
cache_path = args[3] if len(args) > 3 and args[3] and args[3] != "-" else None


def log(msg):
    print(msg, flush=True)


t0 = time.time()
program = currentProgram
module = WasmAnalysis.getState(program).module
af = program.getAddressFactory()
fm = program.getFunctionManager()
di = DecompInterface()
di.openProgram(program)
mon = ConsoleTaskMonitor()

with open(index_path, "r", encoding="utf-8") as fh:
    index = json.load(fh)
entries = index["entries"]

log("EXPORT_START entries=%d functions_in_program=%d" % (len(entries), fm.getFunctionCount()))


# --- targeted pre-analysis -------------------------------------------------
# The wasm processor is stack-based and its instruction decoder depends on
# per-address *context* (branch targets, operand sizes, stack effect, C stack
# pointer). The plugin computes that in WasmPreAnalyzer and commits it to the
# program context. Without it the disassembler mis-decodes the LEB128 operands
# and the decompiler emits "bad instruction data"/halt_baddata() stubs.
#
# Running the plugin's full auto-analysis would do this for all ~118k functions
# (hours). WasmPreAnalyzer.added() only touches the addresses it is given, so we
# hand it exactly the 734 game functions.
def prepare_target_functions():
    aset = AddressSet()
    for e in entries:
        try:
            addr = WasmLoader.getFunctionAddress(af, module, int(e["func"]))
            f = fm.getFunctionAt(addr)
            if f is None:
                f = fm.getFunctionContaining(addr)
            if f is None:
                continue
            aset.addRange(f.getEntryPoint(), f.getBody().getMaxAddress())
        except Exception as ex:
            log("PREP_SKIP func=%s %s" % (e.get("func"), ex))
    log("PREP_TARGETS ranges=%d" % aset.getNumAddressRanges())
    t = time.time()
    WasmPreAnalyzer().added(program, aset, mon, MessageLog())
    log("PREP_DONE elapsed=%.1fs" % (time.time() - t))


try:
    prepare_target_functions()
except Exception as ex:
    log("PREP_FAILED %s" % ex)
    log(traceback.format_exc())


# --- resume cache ---------------------------------------------------------
done = {}   # func idx -> record (successful decompile)
missing = []  # records for functions we could not resolve/decompile
failed = []

if cache_path and os.path.exists(cache_path):
    with open(cache_path, "r", encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            try:
                rec = json.loads(line)
            except ValueError:
                continue
            status = rec.get("status")
            if rec.get("v") != CACHE_VERSION:
                continue
            if status == "ok":
                done[int(rec["func"])] = rec
            elif status == "missing":
                missing.append(rec)
            else:
                failed.append(rec)
    log("EXPORT_RESUME cached_ok=%d cached_missing=%d cached_failed=%d"
        % (len(done), len(missing), len(failed)))

cache_fh = open(cache_path, "a", encoding="utf-8") if cache_path else None


def write_cache(rec):
    if cache_fh is None:
        return
    cache_fh.write(json.dumps(rec) + "\n")
    cache_fh.flush()
    os.fsync(cache_fh.fileno())


HEADER = (
    "// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)\n"
    "// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)\n"
    "// Program imported from Decompiled/build.named.wasm, so functions carry the\n"
    "// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.\n"
    "// This is decompiler pseudo-C (control flow, calls, constants and field offsets\n"
    "// are real); it is not the original C# and types/locals are decompiler-inferred.\n"
    "// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.\n"
)


def write_tree():
    """Rebuild the per-type .c tree + _index.tsv from the successful records."""
    by_type = {}
    for fidx, rec in done.items():
        by_type.setdefault(rec["type"], []).append(rec)
    os.makedirs(out_dir, exist_ok=True)
    total = 0
    for typ in sorted(by_type.keys()):
        items = by_type[typ]
        with open(os.path.join(out_dir, typ + ".c"), "w", encoding="utf-8", newline="\n") as out:
            out.write(HEADER)
            out.write("// Type: %s  (Assembly-CSharp)  -  %d function(s)\n\n" % (typ, len(items)))
            for it in sorted(items, key=lambda x: x["func"]):
                total += 1
                out.write("// ---- %s::%s   [wasm func%d -> %s ; ghidra: %s]\n"
                          % (typ, it["method"], it["func"], it["addr"], it["ghidra_name"]))
                out.write(it["c"])
                out.write("\n\n")
    with open(os.path.join(out_dir, "_index.tsv"), "w", encoding="utf-8", newline="\n") as out:
        out.write("func\ttype\tmethod\tghidra_name\taddr\n")
        for typ in sorted(by_type.keys()):
            for it in sorted(by_type[typ], key=lambda x: x["func"]):
                out.write("%d\t%s\t%s\t%s\t%s\n"
                          % (it["func"], typ, it["method"], it["ghidra_name"], it["addr"]))
    return len(by_type), total


def write_summary(complete):
    types, total = write_tree()
    summary = {
        "requested": len(entries),
        "decompiled": len(done),
        "types": types,
        "functions_written": total,
        "missing": missing,
        "failed": failed,
        "complete": complete,
        "elapsed_sec": round(time.time() - t0, 1),
        "program_functions": fm.getFunctionCount(),
    }
    with open(summary_path, "w", encoding="utf-8") as fh:
        json.dump(summary, fh, indent=1)
    return summary


for i, e in enumerate(entries):
    fidx = int(e["func"])
    typ = e["type"]
    meth = e["method"]
    if fidx in done:
        continue
    rec = {"v": CACHE_VERSION, "func": fidx, "type": typ, "method": meth}
    try:
        addr = WasmLoader.getFunctionAddress(af, module, fidx)
        f = fm.getFunctionAt(addr)
        if f is None:
            f = fm.getFunctionContaining(addr)
        if f is None:
            rec["status"] = "missing"
            rec["why"] = "no function at %s" % addr
            rec["addr"] = str(addr)
            missing.append(rec)
            write_cache(rec)
            continue
        res = di.decompileFunction(f, TIMEOUT_SEC, mon)
        c = res.getDecompiledFunction().getC() if (res and res.getDecompiledFunction()) else None
        if c is None:
            # one retry with a longer budget (timeouts can be transient)
            res = di.decompileFunction(f, TIMEOUT_SEC * 2, mon)
            c = res.getDecompiledFunction().getC() if (res and res.getDecompiledFunction()) else None
        if c is None:
            rec["status"] = "failed"
            rec["why"] = "decompile failed: %s" % (res.getErrorMessage() if res else "no result")
            rec["addr"] = str(addr)
            failed.append(rec)
            write_cache(rec)
            continue
        rec["status"] = "ok"
        rec["addr"] = str(addr)
        rec["ghidra_name"] = f.getName(True)
        rec["c"] = c
        done[fidx] = rec
        write_cache(rec)
    except Exception as ex:
        rec["status"] = "failed"
        rec["why"] = "exception: %s" % ex
        failed.append(rec)
        write_cache(rec)
        log("EXPORT_EXC idx=%d %s" % (fidx, traceback.format_exc()))

    n = len(done) + len(missing) + len(failed)
    if n % CHECKPOINT_INTERVAL == 0:
        write_summary(complete=False)
        log("EXPORT_PROGRESS ok=%d missing=%d failed=%d / %d elapsed=%.1fs"
            % (len(done), len(missing), len(failed), len(entries), time.time() - t0))

if cache_fh is not None:
    cache_fh.close()

summary = write_summary(complete=True)
log("EXPORT_DONE decompiled=%d types=%d missing=%d failed=%d elapsed=%.1fs"
    % (summary["decompiled"], summary["types"], len(missing), len(failed), time.time() - t0))
