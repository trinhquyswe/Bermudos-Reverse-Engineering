// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnemyManagerData  (Assembly-CSharp)  -  1 function(s)

// ---- EnemyManagerData::ctor   [wasm func87089 -> ram:81a527ee ; ghidra: EnemyManagerData::.ctor]

void EnemyManagerData___ctor(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (cRam00664aff == '\0') {
    unnamed_function_1099(0x562b4c);
    cRam00664aff = '\x01';
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = iRam00562b4c;
      iVar2 = *(int *)(param_1 + 0x10);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      uVar3 = *(uint *)(iVar2 + 0xc);
      iVar4 = *(int *)(iVar2 + 8);
      if (param_2 == iVar5) {
        if (uVar3 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar3 + 1;
          *(undefined1 *)(uVar3 + iVar4 + 0x10) = 0;
        }
        else {
          unnamed_function_9759
                    (iVar2,0,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
        }
      }
      else if (uVar3 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar3 + 1;
        *(undefined1 *)(uVar3 + iVar4 + 0x10) = 1;
      }
      else {
        unnamed_function_9759
                  (iVar2,1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xc));
  }
  return;
}



