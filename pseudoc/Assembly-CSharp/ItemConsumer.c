// Assembly-CSharp :: ItemConsumer
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ItemConsumer : MonoBehaviour // TypeDefIndex: 5647
{
	// Fields
	private InventoryManager inventoryManager; // 0x10
	private DealDamage dealDamage; // 0x14
	private Health health; // 0x18
	private Rage rage; // 0x1C
	private Coroutine attackPotionCoroutine; // 0x20
	private float attackPotionMultiplier; // 0x24
	private int bigHealthPotionAmount; // 0x28
	private int smallHealthPotionAmount; // 0x2C
	private int ragePotionAmount; // 0x30
	private InventoryItem currentInventoryItem; // 0x34
	[SerializeField]
	private SoundEffectSO useItemSoundEffect; // 0x38
	private int normalDamage; // 0x3C

	// Methods

	// RVA: 0x38CF Offset: 0x38CF VA: 0x38CF
	private void Awake() { }

	// RVA: 0x38D0 Offset: 0x38D0 VA: 0x38D0
	private void OnEnable() { }

	// RVA: 0x38D1 Offset: 0x38D1 VA: 0x38D1
	private void OnDisable() { }

	// RVA: 0x38D2 Offset: 0x38D2 VA: 0x38D2
	private void Start() { }

	// RVA: 0x38D3 Offset: 0x38D3 VA: 0x38D3
	private void StaticEventHandler_OnHotBarScrollChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs) { }

	// RVA: 0x38D4 Offset: 0x38D4 VA: 0x38D4
	public void UseItemFromHotBar() { }

	// RVA: 0x365E Offset: 0x365E VA: 0x365E
	private void UsePotion(string potionName) { }

	// RVA: 0x38D5 Offset: 0x38D5 VA: 0x38D5
	private void UseAttackPotion() { }

	[IteratorStateMachine(typeof(ItemConsumer.<UseAttackPotionCoroutine>d__20))]
	// RVA: 0x38D6 Offset: 0x38D6 VA: 0x38D6
	private IEnumerator UseAttackPotionCoroutine() { }

	// RVA: 0x38D7 Offset: 0x38D7 VA: 0x38D7
	private void UseBigHealthPotion() { }

	// RVA: 0x38D8 Offset: 0x38D8 VA: 0x38D8
	public void UseSmallHealthPotion() { }

	// RVA: 0x38D9 Offset: 0x38D9 VA: 0x38D9
	public void UseRagePotion() { }

	// RVA: 0x38DA Offset: 0x38DA VA: 0x38DA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- ItemConsumer$$UsePotion ----
// C#: void ItemConsumer__UsePotion (ItemConsumer_o* __this, System_String_o* potionName, const MethodInfo* method);

void ItemConsumer__UsePotion(ItemConsumer_o *__this,System_String_o *potionName,MethodInfo *method)

{
  Coroutine_o *pCVar1;
  int iVar2;
  
  if (DAT_ram_006648d7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&StringLiteral_6270 /* "Rage Potion" */);
    unnamed_function_1099(&StringLiteral_1875 /* "Attack Potion" */);
    unnamed_function_1099(&StringLiteral_6775 /* "Small Hp Potion" */);
    unnamed_function_1099(&StringLiteral_2023 /* "Big Hp Potion" */);
    DAT_ram_006648d7 = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  SoundEffectManager__PlaySoundEffect
            ((SoundEffectManager_o *)**(undefined4 **)(iVar2 + 0x5c),__this->useItemSoundEffect,
             (MethodInfo *)__this);
  iVar2 = unnamed_function_81494(potionName,StringLiteral_1875 /* "Attack Potion" */,0);
  if (iVar2 == 0) {
    iVar2 = unnamed_function_81494(potionName,StringLiteral_2023 /* "Big Hp Potion" */,0);
    if (iVar2 != 0) {
      Health__IncreaseHealth(__this->health,__this->bigHealthPotionAmount,(MethodInfo *)0x0);
      return;
    }
    iVar2 = unnamed_function_81494(potionName,StringLiteral_6775 /* "Small Hp Potion" */,0);
    if (iVar2 == 0) {
      iVar2 = unnamed_function_81494(potionName,StringLiteral_6270 /* "Rage Potion" */,0);
      if (iVar2 != 0) {
        Rage__IncreaseRage(__this->rage,(float)__this->ragePotionAmount,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      Health__IncreaseHealth(__this->health,__this->smallHealthPotionAmount,(MethodInfo *)0x0);
    }
    return;
  }
  if (__this->attackPotionCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->attackPotionCoroutine,0);
  }
  __this->dealDamage->damage = __this->normalDamage;
  if (DAT_ram_006648d8 == '\0') {
    unnamed_function_1099(&ItemConsumer__UseAttackPotionCoroutine_d__20_TypeInfo);
    DAT_ram_006648d8 = '\x01';
  }
  iVar2 = unnamed_function_95402(ItemConsumer__UseAttackPotionCoroutine_d__20_TypeInfo);
  *(ItemConsumer_o **)(iVar2 + 0x10) = __this;
  *(undefined4 *)(iVar2 + 8) = 0;
  pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,iVar2,0);
  __this->attackPotionCoroutine = pCVar1;
  return;
}

// ---- ItemConsumer$$Awake ----
// C#: void ItemConsumer__Awake (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__Awake(ItemConsumer_o *__this,MethodInfo *method)

{
  InventoryManager_o *pIVar1;
  DealDamage_o *pDVar2;
  Health_o *pHVar3;
  Rage_o *pRVar4;
  
  if (DAT_ram_006648d3 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f6c);
    unnamed_function_1099(&DAT_ram_00567e98);
    unnamed_function_1099(&DAT_ram_00567eb4);
    unnamed_function_1099(&DAT_ram_00567f00);
    DAT_ram_006648d3 = '\x01';
  }
  pIVar1 = (InventoryManager_o *)unnamed_function_65370(__this,DAT_ram_00567eb4);
  __this->inventoryManager = pIVar1;
  pDVar2 = (DealDamage_o *)unnamed_function_65372(__this,DAT_ram_00567f6c);
  __this->dealDamage = pDVar2;
  pHVar3 = (Health_o *)unnamed_function_65370(__this,DAT_ram_00567e98);
  __this->health = pHVar3;
  pRVar4 = (Rage_o *)unnamed_function_65370(__this,DAT_ram_00567f00);
  __this->rage = pRVar4;
  return;
}

// ---- ItemConsumer$$OnEnable ----
// C#: void ItemConsumer__OnEnable (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__OnEnable(ItemConsumer_o *__this,MethodInfo *method)

{
  System_Action_OnInventoryItemChangedEventArgs__o *value;
  
  if (DAT_ram_006648d4 == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a7c4);
    DAT_ram_006648d4 = '\x01';
  }
  value = (System_Action_OnInventoryItemChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056a7c4,0);
  StaticEventHandler__add_OnHotBarScrollChanged(value,(MethodInfo *)__this);
  return;
}

// ---- ItemConsumer$$OnDisable ----
// C#: void ItemConsumer__OnDisable (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__OnDisable(ItemConsumer_o *__this,MethodInfo *method)

{
  System_Action_OnInventoryItemChangedEventArgs__o *value;
  
  if (DAT_ram_006648d5 == '\0') {
    unnamed_function_1099(&System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a7c4);
    DAT_ram_006648d5 = '\x01';
  }
  value = (System_Action_OnInventoryItemChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnInventoryItemChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056a7c4,0);
  StaticEventHandler__remove_OnHotBarScrollChanged(value,(MethodInfo *)__this);
  return;
}

// ---- ItemConsumer$$Start ----
// C#: void ItemConsumer__Start (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__Start(ItemConsumer_o *__this,MethodInfo *method)

{
  __this->normalDamage = __this->dealDamage->damage;
  return;
}

// ---- ItemConsumer$$StaticEventHandler_OnHotBarScrollChanged ----
// C#: void ItemConsumer__StaticEventHandler_OnHotBarScrollChanged (ItemConsumer_o* __this, OnInventoryItemChangedEventArgs_o* onInventoryItemChangedEventArgs, const MethodInfo* method);

void ItemConsumer__StaticEventHandler_OnHotBarScrollChanged
               (ItemConsumer_o *__this,
               OnInventoryItemChangedEventArgs_o *onInventoryItemChangedEventArgs,MethodInfo *method
               )

{
  __this->currentInventoryItem = onInventoryItemChangedEventArgs->inventoryItem;
  return;
}

// ---- ItemConsumer$$UseItemFromHotBar ----
// C#: void ItemConsumer__UseItemFromHotBar (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__UseItemFromHotBar(ItemConsumer_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InventoryItem__o *pSVar1;
  InventoryItem_o *pIVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 param2;
  ItemSO_o *param3;
  MethodInfo local_20;
  
  if (DAT_ram_006648d6 == '\0') {
    unnamed_function_1099(&DAT_ram_00561278);
    unnamed_function_1099(&DAT_ram_0056127c);
    unnamed_function_1099(&DAT_ram_00561280);
    unnamed_function_1099(&DAT_ram_00563420);
    unnamed_function_1099(&DAT_ram_00563424);
    unnamed_function_1099(&DAT_ram_00563428);
    unnamed_function_1099(&DAT_ram_0056342c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648d6 = '\x01';
  }
  if (__this->currentInventoryItem == (InventoryItem_o *)0x0) {
    pSVar1 = InventoryManager__get_HotBarItem(__this->inventoryManager,&local_20);
    if (pSVar1[3]._opaque < 1) {
      pIVar2 = __this->currentInventoryItem;
    }
    else {
      pSVar1 = InventoryManager__get_HotBarItem(__this->inventoryManager,&local_20);
      pIVar2 = (InventoryItem_o *)unnamed_function_6529(pSVar1,0,DAT_ram_0056342c);
      __this->currentInventoryItem = pIVar2;
    }
    if (pIVar2 == (InventoryItem_o *)0x0) {
      return;
    }
  }
  unnamed_function_6549(&local_20,__this->inventoryManager->inventoryItemList,DAT_ram_00563420);
  local_20._24_8_ = local_20._8_8_;
  local_20._opaque0 = 0;
  local_20._opaque1 = (int)&local_20.field_0x10;
  do {
    DAT_ram_005ddf34 = 0;
    iVar3 = import::env::invoke_iii
                      (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_20.field_0x10,
                       DAT_ram_0056127c);
    iVar5 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar5 == 1) {
      uVar4 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a35487;
    }
    if (iVar3 == 0) {
      DAT_ram_005ddf34 = 0;
      return;
    }
    uVar4 = local_20._28_4_;
    param2 = *(undefined4 *)(local_20._28_4_ + 8);
    param3 = __this->currentInventoryItem->itemSO;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
      iVar5 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar5 == 1) {
        uVar4 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a35487;
      }
    }
    DAT_ram_005ddf34 = 0;
    iVar3 = import::env::invoke_iiii
                      (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x27,param2,param3,0);
    iVar5 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar5 == 1) {
      uVar4 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a35487;
    }
  } while (iVar3 == 0);
  *(int *)(uVar4 + 0xc) = *(int *)(uVar4 + 0xc) + -1;
  DAT_ram_005ddf34 = 0;
  import::env::invoke_viii
            (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1c,__this,
             *(undefined4 *)(*(int *)(uVar4 + 8) + 0xc),&local_20);
  iVar5 = DAT_ram_005ddf34;
  DAT_ram_005ddf34 = 0;
  if (iVar5 == 1) {
    uVar4 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
    goto code_r0x81a35487;
  }
  if (DAT_ram_006649c0 == '\0') {
    DAT_ram_005ddf34 = 0;
    import::env::invoke_vi(0xfa,&OnInventoryItemChangedEventArgs_TypeInfo);
    if (DAT_ram_005ddf34 != 1) {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_vi(0xfa,&StaticEventHandler_TypeInfo);
      if (DAT_ram_005ddf34 != 1) {
        DAT_ram_006649c0 = '\x01';
        goto code_r0x81a35338;
      }
    }
  }
  else {
code_r0x81a35338:
    iVar5 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x20);
    if (iVar5 == 0) {
code_r0x81a353f9:
      if (*(int *)(uVar4 + 0xc) != 0) {
        DAT_ram_005ddf34 = 0;
        return;
      }
      DAT_ram_005ddf34 = 0;
      import::env::invoke_iiii
                (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x36,
                 __this->inventoryManager->inventoryItemList,uVar4,DAT_ram_00563424);
      iVar5 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar5 != 1) {
        DAT_ram_005ddf34 = 0;
        return;
      }
      uVar4 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a35487;
    }
    DAT_ram_005ddf34 = 0;
    iVar3 = import::env::invoke_ii(0x10c,OnInventoryItemChangedEventArgs_TypeInfo);
    if (DAT_ram_005ddf34 != 1) {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_vii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1d,iVar3,0);
      if (DAT_ram_005ddf34 != 1) {
        *(undefined4 *)(iVar3 + 8) = uVar4;
        DAT_ram_005ddf34 = 0;
        import::env::invoke_viii
                  (*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x20),iVar3,
                   *(undefined4 *)(iVar5 + 0x14));
        if (DAT_ram_005ddf34 != 1) goto code_r0x81a353f9;
      }
    }
  }
  DAT_ram_005ddf34 = 0;
  uVar4 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a35487:
  iVar5 = import::env::getTempRet0();
  iVar3 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar5 == iVar3) {
    piVar6 = (int *)import::env::__cxa_begin_catch(uVar4);
    iVar3 = *piVar6;
    DAT_ram_005ddf34 = 0;
    local_20._opaque0 = iVar3;
    import::env::invoke_v(0x3a);
    iVar5 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar5 != 1) {
      if (iVar3 != 0) {
        unnamed_function_1088(iVar3);
        do {
          halt_trap();
        } while( true );
      }
      DAT_ram_005ddf34 = 0;
      return;
    }
    uVar4 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1e,&local_20);
  iVar5 = DAT_ram_005ddf34;
  DAT_ram_005ddf34 = 0;
  if (iVar5 != 1) {
    import::env::__resumeException(uVar4);
    do {
      halt_trap();
    } while( true );
  }
  import::env::__cxa_find_matching_catch_3(0);
  import::env::getTempRet0();
  unnamed_function_642();
  do {
    halt_trap();
  } while( true );
}

// ---- ItemConsumer$$UseAttackPotion ----
// C#: void ItemConsumer__UseAttackPotion (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__UseAttackPotion(ItemConsumer_o *__this,MethodInfo *method)

{
  int param2;
  Coroutine_o *pCVar1;
  
  if (__this->attackPotionCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->attackPotionCoroutine,0);
  }
  __this->dealDamage->damage = __this->normalDamage;
  if (DAT_ram_006648d8 == '\0') {
    unnamed_function_1099(&ItemConsumer__UseAttackPotionCoroutine_d__20_TypeInfo);
    DAT_ram_006648d8 = '\x01';
  }
  param2 = unnamed_function_95402(ItemConsumer__UseAttackPotionCoroutine_d__20_TypeInfo);
  *(ItemConsumer_o **)(param2 + 0x10 /* inventoryManager */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,param2,0);
  __this->attackPotionCoroutine = pCVar1;
  return;
}

// ---- ItemConsumer$$UseAttackPotionCoroutine ----
// C#: System_Collections_IEnumerator_o* ItemConsumer__UseAttackPotionCoroutine (ItemConsumer_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
ItemConsumer__UseAttackPotionCoroutine(ItemConsumer_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_006648d8 == '\0') {
    unnamed_function_1099(&ItemConsumer__UseAttackPotionCoroutine_d__20_TypeInfo);
    DAT_ram_006648d8 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(ItemConsumer__UseAttackPotionCoroutine_d__20_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- ItemConsumer$$UseBigHealthPotion ----
// C#: void ItemConsumer__UseBigHealthPotion (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__UseBigHealthPotion(ItemConsumer_o *__this,MethodInfo *method)

{
  Health__IncreaseHealth(__this->health,__this->bigHealthPotionAmount,(MethodInfo *)0x0);
  return;
}

// ---- ItemConsumer$$UseSmallHealthPotion ----
// C#: void ItemConsumer__UseSmallHealthPotion (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__UseSmallHealthPotion(ItemConsumer_o *__this,MethodInfo *method)

{
  Health__IncreaseHealth(__this->health,__this->smallHealthPotionAmount,(MethodInfo *)0x0);
  return;
}

// ---- ItemConsumer$$UseRagePotion ----
// C#: void ItemConsumer__UseRagePotion (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer__UseRagePotion(ItemConsumer_o *__this,MethodInfo *method)

{
  Rage__IncreaseRage(__this->rage,(float)__this->ragePotionAmount,(MethodInfo *)0x0);
  return;
}

// ---- ItemConsumer$$.ctor ----
// C#: void ItemConsumer___ctor (ItemConsumer_o* __this, const MethodInfo* method);

void ItemConsumer___ctor(ItemConsumer_o *__this,MethodInfo *method)

{
  __this->smallHealthPotionAmount = 0x14;
  __this->ragePotionAmount = 2;
  __this->attackPotionMultiplier = 1.25;
  __this->bigHealthPotionAmount = 0x32;
  unnamed_function_44622(__this,0);
  return;
}

