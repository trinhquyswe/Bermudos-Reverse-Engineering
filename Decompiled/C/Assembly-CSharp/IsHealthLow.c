// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: IsHealthLow  (Assembly-CSharp)  -  4 function(s)

// ---- IsHealthLow::OnAwake   [wasm func86988 -> ram:81a4dd62 ; ghidra: IsHealthLow::OnAwake]

undefined4 IsHealthLow__OnAwake(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(float *)(param_1 + 0x2c) * (float)*(int *)(*(int *)(param_1 + 0x30) + 0x14) <
      (float)*(int *)(*(int *)(param_1 + 0x30) + 0x10)) {
    uVar1 = 1;
  }
  return uVar1;
}



// ---- IsHealthLow::OnUpdate   [wasm func86989 -> ram:81a4dd82 ; ghidra: IsHealthLow::OnUpdate]

void IsHealthLow__OnUpdate(int param_1)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



// ---- IsHealthLow::OnEnd   [wasm func86990 -> ram:81a4dda0 ; ghidra: IsHealthLow::OnEnd]

void IsHealthLow__OnEnd(int param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f000000;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool___cctor(param_1,0);
  return;
}



// ---- IsHealthLow::ctor   [wasm func86991 -> ram:81a4ddbe ; ghidra: IsHealthLow::.ctor]

void IsHealthLow___ctor(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (cRam00664ac8 == '\0') {
    unnamed_function_1099(0x557acc);
    unnamed_function_1099(0x56a7b4);
    unnamed_function_1099(0x56ced8);
    cRam00664ac8 = '\x01';
  }
  iVar5 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056ced8);
  *(int *)(param_1 + 0x2c) = iVar5;
  uVar6 = unnamed_function_95402(uRam00557acc);
  unnamed_function_60334(uVar6,param_1,uRam0056a7b4,0);
  if (cRam00664b3f == '\0') {
    unnamed_function_1099(0x557acc);
    cRam00664b3f = '\x01';
  }
  iVar3 = *(int *)(iVar5 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar7 = unnamed_function_85158(iVar3,uVar6,0);
    uVar2 = uRam00557acc;
    if ((iVar7 != 0) && (iVar4 = unnamed_function_1112(iVar7,uRam00557acc), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar5 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar7,uVar2);
  do {
    halt_trap();
  } while( true );
}



