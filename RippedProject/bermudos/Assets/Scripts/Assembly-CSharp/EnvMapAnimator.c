// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnvMapAnimator  (Assembly-CSharp)  -  4 function(s)

// ---- EnvMapAnimator::Awake   [wasm func86177 -> ram:81a237e3 ; ghidra: EnvMapAnimator::Awake]

int EnvMapAnimator__Awake(undefined4 param_1)

{
  int iVar1;
  
  if (cRam00664845 == '\0') {
    unnamed_function_1099(0x55ddfc);
    cRam00664845 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055ddfc);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- EnvMapAnimator::Start_d_4_System_IDisposable_Dispose   [wasm func86178 -> ram:81a23821 ; ghidra: EnvMapAnimator+<Start>d__4::System.IDisposable.Dispose]

undefined4 EnvMapAnimator_<Start>d__4__System_IDisposable_Dispose(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (cRam00664846 == '\0') {
    unnamed_function_1099(0x579bc4);
    cRam00664846 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  if (cRam00664829 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00664829 = '\x01';
  }
  uStack_18 = *(undefined4 *)(*(undefined8 **)(iRam0055d048 + 0x5c) + 1);
  uStack_20 = **(undefined8 **)(iRam0055d048 + 0x5c);
  fVar1 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0);
  fVar5 = *(float *)(iVar4 + 0x10);
  fVar2 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0);
  fVar6 = *(float *)(iVar4 + 0x14);
  fVar3 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0);
  fStack_38 = fVar3 * *(float *)(iVar4 + 0x18) * 0.017453292;
  fStack_c = fVar2 * fVar6 * 0.017453292;
  fStack_10 = fVar1 * fVar5 * 0.017453292;
  uStack_40 = CONCAT44(fStack_c,fStack_10);
  fStack_8 = fStack_38;
  unnamed_function_8664(&uStack_30,&uStack_40,0);
  if (cRam00662a53 == '\0') {
    unnamed_function_1099(0x55d048);
    cRam00662a53 = '\x01';
  }
  uStack_48 = uStack_18;
  uStack_58 = uStack_28;
  uStack_50 = uStack_20;
  uStack_60 = uStack_30;
  uStack_68 = *(undefined4 *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
  uStack_70 = *(undefined8 *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
  UnityEngine_Matrix4x4__get_decomposeProjection
            ((undefined8 *)(param_1 + 0x14),&uStack_50,&uStack_60,&uStack_70,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_a0 = *(undefined8 *)(param_1 + 0x24);
  uStack_98 = *(undefined8 *)(param_1 + 0x2c);
  uStack_90 = *(undefined8 *)(param_1 + 0x34);
  uStack_88 = *(undefined8 *)(param_1 + 0x3c);
  uStack_80 = *(undefined8 *)(param_1 + 0x44);
  uStack_78 = *(undefined8 *)(param_1 + 0x4c);
  uStack_b0 = *(undefined8 *)(param_1 + 0x14);
  UnityEngine_Material__SetVector_1(*(undefined4 *)(iVar4 + 0x20),uRam00579bc4,&uStack_b0,0);
  *(undefined8 *)(param_1 + 8) = 1;
  return 1;
}



// ---- EnvMapAnimator::Start_d_4_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86179 -> ram:81a23a83 ; ghidra: EnvMapAnimator+<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void EnvMapAnimator_<Start>d__4__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f158);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- EnvMapAnimator::Start_d_4_System_Collections_IEnumerator_get_Current   [wasm func86180 -> ram:81a23aab ; ghidra: EnvMapAnimator+<Start>d__4::System.Collections.IEnumerator.get_Current]

void EnvMapAnimator_<Start>d__4__System_Collections_IEnumerator_get_Current(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664847 == '\0') {
    unnamed_function_1099(0x5599c4);
    unnamed_function_1099(0x57054c);
    unnamed_function_1099(0x570550);
    cRam00664847 = '\x01';
  }
  uVar1 = Mono_Security_ASN1Convert__ToOid(uRam005599c4,0xc361);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1(uVar1,uRam00570550,0);
  uVar2 = Mono_Security_ASN1Convert__ToOid(uRam005599c4,0x988b);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1(uVar2,uRam0057054c,0);
  *(undefined2 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0x2af000002cf;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  return;
}



