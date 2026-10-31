// Assembly-CSharp :: DealContactDamage
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DealContactDamage : MonoBehaviour // TypeDefIndex: 5549
{
	// Fields
	private PoiseEvent poiseEvent; // 0x10
	[Tooltip("The contact damage to deal (is overridden by the receiver)")]
	[Header("DEAL DAMAGE")]
	[Space(10)]
	public int contactDamageAmount; // 0x14
	[Tooltip("Specify what layers objects should be on to receive contact damage")]
	private LayerMask playerlayerMask; // 0x18
	private bool isColliding; // 0x1C
	private float stunTime; // 0x20
	public bool isRemoved; // 0x24

	// Methods

	// RVA: 0x36CF Offset: 0x36CF VA: 0x36CF
	private void Awake() { }

	// RVA: 0x36D0 Offset: 0x36D0 VA: 0x36D0
	private void OnEnable() { }

	// RVA: 0x36D1 Offset: 0x36D1 VA: 0x36D1
	private void OnDisable() { }

	// RVA: 0x36D2 Offset: 0x36D2 VA: 0x36D2
	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs) { }

	// RVA: 0x36D3 Offset: 0x36D3 VA: 0x36D3
	private void Start() { }

	// RVA: 0x36D4 Offset: 0x36D4 VA: 0x36D4
	private void Update() { }

	// RVA: 0x36D5 Offset: 0x36D5 VA: 0x36D5
	private void OnTriggerEnter2D(Collider2D collision) { }

	// RVA: 0x36D6 Offset: 0x36D6 VA: 0x36D6
	private void OnTriggerStay2D(Collider2D collision) { }

	// RVA: 0x36D7 Offset: 0x36D7 VA: 0x36D7
	private void ContactDamage(Collider2D collision) { }

	// RVA: 0x36D8 Offset: 0x36D8 VA: 0x36D8
	private void ResetContactCollision() { }

	// RVA: 0x36D9 Offset: 0x36D9 VA: 0x36D9
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DealContactDamage$$Awake ----
// C#: void DealContactDamage__Awake (DealContactDamage_o* __this, const MethodInfo* method);

void DealContactDamage__Awake(DealContactDamage_o *__this,MethodInfo *method)

{
  PoiseEvent_o *pPVar1;
  
  if (DAT_ram_00664a8f == '\0') {
    unnamed_function_1099(&DAT_ram_00567efc);
    DAT_ram_00664a8f = '\x01';
  }
  pPVar1 = (PoiseEvent_o *)unnamed_function_65370(__this,DAT_ram_00567efc);
  __this->poiseEvent = pPVar1;
  return;
}

// ---- DealContactDamage$$OnEnable ----
// C#: void DealContactDamage__OnEnable (DealContactDamage_o* __this, const MethodInfo* method);

void DealContactDamage__OnEnable(DealContactDamage_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664a90 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568900);
    DAT_ram_00664a90 = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568900,0);
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

// ---- DealContactDamage$$OnDisable ----
// C#: void DealContactDamage__OnDisable (DealContactDamage_o* __this, const MethodInfo* method);

void DealContactDamage__OnDisable(DealContactDamage_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664a91 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568900);
    DAT_ram_00664a91 = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568900,0);
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

// ---- DealContactDamage$$PoiseEvent_OnPoise ----
// C#: void DealContactDamage__PoiseEvent_OnPoise (DealContactDamage_o* __this, PoiseEvent_o* poiseEvent, PoiseEventArgs_o* poiseEventArgs, const MethodInfo* method);

void DealContactDamage__PoiseEvent_OnPoise
               (DealContactDamage_o *__this,PoiseEvent_o *poiseEvent,
               PoiseEventArgs_o *poiseEventArgs,MethodInfo *method)

{
  if (poiseEventArgs->currentPoise <= 0.0) {
    __this->stunTime = poiseEventArgs->stunTime;
  }
  return;
}

// ---- DealContactDamage$$Start ----
// C#: void DealContactDamage__Start (DealContactDamage_o* __this, const MethodInfo* method);

void DealContactDamage__Start(DealContactDamage_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664a92 == '\0') {
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_00664a92 = '\x01';
  }
  iVar1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_6075 /* "Player" */;
  iVar1 = unnamed_function_44703(iVar1,0);
  (__this->playerlayerMask).m_Mask = iVar1;
  return;
}

// ---- DealContactDamage$$Update ----
// C#: void DealContactDamage__Update (DealContactDamage_o* __this, const MethodInfo* method);

void DealContactDamage__Update(DealContactDamage_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = __this->stunTime;
  if (0.0 < fVar2) {
    fVar1 = unnamed_function_44879(0);
    __this->stunTime = fVar2 - fVar1;
  }
  return;
}

// ---- DealContactDamage$$OnTriggerEnter2D ----
// C#: void DealContactDamage__OnTriggerEnter2D (DealContactDamage_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void DealContactDamage__OnTriggerEnter2D
               (DealContactDamage_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  uint uVar2;
  GameResources_o *pGVar3;
  undefined4 uVar4;
  undefined4 param1;
  int iVar5;
  Material_o *pMVar6;
  Material_o *pMVar7;
  
  if (DAT_ram_00664a93 == '\0') {
    unnamed_function_1099(&DAT_ram_00567ef4);
    unnamed_function_1099(&DAT_ram_00567fe8);
    DAT_ram_00664a93 = '\x01';
  }
  if (((__this->isRemoved == false) && (__this->isColliding == false)) && (__this->stunTime <= 0.0))
  {
    uVar1 = unnamed_function_44644(collision,0);
    uVar2 = unnamed_function_44684(uVar1,0);
    if (((uint)(__this->playerlayerMask).m_Mask >> (uVar2 & 0x1f) & 1) != 0) {
      DealContactDamage__ContactDamage(__this,collision,(MethodInfo *)__this);
      uVar1 = unnamed_function_65370(collision,DAT_ram_00567ef4);
      pGVar3 = GameResources__get_Instance((MethodInfo *)__this);
      pMVar6 = pGVar3->damegeFlashMaterial;
      pGVar3 = GameResources__get_Instance((MethodInfo *)__this);
      pMVar7 = pGVar3->litMaterial;
      uVar4 = unnamed_function_65381(collision,DAT_ram_00567fe8);
      param1 = unnamed_function_44644(uVar1,0);
      iVar5 = unnamed_function_44687(param1,0);
      if (iVar5 != 0) {
        if (DAT_ram_00664ae5 == '\0') {
          unnamed_function_1099(&PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
          DAT_ram_00664ae5 = '\x01';
        }
        iVar5 = unnamed_function_95402(PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
        *(undefined4 *)(iVar5 + 0x18) = uVar1;
        *(undefined4 *)(iVar5 + 8) = 0;
        *(Material_o **)(iVar5 + 0x1c) = pMVar7;
        *(Material_o **)(iVar5 + 0x14) = pMVar6;
        *(undefined4 *)(iVar5 + 0x10) = uVar4;
        unnamed_function_44725(uVar1,iVar5,0);
      }
    }
  }
  return;
}

// ---- DealContactDamage$$OnTriggerStay2D ----
// C#: void DealContactDamage__OnTriggerStay2D (DealContactDamage_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void DealContactDamage__OnTriggerStay2D
               (DealContactDamage_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  uint uVar2;
  GameResources_o *pGVar3;
  undefined4 uVar4;
  undefined4 param1;
  int iVar5;
  Material_o *pMVar6;
  Material_o *pMVar7;
  
  if (DAT_ram_00664a94 == '\0') {
    unnamed_function_1099(&DAT_ram_00567ef4);
    unnamed_function_1099(&DAT_ram_00567fe8);
    DAT_ram_00664a94 = '\x01';
  }
  if (((__this->isRemoved == false) && (__this->isColliding == false)) && (__this->stunTime <= 0.0))
  {
    uVar1 = unnamed_function_44644(collision,0);
    uVar2 = unnamed_function_44684(uVar1,0);
    if (((uint)(__this->playerlayerMask).m_Mask >> (uVar2 & 0x1f) & 1) != 0) {
      DealContactDamage__ContactDamage(__this,collision,(MethodInfo *)__this);
      uVar1 = unnamed_function_65370(collision,DAT_ram_00567ef4);
      pGVar3 = GameResources__get_Instance((MethodInfo *)__this);
      pMVar6 = pGVar3->damegeFlashMaterial;
      pGVar3 = GameResources__get_Instance((MethodInfo *)__this);
      pMVar7 = pGVar3->litMaterial;
      uVar4 = unnamed_function_65381(collision,DAT_ram_00567fe8);
      param1 = unnamed_function_44644(uVar1,0);
      iVar5 = unnamed_function_44687(param1,0);
      if (iVar5 != 0) {
        if (DAT_ram_00664ae5 == '\0') {
          unnamed_function_1099(&PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
          DAT_ram_00664ae5 = '\x01';
        }
        iVar5 = unnamed_function_95402(PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
        *(undefined4 *)(iVar5 + 0x18) = uVar1;
        *(undefined4 *)(iVar5 + 8) = 0;
        *(Material_o **)(iVar5 + 0x1c) = pMVar7;
        *(Material_o **)(iVar5 + 0x14) = pMVar6;
        *(undefined4 *)(iVar5 + 0x10) = uVar4;
        unnamed_function_44725(uVar1,iVar5,0);
      }
    }
  }
  return;
}

// ---- DealContactDamage$$ContactDamage ----
// C#: void DealContactDamage__ContactDamage (DealContactDamage_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void DealContactDamage__ContactDamage
               (DealContactDamage_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  undefined4 param1;
  int param1_00;
  int iVar1;
  MethodInfo *damageAmount;
  MethodInfo *method_00;
  
  if (DAT_ram_00664a95 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ae0);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_6440 /* "ResetContactCollision" */);
    DAT_ram_00664a95 = '\x01';
  }
  param1 = unnamed_function_44644(collision,0);
  param1_00 = unnamed_function_73836(param1,DAT_ram_00569ae0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1_00,0,0);
  if (iVar1 != 0) {
    __this->isColliding = true;
    unnamed_function_44715(__this,StringLiteral_6440 /* "ResetContactCollision" */,0.5,0);
    method_00 = *(MethodInfo **)(param1_00 + 0x10);
    damageAmount = (MethodInfo *)__this->contactDamageAmount;
    if (0 < (int)method_00) {
      damageAmount = method_00;
    }
    Health__TakeDamage(*(Health_o **)(param1_00 + 0x14),(int)damageAmount,method_00);
  }
  return;
}

// ---- DealContactDamage$$ResetContactCollision ----
// C#: void DealContactDamage__ResetContactCollision (DealContactDamage_o* __this, const MethodInfo* method);

void DealContactDamage__ResetContactCollision(DealContactDamage_o *__this,MethodInfo *method)

{
  __this->isColliding = false;
  return;
}

// ---- DealContactDamage$$.ctor ----
// C#: void DealContactDamage___ctor (DealContactDamage_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

