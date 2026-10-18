// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: RangedSkills  (Assembly-CSharp)  -  15 function(s)

// ---- RangedSkills::Awake   [wasm func86627 -> ram:81a400d6 ; ghidra: RangedSkills::Awake]

int RangedSkills__Awake(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  float fStack_8;
  
  if (cRam00664962 == '\0') {
    unnamed_function_1099(0x559d94);
    cRam00664962 = '\x01';
  }
  iVar2 = Mono_Security_ASN1Convert__ToOid(uRam00559d94,0xf);
  if (cRam00661a14 == '\0') {
    unnamed_function_1099(0x55d024);
    cRam00661a14 = '\x01';
  }
  uVar4 = *(undefined8 *)(*(int *)(iRam0055d024 + 0x5c) + 0x28);
  fVar3 = (float)((ulonglong)uVar4 >> 0x20) * 30.0;
  fVar5 = (float)uVar4 * 30.0;
  *(ulonglong *)(iVar2 + 0x10) = CONCAT44(fVar3,fVar5);
  iVar1 = 1;
  do {
    fStack_38 = (float)(iVar1 * 0x18) * 0.017453292;
    uStack_40 = 0;
    uStack_10 = 0;
    fStack_8 = fStack_38;
    unnamed_function_8664(&uStack_20,&uStack_40,0);
    uStack_28 = 0;
    uStack_58 = 0;
    uStack_48 = uStack_18;
    uStack_50 = uStack_20;
    uStack_60 = CONCAT44(fVar3,fVar5);
    fStack_30 = fVar5;
    fStack_2c = fVar3;
    UnityEngine_Quaternion__op_Multiply(&uStack_10,&uStack_50,&uStack_60,0);
    *(undefined8 *)(iVar2 + iVar1 * 8 + 0x10) = uStack_10;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xf);
  return iVar2;
}



// ---- RangedSkills::Get15ShootDirections   [wasm func86628 -> ram:81a40222 ; ghidra: RangedSkills::Get15ShootDirections]

void RangedSkills__Get15ShootDirections(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  float fStack_38;
  undefined1 auStack_30 [8];
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar7 = 0;
  iVar4 = RangedSkills__Awake(&uStack_40,&uStack_40);
  if (0 < *(int *)(iVar4 + 0xc)) {
    do {
      uVar5 = System_Linq_Enumerable__Count(param_1,0);
      UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar5,0);
      fVar3 = fStack_8;
      fVar2 = fStack_c;
      fVar1 = fStack_10;
      uVar8 = *(undefined8 *)(iVar4 + iVar7 * 8 + 0x10);
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = System_Linq_Enumerable__Count(param_1,0);
      UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar5,0);
      fStack_38 = fVar3 + 0.0;
      fStack_28 = fStack_8;
      fStack_20 = fVar1 + (float)uVar8;
      fStack_1c = fVar2 + (float)((ulonglong)uVar8 >> 0x20);
      uStack_40 = CONCAT44(fStack_1c,fStack_20);
      fStack_18 = fStack_38;
      unnamed_function_86626(&uStack_40,uVar6,auStack_30,&uStack_40,&uStack_40);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar4 + 0xc));
  }
  return;
}



// ---- RangedSkills::BaseShoot   [wasm func86629 -> ram:81a40316 ; ghidra: RangedSkills::BaseShoot]

void RangedSkills__BaseShoot(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  float fStack_8;
  
  if (cRam00664963 == '\0') {
    unnamed_function_1099(0x569a58);
    unnamed_function_1099(0x56b548);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x565d78);
    cRam00664963 = '\x01';
  }
  iVar5 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  uVar2 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar5 + 0x5c) + 0x10),0);
  UnityEngine_Camera__get_farClipPlane(&uStack_20,uVar2,0);
  fVar1 = uStack_20._4_4_;
  fVar3 = (float)uStack_20;
  uVar2 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&uStack_20,uVar2,0);
  fVar3 = (float)unnamed_function_12077(fVar1 - uStack_20._4_4_,fVar3 - (float)uStack_20);
  fStack_38 = (fVar3 * 57.29578 + 90.0) * 0.017453292;
  uStack_40 = 0;
  uStack_10 = 0;
  fStack_8 = fStack_38;
  unnamed_function_8664(&uStack_30,&uStack_40,0);
  uStack_18 = uStack_28;
  uStack_20 = uStack_30;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  UnityEngine_Camera__get_farClipPlane(&uStack_10,*(undefined4 *)(param_1 + 0x14),0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  fStack_48 = fStack_8;
  uStack_58 = uStack_18;
  uStack_50 = uStack_10;
  uStack_60 = uStack_20;
  uVar2 = unnamed_function_86418(uVar2,&uStack_50,&uStack_60,uRam0056b548);
  iVar5 = UnityEngine_Object__set_name(uVar2,uRam00569a58);
  *(undefined4 *)(iVar5 + 0x2c) = 0x40600000;
  uVar2 = UnityEngine_GameObject__AddComponent(uVar2,0);
  uVar4 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Transform__get_parent(uVar2,uVar4,0);
  return;
}



// ---- RangedSkills::EyeAttack   [wasm func86630 -> ram:81a404df ; ghidra: RangedSkills::EyeAttack]

void RangedSkills__EyeAttack(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (cRam00664964 == '\0') {
    unnamed_function_1099(0x55e6b4);
    cRam00664964 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e6b4);
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  return;
}



// ---- RangedSkills::StartEyeLoop   [wasm func86631 -> ram:81a40533 ; ghidra: RangedSkills::StartEyeLoop]

int RangedSkills__StartEyeLoop(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (cRam00664964 == '\0') {
    unnamed_function_1099(0x55e6b4);
    cRam00664964 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e6b4);
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- RangedSkills::EyeLoop   [wasm func86632 -> ram:81a4057f ; ghidra: RangedSkills::EyeLoop]

void RangedSkills__EyeLoop(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int iStack_30;
  undefined8 *puStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (cRam00664965 == '\0') {
    unnamed_function_1099(0x5615cc);
    unnamed_function_1099(0x5615d0);
    unnamed_function_1099(0x5615d4);
    unnamed_function_1099(0x564134);
    cRam00664965 = '\x01';
  }
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_18 = 0;
  uVar1 = RangedSkills__OpenMouth(param_1,&uStack_70);
  unnamed_function_5249(&uStack_18,uVar1,uRam00564134);
  iStack_30 = 0;
  puStack_2c = &uStack_18;
  while( true ) {
    iRam005ddf34 = 0;
    iVar2 = import::env::invoke_iii(0x3666,&uStack_18,uRam005615d0);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 == 1) {
      uVar1 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a40758;
    }
    if (iVar2 == 0) {
      iRam005ddf34 = 0;
      return;
    }
    uStack_20 = uStack_4;
    uStack_28 = CONCAT44(uStack_8,uStack_c);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    iRam005ddf34 = 0;
    import::env::invoke_viii(0x8e7,&uStack_40,*(undefined4 *)(param_1 + 0x14),0);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 == 1) break;
    uStack_48 = uStack_38;
    uStack_58 = uStack_38;
    uStack_68 = uStack_20;
    uStack_50 = uStack_40;
    iRam005ddf34 = 0;
    uStack_60 = uStack_40;
    uStack_70 = uStack_28;
    import::env::invoke_viiiii(0x3667,&uStack_70,uVar1,&uStack_60,&uStack_70,&uStack_70);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar3 == 1) {
      uVar1 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a40758:
      iVar3 = import::env::getTempRet0();
      iVar2 = import::env::llvm_eh_typeid_for(0x4a99ec);
      if (iVar3 == iVar2) {
        piVar4 = (int *)import::env::__cxa_begin_catch(uVar1);
        iVar2 = *piVar4;
        iRam005ddf34 = 0;
        iStack_30 = iVar2;
        import::env::invoke_v(0x3a);
        iVar3 = iRam005ddf34;
        iRam005ddf34 = 0;
        if (iVar3 != 1) {
          if (iVar2 == 0) {
            iRam005ddf34 = 0;
            return;
          }
          System_Net_CommandStream__ReceiveCommandResponseCallback(iVar2);
          do {
            halt_trap();
          } while( true );
        }
        uVar1 = import::env::__cxa_find_matching_catch_2();
        import::env::getTempRet0();
      }
      iRam005ddf34 = 0;
      import::env::invoke_ii(0x3668,&iStack_30);
      iVar3 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar3 != 1) {
        import::env::__resumeException(uVar1);
        do {
          halt_trap();
        } while( true );
      }
      import::env::__cxa_find_matching_catch_3(0);
      import::env::getTempRet0();
      unnamed_function_642();
      do {
        halt_trap();
      } while( true );
    }
  }
  uVar1 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
  goto code_r0x81a40758;
}



// ---- RangedSkills::OpenMouth   [wasm func86633 -> ram:81a4080c ; ghidra: RangedSkills::OpenMouth]

int RangedSkills__OpenMouth(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  iVar6 = 0;
  if (cRam00664966 == '\0') {
    unnamed_function_1099(0x564128);
    unnamed_function_1099(0x564120);
    unnamed_function_1099(0x5591e0);
    unnamed_function_1099(0x565d78);
    cRam00664966 = '\x01';
  }
  iVar7 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 8);
  if ((*(byte *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = System_Threading_Monitor__Enter_1(iVar7);
  }
  uVar3 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar7 + 0x5c) + 0x10),0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
  fVar4 = fStack_c;
  fVar8 = fStack_10;
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
  fVar2 = fStack_c;
  fVar1 = fStack_10;
  iVar7 = unnamed_function_95402(uRam005591e0);
  multiple_2_System_Collections_Generic_List_1___cctor(iVar7,uRam00564120);
  fVar4 = fVar4 - fVar2;
  fVar8 = fVar8 - fVar1;
  if (ABS(fVar4) < ABS(fVar8)) {
    if (0 < *(int *)(*(int *)(param_1 + 0x24) + 0xc)) {
      do {
        iVar9 = *(int *)(iRam00565d78 + 0x10);
        if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = System_Threading_Monitor__Enter_1(iVar9);
        }
        iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 8);
        if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = System_Threading_Monitor__Enter_1(iVar9);
        }
        uVar3 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar9 + 0x5c) + 0x10),0);
        UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
        iVar9 = iRam00564128;
        uStack_8 = 0;
        fStack_10 = fVar8 + fStack_10;
        fStack_c = fStack_c + fVar4 + *(float *)(*(int *)(param_1 + 0x24) + iVar6 * 4 + 0x10);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        uVar5 = *(uint *)(iVar7 + 0xc);
        if (uVar5 < *(uint *)(*(int *)(iVar7 + 8) + 0xc)) {
          *(uint *)(iVar7 + 0xc) = uVar5 + 1;
          iVar9 = *(int *)(iVar7 + 8) + uVar5 * 0xc;
          *(undefined4 *)(iVar9 + 0x18) = 0;
          *(ulonglong *)(iVar9 + 0x10) = CONCAT44(fStack_c,fStack_10);
        }
        else {
          uStack_28 = 0;
          uStack_30 = CONCAT44(fStack_c,fStack_10);
          unnamed_function_5234
                    (iVar7,&uStack_30,
                     *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(*(int *)(param_1 + 0x24) + 0xc));
    }
  }
  else if ((ABS(fVar8) < ABS(fVar4)) && (0 < *(int *)(*(int *)(param_1 + 0x24) + 0xc))) {
    do {
      iVar9 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = System_Threading_Monitor__Enter_1(iVar9);
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 8);
      if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = System_Threading_Monitor__Enter_1(iVar9);
      }
      uVar3 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar9 + 0x5c) + 0x10),0);
      UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
      iVar9 = iRam00564128;
      uStack_8 = 0;
      fStack_c = fVar4 + fStack_c;
      fStack_10 = fStack_10 + fVar8 + *(float *)(*(int *)(param_1 + 0x24) + iVar6 * 4 + 0x10);
      *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
      uVar5 = *(uint *)(iVar7 + 0xc);
      if (uVar5 < *(uint *)(*(int *)(iVar7 + 8) + 0xc)) {
        *(uint *)(iVar7 + 0xc) = uVar5 + 1;
        iVar9 = *(int *)(iVar7 + 8) + uVar5 * 0xc;
        *(undefined4 *)(iVar9 + 0x18) = 0;
        *(ulonglong *)(iVar9 + 0x10) = CONCAT44(fStack_c,fStack_10);
      }
      else {
        uStack_18 = 0;
        uStack_20 = CONCAT44(fStack_c,fStack_10);
        unnamed_function_5234
                  (iVar7,&uStack_20,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
        ;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*(int *)(param_1 + 0x24) + 0xc));
  }
  return iVar7;
}



// ---- RangedSkills::Shoot   [wasm func86634 -> ram:81a40b88 ; ghidra: RangedSkills::Shoot]

int * RangedSkills__Shoot(int *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  System_Net_CommandStream__ReceiveCommandResponseCallback(*param_1);
  do {
    halt_trap();
  } while( true );
}



// ---- RangedSkills::GetTargetPositionList   [wasm func86635 -> ram:81a40bae ; ghidra: RangedSkills::GetTargetPositionList]

void RangedSkills__GetTargetPositionList(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (cRam00664967 == '\0') {
    unnamed_function_1099(0x55e6b8);
    cRam00664967 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e6b8);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  return;
}



// ---- RangedSkills::StartMouthOpenLoopMouth   [wasm func86636 -> ram:81a40c02 ; ghidra: RangedSkills::StartMouthOpenLoopMouth]

int RangedSkills__StartMouthOpenLoopMouth(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (cRam00664967 == '\0') {
    unnamed_function_1099(0x55e6b8);
    cRam00664967 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e6b8);
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  return iVar1;
}



// ---- RangedSkills::EyeLoop_d_11_System_IDisposable_Dispose   [wasm func86637 -> ram:81a40c4e ; ghidra: RangedSkills+<EyeLoop>d__11::System.IDisposable.Dispose]

undefined4 RangedSkills_<EyeLoop>d__11__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar1 = 0;
  if (cRam00664968 == '\0') {
    unnamed_function_1099(0x55d134);
    cRam00664968 = '\x01';
  }
  if (*(uint *)(param_1 + 8) < 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (0.0 < *(float *)(param_1 + 0x14)) {
      RangedSkills__BaseShoot(*(undefined4 *)(param_1 + 0x10),param_1);
      fVar3 = *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - fVar3;
      uVar2 = unnamed_function_95402(uRam0055d134);
      multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar2,fVar3,0);
      uVar1 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
  }
  return uVar1;
}



// ---- RangedSkills::EyeLoop_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86638 -> ram:81a40cdf ; ghidra: RangedSkills+<EyeLoop>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void RangedSkills_<EyeLoop>d__11__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f87c);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- RangedSkills::MouthOpenLoop_d_16_System_IDisposable_Dispose   [wasm func86639 -> ram:81a40d07 ; ghidra: RangedSkills+<MouthOpenLoop>d__16::System.IDisposable.Dispose]

undefined4 RangedSkills_<MouthOpenLoop>d__16__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uVar2 = 0;
  if (cRam00664969 == '\0') {
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x55d134);
    cRam00664969 = '\x01';
  }
  if (*(uint *)(param_1 + 8) < 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (0.0 < *(float *)(param_1 + 0x14)) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18);
      UnityEngine_Camera__get_farClipPlane
                (&uStack_10,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14),0);
      iVar3 = *(int *)(iRam00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = System_Threading_Monitor__Enter_1(iVar3);
      }
      uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
      UnityEngine_Camera__get_farClipPlane(&uStack_20,uVar1,0);
      uStack_28 = uStack_8;
      uStack_38 = uStack_18;
      uStack_30 = uStack_10;
      uStack_40 = uStack_20;
      unnamed_function_86626(param_1,uVar2,&uStack_30,&uStack_40,param_1);
      fVar4 = *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - fVar4;
      uVar1 = unnamed_function_95402(uRam0055d134);
      multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState__get_pressTime(uVar1,fVar4,0);
      uVar2 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0x40a00000;
    }
  }
  return uVar2;
}



// ---- RangedSkills::MouthOpenLoop_d_16_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86640 -> ram:81a40e5a ; ghidra: RangedSkills+<MouthOpenLoop>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void RangedSkills_<MouthOpenLoop>d__16__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f880);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- RangedSkills::MouthOpenLoop_d_16_System_Collections_IEnumerator_get_Current   [wasm func86641 -> ram:81a40e81 ; ghidra: RangedSkills+<MouthOpenLoop>d__16::System.Collections.IEnumerator.get_Current]

void RangedSkills_<MouthOpenLoop>d__16__System_Collections_IEnumerator_get_Current(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066496a == '\0') {
    unnamed_function_1099(0x567ec8);
    cRam0066496a = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567ec8);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



