// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MeleeSkillAction  (Assembly-CSharp)  -  4 function(s)

// ---- MeleeSkillAction::OnAwake   [wasm func86996 -> ram:81a4defc ; ghidra: MeleeSkillAction::OnAwake]

void MeleeSkillAction__OnAwake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664aca == '\0') {
    unnamed_function_1099(0x55fd54);
    cRam00664aca = '\x01';
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uVar1 = unnamed_function_77425
                    (*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x30),uRam0055fd54);
  MeleeSkills__DealDamage(uVar2,uVar1,0);
  return;
}



// ---- MeleeSkillAction::OnStart   [wasm func86997 -> ram:81a4df47 ; ghidra: MeleeSkillAction::OnStart]

undefined4 MeleeSkillAction__OnStart(int *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1[0x2a] + 0x4c) != '\0') {
    uVar1 = (**(code **)((ulonglong)*(uint *)(*param_1 + 0x1b8) * 4))
                      (param_1,param_1[0xd],*(undefined4 *)(*param_1 + 0x1bc));
    return uVar1;
  }
  return 3;
}



// ---- MeleeSkillAction::OnUpdate   [wasm func86998 -> ram:81a4df75 ; ghidra: MeleeSkillAction::OnUpdate]

void MeleeSkillAction__OnUpdate(int param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xa8) + 0x4c) = 0;
  return;
}



// ---- MeleeSkillAction::ctor   [wasm func86999 -> ram:81a4df8b ; ghidra: MeleeSkillAction::.ctor]

void MeleeSkillAction___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664acb == '\0') {
    unnamed_function_1099(0x56cec0);
    unnamed_function_1099(0x56cedc);
    unnamed_function_1099(0x56cee0);
    unnamed_function_1099(0x56cee4);
    cRam00664acb = '\x01';
  }
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cec0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cee4);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cedc);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}



