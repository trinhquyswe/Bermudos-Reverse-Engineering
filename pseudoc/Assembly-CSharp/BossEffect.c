// Assembly-CSharp :: BossEffect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BossEffect : Effect // TypeDefIndex: 5575
{
	// Fields
	[HideInInspector]
	public bool isPhase2; // 0x3C
	private Animator animator; // 0x40
	private PoiseEvent poiseEvent; // 0x44

	// Methods

	// RVA: 0x374F Offset: 0x374F VA: 0x374F
	private void Awake() { }

	// RVA: 0x3750 Offset: 0x3750 VA: 0x3750
	private void OnEnable() { }

	// RVA: 0x3751 Offset: 0x3751 VA: 0x3751
	private void OnDisable() { }

	// RVA: 0x3752 Offset: 0x3752 VA: 0x3752
	private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs) { }

	// RVA: 0x3753 Offset: 0x3753 VA: 0x3753
	public void PushBossByWeapon(Vector3 playerPosition) { }

	[IteratorStateMachine(typeof(BossEffect.<PushEnemyByWeaponCoroutine>d__8))]
	// RVA: 0x3754 Offset: 0x3754 VA: 0x3754
	private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition) { }

	// RVA: 0x3755 Offset: 0x3755 VA: 0x3755
	public void OuchEffect() { }

	// RVA: 0x3756 Offset: 0x3756 VA: 0x3756
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BossEffect$$Awake ----
// C#: void BossEffect__Awake (BossEffect_o* __this, const MethodInfo* method);

void BossEffect__Awake(BossEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Animator_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664ad5 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e18);
    unnamed_function_1099(&DAT_ram_00567efc);
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664ad5 = '\x01';
  }
  uVar1 = unnamed_function_65370(__this,DAT_ram_00567f18);
  *(undefined4 *)(__this->pad_8 + 0x18) = uVar1;
  pAVar2 = (Animator_o *)unnamed_function_65370(__this,DAT_ram_00567e18);
  __this->animator = pAVar2;
  pPVar3 = (PoiseEvent_o *)unnamed_function_65370(__this,DAT_ram_00567efc);
  __this->poiseEvent = pPVar3;
  return;
}

// ---- BossEffect$$OnEnable ----
// C#: void BossEffect__OnEnable (BossEffect_o* __this, const MethodInfo* method);

void BossEffect__OnEnable(BossEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664ad6 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567890);
    DAT_ram_00664ad6 = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00567890,0);
  if (DAT_ram_00664b44 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b44 = '\x01';
  }
  param1 = pPVar3->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pPVar3->OnPoise,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- BossEffect$$OnDisable ----
// C#: void BossEffect__OnDisable (BossEffect_o* __this, const MethodInfo* method);

void BossEffect__OnDisable(BossEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664ad7 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567890);
    DAT_ram_00664ad7 = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00567890,0);
  if (DAT_ram_00664b45 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b45 = '\x01';
  }
  param1 = pPVar3->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pPVar3->OnPoise,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- BossEffect$$PoiseEvent_onPoiseEvent ----
// C#: void BossEffect__PoiseEvent_onPoiseEvent (BossEffect_o* __this, PoiseEvent_o* poiseEvent, PoiseEventArgs_o* poiseEventArgs, const MethodInfo* method);

void BossEffect__PoiseEvent_onPoiseEvent
               (BossEffect_o *__this,PoiseEvent_o *poiseEvent,PoiseEventArgs_o *poiseEventArgs,
               MethodInfo *method)

{
  undefined4 local_8 [2];
  
  if (poiseEventArgs->currentPoise <= 0.0) {
    local_8[0] = *(undefined4 *)(__this->pad_8 + 0x2c);
    unnamed_function_86779(local_8,poiseEventArgs->stunTime,0);
    unnamed_function_86756(*(undefined4 *)(__this->pad_8 + 0x2c),0);
  }
  return;
}

// ---- BossEffect$$PushBossByWeapon ----
// C#: void BossEffect__PushBossByWeapon (BossEffect_o* __this, UnityEngine_Vector3_o playerPosition, const MethodInfo* method);

void BossEffect__PushBossByWeapon(BossEffect_o *__this,Vector3_o *playerPosition,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  undefined4 uVar4;
  int param2;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  uVar4 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar4,0);
  fVar3 = local_8;
  fVar2 = local_c;
  fVar1 = local_10;
  fVar5 = *(float *)(__this->pad_8 + 0x24);
  uVar4 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar4,0);
  fVar6 = playerPosition->z;
  fVar7 = playerPosition->y;
  fVar8 = playerPosition->x;
  if (DAT_ram_0066482c == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0066482c = '\x01';
  }
  fVar6 = (float)local_8 - fVar6;
  fVar7 = (float)local_c - fVar7;
  fVar8 = (float)local_10 - fVar8;
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar9 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  if (1e-05 < fVar9) {
    fVar6 = fVar6 / fVar9;
    fVar7 = fVar7 / fVar9;
    fVar8 = fVar8 / fVar9;
  }
  else {
    if (DAT_ram_00664829 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00664829 = '\x01';
    }
    pfVar10 = *(float **)(UnityEngine_Vector3_TypeInfo + 0x5c);
    fVar6 = pfVar10[2];
    fVar7 = pfVar10[1];
    fVar8 = *pfVar10;
  }
  if (DAT_ram_00664ad8 == '\0') {
    unnamed_function_1099(&BossEffect__PushEnemyByWeaponCoroutine_d__8_TypeInfo);
    DAT_ram_00664ad8 = '\x01';
  }
  param2 = unnamed_function_95402(BossEffect__PushEnemyByWeaponCoroutine_d__8_TypeInfo);
  *(float *)(param2 + 0x1c) = (float)fVar3 + fVar5 * fVar6;
  *(float *)(param2 + 0x18) = (float)fVar2 + fVar5 * fVar7;
  *(float *)(param2 + 0x14) = (float)fVar1 + fVar5 * fVar8;
  *(BossEffect_o **)(param2 + 0x10) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- BossEffect$$PushEnemyByWeaponCoroutine ----
// C#: System_Collections_IEnumerator_o* BossEffect__PushEnemyByWeaponCoroutine (BossEffect_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);

System_Collections_IEnumerator_o *
BossEffect__PushEnemyByWeaponCoroutine
          (BossEffect_o *__this,Vector3_o *targetPosition,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664ad8 == '\0') {
    unnamed_function_1099(&BossEffect__PushEnemyByWeaponCoroutine_d__8_TypeInfo);
    DAT_ram_00664ad8 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(BossEffect__PushEnemyByWeaponCoroutine_d__8_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  *(undefined8 *)(pSVar1 + 5) = *(undefined8 *)targetPosition;
  pSVar1[7]._opaque = (int)targetPosition->z;
  return pSVar1;
}

// ---- BossEffect$$OuchEffect ----
// C#: void BossEffect__OuchEffect (BossEffect_o* __this, const MethodInfo* method);

void BossEffect__OuchEffect(BossEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  Animator_o *param1;
  int iVar2;
  
  if (DAT_ram_00664ad9 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664ad9 = '\x01';
  }
  bVar1 = __this->isPhase2;
  param1 = __this->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  iVar2 = 0x6c;
  if (bVar1 == false) {
    iVar2 = 0x38;
  }
  unnamed_function_45425(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + iVar2),0);
  return;
}

// ---- BossEffect$$.ctor ----
// C#: void BossEffect___ctor (BossEffect_o* __this, const MethodInfo* method);

void BossEffect___ctor(BossEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  if (DAT_ram_00664ada == '\0') {
    unnamed_function_1099(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    DAT_ram_00664ada = '\x01';
  }
  uVar1 = unnamed_function_95402(UnityEngine_WaitForFixedUpdate_TypeInfo);
  __this->pad_8[0x28] = 0;
  __this->pad_8[0x29] = 0;
  __this->pad_8[0x2a] = 0x80;
  __this->pad_8[0x2b] = 0x3e;
  *(undefined4 *)(__this->pad_8 + 0x20) = uVar1;
  unnamed_function_44622(__this,0);
  return;
}

