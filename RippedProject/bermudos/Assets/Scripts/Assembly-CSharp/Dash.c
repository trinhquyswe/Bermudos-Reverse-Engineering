// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Dash  (Assembly-CSharp)  -  10 function(s)

// ---- Dash::Awake   [wasm func86668 -> ram:81a42608 ; ghidra: Dash::Awake]

void Dash__Awake(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam0066497f == '\0') {
    unnamed_function_1099(0x557abc);
    unnamed_function_1099(0x5684e0);
    cRam0066497f = '\x01';
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
  uVar5 = unnamed_function_95402(uRam00557abc);
  unnamed_function_60334(uVar5,param_1,uRam005684e0,0);
  if (cRam00664984 == '\0') {
    unnamed_function_1099(0x557abc);
    cRam00664984 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85158(iVar3,uVar5,0);
    uVar2 = uRam00557abc;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557abc), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- Dash::DashCoroutine_d_10_System_Collections_IEnumerator_get_Current   [wasm func86669 -> ram:81a426d5 ; ghidra: Dash+<DashCoroutine>d__10::System.Collections.IEnumerator.get_Current]

void Dash_<DashCoroutine>d__10__System_Collections_IEnumerator_get_Current
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664984 == '\0') {
    unnamed_function_1099(0x557abc);
    cRam00664984 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557abc;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557abc), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(param_1 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- Dash::OnEnable   [wasm func86670 -> ram:81a42755 ; ghidra: Dash::OnEnable]

void Dash__OnEnable(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (cRam00664980 == '\0') {
    unnamed_function_1099(0x557abc);
    unnamed_function_1099(0x5684e0);
    cRam00664980 = '\x01';
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x38);
  uVar5 = unnamed_function_95402(uRam00557abc);
  unnamed_function_60334(uVar5,param_1,uRam005684e0,0);
  if (cRam00664985 == '\0') {
    unnamed_function_1099(0x557abc);
    cRam00664985 = '\x01';
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar6 = unnamed_function_85160(iVar3,uVar5,0);
    uVar2 = uRam00557abc;
    if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557abc), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(iVar7 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar6,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- Dash::OnDisable   [wasm func86672 -> ram:81a428a2 ; ghidra: Dash::OnDisable]

void Dash__OnDisable(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (cRam00664981 == '\0') {
    unnamed_function_1099(0x565d6c);
    cRam00664981 = '\x01';
  }
  fVar1 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0);
  if ((*(float *)(param_1 + 0x1c) < fVar1) &&
     ((float)*(int *)(param_1 + 0x20) < *(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x40) + 0x14)
     )) {
    iVar3 = *(int *)(iRam00565d6c + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = System_Threading_Monitor__Enter_1(iVar3);
    }
    SoundEffectManager__Start
              (**(undefined4 **)(iVar3 + 0x5c),*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x60),
               param_1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    if (*(int *)(param_1 + 0x14) != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x14),0);
    }
    if (cRam00664982 == '\0') {
      unnamed_function_1099(0x55db7c);
      cRam00664982 = '\x01';
    }
    iVar3 = unnamed_function_95402(uRam0055db7c);
    *(undefined8 *)(iVar3 + 0x14) = uVar4;
    *(int *)(iVar3 + 0x10) = param_1;
    *(undefined4 *)(iVar3 + 8) = 0;
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar3,0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x48) + 0x44) = 1;
    fVar1 = (float)UnityEngine_Rendering_Universal_ScriptableRenderer__InternalStartRendering(0);
    *(float *)(param_1 + 0x1c) =
         fVar1 + *(float *)(*(int *)(*(int *)(param_1 + 0x10) + 0x18) + 0x1c);
    Stamina__Update(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x40),*(undefined4 *)(param_1 + 0x20)
                    ,0);
  }
  return;
}



// ---- Dash::DashEvent_OnDashEvent   [wasm func86673 -> ram:81a429da ; ghidra: Dash::DashEvent_OnDashEvent]

void Dash__DashEvent_OnDashEvent(int param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x14),0);
  }
  uVar3 = *param_2;
  if (cRam00664982 == '\0') {
    unnamed_function_1099(0x55db7c);
    cRam00664982 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055db7c);
  *(undefined8 *)(iVar1 + 0x14) = uVar3;
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_1(param_1,iVar1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + 0x48) + 0x44) = 1;
  return;
}



// ---- Dash::OnTriggerEnter2D   [wasm func86674 -> ram:81a42a55 ; ghidra: Dash::OnTriggerEnter2D]

void Dash__OnTriggerEnter2D(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(int *)(param_1 + 0x14),0);
  }
  return;
}



// ---- Dash::PlayDash   [wasm func86675 -> ram:81a42a6c ; ghidra: Dash::PlayDash]

int Dash__PlayDash(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (cRam00664982 == '\0') {
    unnamed_function_1099(0x55db7c);
    cRam00664982 = '\x01';
  }
  iVar1 = unnamed_function_95402(uRam0055db7c);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined8 *)(iVar1 + 0x14) = *param_2;
  return iVar1;
}



// ---- Dash::StopPlayerDashRoutine   [wasm func86677 -> ram:81a42ad7 ; ghidra: Dash::StopPlayerDashRoutine]

void Dash__StopPlayerDashRoutine(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664983 == '\0') {
    unnamed_function_1099(0x55d130);
    cRam00664983 = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam0055d130);
  *(undefined4 *)(param_1 + 0x20) = 10;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Dash::DashCoroutine_d_10_System_IDisposable_Dispose   [wasm func86678 -> ram:81a42b1d ; ghidra: Dash+<DashCoroutine>d__10::System.IDisposable.Dispose]

undefined4 Dash_<DashCoroutine>d__10__System_IDisposable_Dispose(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar1 = System_Linq_Enumerable__Count(iVar3,0);
    UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
    fVar4 = *(float *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x18);
    *(undefined4 *)(param_1 + 0x24) = 0x3e19999a;
    uVar9 = CONCAT44(uStack_10._4_4_ +
                     fVar4 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20),
                     (float)uStack_10 + fVar4 * (float)*(undefined8 *)(param_1 + 0x14));
    *(undefined8 *)(param_1 + 0x1c) = uVar9;
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar9 = *(undefined8 *)(param_1 + 0x1c);
  }
  uVar1 = System_Linq_Enumerable__Count(iVar3,0);
  UnityEngine_Camera__get_farClipPlane(&uStack_10,uVar1,0);
  if (cRam0065b3eb == '\0') {
    unnamed_function_1099(0x55bab8);
    cRam0065b3eb = '\x01';
  }
  if (*(int *)(iRam0055bab8 + 0x74) == 0) {
    unnamed_function_94848(iRam0055bab8);
  }
  uStack_10._0_4_ = (float)uVar9 - (float)uStack_10;
  uStack_10._4_4_ = (float)((ulonglong)uVar9 >> 0x20) - uStack_10._4_4_;
  if (SQRT((float)uStack_10 * (float)uStack_10 + uStack_10._4_4_ * uStack_10._4_4_) <=
      *(float *)(param_1 + 0x24)) {
    uVar1 = 0;
    uVar7 = System_Linq_Enumerable__Count(iVar3,0);
    uStack_40 = *(undefined8 *)(param_1 + 0x1c);
    uStack_28 = 0;
    uStack_38 = 0;
    uStack_30 = uStack_40;
    multiple_2_UnityEngine_Transform___ctor(uVar7,&uStack_40,0);
    *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x48) + 0x44) = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar3 + 0x10) + 0x14);
    uVar9 = *(undefined8 *)(param_1 + 0x1c);
    uVar1 = System_Linq_Enumerable__Count(iVar3,0);
    UnityEngine_Camera__get_farClipPlane(&uStack_20,uVar1,0);
    uVar8 = *(undefined8 *)(param_1 + 0x14);
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x18) + 0x14);
    uStack_8 = uStack_18;
    uStack_10 = uStack_20;
    if (cRam00664930 == '\0') {
      unnamed_function_1099(0x55bc80);
      cRam00664930 = '\x01';
    }
    iVar6 = *(int *)(iVar5 + 0x10);
    if (iVar6 != 0) {
      iVar2 = unnamed_function_95402(uRam0055bc80);
      if (cRam00664931 == '\0') {
        unnamed_function_1099(0x55ad18);
        cRam00664931 = '\x01';
      }
      if (*(int *)(iRam0055ad18 + 0x74) == 0) {
        unnamed_function_94848(iRam0055ad18);
      }
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(int *)(iVar2 + 0xc) = (int)((ulonglong)uVar9 >> 0x20);
      *(int *)(iVar2 + 8) = (int)uVar9;
      *(undefined8 *)(iVar2 + 0x14) = uStack_10;
      *(undefined4 *)(iVar2 + 0x1c) = uStack_8;
      *(undefined1 *)(iVar2 + 0x2c) = 1;
      *(undefined8 *)(iVar2 + 0x24) = uVar8;
      *(undefined4 *)(iVar2 + 0x20) = uVar1;
      (**(code **)((ulonglong)*(uint *)(iVar6 + 0xc) * 4))
                (*(undefined4 *)(iVar6 + 0x20),iVar5,iVar2,*(undefined4 *)(iVar6 + 0x14));
    }
    uVar7 = *(undefined4 *)(iVar3 + 0x18);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar7;
  }
  return uVar1;
}



// ---- Dash::DashCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Current   [wasm func86679 -> ram:81a42dde ; ghidra: Dash+<DashCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current]

void Dash_<DashCoroutine>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
               (void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = unnamed_function_94961(0x55bdd8);
  uVar1 = unnamed_function_95402(uVar1);
  unnamed_function_83844(uVar1,0);
  uVar2 = unnamed_function_94961(0x56eeec);
  unnamed_function_1109(uVar1,uVar2);
  do {
    halt_trap();
  } while( true );
}



