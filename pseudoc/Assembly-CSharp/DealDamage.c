// Assembly-CSharp :: DealDamage
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DealDamage : MonoBehaviour // TypeDefIndex: 5550
{
	// Fields
	[SerializeField]
	private LayerMask enemyLayer; // 0x10
	private ContactFilter2D contactFilter2D; // 0x14
	private Weapon weapon; // 0x30
	[SerializeField]
	public int damage; // 0x34
	private int attackCost; // 0x38

	// Methods

	// RVA: 0x36DA Offset: 0x36DA VA: 0x36DA
	private void Awake() { }

	// RVA: 0x36DB Offset: 0x36DB VA: 0x36DB
	private void OnEnable() { }

	// RVA: 0x36DC Offset: 0x36DC VA: 0x36DC
	private void OnDisable() { }

	// RVA: 0x36DD Offset: 0x36DD VA: 0x36DD
	private void DealDamageEvent_OnDealDamage(DealDamageEvent dealDamageEvent, DealDamageEventAgrs dealDamageEventAgrs) { }

	// RVA: 0x36DE Offset: 0x36DE VA: 0x36DE
	private void DealDamageHandle(Collider2D collision) { }

	// RVA: 0x36DF Offset: 0x36DF VA: 0x36DF
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DealDamage$$Awake ----
// C#: void DealDamage__Awake (DealDamage_o* __this, const MethodInfo* method);

void DealDamage__Awake(DealDamage_o *__this,MethodInfo *method)

{
  Weapon_o *pWVar1;
  
  if (DAT_ram_00664a96 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f60);
    DAT_ram_00664a96 = '\x01';
  }
  unnamed_function_16371(&__this->contactFilter2D,(__this->enemyLayer).m_Mask,0);
  pWVar1 = (Weapon_o *)unnamed_function_65370(__this,DAT_ram_00567f60);
  __this->weapon = pWVar1;
  (__this->contactFilter2D).useTriggers = false;
  (__this->contactFilter2D).useLayerMask = true;
  return;
}

// ---- DealDamage$$OnEnable ----
// C#: void DealDamage__OnEnable (DealDamage_o* __this, const MethodInfo* method);

void DealDamage__OnEnable(DealDamage_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int iVar2;
  int param1;
  undefined4 param1_00;
  int param1_01;
  int iVar3;
  
  if (DAT_ram_00664a97 == '\0') {
    unnamed_function_1099(&System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568904);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664a97 = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x28);
  param1_00 = unnamed_function_95402(System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568904,0);
  if (DAT_ram_00664a9b == '\0') {
    unnamed_function_1099(&System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
    DAT_ram_00664a9b = '\x01';
  }
  param1 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo;
    if ((param1_01 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_01,System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(iVar3 + 0x10,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- DealDamage$$OnDisable ----
// C#: void DealDamage__OnDisable (DealDamage_o* __this, const MethodInfo* method);

void DealDamage__OnDisable(DealDamage_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int iVar2;
  int param1;
  undefined4 param1_00;
  int param1_01;
  int iVar3;
  
  if (DAT_ram_00664a98 == '\0') {
    unnamed_function_1099(&System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568904);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664a98 = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x28);
  param1_00 = unnamed_function_95402(System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568904,0);
  if (DAT_ram_00664a9c == '\0') {
    unnamed_function_1099(&System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
    DAT_ram_00664a9c = '\x01';
  }
  param1 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo;
    if ((param1_01 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_01,System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(iVar3 + 0x10,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- DealDamage$$DealDamageEvent_OnDealDamage ----
// C#: void DealDamage__DealDamageEvent_OnDealDamage (DealDamage_o* __this, DealDamageEvent_o* dealDamageEvent, DealDamageEventAgrs_o* dealDamageEventAgrs, const MethodInfo* method);

void DealDamage__DealDamageEvent_OnDealDamage
               (DealDamage_o *__this,DealDamageEvent_o *dealDamageEvent,
               DealDamageEventAgrs_o *dealDamageEventAgrs,MethodInfo *method)

{
  undefined4 param1;
  MethodInfo *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  MethodInfo *pMVar5;
  SoundEffectManager_o *__this_00;
  UnityEngine_Collider2D_o *collision;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  float local_8;
  
  if (DAT_ram_00664a99 == '\0') {
    unnamed_function_1099(&UnityEngine_Collider2D___TypeInfo);
    unnamed_function_1099(&DAT_ram_00567e58);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664a99 = '\x01';
  }
  Weapon__GetWeaponCollider(__this->weapon,(MethodInfo *)0x0);
  iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  pMVar5 = *(MethodInfo **)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 0x40);
  if (0.0 < *(float *)&pMVar5->field_0x14) {
    iVar4 = __this->attackCost;
    fVar7 = *(float *)&pMVar5->field_0x14 - (float)iVar4;
    *(float *)&pMVar5->field_0x14 = fVar7;
    StaminaEvent__CallStaminaChangedEvent
              (*(StaminaEvent_o **)(*(int *)&pMVar5->field_0x18 + 0x3c),
               fVar7 / (float)*(int *)&pMVar5->field_0x10,fVar7,(float)iVar4,pMVar5);
  }
  iVar4 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)(iVar4 + 0x5c);
  iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  pMVar5 = (MethodInfo *)0x0;
  SoundEffectManager__PlaySoundEffect
            (__this_00,*(SoundEffectSO_o **)(*(int *)(**(int **)(iVar4 + 0x5c) + 0x10) + 100),
             (MethodInfo *)0x0);
  iVar4 = unnamed_function_1050(UnityEngine_Collider2D___TypeInfo,1);
  param1 = unnamed_function_65370(__this,DAT_ram_00567e58);
  local_8 = (__this->contactFilter2D).maxNormalAngle;
  local_10._0_4_ = (__this->contactFilter2D).maxDepth;
  local_10._4_4_ = (__this->contactFilter2D).minNormalAngle;
  local_18._0_4_ = (__this->contactFilter2D).layerMask;
  local_18._4_4_ = (__this->contactFilter2D).minDepth;
  local_20._0_1_ = (__this->contactFilter2D).useTriggers;
  local_20._1_1_ = (__this->contactFilter2D).useLayerMask;
  local_20._2_1_ = (__this->contactFilter2D).useDepth;
  local_20._3_1_ = (__this->contactFilter2D).useOutsideDepth;
  local_20._4_1_ = (__this->contactFilter2D).useNormalAngle;
  local_20._5_1_ = (__this->contactFilter2D).useOutsideNormalAngle;
  local_20._6_1_ = (__this->contactFilter2D).pad_6[0];
  local_20._7_1_ = (__this->contactFilter2D).pad_6[1];
  if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
  }
  local_28 = local_8;
  local_30 = local_10;
  local_38 = local_18;
  local_40 = local_20;
  pMVar1 = (MethodInfo *)unnamed_function_16341(param1,&local_40,iVar4,0);
  if (0 < (int)pMVar1) {
    do {
      collision = *(UnityEngine_Collider2D_o **)(iVar4 + (int)pMVar5 * 4 + 0x10);
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      iVar2 = unnamed_function_44679(collision,0,0);
      if (iVar2 != 0) {
        iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
        if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
        if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = *(int *)(*(int *)(**(int **)(iVar2 + 0x5c) + 0x10) + 0x4c);
        fVar7 = *(float *)(iVar2 + 0x14) + 1.0;
        *(float *)(iVar2 + 0x14) = fVar7;
        fVar6 = *(float *)(iVar2 + 0x10);
        if (fVar6 < fVar7) {
          *(float *)(iVar2 + 0x14) = fVar6;
          fVar7 = fVar6;
        }
        if (DAT_ram_00664b49 == '\0') {
          unnamed_function_1099(&RageEventArgs_TypeInfo);
          unnamed_function_1099(&RageEvent_TypeInfo);
          DAT_ram_00664b49 = '\x01';
        }
        iVar2 = **(int **)(RageEvent_TypeInfo + 0x5c);
        if (iVar2 != 0) {
          iVar3 = unnamed_function_95402(RageEventArgs_TypeInfo);
          *(float *)(iVar3 + 0x10) = fVar6;
          *(float *)(iVar3 + 0xc) = fVar6;
          *(float *)(iVar3 + 8) = fVar7 / fVar6;
          (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                    (*(undefined4 *)(iVar2 + 0x20),iVar3,*(undefined4 *)(iVar2 + 0x14));
        }
        DealDamage__DealDamageHandle(__this,collision,pMVar5);
      }
      pMVar5 = (MethodInfo *)((int)&pMVar5->_opaque0 + 1);
    } while (pMVar5 != pMVar1);
  }
  return;
}

// ---- DealDamage$$DealDamageHandle ----
// C#: void DealDamage__DealDamageHandle (DealDamage_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void DealDamage__DealDamageHandle
               (DealDamage_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  GameResources_o *pGVar4;
  undefined4 param1;
  BossEffect_o *__this_00;
  EnemyEffect_o *__this_01;
  undefined4 param1_00;
  Material_o *pMVar5;
  Material_o *pMVar6;
  int iVar7;
  Vector3_o local_30;
  Vector3_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664a9a == '\0') {
    unnamed_function_1099(&DAT_ram_00567e34);
    unnamed_function_1099(&DAT_ram_00567e30);
    unnamed_function_1099(&DAT_ram_00567e78);
    unnamed_function_1099(&DAT_ram_00567f04);
    unnamed_function_1099(&DAT_ram_00567fb4);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664a9a = '\x01';
  }
  uVar2 = unnamed_function_65370(collision,DAT_ram_00567e78);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar3 = unnamed_function_44679(uVar2,0,0);
  if (iVar3 == 0) {
    uVar2 = unnamed_function_65370(collision,DAT_ram_00567e30);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar3 = unnamed_function_44679(uVar2,0,0);
    if (iVar3 != 0) {
      __this_00 = (BossEffect_o *)unnamed_function_65370(collision,DAT_ram_00567e34);
      iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      uVar2 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
      unnamed_function_44960(&local_10,uVar2,0);
      local_20.z = local_10.z;
      local_20.x = local_10.x;
      local_20.y = local_10.y;
      BossEffect__PushBossByWeapon(__this_00,&local_20,(MethodInfo *)collision);
      iVar3 = unnamed_function_65370(collision,DAT_ram_00567f04);
      if (*(char *)(iVar3 + 0x18) == '\0') {
        iVar7 = __this->damage;
        if (0 < *(int *)(iVar3 + 0x10)) {
          iVar7 = *(int *)(iVar3 + 0x10);
        }
        Health__TakeDamage(*(Health_o **)(iVar3 + 0x14),iVar7,(MethodInfo *)collision);
      }
      iVar3 = unnamed_function_65370(collision,DAT_ram_00567e34);
      if (DAT_ram_00664ad9 == '\0') {
        unnamed_function_1099(&Settings_TypeInfo);
        DAT_ram_00664ad9 = '\x01';
      }
      cVar1 = *(char *)(iVar3 + 0x3c);
      uVar2 = *(undefined4 *)(iVar3 + 0x40);
      if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(Settings_TypeInfo);
      }
      iVar3 = 0x6c;
      if (cVar1 == '\0') {
        iVar3 = 0x38;
      }
      unnamed_function_45425(uVar2,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + iVar3),0);
    }
  }
  else {
    iVar3 = unnamed_function_65370(collision,DAT_ram_00567e78);
    if (iVar3 != 0) {
      __this_01 = *(EnemyEffect_o **)(iVar3 + 0x24);
      iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
      if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = unnamed_function_95087(iVar3);
      }
      uVar2 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
      unnamed_function_44960(&local_10,uVar2,0);
      local_30.z = local_10.z;
      local_30.x = local_10.x;
      local_30.y = local_10.y;
      EnemyEffect__PushEnemyByWeapon(__this_01,&local_30,(MethodInfo *)collision);
    }
    iVar3 = unnamed_function_65370(collision,DAT_ram_00567f04);
    if (*(char *)(iVar3 + 0x18) == '\0') {
      iVar7 = __this->damage;
      if (0 < *(int *)(iVar3 + 0x10)) {
        iVar7 = *(int *)(iVar3 + 0x10);
      }
      Health__TakeDamage(*(Health_o **)(iVar3 + 0x14),iVar7,(MethodInfo *)collision);
    }
    iVar3 = unnamed_function_65370(collision,DAT_ram_00567e78);
    param1_00 = *(undefined4 *)(iVar3 + 0x24);
    pGVar4 = GameResources__get_Instance((MethodInfo *)collision);
    pMVar5 = pGVar4->damegeFlashMaterial;
    pGVar4 = GameResources__get_Instance((MethodInfo *)collision);
    pMVar6 = pGVar4->litMaterial;
    uVar2 = unnamed_function_65378(collision,DAT_ram_00567fb4);
    param1 = unnamed_function_44644(param1_00,0);
    iVar3 = unnamed_function_44687(param1,0);
    if (iVar3 != 0) {
      if (DAT_ram_00664ade == '\0') {
        unnamed_function_1099(&EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
        DAT_ram_00664ade = '\x01';
      }
      iVar3 = unnamed_function_95402(EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
      *(undefined4 *)(iVar3 + 0x18) = param1_00;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(Material_o **)(iVar3 + 0x1c) = pMVar6;
      *(Material_o **)(iVar3 + 0x14) = pMVar5;
      *(undefined4 *)(iVar3 + 0x10) = uVar2;
      unnamed_function_44725(param1_00,iVar3,0);
    }
    iVar3 = unnamed_function_65370(collision,DAT_ram_00567e78);
    unnamed_function_86756(*(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x38),0);
  }
  return;
}

// ---- DealDamage$$.ctor ----
// C#: void DealDamage___ctor (DealDamage_o* __this, const MethodInfo* method);

void DealDamage___ctor(DealDamage_o *__this,MethodInfo *method)

{
  __this->damage = 10;
  __this->attackCost = 10;
  unnamed_function_44622(__this,0);
  return;
}

