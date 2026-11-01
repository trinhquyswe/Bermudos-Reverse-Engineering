// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/ItemConsumer.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(k, s)(args)               virtual call: vtable slot s of class k (k+0xc0+8*s)
//   Raw.VCallAt(e)(args)                virtual call: vtable entry at address e (interface)
//   Raw.DelegateInvoke(d)(args)         delegate invoke: target from d+0xc, this d+0x20
//   Raw.IndirectCall(a)(args)           unresolved indirect call (function-table offset a)
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

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
    private void Awake()
    {
        InventoryManager pIVar1 = default;
        DealDamage pDVar2 = default;
        Health pHVar3 = default;
        Rage pRVar4 = default;

        pIVar1 = (InventoryManager)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567eb4);
        this.inventoryManager = pIVar1;
        pDVar2 = (DealDamage)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f6c);
        this.dealDamage = pDVar2;
        pHVar3 = (Health)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e98);
        this.health = pHVar3;
        pRVar4 = (Rage)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f00);
        this.rage = pRVar4;
    }

    // RVA: 0x38D0 Offset: 0x38D0 VA: 0x38D0
    private void OnEnable()
    {
        System.Action.OnInventoryItemChangedEventArgs value = default;

        value = (System.Action.OnInventoryItemChangedEventArgs) new System_Action_OnInventoryItemChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056a7c4,0);
        StaticEventHandler.add_OnHotBarScrollChanged(value);
    }

    // RVA: 0x38D1 Offset: 0x38D1 VA: 0x38D1
    private void OnDisable()
    {
        System.Action.OnInventoryItemChangedEventArgs value = default;

        value = (System.Action.OnInventoryItemChangedEventArgs) new System_Action_OnInventoryItemChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056a7c4,0);
        StaticEventHandler.remove_OnHotBarScrollChanged(value);
    }

    // RVA: 0x38D2 Offset: 0x38D2 VA: 0x38D2
    private void Start()
    {
        this.normalDamage = this.dealDamage.damage;
    }

    // RVA: 0x38D3 Offset: 0x38D3 VA: 0x38D3
    private void StaticEventHandler_OnHotBarScrollChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
    {
        this.currentInventoryItem = onInventoryItemChangedEventArgs.inventoryItem;
    }

    // RVA: 0x38D4 Offset: 0x38D4 VA: 0x38D4
    public void UseItemFromHotBar()
    {
        System.Collections.Generic.List.InventoryItem pSVar1 = default;
        InventoryItem pIVar2 = default;
        int iVar3 = default;
        int uVar4 = default;
        int iVar5 = default;
        object piVar6 = default; // int*
        int param2 = default;
        ItemSO param3 = default;
        MethodInfo local_20 = default;

        if (this.currentInventoryItem == (InventoryItem)0x0) {
            pSVar1 = this.inventoryManager.HotBarItem;
            if (pSVar1[3]._opaque < 1) {
                pIVar2 = this.currentInventoryItem;
            }
            else {
                pSVar1 = this.inventoryManager.HotBarItem;
                pIVar2 = (InventoryItem)/* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar1,0,DAT_ram_0056342c);
                this.currentInventoryItem = pIVar2;
            }
            if (pIVar2 == (InventoryItem)0x0) {
                return;
            }
        }
        /* candidates: System.Collections.Generic.List<Color32>.GetEnumerator | System.Collections.Generic.List<EasingFunction>.GetEnumerator (+9) */ unnamed_function_6549(&local_20,this.inventoryManager.inventoryItemList,DAT_ram_00563420);
        local_20._24_8_ = local_20._8_8_;
        local_20._opaque0 = 0;
        local_20._opaque1 = (int)&local_20.field_0x10;
        do {
            iVar3 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_20.field_0x10, DAT_ram_0056127c);
            iVar5 = DAT_ram_005ddf34;
            if (iVar5 == 1) {
                uVar4 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a35487;
            }
            if (iVar3 == 0) {
                return;
            }
            uVar4 = local_20._28_4_;
            param2 = Raw.Read<int>(local_20._28_4_ + 8);
            param3 = this.currentInventoryItem.itemSO;
            if (Raw.Read<int>(UnityEngine_Object_TypeInfo + 0x74) == 0) {
                import_env_invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
                iVar5 = DAT_ram_005ddf34;
                if (iVar5 == 1) {
                    uVar4 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a35487;
                }
            }
            iVar3 = import_env_invoke_iiii (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x27,param2,param3,0);
            iVar5 = DAT_ram_005ddf34;
            if (iVar5 == 1) {
                uVar4 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a35487;
            }
        } while (iVar3 == 0);
        Raw.Write<int>(uVar4 + 0xc, Raw.Read<int>(uVar4 + 0xc) + -1);
        import_env_invoke_viii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1c,this, Raw.Read<int>(Raw.Read<int>(uVar4 + 8) + 0xc),&local_20);
        iVar5 = DAT_ram_005ddf34;
        if (iVar5 == 1) {
            uVar4 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
            goto code_r0x81a35487;
        }
        if (DAT_ram_006649c0 == '\0') {
            import_env_invoke_vi(0xfa,&OnInventoryItemChangedEventArgs_TypeInfo);
            if (DAT_ram_005ddf34 != 1) {
                import_env_invoke_vi(0xfa,&StaticEventHandler_TypeInfo);
                if (DAT_ram_005ddf34 != 1) {
                    goto code_r0x81a35338;
                }
            }
        }
        else {
            code_r0x81a35338: iVar5 = StaticEventHandler.OnItemChanged;
            if (iVar5 == 0) {
                code_r0x81a353f9: if (Raw.Read<int>(uVar4 + 0xc) != 0) {
                    return;
                }
                import_env_invoke_iiii (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x36, this.inventoryManager.inventoryItemList,uVar4,DAT_ram_00563424);
                iVar5 = DAT_ram_005ddf34;
                if (iVar5 != 1) {
                    return;
                }
                uVar4 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a35487;
            }
            iVar3 = import_env_invoke_ii(0x10c,OnInventoryItemChangedEventArgs_TypeInfo);
            if (DAT_ram_005ddf34 != 1) {
                import_env_invoke_vii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1d,iVar3,0);
                if (DAT_ram_005ddf34 != 1) {
                    Raw.Write<int>(iVar3 + 8, uVar4);
                    import_env_invoke_viii (Raw.Read<int>(iVar5 + 0xc),Raw.Read<int>(iVar5 + 0x20),iVar3, Raw.Read<int>(iVar5 + 0x14));
                    if (DAT_ram_005ddf34 != 1) goto code_r0x81a353f9;
                }
            }
        }
        uVar4 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a35487: iVar5 = import_env_getTempRet0();
        iVar3 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar5 == iVar3) {
            piVar6 = (object)import_env___cxa_begin_catch(uVar4);
            iVar3 = *piVar6;
            local_20._opaque0 = iVar3;
            import_env_invoke_v(0x3a);
            iVar5 = DAT_ram_005ddf34;
            if (iVar5 != 1) {
                if (iVar3 != 0) {
                    unnamed_function_1088(iVar3);
                    do {
                        throw null;
                    } while( true );
                }
                return;
            }
            uVar4 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
        }
        import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1e,&local_20);
        iVar5 = DAT_ram_005ddf34;
        if (iVar5 != 1) {
            import_env___resumeException(uVar4);
            do {
                throw null;
            } while( true );
        }
        import_env___cxa_find_matching_catch_3(0);
        import_env_getTempRet0();
        unnamed_function_642();
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x365E Offset: 0x365E VA: 0x365E
    private void UsePotion(string potionName)
    {
        Coroutine pCVar1 = default;
        int iVar2 = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c))).PlaySoundEffect(this.useItemSoundEffect);
        iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(potionName,"Attack Potion",0);
        if (iVar2 == 0) {
            iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(potionName,"Big Hp Potion",0);
            if (iVar2 != 0) {
                this.health.IncreaseHealth(this.bigHealthPotionAmount);
                return;
            }
            iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(potionName,"Small Hp Potion",0);
            if (iVar2 == 0) {
                iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(potionName,"Rage Potion",0);
                if (iVar2 != 0) {
                    this.rage.IncreaseRage((float)this.ragePotionAmount);
                    return;
                }
            }
            else {
                this.health.IncreaseHealth(this.smallHealthPotionAmount);
            }
            return;
        }
        if (this.attackPotionCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackPotionCoroutine,0);
        }
        this.dealDamage.damage = this.normalDamage;
        iVar2 = new ItemConsumer__UseAttackPotionCoroutine_d__20();
        Raw.Write<object>(iVar2 + 0x10, this);
        Raw.Write<int>(iVar2 + 8, 0);
        pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,iVar2,0);
        this.attackPotionCoroutine = pCVar1;
    }

    // RVA: 0x38D5 Offset: 0x38D5 VA: 0x38D5
    private void UseAttackPotion()
    {
        int param2 = default;
        Coroutine pCVar1 = default;

        if (this.attackPotionCoroutine != (Coroutine)0x0) {
            UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackPotionCoroutine,0);
        }
        this.dealDamage.damage = this.normalDamage;
        param2 = new ItemConsumer__UseAttackPotionCoroutine_d__20();
        Raw.Write<object>(param2 + 0x10 /* inventoryManager */, this);
        Raw.Write<int>(param2 + 8, 0);
        pCVar1 = (Coroutine)UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
        this.attackPotionCoroutine = pCVar1;
    }

    [IteratorStateMachine(typeof(ItemConsumer._UseAttackPotionCoroutine_d__20))]
    // RVA: 0x38D6 Offset: 0x38D6 VA: 0x38D6
    private IEnumerator UseAttackPotionCoroutine()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new ItemConsumer__UseAttackPotionCoroutine_d__20();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x38D7 Offset: 0x38D7 VA: 0x38D7
    private void UseBigHealthPotion()
    {
        this.health.IncreaseHealth(this.bigHealthPotionAmount);
    }

    // RVA: 0x38D8 Offset: 0x38D8 VA: 0x38D8
    public void UseSmallHealthPotion()
    {
        this.health.IncreaseHealth(this.smallHealthPotionAmount);
    }

    // RVA: 0x38D9 Offset: 0x38D9 VA: 0x38D9
    public void UseRagePotion()
    {
        this.rage.IncreaseRage((float)this.ragePotionAmount);
    }

    // RVA: 0x38DA Offset: 0x38DA VA: 0x38DA
    public ItemConsumer()
    {
        this.smallHealthPotionAmount = 0x14;
        this.ragePotionAmount = 2;
        this.attackPotionMultiplier = 1.25;
        this.bigHealthPotionAmount = 0x32;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
