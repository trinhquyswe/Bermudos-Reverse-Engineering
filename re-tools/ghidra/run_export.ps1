param(
  [switch]$FullAnalysis
)
# Run the Ghidra/PyGhidra decompilation of the Assembly-CSharp game functions.
#
#   .\run_export.ps1                # default: import + targeted pre-analysis (recommended)
#   .\run_export.ps1 -FullAnalysis   # import + full auto-analysis of every function (hours)
#
# IMPORTANT: every pyghidra option MUST appear BEFORE the two positionals
# (binary, script). pyghidra's parser assigns all trailing tokens after the
# script path to the script's own args, so options placed there are silently
# ignored (this previously caused an accidental full analysis of ~117k funcs).
#
# Two-stage design:
#   1. Import with --skip-analysis is fast (~40 s) yet already creates all ~118k
#      wasm functions with their recovered IL2CPP names.
#   2. export_asmcs.py then runs the plugin's WasmPreAnalyzer over ONLY the 734
#      target functions. That analyzer is what commits the per-address context
#      (operand sizes, branch targets, C stack pointer) the wasm disassembler
#      needs; without it the decompiler emits halt_baddata() stubs.
# PyGhidra reuses an already-imported program when the project path+name and
# binary all match, which skips stage 1 on later runs.
#
# Writes (under $d): export.log, export_summary.json, export_cache.jsonl
# The cache makes the run resumable: re-running skips already-decompiled funcs.
$ErrorActionPreference = 'Continue'
$env:GHIDRA_INSTALL_DIR = 'C:\Users\usopp\tools\ghidra_12.1.4'
$env:PYTHONUNBUFFERED    = '1'
$d    = 'C:\Users\usopp\AppData\Local\Temp\opencode\ghidra-bermudos'
$repo = 'C:\Users\usopp\Downloads\webgl1\webgl'
$wasm = "$repo\Decompiled\build.named.wasm"
$script = "$repo\re-tools\ghidra\export_asmcs.py"
$idx  = "$repo\re-tools\ghidra\asmcs_index.json"
$out  = "$repo\Decompiled\C\Assembly-CSharp"
$sum  = "$d\export_summary.json"
$cache = "$d\export_cache.jsonl"

$projName = 'bermudos'
$modeArgs = @('--skip-analysis')
if ($FullAnalysis) { $modeArgs = @(); $projName = 'bermudos-full' }

New-Item -ItemType Directory -Force -Path "$d\proj" | Out-Null
Remove-Item $sum -ErrorAction SilentlyContinue

$sw = [System.Diagnostics.Stopwatch]::StartNew()
pyghidra --project-path "$d\proj" --project-name $projName -X mx7g @modeArgs `
  $wasm $script $idx $out $sum $cache 2>&1 | Tee-Object -FilePath "$d\export.log"
$sw.Stop()
"EXPORT_EXIT=$LASTEXITCODE elapsed_min=$([math]::Round($sw.Elapsed.TotalMinutes,1)) full_analysis=$FullAnalysis" |
  Tee-Object -FilePath "$d\export.log" -Append

# Guard against the arg-order pitfall: if the script never ran, no summary exists.
if (-not (Test-Path $sum)) {
  "WARNING: $sum was not produced - check that pyghidra options precede the positionals." |
    Tee-Object -FilePath "$d\export.log" -Append
}
