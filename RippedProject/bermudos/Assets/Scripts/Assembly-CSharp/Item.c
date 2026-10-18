// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Item  (Assembly-CSharp)  -  7 function(s)

// ---- Item::OnTriggerEnter2D   [wasm func86387 -> ram:81a34585 ; ghidra: Item::OnTriggerEnter2D]

void Item__OnTriggerEnter2D(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  undefined8 uStack_30;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (cRam006648d1 == '\0') {
    unnamed_function_1099(0x56a7c0);
    unnamed_function_1099(0x565d78);
    unnamed_function_1099(0x55cd74);
    unnamed_function_1099(0x56d348);
    cRam006648d1 = '\x01';
  }
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
  fVar5 = fStack_8;
  fVar6 = fStack_c;
  fVar7 = fStack_10;
  iVar10 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = System_Threading_Monitor__Enter_1(iVar10);
  }
  iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 8);
  if ((*(byte *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = System_Threading_Monitor__Enter_1(iVar10);
  }
  uVar3 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar10 + 0x5c) + 0x10),0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
  fVar2 = fStack_8;
  fVar1 = fStack_c;
  fVar8 = fStack_10;
  if (cRam0066482c == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0066482c = '\x01';
  }
  fVar5 = fVar5 - fVar2;
  fVar6 = fVar6 - fVar1;
  fVar7 = fVar7 - fVar8;
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  if (1e-05 < fVar8) {
    fVar5 = fVar5 / fVar8;
    fVar7 = fVar7 / fVar8;
    fVar6 = fVar6 / fVar8;
  }
  else {
    if (cRam00664829 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00664829 = '\x01';
    }
    pfVar9 = *(float **)(iRam0055d048 + 0x5c);
    fVar5 = pfVar9[2];
    fVar7 = *pfVar9;
    fVar6 = pfVar9[1];
  }
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  UnityEngine_Camera__get_farClipPlane(&fStack_10,uVar3,0);
  uVar3 = System_Linq_Enumerable__Count(param_1,0);
  fStack_28 = fStack_8 + fVar5 + fVar5;
  fStack_1c = fStack_c + fVar6 + fVar6;
  fStack_20 = fStack_10 + fVar7 + fVar7;
  uStack_30 = CONCAT44(fStack_1c,fStack_20);
  fStack_18 = fStack_28;
  uVar3 = DG_Tweening_ShortcutExtensions__DOShakeScale_1
                    (uVar3,&uStack_30,*(undefined4 *)(param_1 + 0x24),
                     *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),0,0);
  uVar4 = unnamed_function_95402(uRam0055cd74);
  DG_Tweening_Color2__op_Multiply(uVar4,param_1,uRam0056a7c0,0);
  DG_Tweening_TweenSettingsExtensions__From_6(uVar3,uVar4,uRam0056d348);
  return;
}



// ---- Item::Start   [wasm func86388 -> ram:81a347e9 ; ghidra: Item::Start]

void Item__Start(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  if (cRam006648ce == '\0') {
    unnamed_function_1099(0x55be2c);
    cRam006648ce = '\x01';
  }
  fVar3 = *(float *)(param_1 + 0x10);
  if (fVar3 <= 0.0) {
    uVar1 = unnamed_function_44644(param_1,0);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    unnamed_function_44782(uVar1,0);
    return;
  }
  fVar2 = (float)UnityEngine_Time__get_time(0);
  *(float *)(param_1 + 0x10) = fVar3 - fVar2;
  return;
}



// ---- Item::Update   [wasm func86389 -> ram:81a34854 ; ghidra: Item::Update]

void Item__Update(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam006648cf == '\0') {
    unnamed_function_1099(0x55a7d4);
    unnamed_function_1099(0x55be2c);
    cRam006648cf = '\x01';
  }
  uVar1 = unnamed_function_44644(param_1,0);
  if (*(int *)(iRam0055be2c + 0x74) == 0) {
    unnamed_function_94848(iRam0055be2c);
  }
  uVar1 = unnamed_function_44767(uVar1,0);
  if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
    unnamed_function_94848(iRam0055a7d4);
  }
  DG_Tweening_DOTween__Goto(uVar1,0);
  return;
}



// ---- Item::OnDestroy   [wasm func86390 -> ram:81a348c8 ; ghidra: Item::OnDestroy]

void Item__OnDestroy(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (cRam006648d0 == '\0') {
    unnamed_function_1099(0x567eb4);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x565d6c);
    cRam006648d0 = '\x01';
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar1 = unnamed_function_44644(param_2,0);
  uVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  if ((0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) && (*(char *)(param_1 + 0x34) != '\0')) {
    iVar4 = *(int *)(iRam00565d6c + 0x10);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = System_Threading_Monitor__Enter_1(iVar4);
    }
    SoundEffectManager__Start
              (**(undefined4 **)(iVar4 + 0x5c),*(undefined4 *)(param_1 + 0x38),param_1);
    iVar4 = UnityEngine_GameObject__get_activeInHierarchy(param_2,uRam00567eb4);
    if (iVar4 != 0) {
      InventoryManager__SetInventorySlot(iVar4,*(undefined4 *)(param_1 + 0x18),param_1);
    }
    uVar1 = unnamed_function_44644(param_1,0);
    if (*(int *)(iRam0055be2c + 0x74) == 0) {
      unnamed_function_94848(iRam0055be2c);
    }
    unnamed_function_44782(uVar1,0);
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}



// ---- Item::DropItemEffect   [wasm func86393 -> ram:81a34d5e ; ghidra: Item::DropItemEffect]

void Item__DropItemEffect(int param_1)

{
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined8 *)(param_1 + 0x2c) = 0x33f000000;
  *(undefined8 *)(param_1 + 0x24) = 0x3eeb851f3f800000;
  *(undefined8 *)(param_1 + 0x1c) = 0x23f000000;
  *(undefined4 *)(param_1 + 0x10) = 0x41200000;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Item::ctor   [wasm func86394 -> ram:81a34da1 ; ghidra: Item::.ctor]

void Item___ctor(int param_1)

{
  undefined4 uVar1;
  longlong lStack_20;
  undefined4 uStack_18;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  if (cRam006648d2 == '\0') {
    unnamed_function_1099(0x56d38c);
    cRam006648d2 = '\x01';
  }
  uVar1 = System_Linq_Enumerable__Count(param_1,0);
  uStack_c = *(uint *)(param_1 + 0x2c);
  uStack_8 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  lStack_20 = (ulonglong)uStack_c << 0x20;
  uVar1 = DG_Tweening_ShortcutExtensions__DOShakePosition_2
                    (uVar1,*(undefined4 *)(param_1 + 0x28),&lStack_20,
                     *(undefined4 *)(param_1 + 0x30),0,0,1,0,0);
  DG_Tweening_TweenSettingsExtensions__SetLink_1(uVar1,0xffffffff,uRam0056d38c);
  return;
}



// ---- Item::DropItemEffect_b_15_0   [wasm func86395 -> ram:81a34e4b ; ghidra: Item::<DropItemEffect>b__15_0]

void Item__<DropItemEffect>b__15_0(int param_1)

{
  undefined4 uVar1;
  
  if (cRam006648d3 == '\0') {
    unnamed_function_1099(0x567f6c);
    unnamed_function_1099(0x567e98);
    unnamed_function_1099(0x567eb4);
    unnamed_function_1099(0x567f00);
    cRam006648d3 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567eb4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = unnamed_function_65372(param_1,uRam00567f6c);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e98);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f00);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



