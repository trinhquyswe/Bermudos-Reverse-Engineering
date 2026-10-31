// Assembly-CSharp :: BeamByPlayer
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BeamByPlayer : MonoBehaviour // TypeDefIndex: 5703
{
	// Fields
	public GameObject beamPrefab; // 0x10
	public Material beamMaterial; // 0x14
	private Rage rage; // 0x18
	private AnimateEvent animateEvent; // 0x1C
	private Vector3 direction; // 0x20
	private float ragePercent; // 0x2C

	// Methods

	// RVA: 0x3A02 Offset: 0x3A02 VA: 0x3A02
	private void Awake() { }

	// RVA: 0x3A03 Offset: 0x3A03 VA: 0x3A03
	private void OnEnable() { }

	// RVA: 0x3A04 Offset: 0x3A04 VA: 0x3A04
	private void OnDisable() { }

	// RVA: 0x3A05 Offset: 0x3A05 VA: 0x3A05
	private void AnimateEvent_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs) { }

	// RVA: 0x3A06 Offset: 0x3A06 VA: 0x3A06
	private void RageEvent_OnRageChanged(RageEventArgs rageEventArgs) { }

	// RVA: 0x3A07 Offset: 0x3A07 VA: 0x3A07
	public void Beam() { }

	// RVA: 0x3A08 Offset: 0x3A08 VA: 0x3A08
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BeamByPlayer$$Awake ----
// C#: void BeamByPlayer__Awake (BeamByPlayer_o* __this, const MethodInfo* method);

void BeamByPlayer__Awake(BeamByPlayer_o *__this,MethodInfo *method)

{
  Rage_o *pRVar1;
  AnimateEvent_o *pAVar2;
  
  if (DAT_ram_0066497a == '\0') {
    unnamed_function_1099(&DAT_ram_00567e14);
    unnamed_function_1099(&DAT_ram_00567f00);
    DAT_ram_0066497a = '\x01';
  }
  pRVar1 = (Rage_o *)unnamed_function_65370(__this,DAT_ram_00567f00);
  __this->rage = pRVar1;
  pAVar2 = (AnimateEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e14);
  __this->animateEvent = pAVar2;
  return;
}

// ---- BeamByPlayer$$OnEnable ----
// C#: void BeamByPlayer__OnEnable (BeamByPlayer_o* __this, const MethodInfo* method);

void BeamByPlayer__OnEnable(BeamByPlayer_o *__this,MethodInfo *method)

{
  System_Action_RageEventArgs__o *value;
  System_Action_AnimateEvent__AnimateEventArgs__o *value_00;
  AnimateEvent_o *__this_00;
  
  if (DAT_ram_0066497b == '\0') {
    unnamed_function_1099(&System_Action_RageEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_005676a0);
    unnamed_function_1099(&DAT_ram_005676a4);
    DAT_ram_0066497b = '\x01';
  }
  value = (System_Action_RageEventArgs__o *)
          unnamed_function_95402(System_Action_RageEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_005676a4,0);
  RageEvent__add_OnRageChanged(value,(MethodInfo *)0x0);
  __this_00 = __this->animateEvent;
  value_00 = (System_Action_AnimateEvent__AnimateEventArgs__o *)
             unnamed_function_95402(System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
  unnamed_function_60334(value_00,__this,DAT_ram_005676a0,0);
  AnimateEvent__add_OnAnimate(__this_00,value_00,(MethodInfo *)0x0);
  return;
}

// ---- BeamByPlayer$$OnDisable ----
// C#: void BeamByPlayer__OnDisable (BeamByPlayer_o* __this, const MethodInfo* method);

void BeamByPlayer__OnDisable(BeamByPlayer_o *__this,MethodInfo *method)

{
  System_Action_RageEventArgs__o *value;
  System_Action_AnimateEvent__AnimateEventArgs__o *value_00;
  AnimateEvent_o *__this_00;
  
  if (DAT_ram_0066497c == '\0') {
    unnamed_function_1099(&System_Action_RageEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_005676a0);
    unnamed_function_1099(&DAT_ram_005676a4);
    DAT_ram_0066497c = '\x01';
  }
  value = (System_Action_RageEventArgs__o *)
          unnamed_function_95402(System_Action_RageEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_005676a4,0);
  RageEvent__remove_OnRageChanged(value,(MethodInfo *)0x0);
  __this_00 = __this->animateEvent;
  value_00 = (System_Action_AnimateEvent__AnimateEventArgs__o *)
             unnamed_function_95402(System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
  unnamed_function_60334(value_00,__this,DAT_ram_005676a0,0);
  AnimateEvent__remove_OnAnimate(__this_00,value_00,(MethodInfo *)0x0);
  return;
}

// ---- BeamByPlayer$$AnimateEvent_OnAnimate ----
// C#: void BeamByPlayer__AnimateEvent_OnAnimate (BeamByPlayer_o* __this, AnimateEvent_o* animateEvent, AnimateEventArgs_o* animateEventArgs, const MethodInfo* method);

void BeamByPlayer__AnimateEvent_OnAnimate
               (BeamByPlayer_o *__this,AnimateEvent_o *animateEvent,
               AnimateEventArgs_o *animateEventArgs,MethodInfo *method)

{
  AimDirection AVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  AVar1 = animateEventArgs->aimDirection;
  if (AVar1 == Up) {
    if (DAT_ram_0066482b == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_0066482b = '\x01';
    }
    uVar8 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
    (__this->direction).z = *(float *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
    (__this->direction).x = (float)(int)uVar8;
    (__this->direction).y = (float)(int)((ulonglong)uVar8 >> 0x20);
    return;
  }
  if (AVar1 == UpRight) {
    if (DAT_ram_0066482b == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_0066482b = '\x01';
    }
    iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
    fVar3 = *(float *)(iVar2 + 0x20);
    fVar4 = *(float *)(iVar2 + 0x1c);
    fVar5 = *(float *)(iVar2 + 0x18);
    if (DAT_ram_00662ef1 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00662ef1 = '\x01';
      iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
    }
    fVar6 = *(float *)(iVar2 + 0x3c);
    fVar7 = *(float *)(iVar2 + 0x40);
    (__this->direction).z = fVar3 + *(float *)(iVar2 + 0x44);
    (__this->direction).y = fVar4 + fVar7;
    (__this->direction).x = fVar5 + fVar6;
    return;
  }
  if (AVar1 == UpLeft) {
    if (DAT_ram_0066482b == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_0066482b = '\x01';
    }
    iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
    fVar3 = *(float *)(iVar2 + 0x20);
    fVar4 = *(float *)(iVar2 + 0x1c);
    fVar5 = *(float *)(iVar2 + 0x18);
    if (DAT_ram_00662ef0 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00662ef0 = '\x01';
      iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
    }
    fVar6 = *(float *)(iVar2 + 0x30);
    fVar7 = *(float *)(iVar2 + 0x34);
    (__this->direction).z = fVar3 + *(float *)(iVar2 + 0x38);
    (__this->direction).y = fVar4 + fVar7;
    (__this->direction).x = fVar5 + fVar6;
    return;
  }
  if (AVar1 != Right) {
    if (AVar1 == Left) {
      if (DAT_ram_00662ef0 == '\0') {
        unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
        DAT_ram_00662ef0 = '\x01';
      }
      uVar8 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x30);
      (__this->direction).z = *(float *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x38);
      (__this->direction).x = (float)(int)uVar8;
      (__this->direction).y = (float)(int)((ulonglong)uVar8 >> 0x20);
      return;
    }
    if (AVar1 != Down) {
      if (AVar1 == DownRight) {
        if (DAT_ram_00662eed == '\0') {
          unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
          DAT_ram_00662eed = '\x01';
        }
        iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
        fVar3 = *(float *)(iVar2 + 0x2c);
        fVar4 = *(float *)(iVar2 + 0x28);
        fVar5 = *(float *)(iVar2 + 0x24);
        if (DAT_ram_00662ef1 == '\0') {
          unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
          DAT_ram_00662ef1 = '\x01';
          iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
        }
        fVar6 = *(float *)(iVar2 + 0x3c);
        fVar7 = *(float *)(iVar2 + 0x40);
        (__this->direction).z = fVar3 + *(float *)(iVar2 + 0x44);
        (__this->direction).y = fVar4 + fVar7;
        (__this->direction).x = fVar5 + fVar6;
      }
      else if (AVar1 == DownLeft) {
        if (DAT_ram_00662eed == '\0') {
          unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
          DAT_ram_00662eed = '\x01';
        }
        iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
        fVar3 = *(float *)(iVar2 + 0x2c);
        fVar4 = *(float *)(iVar2 + 0x28);
        fVar5 = *(float *)(iVar2 + 0x24);
        if (DAT_ram_00662ef0 == '\0') {
          unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
          DAT_ram_00662ef0 = '\x01';
          iVar2 = *(int *)(UnityEngine_Vector3_TypeInfo + 0x5c);
        }
        fVar6 = *(float *)(iVar2 + 0x30);
        fVar7 = *(float *)(iVar2 + 0x34);
        (__this->direction).z = fVar3 + *(float *)(iVar2 + 0x38);
        (__this->direction).y = fVar4 + fVar7;
        (__this->direction).x = fVar5 + fVar6;
        return;
      }
      return;
    }
    if (DAT_ram_00662eed == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00662eed = '\x01';
    }
    uVar8 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x24);
    (__this->direction).z = *(float *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x2c);
    (__this->direction).x = (float)(int)uVar8;
    (__this->direction).y = (float)(int)((ulonglong)uVar8 >> 0x20);
    return;
  }
  if (DAT_ram_00662ef1 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00662ef1 = '\x01';
  }
  uVar8 = *(undefined8 *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x3c);
  (__this->direction).z = *(float *)(*(int *)(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x44);
  (__this->direction).x = (float)(int)uVar8;
  (__this->direction).y = (float)(int)((ulonglong)uVar8 >> 0x20);
  return;
}

// ---- BeamByPlayer$$RageEvent_OnRageChanged ----
// C#: void BeamByPlayer__RageEvent_OnRageChanged (BeamByPlayer_o* __this, RageEventArgs_o* rageEventArgs, const MethodInfo* method);

void BeamByPlayer__RageEvent_OnRageChanged
               (BeamByPlayer_o *__this,RageEventArgs_o *rageEventArgs,MethodInfo *method)

{
  __this->ragePercent = rageEventArgs->ragePercent;
  return;
}

// ---- BeamByPlayer$$Beam ----
// C#: void BeamByPlayer__Beam (BeamByPlayer_o* __this, const MethodInfo* method);

void BeamByPlayer__Beam(BeamByPlayer_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 param2;
  int iVar3;
  GameObject_o *param1;
  Rage_o *pRVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float4 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  float4 local_8;
  
  if (DAT_ram_0066497d == '\0') {
    unnamed_function_1099(&DAT_ram_00569a58);
    unnamed_function_1099(&DAT_ram_00569b08);
    unnamed_function_1099(&DAT_ram_0056b548);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_1987 /* "BashAmmo" */);
    DAT_ram_0066497d = '\x01';
  }
  if (1.0 <= __this->ragePercent) {
    fVar1 = unnamed_function_12077((__this->direction).y,(__this->direction).x);
    local_38 = (fVar1 * 57.29578 + 90.0) * 0.017453292;
    local_40 = 0;
    local_10 = 0;
    local_8 = (float4)local_38;
    unnamed_function_8664(&local_30,&local_40,0);
    local_18 = local_28;
    local_20 = local_30;
    param1 = __this->beamPrefab;
    uVar2 = unnamed_function_44643(__this,0);
    unnamed_function_44960(&local_10,uVar2,0);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    local_48 = local_8;
    local_58 = local_18;
    local_50 = local_10;
    local_60 = local_20;
    uVar2 = unnamed_function_86418(param1,&local_50,&local_60,DAT_ram_0056b548);
    param2 = unnamed_function_44702(StringLiteral_1987 /* "BashAmmo" */,0);
    unnamed_function_44685(uVar2,param2,0);
    iVar3 = unnamed_function_73836(uVar2,DAT_ram_00569a58);
    *(undefined4 *)(iVar3 + 0x2c) = 0x41200000;
    uVar2 = unnamed_function_73836(uVar2,DAT_ram_00569b08);
    unnamed_function_52795(uVar2,__this->beamMaterial,0);
    pRVar4 = __this->rage;
    pRVar4->currentRage = 0.0;
    RageEvent__CallRageChangedEvent(0.0,0.0,pRVar4->maxRage,(MethodInfo *)0x0);
  }
  return;
}

// ---- BeamByPlayer$$.ctor ----
// C#: void BeamByPlayer___ctor (BeamByPlayer_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

