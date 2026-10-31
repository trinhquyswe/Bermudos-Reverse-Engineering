// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Inventory.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(a)(args)                  virtual call through vtable slot a
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour // TypeDefIndex: 5640
{
    // Fields
    [HideInInspector]
    public List<ItemUI> inventorySlotList; // 0x10
    [HideInInspector]
    public List<ItemUI> hotBarSlotList; // 0x14
    public GameObject itemUIPrefab; // 0x18
    public GameObject content; // 0x1C
    public GameObject hotBar; // 0x20
    private ItemUI draggedItemUI; // 0x24
    private ItemUI hoverItemUI; // 0x28
    private ItemUI pressedItemUI; // 0x2C
    private ItemUI previousPressedItemUI; // 0x30

    // Methods

    // RVA: 0x38A0 Offset: 0x38A0 VA: 0x38A0
    private void Start()
    {
        OnInventoryChangedEventArgs __this_00 = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnInventoryChanged;
        if (iVar1 != 0) {
            __this_00 = (OnInventoryChangedEventArgs) new OnInventoryChangedEventArgs();
            new OnInventoryChangedEventArgs();
            __this_00.inventory = this;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    // RVA: 0x38A1 Offset: 0x38A1 VA: 0x38A1
    private void OnEnable()
    {
        int uVar1 = default;
        System.Action.OnItemUIChangedEventArgs pSVar2 = default;
        MethodInfo local_30 = default;
        long local_10 = default;
        int local_8 = default;

        uVar1 = UnityEngine.Component.get_transform(this,0);
        local_30._16_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_30._24_4_ = Raw.Read<int>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10 = local_30._16_8_;
        local_8 = local_30._24_4_;
        unnamed_function_44982(uVar1,&local_30.field_0x10,0);
        uVar1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_transform(this,0);
        local_30._8_4_ = Raw.Read<int>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x14);
        local_30._0_8_ = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0xc);
        uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,&local_30,0.5,0);
        DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,0x1b,DAT_ram_0056d380);
        pSVar2 = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(pSVar2,this,DAT_ram_0056a768,0);
        StaticEventHandler.add_OnItemUIEndDragChanged(pSVar2, &local_30);
        pSVar2 = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(pSVar2,this,DAT_ram_0056a770,0);
        StaticEventHandler.add_OnItemUIHoverChanged(pSVar2, &local_30);
        pSVar2 = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(pSVar2,this,DAT_ram_0056a76c,0);
        StaticEventHandler.add_OnItemUIClickChanged(pSVar2, &local_30);
    }

    // RVA: 0x38A2 Offset: 0x38A2 VA: 0x38A2
    private void OnDisable()
    {
        System.Action.OnItemUIChangedEventArgs pSVar1 = default;

        pSVar1 = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(pSVar1,this,DAT_ram_0056a768,0);
        StaticEventHandler.remove_OnItemUIEndDragChanged(pSVar1);
        pSVar1 = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(pSVar1,this,DAT_ram_0056a770,0);
        StaticEventHandler.remove_OnItemUIHoverChanged(pSVar1);
        pSVar1 = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(pSVar1,this,DAT_ram_0056a76c,0);
        StaticEventHandler.remove_OnItemUIClickChanged(pSVar1);
    }

    // RVA: 0x38A3 Offset: 0x38A3 VA: 0x38A3
    private void OnDestroy()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(param1,0,0);
    }

    // RVA: 0x38A4 Offset: 0x38A4 VA: 0x38A4
    public void ResetInventory(List<InventoryItem> skipList)
    {
        int iVar1 = default;
        int param1 = default;
        int iVar2 = default;
        object piVar3 = default; // int*
        int iVar4 = default;
        int local_20 = default;
        object puStack_1c = default; // long*
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        unnamed_function_6549(&local_20,this.inventorySlotList,DAT_ram_00563448);
        local_8 = local_18;
        local_10 = CONCAT44(puStack_1c,local_20);
        local_20 = 0;
        puStack_1c = &local_10;
        code_r0x81a31d62: do {
            iVar1 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10, DAT_ram_00561294);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 == 1) {
                param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a31e47;
            }
            if (iVar1 == 0) {
                iVar1 = 5;
                iVar2 = local_20;
                goto code_r0x81a31e93;
            }
            iVar2 = local_8._4_4_;
            if (Raw.Read<int>(local_8._4_4_ + 0x20) != 0) {
                iVar4 = import_env_invoke_iiii (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x32,skipList, Raw.Read<int>(local_8._4_4_ + 0x20),DAT_ram_0056341c);
                iVar1 = DAT_ram_005ddf34;
                if (iVar1 == 1) {
                    param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a31e47;
                }
                if (iVar4 != 0) goto code_r0x81a31d62;
            }
            import_env_invoke_vii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x14,iVar2,&local_20);
            iVar2 = DAT_ram_005ddf34;
        } while (iVar2 != 1);
        param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a31e47: iVar2 = import_env_getTempRet0();
        iVar1 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar2 == iVar1) {
            piVar3 = (object)import_env___cxa_begin_catch(param1);
            iVar2 = *piVar3;
            iVar1 = 0;
            local_20 = iVar2;
            import_env_invoke_v(0x3a);
            iVar4 = DAT_ram_005ddf34;
            if (iVar4 != 1) {
                code_r0x81a31e93: DAT_ram_005ddf34 = 0;
                if (iVar2 != 0) {
                    unnamed_function_1088(iVar2);
                    do {
                        throw null;
                    } while( true );
                }
                if ((iVar1 != 0) && ((((iVar1 == 1 || (iVar1 == 2)) || (iVar1 == 3)) || ((iVar1 == 4 || (iVar1 != 5)))))) {
                    return;
                }
                unnamed_function_6549(&local_20,this.hotBarSlotList,DAT_ram_00563448);
                local_8 = local_18;
                local_10 = CONCAT44(puStack_1c,local_20);
                local_20 = 0;
                puStack_1c = &local_10;
                code_r0x81a31f2d: do {
                    iVar1 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10, DAT_ram_00561294);
                    iVar2 = DAT_ram_005ddf34;
                    if (iVar2 == 1) {
                        param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                        goto code_r0x81a32015;
                    }
                    iVar2 = local_20;
                    if (iVar1 == 0) goto code_r0x81a3205d;
                    iVar2 = local_8._4_4_;
                    if (Raw.Read<int>(local_8._4_4_ + 0x20) != 0) {
                        iVar4 = import_env_invoke_iiii (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x32,skipList, Raw.Read<int>(local_8._4_4_ + 0x20),DAT_ram_0056341c);
                        iVar1 = DAT_ram_005ddf34;
                        if (iVar1 == 1) {
                            param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                            goto code_r0x81a32015;
                        }
                        if (iVar4 != 0) goto code_r0x81a31f2d;
                    }
                    import_env_invoke_vii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x14,iVar2,&local_20);
                    iVar2 = DAT_ram_005ddf34;
                } while (iVar2 != 1);
                param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                code_r0x81a32015: iVar2 = import_env_getTempRet0();
                iVar1 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
                if (iVar2 == iVar1) {
                    piVar3 = (object)import_env___cxa_begin_catch(param1);
                    iVar2 = *piVar3;
                    local_20 = iVar2;
                    import_env_invoke_v(0x3a);
                    iVar1 = DAT_ram_005ddf34;
                    if (iVar1 != 1) {
                        code_r0x81a3205d: DAT_ram_005ddf34 = 0;
                        if (iVar2 == 0) {
                            return;
                        }
                        unnamed_function_1088(iVar2);
                        do {
                            throw null;
                        } while( true );
                    }
                    param1 = import_env___cxa_find_matching_catch_2();
                    import_env_getTempRet0();
                }
                import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x16,&local_20);
                goto joined_r0x81a320ae;
            }
            param1 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
        }
        import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x15,&local_20);
        joined_r0x81a320ae: if (DAT_ram_005ddf34 != 1) {
            import_env___resumeException(param1);
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

    // RVA: 0x38A5 Offset: 0x38A5 VA: 0x38A5
    private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
    {
        ItemUI ppIVar1 = default;
        int param2 = default;
        int iVar2 = default;
        int uVar3 = default;
        ItemUI param1 = default;
        ItemUI pIVar4 = default;

        pIVar4 = this.pressedItemUI;
        this.previousPressedItemUI = pIVar4;
        this.pressedItemUI = onItemUIChangedEventArgs.itemUI;
        ppIVar1 = &this.pressedItemUI;
        param2 = UnityEngine.Object.op_Equality(pIVar4,0,0);
        if (param2 == 0) {
            pIVar4 = *ppIVar1;
            param1 = this.previousPressedItemUI;
            iVar2 = (param1 != pIVar4);
            if (iVar2 == 0) {
                return;
            }
            uVar3 = UnityEngine.Component.get_gameObject((*ppIVar1).SelectorImg,0);
            UnityEngine.GameObject.SetActive(uVar3,1,0);
            ppIVar1 = &this.previousPressedItemUI;
        }
        uVar3 = UnityEngine.Component.get_gameObject((*ppIVar1).SelectorImg,0);
        UnityEngine.GameObject.SetActive(uVar3,param2,0);
    }

    // RVA: 0x38A6 Offset: 0x38A6 VA: 0x38A6
    private void StaticEventHandler_OnItemUIChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
    {
        this.draggedItemUI = onItemUIChangedEventArgs.itemUI;
    }

    // RVA: 0x38A7 Offset: 0x38A7 VA: 0x38A7
    private void StaticEventHandler_OnItemUIHoverChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
    {
        int iVar1 = default;
        ItemUI param1 = default;

        param1 = this.draggedItemUI;
        iVar1 = (param1 != null);
        if (iVar1 != 0) {
            this.hoverItemUI = onItemUIChangedEventArgs.itemUI;
            this.MoveAndSwapItemUI();
            this.draggedItemUI = (ItemUI)0x0;
        }
    }

    // RVA: 0x38A8 Offset: 0x38A8 VA: 0x38A8
    public void MoveAndSwapItemUI()
    {
        int iVar1 = default;
        OnInventoryItemChangedEventArgs __this_00 = default;
        int uVar2 = default;
        ItemUI pIVar3 = default;
        ItemUI param1 = default;
        ItemUIType IVar4 = default;
        TextMeshProUGUI pTVar5 = default;
        TextMeshProUGUI pTVar6 = default;
        InventoryItem pIVar7 = default;
        byte local_1 = default;

        pIVar3 = this.hoverItemUI;
        param1 = this.draggedItemUI;
        iVar1 = UnityEngine.Object.op_Equality(param1,pIVar3,0);
        if (iVar1 != 0) {
            return;
        }
        IVar4 = this.draggedItemUI.ItemUIType;
        if (IVar4 == Inventory) {
            pIVar3 = this.hoverItemUI;
            if (pIVar3.ItemUIType == Inventory) {
                if (pIVar3.isHasItem == false) {
                    this.SwapItemUIWithEmptySlot(Inventory);
                    uVar2 = UnityEngine.Component.get_gameObject(this.draggedItemUI.ItemImg,0);
                    UnityEngine.GameObject.SetActive(uVar2,0,0);
                    uVar2 = UnityEngine.Component.get_gameObject(this.draggedItemUI.quantityText,0);
                    UnityEngine.GameObject.SetActive(uVar2,0,0);
                    this.draggedItemUI.isHasItem = false;
                    return;
                }
                this.SwapTwoItemUI(Inventory);
                return;
            }
            if (pIVar3.ItemUIType == HotBar) {
                local_1 = this.draggedItemUI.inventoryItem.isOnHotBar;
                uVar2 = unnamed_function_1113(bool_TypeInfo,&local_1);
                UnityEngine.Debug.Log(uVar2,0);
                if (this.draggedItemUI.inventoryItem.isOnHotBar != false) {
                    return;
                }
                uVar2 = UnityEngine.Component.get_gameObject(this.hoverItemUI.ItemImg,0);
                UnityEngine.GameObject.SetActive(uVar2,1,0);
                uVar2 = UnityEngine.Component.get_gameObject(this.hoverItemUI.quantityText,0);
                UnityEngine.GameObject.SetActive(uVar2,1,0);
                UnityEngine.UI.Image.set_sprite(this.hoverItemUI.ItemImg,this.draggedItemUI.ItemImg[0x20]._opaque,0);
                pTVar5 = this.hoverItemUI.quantityText;
                pTVar6 = this.draggedItemUI.quantityText;
                iVar1 = pTVar6._opaque;
                uVar2 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2c8) * 4) /* virtual */ (pTVar6,Raw.Read<int>(iVar1 + 0x2cc));
                iVar1 = pTVar5._opaque;
                Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2d0) * 4) /* virtual */ (pTVar5,uVar2,Raw.Read<int>(iVar1 + 0x2d4));
                pIVar3 = this.hoverItemUI;
                pIVar7 = this.draggedItemUI.inventoryItem;
                pIVar3.inventoryItem = pIVar7;
                iVar1 = pIVar3.itemId;
                pIVar7.isOnHotBar = true;
                pIVar7.hotbarSlot = iVar1;
                iVar1 = StaticEventHandler.OnMoveItemToHotBar;
                if (iVar1 == 0) {
                    return;
                }
                __this_00 = (OnInventoryItemChangedEventArgs) new OnInventoryItemChangedEventArgs();
                new OnInventoryItemChangedEventArgs();
                __this_00.inventoryItem = pIVar7;
                Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
                return;
            }
        }
        else if (IVar4 == HotBar) {
            pIVar3 = this.hoverItemUI;
            if (pIVar3.ItemUIType == Inventory) {
                return;
            }
        }
        else {
            pIVar3 = this.hoverItemUI;
        }
        if (pIVar3.isHasItem == false) {
            this.SwapItemUIWithEmptySlot(HotBar);
        }
        else {
            this.SwapTwoItemUI(HotBar);
        }
    }

    // RVA: 0x38A9 Offset: 0x38A9 VA: 0x38A9
    public void SwapTwoItemUI(ItemUIType itemUIType)
    {
        int uVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        TextMeshProUGUI pTVar4 = default;
        InventoryItem pIVar5 = default;
        ItemUI pIVar6 = default;
        int iVar7 = default;
        TextMeshProUGUI pTVar8 = default;
        InventoryItem pIVar9 = default;

        iVar3 = this.draggedItemUI.ItemImg[0x20]._opaque;
        pTVar4 = this.draggedItemUI.quantityText;
        iVar7 = pTVar4._opaque;
        uVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar7 + 0x2c8) * 4) /* virtual */ (pTVar4,Raw.Read<int>(iVar7 + 0x2cc));
        pIVar5 = this.draggedItemUI.inventoryItem;
        UnityEngine.UI.Image.set_sprite(this.draggedItemUI.ItemImg,this.hoverItemUI.ItemImg[0x20]._opaque,0);
        pTVar4 = this.draggedItemUI.quantityText;
        pTVar8 = this.hoverItemUI.quantityText;
        iVar7 = pTVar8._opaque;
        uVar2 = Raw.VCall((ulong)Raw.Read<uint>(iVar7 + 0x2c8) * 4) /* virtual */ (pTVar8,Raw.Read<int>(iVar7 + 0x2cc));
        iVar7 = pTVar4._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar7 + 0x2d0) * 4) /* virtual */ (pTVar4,uVar2,Raw.Read<int>(iVar7 + 0x2d4));
        pIVar9 = this.hoverItemUI.inventoryItem;
        this.draggedItemUI.inventoryItem = pIVar9;
        uVar2 = System.Int32.ToString(&pIVar9.inventorySlot,0);
        uVar2 = System.String.Concat(uVar2,this.draggedItemUI.inventoryItem.itemSO.itemName,0);
        UnityEngine.Debug.Log(uVar2,0);
        iVar7 = 0x14;
        if (itemUIType == Inventory) {
            iVar7 = 0x10;
        }
        Raw.Write<int>((int)&this.draggedItemUI.inventoryItem.klass + iVar7, this.draggedItemUI.itemId);
        UnityEngine.UI.Image.set_sprite(this.hoverItemUI.ItemImg,iVar3,0);
        pTVar4 = this.hoverItemUI.quantityText;
        iVar3 = pTVar4._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0x2d0) * 4) /* virtual */ (pTVar4,uVar1,Raw.Read<int>(iVar3 + 0x2d4));
        pIVar6 = this.hoverItemUI;
        pIVar6.inventoryItem = pIVar5;
        Raw.Write<int>((int)&pIVar5.klass + iVar7, pIVar6.itemId);
    }

    // RVA: 0x38AA Offset: 0x38AA VA: 0x38AA
    public void SwapItemUIWithEmptySlot(ItemUIType itemUITypee)
    {
        int uVar1 = default;
        TextMeshProUGUI pTVar2 = default;
        ItemUI pIVar3 = default;
        TextMeshProUGUI pTVar4 = default;
        ItemUI pIVar5 = default;
        InventoryItem pIVar6 = default;
        int iVar7 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.hoverItemUI.ItemImg,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.hoverItemUI.quantityText,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        UnityEngine.UI.Image.set_sprite(this.hoverItemUI.ItemImg,this.draggedItemUI.ItemImg[0x20]._opaque,0);
        pTVar2 = this.hoverItemUI.quantityText;
        pTVar4 = this.draggedItemUI.quantityText;
        iVar7 = pTVar4._opaque;
        uVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar7 + 0x2c8) * 4) /* virtual */ (pTVar4,Raw.Read<int>(iVar7 + 0x2cc));
        iVar7 = pTVar2._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar7 + 0x2d0) * 4) /* virtual */ (pTVar2,uVar1,Raw.Read<int>(iVar7 + 0x2d4));
        pIVar3 = this.hoverItemUI;
        pIVar5 = this.draggedItemUI;
        pIVar6 = pIVar5.inventoryItem;
        pIVar3.inventoryItem = pIVar6;
        iVar7 = 0x14;
        if (itemUITypee == Inventory) {
            iVar7 = 0x10;
        }
        Raw.Write<int>((int)&pIVar6.klass + iVar7, pIVar3.itemId);
        pIVar3.isHasItem = true;
        uVar1 = UnityEngine.Component.get_gameObject(pIVar5.ItemImg,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.draggedItemUI.quantityText,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        pIVar3 = this.draggedItemUI;
        pIVar3.inventoryItem = (InventoryItem)0x0;
        pIVar3.isHasItem = false;
    }

    // RVA: 0x38AB Offset: 0x38AB VA: 0x38AB
    public void MoveItemToHotBar()
    {
        int uVar1 = default;
        TextMeshProUGUI pTVar2 = default;
        ItemUI pIVar3 = default;
        TextMeshProUGUI pTVar4 = default;
        InventoryItem pIVar5 = default;
        int iVar6 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.hoverItemUI.ItemImg,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.hoverItemUI.quantityText,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        UnityEngine.UI.Image.set_sprite(this.hoverItemUI.ItemImg,this.draggedItemUI.ItemImg[0x20]._opaque,0);
        pTVar2 = this.hoverItemUI.quantityText;
        pTVar4 = this.draggedItemUI.quantityText;
        iVar6 = pTVar4._opaque;
        uVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar6 + 0x2c8) * 4) /* virtual */ (pTVar4,Raw.Read<int>(iVar6 + 0x2cc));
        iVar6 = pTVar2._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar6 + 0x2d0) * 4) /* virtual */ (pTVar2,uVar1,Raw.Read<int>(iVar6 + 0x2d4));
        pIVar3 = this.hoverItemUI;
        pIVar5 = this.draggedItemUI.inventoryItem;
        pIVar3.inventoryItem = pIVar5;
        iVar6 = pIVar3.itemId;
        pIVar5.isOnHotBar = true;
        pIVar5.hotbarSlot = iVar6;
    }

    // RVA: 0x38AC Offset: 0x38AC VA: 0x38AC
    public void InitializeInventorySlotList(int quantity)
    {
        int iVar1 = default;
        int param1 = default;
        int uVar2 = default;
        int param2 = default;
        int param2_00 = default;
        GameObject param1_00 = default;
        List param1_01 = default;
        uint uVar3 = default;
        int local_4 = default;

        local_4 = 0;
        if (0 < quantity) {
            do {
                param1_00 = this.itemUIPrefab;
                param1 = UnityEngine.Object.Instantiate<object>(param1_00,DAT_ram_0056b51c);
                uVar2 = UnityEngine.GameObject.get_transform(param1,0);
                param2 = UnityEngine.GameObject.get_transform(this.content,0);
                UnityEngine.Transform.SetParent(uVar2,param2,0,0);
                uVar2 = System.Int32.ToString(&local_4,0);
                uVar2 = System.String.Concat("Slot ",uVar2,0);
                UnityEngine.Object.set_name(param1,uVar2,0);
                param2_00 = UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569ac0);
                Raw.Write<int>(param2_00 + 0x10, local_4);
                Raw.Write<byte>(param2_00 + 0x30, 0);
                Raw.Write<long>(param2_00 + 0x20, 0);
                iVar1 = DAT_ram_00563444;
                param1_01 = this.inventorySlotList;
                param1_01[4]._opaque = param1_01[4]._opaque + 1;
                uVar3 = param1_01[3]._opaque;
                if (uVar3 < Raw.Read<uint>(param1_01[2]._opaque + 0xc)) {
                    param1_01[3]._opaque = uVar3 + 1;
                    Raw.Write<int>(param1_01[2]._opaque + uVar3 * 4 + 0x10, param2_00);
                }
                else {
                    unnamed_function_6534 (param1_01,param2_00, Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
                }
                local_4 = local_4 + 1;
            } while (local_4 < quantity);
        }
    }

    // RVA: 0x38AD Offset: 0x38AD VA: 0x38AD
    public void InitializeHotBarSlotList(int quantity)
    {
        int iVar1 = default;
        int param1 = default;
        int uVar2 = default;
        int param2 = default;
        int param2_00 = default;
        GameObject param1_00 = default;
        List param1_01 = default;
        uint uVar3 = default;
        int local_4 = default;

        local_4 = 0;
        if (0 < quantity) {
            do {
                param1_00 = this.itemUIPrefab;
                param1 = UnityEngine.Object.Instantiate<object>(param1_00,DAT_ram_0056b51c);
                uVar2 = UnityEngine.GameObject.get_transform(param1,0);
                param2 = UnityEngine.GameObject.get_transform(this.hotBar,0);
                UnityEngine.Transform.SetParent(uVar2,param2,0,0);
                uVar2 = System.Int32.ToString(&local_4,0);
                uVar2 = System.String.Concat("Slot ",uVar2,0);
                UnityEngine.Object.set_name(param1,uVar2,0);
                param2_00 = UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569ac0);
                Raw.Write<int>(param2_00 + 0x10, local_4);
                Raw.Write<byte>(param2_00 + 0x30, 0);
                Raw.Write<long>(param2_00 + 0x20, 0x100000000);
                iVar1 = DAT_ram_00563444;
                param1_01 = this.hotBarSlotList;
                param1_01[4]._opaque = param1_01[4]._opaque + 1;
                uVar3 = param1_01[3]._opaque;
                if (uVar3 < Raw.Read<uint>(param1_01[2]._opaque + 0xc)) {
                    param1_01[3]._opaque = uVar3 + 1;
                    Raw.Write<int>(param1_01[2]._opaque + uVar3 * 4 + 0x10, param2_00);
                }
                else {
                    unnamed_function_6534 (param1_01,param2_00, Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
                }
                local_4 = local_4 + 1;
            } while (local_4 < quantity);
        }
    }

    // RVA: 0x38AE Offset: 0x38AE VA: 0x38AE
    public Inventory()
    {
        List pLVar1 = default;

        pLVar1 = (List)new System_Collections_Generic_List_ItemUI_();
        unnamed_function_5132(pLVar1,DAT_ram_00563440);
        this.inventorySlotList = pLVar1;
        pLVar1 = (List)new System_Collections_Generic_List_ItemUI_();
        unnamed_function_5132(pLVar1,DAT_ram_00563440);
        this.hotBarSlotList = pLVar1;
        unnamed_function_44622(this,0);
    }
}
