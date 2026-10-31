// Assembly-CSharp :: EnemyEffect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnemyEffect : Effect // TypeDefIndex: 5580
{
	// Fields
	private PoiseEvent poiseEvent; // 0x3C
	private EnemyMovement enemyMovement; // 0x40
	private Coroutine pushEnemyByAmmoCoroutine; // 0x44

	// Methods

	// RVA: 0x375F Offset: 0x375F VA: 0x375F
	private void Awake() { }

	// RVA: 0x3760 Offset: 0x3760 VA: 0x3760
	private void OnEnable() { }

	// RVA: 0x3761 Offset: 0x3761 VA: 0x3761
	private void OnDisable() { }

	// RVA: 0x3762 Offset: 0x3762 VA: 0x3762
	private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs) { }

	// RVA: 0x3763 Offset: 0x3763 VA: 0x3763
	private void Start() { }

	// RVA: 0x3764 Offset: 0x3764 VA: 0x3764
	public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers) { }

	[IteratorStateMachine(typeof(EnemyEffect.<DamageFlashCoroutine>d__9))]
	// RVA: 0x3765 Offset: 0x3765 VA: 0x3765
	private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers) { }

	// RVA: 0x3766 Offset: 0x3766 VA: 0x3766
	public void DamagePushEfect(Vector3 ammo) { }

	[IteratorStateMachine(typeof(EnemyEffect.<PushEnemyByAmmo>d__11))]
	// RVA: 0x3767 Offset: 0x3767 VA: 0x3767
	private IEnumerator PushEnemyByAmmo(Vector3 targetPosition) { }

	// RVA: 0x3768 Offset: 0x3768 VA: 0x3768
	public void PushEnemyByWeapon(Vector3 playerPosition) { }

	[IteratorStateMachine(typeof(EnemyEffect.<PushEnemyByWeaponCoroutine>d__13))]
	// RVA: 0x3769 Offset: 0x3769 VA: 0x3769
	private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition) { }

	// RVA: 0x376A Offset: 0x376A VA: 0x376A
	public void BloodEffect() { }

	// RVA: 0x376B Offset: 0x376B VA: 0x376B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnemyEffect$$Awake ----
// C#: void EnemyEffect__Awake (EnemyEffect_o* __this, const MethodInfo* method);

void EnemyEffect__Awake(EnemyEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  EnemyMovement_o *pEVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664adb == '\0') {
    unnamed_function_1099(&DAT_ram_00567e88);
    unnamed_function_1099(&DAT_ram_00567efc);
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664adb = '\x01';
  }
  uVar1 = unnamed_function_65370(__this,DAT_ram_00567f18);
  *(undefined4 *)(__this->pad_8 + 0x18) = uVar1;
  pEVar2 = (EnemyMovement_o *)unnamed_function_65370(__this,DAT_ram_00567e88);
  __this->enemyMovement = pEVar2;
  pPVar3 = (PoiseEvent_o *)unnamed_function_65370(__this,DAT_ram_00567efc);
  __this->poiseEvent = pPVar3;
  return;
}

// ---- EnemyEffect$$OnEnable ----
// C#: void EnemyEffect__OnEnable (EnemyEffect_o* __this, const MethodInfo* method);

void EnemyEffect__OnEnable(EnemyEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664adc == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568eb8);
    DAT_ram_00664adc = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568eb8,0);
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

// ---- EnemyEffect$$OnDisable ----
// C#: void EnemyEffect__OnDisable (EnemyEffect_o* __this, const MethodInfo* method);

void EnemyEffect__OnDisable(EnemyEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664add == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568eb8);
    DAT_ram_00664add = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568eb8,0);
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

// ---- EnemyEffect$$PoiseEvent_onPoiseEvent ----
// C#: void EnemyEffect__PoiseEvent_onPoiseEvent (EnemyEffect_o* __this, PoiseEvent_o* poiseEvent, PoiseEventArgs_o* poiseEventArgs, const MethodInfo* method);

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

// ---- EnemyEffect$$Start ----
// C#: void EnemyEffect__Start (EnemyEffect_o* __this, const MethodInfo* method);

void EnemyEffect__Start(EnemyEffect_o *__this,MethodInfo *method)

{
  unnamed_function_86761(*(undefined4 *)(__this->pad_8 + 0x30),0);
  unnamed_function_86761(*(undefined4 *)(__this->pad_8 + 0x2c),0);
  return;
}

// ---- EnemyEffect$$CallDamageFlashEffect ----
// C#: void EnemyEffect__CallDamageFlashEffect (EnemyEffect_o* __this, UnityEngine_Material_o* damageFlash, UnityEngine_Material_o* defaultMaterial, UnityEngine_SpriteRenderer_array* spriteRenderers, const MethodInfo* method);

void EnemyEffect__CallDamageFlashEffect
               (EnemyEffect_o *__this,UnityEngine_Material_o *damageFlash,
               UnityEngine_Material_o *defaultMaterial,
               UnityEngine_SpriteRenderer_array *spriteRenderers,MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  
  param1 = unnamed_function_44644(__this,0);
  iVar1 = unnamed_function_44687(param1,0);
  if (iVar1 != 0) {
    if (DAT_ram_00664ade == '\0') {
      unnamed_function_1099(&EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
      DAT_ram_00664ade = '\x01';
    }
    iVar1 = unnamed_function_95402(EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
    *(EnemyEffect_o **)(iVar1 + 0x18) = __this;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(UnityEngine_Material_o **)(iVar1 + 0x1c) = defaultMaterial;
    *(UnityEngine_Material_o **)(iVar1 + 0x14) = damageFlash;
    *(UnityEngine_SpriteRenderer_array **)(iVar1 + 0x10) = spriteRenderers;
    unnamed_function_44725(__this,iVar1,0);
  }
  return;
}

// ---- EnemyEffect$$DamageFlashCoroutine ----
// C#: System_Collections_IEnumerator_o* EnemyEffect__DamageFlashCoroutine (EnemyEffect_o* __this, UnityEngine_Material_o* damageFlash, UnityEngine_Material_o* defaultMaterial, UnityEngine_SpriteRenderer_array* spriteRenderers, const MethodInfo* method);

System_Collections_IEnumerator_o *
EnemyEffect__DamageFlashCoroutine
          (EnemyEffect_o *__this,UnityEngine_Material_o *damageFlash,
          UnityEngine_Material_o *defaultMaterial,UnityEngine_SpriteRenderer_array *spriteRenderers,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664ade == '\0') {
    unnamed_function_1099(&EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
    DAT_ram_00664ade = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
  pSVar1[6]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  pSVar1[7]._opaque = (int)defaultMaterial;
  pSVar1[5]._opaque = (int)damageFlash;
  pSVar1[4]._opaque = (int)spriteRenderers;
  return pSVar1;
}

// ---- EnemyEffect$$DamagePushEfect ----
// C#: void EnemyEffect__DamagePushEfect (EnemyEffect_o* __this, UnityEngine_Vector3_o ammo, const MethodInfo* method);

void EnemyEffect__DamagePushEfect(EnemyEffect_o *__this,Vector3_o *ammo,MethodInfo *method)

{
  undefined1 auVar1 [8];
  undefined4 param1;
  int iVar2;
  Coroutine_o *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_8 [8];
  
  param1 = unnamed_function_44644(__this,0);
  iVar2 = unnamed_function_44687(param1,0);
  if (iVar2 != 0) {
    unnamed_function_16384(local_8,*(undefined4 *)(__this->pad_8 + 0x18),0);
    auVar1 = local_8;
    fVar4 = *(float *)(__this->pad_8 + 0x24);
    unnamed_function_16384(local_8,*(undefined4 *)(__this->pad_8 + 0x18),0);
    fVar5 = ammo->x;
    fVar6 = ammo->y;
    if (DAT_ram_006634ad == '\0') {
      unnamed_function_1099(&System_Math_TypeInfo);
      DAT_ram_006634ad = '\x01';
    }
    fVar5 = local_8._0_4_ - fVar5;
    fVar6 = local_8._4_4_ - fVar6;
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    if (1e-05 < fVar7) {
      fVar6 = fVar6 / fVar7;
      fVar5 = fVar5 / fVar7;
    }
    else {
      if (DAT_ram_0066482a == '\0') {
        unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
        DAT_ram_0066482a = '\x01';
      }
      fVar6 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
      fVar5 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
    }
    if (DAT_ram_00664adf == '\0') {
      unnamed_function_1099(&EnemyEffect__PushEnemyByAmmo_d__11_TypeInfo);
      DAT_ram_00664adf = '\x01';
    }
    iVar2 = unnamed_function_95402(EnemyEffect__PushEnemyByAmmo_d__11_TypeInfo);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(float *)(iVar2 + 0x18) = fVar4 * fVar6 + auVar1._4_4_;
    *(float *)(iVar2 + 0x14) = fVar4 * fVar5 + auVar1._0_4_;
    *(EnemyEffect_o **)(iVar2 + 0x10) = __this;
    *(undefined4 *)(iVar2 + 8) = 0;
    pCVar3 = (Coroutine_o *)unnamed_function_44725(__this,iVar2,0);
    __this->pushEnemyByAmmoCoroutine = pCVar3;
  }
  return;
}

// ---- EnemyEffect$$PushEnemyByAmmo ----
// C#: System_Collections_IEnumerator_o* EnemyEffect__PushEnemyByAmmo (EnemyEffect_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);

System_Collections_IEnumerator_o *
EnemyEffect__PushEnemyByAmmo(EnemyEffect_o *__this,Vector3_o *targetPosition,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664adf == '\0') {
    unnamed_function_1099(&EnemyEffect__PushEnemyByAmmo_d__11_TypeInfo);
    DAT_ram_00664adf = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(EnemyEffect__PushEnemyByAmmo_d__11_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  *(undefined8 *)(pSVar1 + 5) = *(undefined8 *)targetPosition;
  pSVar1[7]._opaque = (int)targetPosition->z;
  return pSVar1;
}

// ---- EnemyEffect$$PushEnemyByWeapon ----
// C#: void EnemyEffect__PushEnemyByWeapon (EnemyEffect_o* __this, UnityEngine_Vector3_o playerPosition, const MethodInfo* method);

void EnemyEffect__PushEnemyByWeapon
               (EnemyEffect_o *__this,Vector3_o *playerPosition,MethodInfo *method)

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
  if (DAT_ram_00664ae0 == '\0') {
    unnamed_function_1099(&EnemyEffect__PushEnemyByWeaponCoroutine_d__13_TypeInfo);
    DAT_ram_00664ae0 = '\x01';
  }
  param2 = unnamed_function_95402(EnemyEffect__PushEnemyByWeaponCoroutine_d__13_TypeInfo);
  *(float *)(param2 + 0x1c) = (float)fVar3 + fVar5 * fVar6;
  *(float *)(param2 + 0x18) = (float)fVar2 + fVar5 * fVar7;
  *(float *)(param2 + 0x14) = (float)fVar1 + fVar5 * fVar8;
  *(EnemyEffect_o **)(param2 + 0x10) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- EnemyEffect$$PushEnemyByWeaponCoroutine ----
// C#: System_Collections_IEnumerator_o* EnemyEffect__PushEnemyByWeaponCoroutine (EnemyEffect_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);

System_Collections_IEnumerator_o *
EnemyEffect__PushEnemyByWeaponCoroutine
          (EnemyEffect_o *__this,Vector3_o *targetPosition,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664ae0 == '\0') {
    unnamed_function_1099(&EnemyEffect__PushEnemyByWeaponCoroutine_d__13_TypeInfo);
    DAT_ram_00664ae0 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(EnemyEffect__PushEnemyByWeaponCoroutine_d__13_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  *(undefined8 *)(pSVar1 + 5) = *(undefined8 *)targetPosition;
  pSVar1[7]._opaque = (int)targetPosition->z;
  return pSVar1;
}

// ---- EnemyEffect$$BloodEffect ----
// C#: void EnemyEffect__BloodEffect (EnemyEffect_o* __this, const MethodInfo* method);

void EnemyEffect__BloodEffect(EnemyEffect_o *__this,MethodInfo *method)

{
  unnamed_function_86756(*(undefined4 *)(__this->pad_8 + 0x30),0);
  return;
}

// ---- EnemyEffect$$.ctor ----
// C#: void EnemyEffect___ctor (EnemyEffect_o* __this, const MethodInfo* method);

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

