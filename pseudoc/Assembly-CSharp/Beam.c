// Assembly-CSharp :: Beam
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Beam : MonoBehaviour // TypeDefIndex: 5693
{
	// Fields
	private bool isColliding; // 0x10
	private int damageBeam; // 0x14
	private Animator animator; // 0x18
	private LayerMask enemyLayerMask; // 0x1C
	private LayerMask bossLayerMask; // 0x20
	private LayerMask playerLayerMask; // 0x24
	private LayerMask bashAmmoLayerMask; // 0x28
	[HideInInspector]
	public float amountScaleY; // 0x2C
	[SerializeField]
	private SoundEffectSO beamSoundEffect; // 0x30
	[SerializeField]
	private SoundEffectSO beamPlayerSoundEffect; // 0x34

	// Methods

	// RVA: 0x39BF Offset: 0x39BF VA: 0x39BF
	private void Awake() { }

	// RVA: 0x39C0 Offset: 0x39C0 VA: 0x39C0
	private void LateUpdate() { }

	// RVA: 0x39C1 Offset: 0x39C1 VA: 0x39C1
	private void Start() { }

	// RVA: 0x39C2 Offset: 0x39C2 VA: 0x39C2
	public void EyeAttackEnd() { }

	// RVA: 0x39C3 Offset: 0x39C3 VA: 0x39C3
	private void OnTriggerEnter2D(Collider2D collision) { }

	// RVA: 0x39C4 Offset: 0x39C4 VA: 0x39C4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Beam$$Awake ----
// C#: void Beam__Awake (Beam_o* __this, const MethodInfo* method);

void Beam__Awake(Beam_o *__this,MethodInfo *method)

{
  Animator_o *pAVar1;
  int iVar2;
  
  if (DAT_ram_00664956 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e18);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_3539 /* "Enemy" */);
    unnamed_function_1099(&StringLiteral_2074 /* "Boss" */);
    unnamed_function_1099(&StringLiteral_1987 /* "BashAmmo" */);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_00664956 = '\x01';
  }
  pAVar1 = (Animator_o *)unnamed_function_65370(__this,DAT_ram_00567e18);
  __this->animator = pAVar1;
  iVar2 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar2 + 0x10) = StringLiteral_3539 /* "Enemy" */;
  iVar2 = unnamed_function_44703(iVar2,0);
  (__this->enemyLayerMask).m_Mask = iVar2;
  iVar2 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar2 + 0x10) = StringLiteral_2074 /* "Boss" */;
  iVar2 = unnamed_function_44703(iVar2,0);
  (__this->bossLayerMask).m_Mask = iVar2;
  iVar2 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar2 + 0x10) = StringLiteral_6075 /* "Player" */;
  iVar2 = unnamed_function_44703(iVar2,0);
  (__this->playerLayerMask).m_Mask = iVar2;
  iVar2 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar2 + 0x10) = StringLiteral_1987 /* "BashAmmo" */;
  iVar2 = unnamed_function_44703(iVar2,0);
  (__this->bashAmmoLayerMask).m_Mask = iVar2;
  return;
}

// ---- Beam$$LateUpdate ----
// C#: void Beam__LateUpdate (Beam_o* __this, const MethodInfo* method);

void Beam__LateUpdate(Beam_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 param1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_80;
  float4 local_78;
  float4 local_70;
  float4 local_6c;
  float4 local_68;
  float4 local_60;
  float4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  unnamed_function_45444(&local_50,__this->animator,0,0);
  local_8 = local_30;
  local_10 = local_38;
  local_18 = local_40;
  local_20 = local_48;
  uVar1 = local_20;
  local_28 = local_50;
  local_20._4_4_ = (float)((ulonglong)local_48 >> 0x20);
  fVar5 = local_20._4_4_;
  local_20 = uVar1;
  param1 = unnamed_function_44643(__this,0);
  uVar2 = unnamed_function_44643(__this,0);
  unnamed_function_44980(&local_60,uVar2,0);
  fVar3 = __this->amountScaleY;
  uVar2 = unnamed_function_44643(__this,0);
  unnamed_function_44980(&local_60,uVar2,0);
  local_68 = local_58;
  local_78 = local_58;
  fVar5 = fVar5 / 1.5;
  fVar6 = fVar5;
  if (1.0 <= fVar5) {
    fVar6 = 1.0;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar6 + 0.0;
  }
  local_6c = (float4)(fVar3 * fVar4);
  local_70 = local_60;
  local_80 = CONCAT44(local_6c,local_60);
  unnamed_function_44982(param1,&local_80,0);
  return;
}

// ---- Beam$$Start ----
// C#: void Beam__Start (Beam_o* __this, const MethodInfo* method);

void Beam__Start(Beam_o *__this,MethodInfo *method)

{
  undefined4 param1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  MethodInfo *method_00;
  
  if (DAT_ram_00664957 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664957 = '\x01';
  }
  uVar2 = (__this->bashAmmoLayerMask).m_Mask;
  param1 = unnamed_function_44644(__this,0);
  uVar1 = unnamed_function_44684(param1,0);
  iVar3 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((int)(uVar2 & 1 << (uVar1 & 0x1f)) < 1) {
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    method_00 = (MethodInfo *)&__this->beamSoundEffect;
  }
  else {
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    method_00 = (MethodInfo *)&__this->beamPlayerSoundEffect;
  }
  SoundEffectManager__PlaySoundEffect
            ((SoundEffectManager_o *)**(undefined4 **)(iVar3 + 0x5c),
             (SoundEffectSO_o *)method_00->_opaque0,method_00);
  return;
}

// ---- Beam$$EyeAttackEnd ----
// C#: void Beam__EyeAttackEnd (Beam_o* __this, const MethodInfo* method);

void Beam__EyeAttackEnd(Beam_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664958 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664958 = '\x01';
  }
  param1 = unnamed_function_44644(__this,0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  unnamed_function_44782(param1,0);
  return;
}

// ---- Beam$$OnTriggerEnter2D ----
// C#: void Beam__OnTriggerEnter2D (Beam_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void Beam__OnTriggerEnter2D(Beam_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  uint uVar2;
  PlayerEffect_o *pPVar3;
  ReceiveDamage_o *__this_00;
  EnemyEffect_o *pEVar4;
  GameResources_o *pGVar5;
  UnityEngine_SpriteRenderer_array *pUVar6;
  BossEffect_o *pBVar7;
  uint uVar8;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_Material_o *pUVar10;
  Vector2_o local_40;
  float local_38;
  Vector2_o local_30;
  float local_28;
  Vector2_o local_20;
  Vector2_o local_18;
  Vector2_o local_10;
  float local_8;
  
  if (DAT_ram_00664959 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e34);
    unnamed_function_1099(&DAT_ram_00567e84);
    unnamed_function_1099(&DAT_ram_00567ef4);
    unnamed_function_1099(&DAT_ram_00567f04);
    unnamed_function_1099(&DAT_ram_00567fe8);
    DAT_ram_00664959 = '\x01';
  }
  if (__this->isColliding == false) {
    uVar8 = (__this->playerLayerMask).m_Mask;
    uVar1 = unnamed_function_44644(collision,0);
    uVar2 = unnamed_function_44684(uVar1,0);
    if (0 < (int)(uVar8 & 1 << (uVar2 & 0x1f))) {
      pPVar3 = (PlayerEffect_o *)unnamed_function_65370(collision,DAT_ram_00567ef4);
      uVar1 = unnamed_function_44643(__this,0);
      unnamed_function_44960(&local_10,uVar1,0);
      local_18 = local_10;
      local_20 = local_10;
      PlayerEffect__DamagePushEfect(pPVar3,&local_20,(MethodInfo *)0x0);
      pPVar3 = (PlayerEffect_o *)unnamed_function_65370(collision,DAT_ram_00567ef4);
      pGVar5 = GameResources__get_Instance((MethodInfo *)0x0);
      pUVar9 = (UnityEngine_Material_o *)pGVar5->damegeFlashMaterial;
      pGVar5 = GameResources__get_Instance((MethodInfo *)0x0);
      pUVar10 = (UnityEngine_Material_o *)pGVar5->litMaterial;
      pUVar6 = (UnityEngine_SpriteRenderer_array *)
               unnamed_function_65381(collision,DAT_ram_00567fe8);
      PlayerEffect__CallDamageFlashEffect(pPVar3,pUVar9,pUVar10,pUVar6,(MethodInfo *)0x0);
    }
    __this_00 = (ReceiveDamage_o *)unnamed_function_65370(collision,DAT_ram_00567f04);
    if (__this_00 != (ReceiveDamage_o *)0x0) {
      ReceiveDamage__TakeDamage(__this_00,__this->damageBeam,(MethodInfo *)0x0);
    }
    uVar8 = (__this->enemyLayerMask).m_Mask;
    uVar1 = unnamed_function_44644(collision,0);
    uVar2 = unnamed_function_44684(uVar1,0);
    if (0 < (int)(uVar8 & 1 << (uVar2 & 0x1f))) {
      pEVar4 = (EnemyEffect_o *)unnamed_function_65370(collision,DAT_ram_00567e84);
      if (pEVar4 != (EnemyEffect_o *)0x0) {
        uVar1 = unnamed_function_44643(__this,0);
        unnamed_function_44960(&local_10,uVar1,0);
        local_28 = local_8;
        local_30 = local_10;
        EnemyEffect__DamagePushEfect(pEVar4,(Vector3_o *)&local_30,(MethodInfo *)0x0);
      }
      pEVar4 = (EnemyEffect_o *)unnamed_function_65370(collision,DAT_ram_00567e84);
      if (pEVar4 != (EnemyEffect_o *)0x0) {
        pGVar5 = GameResources__get_Instance((MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Material_o *)pGVar5->damegeFlashMaterial;
        pGVar5 = GameResources__get_Instance((MethodInfo *)0x0);
        pUVar10 = (UnityEngine_Material_o *)pGVar5->litMaterial;
        pUVar6 = (UnityEngine_SpriteRenderer_array *)
                 unnamed_function_65381(collision,DAT_ram_00567fe8);
        EnemyEffect__CallDamageFlashEffect(pEVar4,pUVar9,pUVar10,pUVar6,(MethodInfo *)0x0);
      }
    }
    uVar8 = (__this->bossLayerMask).m_Mask;
    uVar1 = unnamed_function_44644(collision,0);
    uVar2 = unnamed_function_44684(uVar1,0);
    if (0 < (int)(uVar8 & 1 << (uVar2 & 0x1f))) {
      pBVar7 = (BossEffect_o *)unnamed_function_65370(collision,DAT_ram_00567e34);
      if (pBVar7 != (BossEffect_o *)0x0) {
        uVar1 = unnamed_function_44643(__this,0);
        unnamed_function_44960(&local_10,uVar1,0);
        local_38 = local_8;
        local_40 = local_10;
        BossEffect__PushBossByWeapon(pBVar7,(Vector3_o *)&local_40,(MethodInfo *)0x0);
      }
      pBVar7 = (BossEffect_o *)unnamed_function_65370(collision,DAT_ram_00567e34);
      if (pBVar7 != (BossEffect_o *)0x0) {
        BossEffect__OuchEffect(pBVar7,(MethodInfo *)0x0);
      }
    }
    __this->isColliding = true;
  }
  return;
}

// ---- Beam$$.ctor ----
// C#: void Beam___ctor (Beam_o* __this, const MethodInfo* method);

void Beam___ctor(Beam_o *__this,MethodInfo *method)

{
  __this->damageBeam = 0x14;
  unnamed_function_44622(__this,0);
  return;
}

