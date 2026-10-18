// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: RainEffect  (Assembly-CSharp)  -  2 function(s)

// ---- RainEffect::Start   [wasm func87052 -> ram:81a4ffaf ; ghidra: RainEffect::Start]

void RainEffect__Start(int param_1)

{
  int iVar1;
  
  if (cRam00664aeb == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam00664aeb = '\x01';
  }
  iVar1 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = System_Threading_Monitor__Enter_1(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = System_Threading_Monitor__Enter_1(iVar1);
  }
  SoundEffectManager__PlaySoundEffect
            (**(undefined4 **)(iVar1 + 0x5c),*(undefined4 *)(param_1 + 0x14),0);
  return;
}



// ---- RainEffect::ctor   [wasm func87053 -> ram:81a5001d ; ghidra: RainEffect::.ctor]

void RainEffect___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664aec == '\0') {
    unnamed_function_1099(0x567e14);
    unnamed_function_1099(0x567e18);
    unnamed_function_1099(0x567e20);
    unnamed_function_1099(0x567e7c);
    unnamed_function_1099(0x567e84);
    unnamed_function_1099(0x567e8c);
    unnamed_function_1099(0x567e9c);
    unnamed_function_1099(0x567e98);
    unnamed_function_1099(0x567ea4);
    unnamed_function_1099(0x567ed0);
    unnamed_function_1099(0x567efc);
    unnamed_function_1099(0x567f24);
    cRam00664aec = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e9c);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e8c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567efc);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e98);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e84);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f24);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ea4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ed0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e7c);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e20);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



