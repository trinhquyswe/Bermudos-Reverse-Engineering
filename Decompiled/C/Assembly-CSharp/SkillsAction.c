// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: SkillsAction  (Assembly-CSharp)  -  5 function(s)

// ---- SkillsAction::OnEnd   [wasm func86984 -> ram:81a4d9cd ; ghidra: SkillsAction::OnEnd]

void SkillsAction__OnEnd(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ad0 == '\0') {
    unnamed_function_1099(0x55fd4c);
    unnamed_function_1099(0x557e30);
    unnamed_function_1099(0x57c60c);
    unnamed_function_1099(0x574ca0);
    unnamed_function_1099(0x579368);
    unnamed_function_1099(0x57b5e4);
    unnamed_function_1099(0x574578);
    unnamed_function_1099(0x57290c);
    unnamed_function_1099(0x57b5dc);
    unnamed_function_1099(0x57ca18);
    unnamed_function_1099(0x57d270);
    unnamed_function_1099(0x574e68);
    unnamed_function_1099(0x57d274);
    unnamed_function_1099(0x57665c);
    unnamed_function_1099(0x57c610);
    unnamed_function_1099(0x57ca14);
    unnamed_function_1099(0x57b5e0);
    unnamed_function_1099(0x576658);
    unnamed_function_1099(0x574574);
    unnamed_function_1099(0x57d28c);
    unnamed_function_1099(0x57b5e8);
    unnamed_function_1099(0x574c9c);
    unnamed_function_1099(0x579364);
    unnamed_function_1099(0x57d470);
    unnamed_function_1099(0x574e64);
    unnamed_function_1099(0x572910);
    unnamed_function_1099(0x57d288);
    unnamed_function_1099(0x57d474);
    cRam00664ad0 = '\x01';
  }
  uVar1 = UnityEngine_Animator__HasState(uRam00574e64,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057ca14,0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00576658,0);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057b5dc,0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057b5e4,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00574c9c,0);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00574574,0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057290c,0);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00579364,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057d470,0);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057c60c,0);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057d270,0);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057d288,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00574e68,0);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057ca18,0);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057665c,0);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057b5e0,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057b5e8,0);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00574ca0,0);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00574578,0);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00572910,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam00579368,0);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057d474,0);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057c610,0);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057d274,0);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = UnityEngine_Animator__HasState(uRam0057d28c,0);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar1 = unnamed_function_95402(uRam00557e30);
  unnamed_function_77380(uVar1,uRam0055fd4c);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool___cctor(param_1,0);
  return;
}



// ---- SkillsAction::OnAwake   [wasm func87002 -> ram:81a4e16c ; ghidra: SkillsAction::OnAwake]

void SkillsAction__OnAwake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664acf == '\0') {
    unnamed_function_1099(0x55fd54);
    cRam00664acf = '\x01';
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar1 = unnamed_function_77425
                    (*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x30),uRam0055fd54);
  multiple_2_UnityEngine_Animator__SetTrigger(uVar2,uVar1,0);
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// ---- SkillsAction::OnStart   [wasm func87003 -> ram:81a4e1b6 ; ghidra: SkillsAction::OnStart]

undefined4 SkillsAction__OnStart(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)((ulonglong)*(uint *)(*param_1 + 0x1b8) * 4))
                    (param_1,param_1[0xd],*(undefined4 *)(*param_1 + 0x1bc));
  return uVar1;
}



// ---- SkillsAction::OnUpdate   [wasm func87004 -> ram:81a4e1d5 ; ghidra: SkillsAction::OnUpdate]

undefined4 SkillsAction__OnUpdate(int param_1,float param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [12];
  float fStack_44;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    UnityEngine_Animator__GetAnimatorStateInfo(auStack_50,*(undefined4 *)(param_1 + 0x2c),0,0);
    uVar1 = 3;
    if (param_2 < fStack_44) {
      uVar1 = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar1 = 3;
  }
  return uVar1;
}



// ---- SkillsAction::ctor   [wasm func87005 -> ram:81a4e259 ; ghidra: SkillsAction::.ctor]

void SkillsAction___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ad1 == '\0') {
    unnamed_function_1099(0x56cec0);
    unnamed_function_1099(0x56cecc);
    unnamed_function_1099(0x56ced0);
    unnamed_function_1099(0x56cedc);
    unnamed_function_1099(0x56cee8);
    unnamed_function_1099(0x56ceec);
    cRam00664ad1 = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cec0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee8);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cedc);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056ceec);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056ced0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cecc);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return;
}



