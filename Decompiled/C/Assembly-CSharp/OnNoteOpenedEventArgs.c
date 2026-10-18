// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: OnNoteOpenedEventArgs  (Assembly-CSharp)  -  1 function(s)

// ---- OnNoteOpenedEventArgs::ctor   [wasm func86156 -> ram:81a224b5 ; ghidra: OnNoteOpenedEventArgs::.ctor]

int OnNoteOpenedEventArgs___ctor(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (cRam00664836 == '\0') {
    unnamed_function_1099(0x55a9bc);
    unnamed_function_1099(0x570ddc);
    unnamed_function_1099(0x570a3c);
    cRam00664836 = '\x01';
  }
  iVar1 = multiple_2_System_String__Equals(param_3,uRam00570a3c,0);
  if (iVar1 != 0) {
    piVar2 = (int *)UnityEngine_TextCore_Text_FontAsset__LoadFontFace(param_1,0);
    uVar3 = (**(code **)((ulonglong)*(uint *)(*piVar2 + 0xd8) * 4))
                      (piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    uVar3 = unnamed_function_81504(param_2,uRam00570ddc,uVar3,0);
    if (*(int *)(iRam0055a9bc + 0x74) == 0) {
      unnamed_function_94848(iRam0055a9bc);
    }
    UnityEngine_InputSystem_Layouts_InputControlLayout_Collection__TryLoadLayout(uVar3,0);
  }
  return iVar1;
}



