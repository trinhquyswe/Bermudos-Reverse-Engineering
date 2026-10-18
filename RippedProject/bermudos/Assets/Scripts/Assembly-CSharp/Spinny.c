// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Spinny  (Assembly-CSharp)  -  8 function(s)

// ---- Spinny::OnAwake   [wasm func87006 -> ram:81a4e315 ; ghidra: Spinny::OnAwake]

void Spinny__OnAwake(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_30;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  if (cRam00664ad2 == '\0') {
    unnamed_function_1099(0x567e38);
    unnamed_function_1099(0x55bf98);
    unnamed_function_1099(0x55c620);
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x565d78);
    cRam00664ad2 = '\x01';
  }
  UnityEngine_Rigidbody2D__get_drag(*(undefined4 *)(param_1 + 0x40),0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),uRam00567e38);
  if (*(int *)(iRam0055bf98 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bf98);
  }
  UnityEngine_Physics2D__get_queriesHitTriggers(uVar2,uVar1,0);
  uVar2 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 8),0);
  uStack_8 = 0x3fc00000;
  uStack_28 = 0x3fc00000;
  uStack_10 = 0x3fc000003fc00000;
  uStack_30 = 0x3fc000003fc00000;
  multiple_2_UnityEngine_Transform__get_localScale(uVar2,&uStack_30,0);
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  if (*(int *)(iRam0055c620 + 0x74) == 0) {
    unnamed_function_94848(iRam0055c620);
  }
  multiple_2_UnityEngine_Animator__SetTrigger
            (uVar2,*(undefined4 *)(*(int *)(iRam0055c620 + 0x5c) + 0x98),0);
  iVar3 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  uVar2 = System_Linq_Enumerable__Count(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
  UnityEngine_Camera__get_farClipPlane(&fStack_20,uVar2,0);
  fVar6 = fStack_18;
  fVar4 = fStack_1c;
  fVar5 = fStack_20;
  UnityEngine_Camera__get_farClipPlane(&fStack_20,*(undefined4 *)(param_1 + 0xc),0);
  if (cRam0066482c == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0066482c = '\x01';
  }
  fVar4 = fVar4 - fStack_1c;
  fVar5 = fVar5 - fStack_20;
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + (fVar6 - fStack_18) * (fVar6 - fStack_18));
  if (1e-05 < fVar6) {
    fVar4 = fVar4 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  else {
    if (cRam00664829 == '\0') {
      unnamed_function_1099(0x55d048);
      cRam00664829 = '\x01';
    }
    fVar4 = (*(float **)(iRam0055d048 + 0x5c))[1];
    fVar5 = **(float **)(iRam0055d048 + 0x5c);
  }
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(fVar4,fVar5);
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x14) = *(undefined4 *)(param_1 + 0x48);
  iVar3 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = System_Threading_Monitor__Enter_1(iVar3);
  }
  GameResources__get_Instance(**(undefined4 **)(iVar3 + 0x5c),*(undefined4 *)(param_1 + 0x58),1,0);
  *(undefined4 *)(param_1 + 0x5c) = 0x40a00000;
  return;
}



// ---- Spinny::OnStart   [wasm func87007 -> ram:81a4e633 ; ghidra: Spinny::OnStart]

void Spinny__OnStart(int param_1)

{
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_10 = CONCAT44(*(float *)(param_1 + 0x44) *
                       (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                       *(float *)(param_1 + 0x44) * (float)*(undefined8 *)(param_1 + 0x30));
  uStack_8 = uStack_10;
  UnityEngine_Rigidbody2D__get_velocity_Injected(*(undefined4 *)(param_1 + 0x40),&uStack_10,0);
  return;
}



// ---- Spinny::OnFixedUpdate   [wasm func87008 -> ram:81a4e68e ; ghidra: Spinny::OnFixedUpdate]

undefined4 Spinny__OnFixedUpdate(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = 2;
  if ((*(char *)(param_1 + 0x4c) == '\0') && (fVar3 = *(float *)(param_1 + 0x5c), 0.0 <= fVar3)) {
    fVar2 = (float)UnityEngine_Time__get_time(0);
    *(float *)(param_1 + 0x5c) = fVar3 - fVar2;
    uVar1 = 3;
  }
  return uVar1;
}



// ---- Spinny::OnUpdate   [wasm func87009 -> ram:81a4e6c4 ; ghidra: Spinny::OnUpdate]

void Spinny__OnUpdate(int param_1)

{
  Weapon__Start(*(undefined4 *)(param_1 + 0x38),0);
  return;
}



// ---- Spinny::OnLateUpdate   [wasm func87010 -> ram:81a4e6d2 ; ghidra: Spinny::OnLateUpdate]

void Spinny__OnLateUpdate(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (cRam00664ad3 == '\0') {
    unnamed_function_1099(0x5734ac);
    cRam00664ad3 = '\x01';
  }
  uVar1 = UnityEngine_Collision2D__get_rigidbody(param_2,0);
  iVar2 = UnityEngine_Camera__get_cullingMask(uVar1,0);
  iVar3 = UnityEngine_LayerMask__LayerToName(uRam005734ac,0);
  if (iVar2 == iVar3) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}



// ---- Spinny::OnCollisionEnter2D   [wasm func87011 -> ram:81a4e71a ; ghidra: Spinny::OnCollisionEnter2D]

void Spinny__OnCollisionEnter2D(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined8 uStack_8;
  
  if (cRam00664ad4 == '\0') {
    unnamed_function_1099(0x567e38);
    unnamed_function_1099(0x55bf98);
    unnamed_function_1099(0x565d6c);
    unnamed_function_1099(0x565d78);
    cRam00664ad4 = '\x01';
  }
  iVar2 = *(int *)(iRam00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  SoundEffectManager__PlaySoundEffect
            (**(undefined4 **)(iVar2 + 0x5c),*(undefined4 *)(param_1 + 0x58),0);
  UnityEngine_Rigidbody2D__get_drag(*(undefined4 *)(param_1 + 0x40),0x47c35000,0);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = *(int *)(iRam00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = System_Threading_Monitor__Enter_1(iVar2);
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy
                    (*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x10),uRam00567e38);
  if (*(int *)(iRam0055bf98 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bf98);
  }
  UnityEngine_Physics2D__IgnoreCollision(uVar3,uVar1,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  if (cRam0066482a == '\0') {
    unnamed_function_1099(0x55d024);
    cRam0066482a = '\x01';
  }
  uStack_20 = **(undefined8 **)(iRam0055d024 + 0x5c);
  uStack_8 = uStack_20;
  UnityEngine_Rigidbody2D__get_velocity_Injected(uVar3,&uStack_20,0);
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x24) = 1;
  uVar3 = UnityEngine_GameObject__AddComponent(*(undefined4 *)(param_1 + 8),0);
  uStack_10 = 0x40400000;
  uStack_28 = 0x40400000;
  uStack_18 = 0x4040000040400000;
  uStack_30 = 0x4040000040400000;
  multiple_2_UnityEngine_Transform__get_localScale(uVar3,&uStack_30,0);
  return;
}



// ---- Spinny::OnEnd   [wasm func87012 -> ram:81a4e8e3 ; ghidra: Spinny::OnEnd]

void Spinny__OnEnd(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 0x40a00000;
  *(undefined8 *)(param_1 + 0x44) = 0xa40a00000;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool___cctor(param_1,0);
  return;
}



// ---- Spinny::ctor   [wasm func87013 -> ram:81a4e905 ; ghidra: Spinny::.ctor]

void Spinny___ctor(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664ad5 == '\0') {
    unnamed_function_1099(0x567e18);
    unnamed_function_1099(0x567efc);
    unnamed_function_1099(0x567f18);
    cRam00664ad5 = '\x01';
  }
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567f18);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567e18);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = UnityEngine_GameObject__get_activeInHierarchy(param_1,uRam00567efc);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}



