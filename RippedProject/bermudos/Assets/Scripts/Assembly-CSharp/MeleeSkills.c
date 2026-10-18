// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: MeleeSkills  (Assembly-CSharp)  -  10 function(s)

// ---- MeleeSkills::Awake   [wasm func86616 -> ram:81a3f5d4 ; ghidra: MeleeSkills::Awake]

void MeleeSkills__Awake(int param_1)

{
  *(undefined1 *)(param_1 + 0x4c) = 0;
  UnityEngine_ContactFilter2D__CheckConsistency(param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),0);
  *(undefined2 *)(param_1 + 0x24) = 0x101;
  return;
}



// ---- MeleeSkills::Start   [wasm func86617 -> ram:81a3f5f6 ; ghidra: MeleeSkills::Start]

void MeleeSkills__Start(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam0066495b == '\0') {
    unnamed_function_1099(0x5599e8);
    unnamed_function_1099(0x567ef4);
    unnamed_function_1099(0x567f04);
    unnamed_function_1099(0x567fe8);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x55bf98);
    unnamed_function_1099(0x565d6c);
    cRam0066495b = '\x01';
  }
  Weapon__Start(*(undefined4 *)(param_1 + 0x14),0);
  iVar5 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = System_Threading_Monitor__Enter_1(iVar5);
  }
  SoundEffectManager__Start(**(undefined4 **)(iVar5 + 0x5c),*(undefined4 *)(param_1 + 0x48),iVar5);
  iVar5 = Mono_Security_ASN1Convert__ToOid(uRam005599e8,1);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
  uStack_8 = *(undefined4 *)(param_1 + 0x3c);
  uStack_10 = *(undefined8 *)(param_1 + 0x34);
  uStack_18 = *(undefined8 *)(param_1 + 0x2c);
  uStack_20 = *(undefined8 *)(param_1 + 0x24);
  if (*(int *)(iRam0055bf98 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bf98);
  }
  uStack_30 = uStack_8;
  uStack_38 = uStack_10;
  uStack_40 = uStack_18;
  uStack_48 = uStack_20;
  iVar2 = unnamed_function_16341(uVar6,&uStack_48,iVar5,0);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      uVar6 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x10);
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        unnamed_function_94848(iRam0055be2c);
      }
      iVar3 = UnityEngine_Camera__get_targetTexture(uVar6,0,0);
      if (iVar3 != 0) {
        iVar3 = UnityEngine_GameObject__get_activeInHierarchy(uVar6,uRam00567f04);
        if (iVar3 != 0) {
          ReceiveDamage__Awake(iVar3,param_2,0);
        }
        iVar3 = UnityEngine_GameObject__get_activeInHierarchy(uVar6,uRam00567ef4);
        if (iVar3 != 0) {
          uVar7 = System_Linq_Enumerable__Count(param_1,0);
          UnityEngine_Camera__get_farClipPlane(&uStack_20,uVar7,0);
          uStack_28 = uStack_20;
          uStack_50 = uStack_20;
          PlayerEffect__DamageFlashCoroutine(iVar3,&uStack_50,0);
        }
        iVar3 = UnityEngine_GameObject__get_activeInHierarchy(uVar6,uRam00567ef4);
        if (iVar3 != 0) {
          iVar4 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
          uVar7 = *(undefined4 *)(iVar4 + 0x18);
          iVar4 = UnityEngine_MonoBehaviour__InvokeRepeating(0);
          uVar8 = *(undefined4 *)(iVar4 + 0x1c);
          uVar6 = unnamed_function_65381(uVar6,uRam00567fe8);
          PlayerEffect__Update(iVar3,uVar7,uVar8,uVar6,0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}



// ---- MeleeSkills::DealDamage   [wasm func86618 -> ram:81a3f84f ; ghidra: MeleeSkills::DealDamage]

void MeleeSkills__DealDamage(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x40),0);
  }
  if (cRam0066495c == '\0') {
    unnamed_function_1099(0x55e338);
    cRam0066495c = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e338);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}



// ---- MeleeSkills::ActiveSkill   [wasm func86619 -> ram:81a3f8b4 ; ghidra: MeleeSkills::ActiveSkill]

void MeleeSkills__ActiveSkill(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x40),0);
  }
  return;
}



// ---- MeleeSkills::PlayActiveSkill   [wasm func86620 -> ram:81a3f8cb ; ghidra: MeleeSkills::PlayActiveSkill]

int MeleeSkills__PlayActiveSkill(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (cRam0066495c == '\0') {
    unnamed_function_1099(0x55e338);
    cRam0066495c = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055e338);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ---- MeleeSkills::StopActiveSkillRoutine   [wasm func86621 -> ram:81a3f90f ; ghidra: MeleeSkills::StopActiveSkillRoutine]

void MeleeSkills__StopActiveSkillRoutine(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (cRam0066495d == '\0') {
    unnamed_function_1099(0x576924);
    cRam0066495d = '\x01';
  }
  uVar1 = UnityEngine_Collision2D__get_rigidbody(param_2,0);
  iVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  iVar3 = UnityEngine_LayerMask__LayerToName(uRam00576924,0);
  if (iVar2 != iVar3) {
    if (*(int *)(param_1 + 0x40) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x40),0);
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}



// ---- MeleeSkills::OnCollisionEnter2D   [wasm func86622 -> ram:81a3f96a ; ghidra: MeleeSkills::OnCollisionEnter2D]

void MeleeSkills__OnCollisionEnter2D(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066495e == '\0') {
    unnamed_function_1099(0x55d130);
    cRam0066495e = '\x01';
  }
  *(undefined4 *)(param_1 + 0x18) = 0x40000000;
  uVar1 = unnamed_function_95402(uRam0055d130);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- MeleeSkills::ActiveSkill_d_18_System_IDisposable_Dispose   [wasm func86623 -> ram:81a3f9b0 ; ghidra: MeleeSkills+<ActiveSkill>d__18::System.IDisposable.Dispose]

undefined4 MeleeSkills_<ActiveSkill>d__18__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined8 uStack_10;
  float fStack_8;
  
  if (cRam0066495f == '\0') {
    unnamed_function_1099(0x55c620);
    unnamed_function_1099(0x565d78);
    cRam0066495f = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar13 = *(int *)(iRam00565d78 + 0x10);
    if ((*(byte *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = System_Threading_Monitor__Enter_1(iVar13);
    }
    iVar13 = *(int *)(*(int *)(iVar13 + 0x60) + 8);
    if ((*(byte *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = System_Threading_Monitor__Enter_1(iVar13);
    }
    uVar1 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar13 + 0x5c) + 0x10),0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
    *(undefined8 *)(param_1 + 0x18) = uStack_10;
    *(float *)(param_1 + 0x20) = fStack_8;
    fVar4 = *(float *)(param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 0x20);
    fVar6 = *(float *)(param_1 + 0x18);
    uVar1 = System_Linq_Enumerable__Count(iVar3,0);
    UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar1,0);
    fVar9 = fStack_18;
    fVar10 = fStack_1c;
    fVar7 = fStack_20;
    if (cRam0066482c == '\0') {
      unnamed_function_1099(0x55bab8);
      cRam0066482c = '\x01';
    }
    fVar5 = fVar5 - fVar9;
    fVar4 = fVar4 - fVar10;
    fVar6 = fVar6 - fVar7;
    if (*(int *)(iRam0055bab8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bab8);
    }
    fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if (1e-05 < fVar7) {
      fVar5 = fVar5 / fVar7;
      fVar6 = fVar6 / fVar7;
      fVar4 = fVar4 / fVar7;
    }
    else {
      if (cRam00664829 == '\0') {
        unnamed_function_1099(0x55d048);
        cRam00664829 = '\x01';
      }
      pfVar8 = *(float **)(iRam0055d048 + 0x5c);
      fVar5 = pfVar8[2];
      fVar6 = *pfVar8;
      fVar4 = pfVar8[1];
    }
    *(float *)(param_1 + 0x24) = fVar6;
    *(float *)(param_1 + 0x2c) = fVar5;
    *(float *)(param_1 + 0x28) = fVar4;
    uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x24);
    if (*(int *)(iRam0055c620 + 0x74) == 0) {
      unnamed_function_94848(iRam0055c620);
    }
    multiple_2_UnityEngine_Animator__SetTrigger
              (uVar1,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x88),0);
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  fVar9 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 0x18);
  uVar1 = System_Linq_Enumerable__Count(iVar3,0);
  UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
  fVar10 = uStack_10._4_4_;
  fVar7 = (float)uStack_10;
  if (cRam0065b3eb == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0065b3eb = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar5 = fVar5 - fVar7;
  fVar9 = fVar9 - fVar10;
  if ((SQRT(fVar5 * fVar5 + fVar9 * fVar9) <= *(float *)(iVar3 + 0x18)) ||
     (2 < *(int *)(iVar3 + 0x5c))) {
    uVar1 = 0;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    multiple_2_UnityEngine_Animator__SetTrigger
              (*(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x24),*(undefined4 *)(param_1 + 0x14),0);
    *(undefined1 *)(iVar3 + 0x4c) = 1;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 0x18);
    uVar1 = System_Linq_Enumerable__Count(iVar3,0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
    fVar10 = uStack_10._4_4_;
    fVar7 = (float)uStack_10;
    if (cRam0065b3eb == '\0') {
      unnamed_function_1099(0x55bab8);
      cRam0065b3eb = '\x01';
    }
    if (*(int *)(iRam0055bab8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bab8);
    }
    fVar5 = fVar5 - fVar7;
    fVar9 = fVar9 - fVar10;
    if (*(float *)(iVar3 + 0x58) == SQRT(fVar5 * fVar5 + fVar9 * fVar9)) {
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + 1;
    }
    fVar7 = *(float *)(param_1 + 0x1c);
    fVar10 = *(float *)(param_1 + 0x18);
    uVar1 = System_Linq_Enumerable__Count(iVar3,0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
    if (cRam0065b3eb == '\0') {
      unnamed_function_1099(0x55bab8);
      cRam0065b3eb = '\x01';
    }
    if (*(int *)(iRam0055bab8 + 0x74) == 0) {
      unnamed_function_94848(iRam0055bab8);
    }
    fVar10 = fVar10 - (float)uStack_10;
    fVar7 = fVar7 - uStack_10._4_4_;
    *(float *)(iVar3 + 0x58) = SQRT(fVar10 * fVar10 + fVar7 * fVar7);
    iVar13 = *(int *)(iVar3 + 0x20);
    uVar14 = *(undefined4 *)(param_1 + 0x20);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = System_Linq_Enumerable__Count(iVar3,0);
    UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar1,0);
    uVar12 = *(undefined8 *)(param_1 + 0x24);
    uVar1 = *(undefined4 *)(iVar3 + 0x50);
    fStack_8 = fStack_18;
    uStack_10 = CONCAT44(fStack_1c,fStack_20);
    if (cRam00664930 == '\0') {
      unnamed_function_1099(0x55bc80);
      cRam00664930 = '\x01';
    }
    iVar11 = *(int *)(iVar13 + 0x10);
    if (iVar11 != 0) {
      iVar2 = unnamed_function_95402(uRam0055bc80);
      if (cRam00664931 == '\0') {
        unnamed_function_1099(0x55ad18);
        cRam00664931 = '\x01';
      }
      if (*(int *)(iRam0055ad18 + 0x74) == 0) {
        unnamed_function_94848(iRam0055ad18);
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar14;
      *(undefined8 *)(iVar2 + 8) = uVar15;
      *(undefined8 *)(iVar2 + 0x14) = uStack_10;
      *(float *)(iVar2 + 0x1c) = fStack_8;
      *(undefined1 *)(iVar2 + 0x2c) = 1;
      *(undefined8 *)(iVar2 + 0x24) = uVar12;
      *(undefined4 *)(iVar2 + 0x20) = uVar1;
      (**(code **)((ulonglong)*(uint *)(iVar11 + 0xc) * 4))
                (*(undefined4 *)(iVar11 + 0x20),iVar13,iVar2,*(undefined4 *)(iVar11 + 0x14));
    }
    uVar14 = *(undefined4 *)(iVar3 + 0x44);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar14;
  }
  return uVar1;
}



// ---- MeleeSkills::ActiveSkill_d_18_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86624 -> ram:81a3fec9 ; ghidra: MeleeSkills+<ActiveSkill>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void MeleeSkills_<ActiveSkill>d__18__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56f58c);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- MeleeSkills::ActiveSkill_d_18_System_Collections_IEnumerator_get_Current   [wasm func86625 -> ram:81a3fef0 ; ghidra: MeleeSkills+<ActiveSkill>d__18::System.Collections.IEnumerator.get_Current]

void MeleeSkills_<ActiveSkill>d__18__System_Collections_IEnumerator_get_Current(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664960 == '\0') {
    unnamed_function_1099(0x567e18);
    cRam00664960 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



