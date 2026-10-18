# regen.ps1 - rebuild the reconstructed game code from the raw wasm listings and lay it out.
#
#   powershell -File re-tools/regen.ps1 [-Base <ref>]
#
# Steps, in order:
#   1. restore the *raw listing* state of the tree from <Base> (default ae723914, the last commit
#      that carried the per-method wasm disassembly blocks)
#   2. asm2cs_dcmp.js --all   - translate every method body into C# (asm2cs_out.json)
#   3. apply_cs.js            - rewrite the method bodies in place
#   4. layout_tree.js         - move the game scripts into their subsystem folders (layout.json)
#
# Re-running is safe: the result is byte-identical to what is committed.
param([string]$Base = 'ae723914')
$ErrorActionPreference = 'Stop'
$repo = Split-Path -Parent $PSScriptRoot
$tree = 'RippedProject/ExportedProject/Assets/Scripts/Assembly-CSharp'

# worktree only (the index keeps whatever the current commit has).  The clean has to run *first*: the
# files restored from <Base> are not in the index, so a clean afterwards would delete them again.
git -C $repo clean -fdq -- $tree
if ($LASTEXITCODE -ne 0) { throw "git clean failed ($LASTEXITCODE)" }
git -C $repo restore --source=$Base --worktree -- $tree
if ($LASTEXITCODE -ne 0) { throw "git restore --source=$Base failed ($LASTEXITCODE)" }
node (Join-Path $PSScriptRoot 'asm2cs_dcmp.js') --all
if ($LASTEXITCODE -ne 0) { throw "asm2cs_dcmp.js --all failed ($LASTEXITCODE)" }
node (Join-Path $PSScriptRoot 'apply_cs.js')
if ($LASTEXITCODE -ne 0) { throw "apply_cs.js failed ($LASTEXITCODE)" }
node (Join-Path $PSScriptRoot 'layout_tree.js')
if ($LASTEXITCODE -ne 0) { throw "layout_tree.js failed ($LASTEXITCODE)" }
Write-Output "regenerated from $Base."
