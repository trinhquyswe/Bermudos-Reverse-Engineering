// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: ReceiveDamageAction  (Assembly-CSharp)  -  3 function(s)

// ---- ReceiveDamageAction::ctor   [wasm func86981 -> ram:81a4d6ad ; ghidra: ReceiveDamageAction::.ctor]

void ReceiveDamageAction___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ace == '\0') {
    unnamed_function_1099(0x55fd50);
    unnamed_function_1099(0x56cec0);
    cRam00664ace = '\x01';
  }
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0xb,*(undefined4 *)(param_1 + 0x68),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0,*(undefined4 *)(param_1 + 0x3c),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),1,*(undefined4 *)(param_1 + 0x40),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),2,*(undefined4 *)(param_1 + 0x44),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),3,*(undefined4 *)(param_1 + 0x48),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),4,*(undefined4 *)(param_1 + 0x4c),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),5,*(undefined4 *)(param_1 + 0x50),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),6,*(undefined4 *)(param_1 + 0x54),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),7,*(undefined4 *)(param_1 + 0x58),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),8,*(undefined4 *)(param_1 + 0x5c),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),9,*(undefined4 *)(param_1 + 0x60),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),10,*(undefined4 *)(param_1 + 100),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0xc,*(undefined4 *)(param_1 + 0x6c),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0xd,*(undefined4 *)(param_1 + 0x70),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0xe,*(undefined4 *)(param_1 + 0x74),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0xf,*(undefined4 *)(param_1 + 0x78),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x10,*(undefined4 *)(param_1 + 0x7c),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x11,*(undefined4 *)(param_1 + 0x80),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x12,*(undefined4 *)(param_1 + 0x84),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x13,*(undefined4 *)(param_1 + 0x88),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x14,*(undefined4 *)(param_1 + 0x8c),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x15,*(undefined4 *)(param_1 + 0x90),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x16,*(undefined4 *)(param_1 + 0x94),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x17,*(undefined4 *)(param_1 + 0x98),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x18,*(undefined4 *)(param_1 + 0x9c),uRam0055fd50);
  unnamed_function_77427
            (*(undefined4 *)(param_1 + 0xa4),0x19,*(undefined4 *)(param_1 + 0xa0),uRam0055fd50);
  uVar1 = TMPro_TMPro_ExtensionMethods__FindInstanceID(param_1,uRam0056cec0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}



// ---- ReceiveDamageAction::OnAwake   [wasm func87000 -> ram:81a4e010 ; ghidra: ReceiveDamageAction::OnAwake]

void ReceiveDamageAction__OnAwake(int param_1)

{
  if (cRam00664acc == '\0') {
    unnamed_function_1099(0x565d04);
    cRam00664acc = '\x01';
  }
  UnityEngine_MonoBehaviour__StopCoroutine_2(*(undefined4 *)(param_1 + 0x30),0);
  UnityEngine_MonoBehaviour__StopCoroutine_2(*(undefined4 *)(param_1 + 0x34),0);
  *(undefined1 *)(param_1 + 0x38) = 1;
  unnamed_function_61227
            (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c),
             uRam00565d04);
  return;
}



// ---- ReceiveDamageAction::OnStart   [wasm func87001 -> ram:81a4e068 ; ghidra: ReceiveDamageAction::OnStart]

undefined4 ReceiveDamageAction__OnStart(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [12];
  float fStack_44;
  
  if (cRam00664acd == '\0') {
    unnamed_function_1099(0x565d00);
    unnamed_function_1099(0x565d04);
    cRam00664acd = '\x01';
  }
  if ((*(float *)(*(int *)(param_1 + 0x40) + 0x18) <= 0.0) &&
     (fVar1 = (float)unnamed_function_61226(*(undefined4 *)(param_1 + 0x3c),uRam00565d00),
     0.0 < fVar1)) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    fVar1 = (float)unnamed_function_61226(uVar3,uRam00565d00);
    fVar2 = (float)UnityEngine_Time__get_time(0);
    unnamed_function_61227(uVar3,fVar1 - fVar2,uRam00565d04);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    UnityEngine_Animator__GetAnimatorStateInfo(auStack_50,*(undefined4 *)(param_1 + 0x2c),0,0);
    uVar3 = 3;
    if (1.0 <= fStack_44) {
      uVar3 = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 3;
  }
  return uVar3;
}



