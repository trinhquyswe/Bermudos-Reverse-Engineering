// Assembly-CSharp :: MeleeSkills
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MeleeSkills : MonoBehaviour // TypeDefIndex: 5695
{
	// Fields
	private Boss boss; // 0x10
	private Weapon weapon; // 0x14
	public float minDistance; // 0x18
	[SerializeField]
	private LayerMask playerLayer; // 0x1C
	private MovementToPositionEvent movementToPositionEvent; // 0x20
	private ContactFilter2D contactFilter2D; // 0x24
	private Coroutine activeSkillCoroutine; // 0x40
	private WaitForFixedUpdate waitForFixedUpdate; // 0x44
	[SerializeField]
	private SoundEffectSO slashSoundEffect; // 0x48
	public bool isAttacking; // 0x4C
	public float speed; // 0x50
	public float cooldown; // 0x54
	private float previousDistance; // 0x58
	private int count; // 0x5C

	// Methods

	// RVA: 0x39C5 Offset: 0x39C5 VA: 0x39C5
	private void Awake() { }

	// RVA: 0x39C6 Offset: 0x39C6 VA: 0x39C6
	private void Start() { }

	// RVA: 0x39C7 Offset: 0x39C7 VA: 0x39C7
	public void DealDamage(int damage) { }

	// RVA: 0x39C8 Offset: 0x39C8 VA: 0x39C8
	public void PlayActiveSkill(int skill) { }

	[IteratorStateMachine(typeof(MeleeSkills.<ActiveSkill>d__18))]
	// RVA: 0x39C9 Offset: 0x39C9 VA: 0x39C9
	private IEnumerator ActiveSkill(int skill) { }

	// RVA: 0x39CA Offset: 0x39CA VA: 0x39CA
	private void StopActiveSkillRoutine() { }

	// RVA: 0x39CB Offset: 0x39CB VA: 0x39CB
	private void OnCollisionEnter2D(Collision2D collision) { }

	// RVA: 0x39CC Offset: 0x39CC VA: 0x39CC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MeleeSkills$$Awake ----
// C#: void MeleeSkills__Awake (MeleeSkills_o* __this, const MethodInfo* method);

void MeleeSkills__Awake(MeleeSkills_o *__this,MethodInfo *method)

{
  Boss_o *pBVar1;
  Weapon_o *pWVar2;
  MovementToPositionEvent_o *pMVar3;
  
  if (DAT_ram_0066495a == '\0') {
    unnamed_function_1099(&DAT_ram_00567e30);
    unnamed_function_1099(&DAT_ram_00567ed8);
    unnamed_function_1099(&DAT_ram_00567f60);
    DAT_ram_0066495a = '\x01';
  }
  pBVar1 = (Boss_o *)unnamed_function_65370(__this,DAT_ram_00567e30);
  __this->boss = pBVar1;
  pWVar2 = (Weapon_o *)unnamed_function_65370(__this,DAT_ram_00567f60);
  __this->weapon = pWVar2;
  pMVar3 = (MovementToPositionEvent_o *)unnamed_function_65370(__this,DAT_ram_00567ed8);
  __this->movementToPositionEvent = pMVar3;
  return;
}

// ---- MeleeSkills$$Start ----
// C#: void MeleeSkills__Start (MeleeSkills_o* __this, const MethodInfo* method);

void MeleeSkills__Start(MeleeSkills_o *__this,MethodInfo *method)

{
  __this->isAttacking = false;
  unnamed_function_16371(&__this->contactFilter2D,(__this->playerLayer).m_Mask,0);
  (__this->contactFilter2D).useTriggers = true;
  (__this->contactFilter2D).useLayerMask = true;
  return;
}

// ---- MeleeSkills$$DealDamage ----
// C#: void MeleeSkills__DealDamage (MeleeSkills_o* __this, int32_t damage, const MethodInfo* method);

void MeleeSkills__DealDamage(MeleeSkills_o *__this,int damage,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ReceiveDamage_o *__this_00;
  PlayerEffect_o *pPVar4;
  undefined4 param2;
  GameResources_o *pGVar5;
  UnityEngine_SpriteRenderer_array *spriteRenderers;
  int iVar6;
  MethodInfo *method_00;
  PolygonCollider2D_o *param1;
  undefined4 param1_00;
  UnityEngine_Material_o *damageFlash;
  UnityEngine_Material_o *defaultMaterial;
  Vector2_o local_50;
  Vector2_o local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  Vector2_o local_28;
  Vector2_o local_20;
  undefined8 local_18;
  undefined8 local_10;
  float local_8;
  
  if (DAT_ram_0066495b == '\0') {
    unnamed_function_1099(&UnityEngine_Collider2D___TypeInfo);
    unnamed_function_1099(&DAT_ram_00567ef4);
    unnamed_function_1099(&DAT_ram_00567f04);
    unnamed_function_1099(&DAT_ram_00567fe8);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_0066495b = '\x01';
  }
  Weapon__GetWeaponCollider(__this->weapon,(MethodInfo *)0x0);
  iVar6 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = unnamed_function_95087(iVar6);
  }
  method_00 = *(MethodInfo **)(*(int *)(iVar6 + 0x60) + 8);
  if ((method_00[5].field_0x1d & 1) == 0) {
    method_00 = (MethodInfo *)unnamed_function_95087(method_00);
  }
  SoundEffectManager__PlaySoundEffect
            ((SoundEffectManager_o *)**(undefined4 **)&method_00[2].field_0x1c,
             __this->slashSoundEffect,method_00);
  iVar6 = unnamed_function_1050(UnityEngine_Collider2D___TypeInfo,1);
  param1 = __this->weapon->polygonCollider2D;
  local_8 = (__this->contactFilter2D).maxNormalAngle;
  local_10._0_4_ = (__this->contactFilter2D).maxDepth;
  local_10._4_4_ = (__this->contactFilter2D).minNormalAngle;
  local_18._0_4_ = (__this->contactFilter2D).layerMask;
  local_18._4_4_ = (__this->contactFilter2D).minDepth;
  local_20 = *(Vector2_o *)&__this->contactFilter2D;
  if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
  }
  local_30 = local_8;
  local_38 = local_10;
  local_40 = local_18;
  local_48 = local_20;
  iVar2 = unnamed_function_16341(param1,&local_48,iVar6,0);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      param1_00 = *(undefined4 *)(iVar6 + iVar1 * 4 + 0x10);
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Object_TypeInfo);
      }
      iVar3 = unnamed_function_44679(param1_00,0,0);
      if (iVar3 != 0) {
        __this_00 = (ReceiveDamage_o *)unnamed_function_65370(param1_00,DAT_ram_00567f04);
        if (__this_00 != (ReceiveDamage_o *)0x0) {
          ReceiveDamage__TakeDamage(__this_00,damage,(MethodInfo *)0x0);
        }
        pPVar4 = (PlayerEffect_o *)unnamed_function_65370(param1_00,DAT_ram_00567ef4);
        if (pPVar4 != (PlayerEffect_o *)0x0) {
          param2 = unnamed_function_44643(__this,0);
          unnamed_function_44960(&local_20,param2,0);
          local_28 = local_20;
          local_50 = local_20;
          PlayerEffect__DamagePushEfect(pPVar4,&local_50,(MethodInfo *)0x0);
        }
        pPVar4 = (PlayerEffect_o *)unnamed_function_65370(param1_00,DAT_ram_00567ef4);
        if (pPVar4 != (PlayerEffect_o *)0x0) {
          pGVar5 = GameResources__get_Instance((MethodInfo *)0x0);
          damageFlash = (UnityEngine_Material_o *)pGVar5->damegeFlashMaterial;
          pGVar5 = GameResources__get_Instance((MethodInfo *)0x0);
          defaultMaterial = (UnityEngine_Material_o *)pGVar5->litMaterial;
          spriteRenderers =
               (UnityEngine_SpriteRenderer_array *)
               unnamed_function_65381(param1_00,DAT_ram_00567fe8);
          PlayerEffect__CallDamageFlashEffect
                    (pPVar4,damageFlash,defaultMaterial,spriteRenderers,(MethodInfo *)0x0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}

// ---- MeleeSkills$$PlayActiveSkill ----
// C#: void MeleeSkills__PlayActiveSkill (MeleeSkills_o* __this, int32_t skill, const MethodInfo* method);

void MeleeSkills__PlayActiveSkill(MeleeSkills_o *__this,int skill,MethodInfo *method)

{
  int param2;
  Coroutine_o *pCVar1;
  
  if (__this->activeSkillCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->activeSkillCoroutine,0);
  }
  if (DAT_ram_0066495c == '\0') {
    unnamed_function_1099(&MeleeSkills__ActiveSkill_d__18_TypeInfo);
    DAT_ram_0066495c = '\x01';
  }
  param2 = unnamed_function_95402(MeleeSkills__ActiveSkill_d__18_TypeInfo);
  *(int *)(param2 + 0x14 /* weapon */) = skill;
  *(MeleeSkills_o **)(param2 + 0x10 /* boss */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,param2,0);
  __this->activeSkillCoroutine = pCVar1;
  return;
}

// ---- MeleeSkills$$ActiveSkill ----
// C#: System_Collections_IEnumerator_o* MeleeSkills__ActiveSkill (MeleeSkills_o* __this, int32_t skill, const MethodInfo* method);

System_Collections_IEnumerator_o *
MeleeSkills__ActiveSkill(MeleeSkills_o *__this,int skill,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_0066495c == '\0') {
    unnamed_function_1099(&MeleeSkills__ActiveSkill_d__18_TypeInfo);
    DAT_ram_0066495c = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(MeleeSkills__ActiveSkill_d__18_TypeInfo);
  pSVar1[5]._opaque = skill;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- MeleeSkills$$StopActiveSkillRoutine ----
// C#: void MeleeSkills__StopActiveSkillRoutine (MeleeSkills_o* __this, const MethodInfo* method);

void MeleeSkills__StopActiveSkillRoutine(MeleeSkills_o *__this,MethodInfo *method)

{
  if (__this->activeSkillCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->activeSkillCoroutine,0);
  }
  return;
}

// ---- MeleeSkills$$OnCollisionEnter2D ----
// C#: void MeleeSkills__OnCollisionEnter2D (MeleeSkills_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void MeleeSkills__OnCollisionEnter2D
               (MeleeSkills_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  int iVar2;
  
  if (DAT_ram_0066495d == '\0') {
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_0066495d = '\x01';
  }
  param1 = unnamed_function_16380(collision,0);
  iVar1 = unnamed_function_44684(param1,0);
  iVar2 = unnamed_function_44702(StringLiteral_6075 /* "Player" */,0);
  if (iVar1 != iVar2) {
    if (__this->activeSkillCoroutine != (Coroutine_o *)0x0) {
      unnamed_function_44730(__this,__this->activeSkillCoroutine,0);
    }
    __this->isAttacking = true;
  }
  return;
}

// ---- MeleeSkills$$.ctor ----
// C#: void MeleeSkills___ctor (MeleeSkills_o* __this, const MethodInfo* method);

void MeleeSkills___ctor(MeleeSkills_o *__this,MethodInfo *method)

{
  WaitForFixedUpdate_o *pWVar1;
  
  if (DAT_ram_0066495e == '\0') {
    unnamed_function_1099(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    DAT_ram_0066495e = '\x01';
  }
  __this->minDistance = 2.0;
  pWVar1 = (WaitForFixedUpdate_o *)unnamed_function_95402(UnityEngine_WaitForFixedUpdate_TypeInfo);
  __this->waitForFixedUpdate = pWVar1;
  unnamed_function_44622(__this,0);
  return;
}

