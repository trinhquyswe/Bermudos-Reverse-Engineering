// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: AmmoHitEffect  (Assembly-CSharp)  -  2 function(s)

// ---- AmmoHitEffect::Awake   [wasm func86845 -> ram:81a476fc ; ghidra: AmmoHitEffect::Awake]

void AmmoHitEffect__Awake(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = *(undefined4 *)(param_1 + 0x10);
  uStack_40 = param_2[1];
  uStack_48 = *param_2;
  multiple_2_UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&uStack_38,&uStack_48,0);
  uStack_50 = uStack_10;
  uStack_58 = uStack_18;
  uStack_60 = uStack_20;
  uStack_68 = uStack_28;
  uStack_70 = uStack_30;
  uStack_78 = uStack_38;
  multiple_2_UnityEngine_ParticleSystem_MainModule__set_startRotation(auStack_8,&uStack_78,0);
  uVar1 = unnamed_function_44644(param_1,0);
  unnamed_function_44686(uVar1,1,0);
  return;
}



// ---- AmmoHitEffect::ctor   [wasm func86849 -> ram:81a47836 ; ghidra: AmmoHitEffect::.ctor]

void AmmoHitEffect___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664a6d == '\0') {
    unnamed_function_1099(0x567e08);
    cRam00664a6d = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e08);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



