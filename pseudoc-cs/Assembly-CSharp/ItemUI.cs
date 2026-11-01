// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/ItemUI.c by tools/c2cs.py
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

public class ItemUI : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerClickHandler, IBeginDragHandler, IDragHandler, IEndDragHandler // TypeDefIndex: 5651
{
    // Fields
    [HideInInspector]
    public int itemId; // 0x10
    public Image SelectorImg; // 0x14
    public Image ItemImg; // 0x18
    public TextMeshProUGUI quantityText; // 0x1C
    public InventoryItem inventoryItem; // 0x20
    [HideInInspector]
    public ItemUIType ItemUIType; // 0x24
    public Inventory inventory; // 0x28
    private GameObject itemUICopy; // 0x2C
    [HideInInspector]
    public bool isHasItem; // 0x30
    private RectTransform rectTransform; // 0x34

    // Methods

    // RVA: 0x38E9 Offset: 0x38E9 VA: 0x38E9
    private void Awake()
    {
        RectTransform pRVar1 = default;

        pRVar1 = (RectTransform)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f0c);
        this.rectTransform = pRVar1;
    }

    // RVA: 0x38EA Offset: 0x38EA VA: 0x38EA
    private void OnEnable()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        Inventory pIVar4 = default;

        pIVar4 = (Inventory)0x0;
        uVar1 = UnityEngine.Component.get_transform(this,0);
        iVar2 = /* candidates: UnityEngine.Transform.GetParent | UnityEngine.Transform.get_parent (+1) */ unnamed_function_44958(uVar1,0);
        if (iVar2 != 0) {
            uVar1 = UnityEngine.Component.get_transform(iVar2,0);
            iVar3 = /* candidates: UnityEngine.Transform.GetParent | UnityEngine.Transform.get_parent (+1) */ unnamed_function_44958(uVar1,0);
            if (iVar3 == 0) {
                this.inventory = (Inventory)0x0;
                return;
            }
            if (iVar2 == 0) {
                this = (ItemUI)0x0;
            }
            uVar1 = UnityEngine.Component.get_transform(iVar3,0);
            iVar2 = /* candidates: UnityEngine.Transform.GetParent | UnityEngine.Transform.get_parent (+1) */ unnamed_function_44958(uVar1,0);
            if (iVar2 != 0) {
                if (iVar3 == 0) {
                    this = (ItemUI)0x0;
                }
                uVar1 = UnityEngine.Component.get_transform(iVar2,0);
                iVar3 = /* candidates: UnityEngine.Transform.GetParent | UnityEngine.Transform.get_parent (+1) */ unnamed_function_44958(uVar1,0);
                if (iVar3 == 0) {
                    this.inventory = (Inventory)0x0;
                    return;
                }
                if (iVar2 == 0) {
                    this = (ItemUI)0x0;
                }
                uVar1 = UnityEngine.Component.get_transform(iVar3,0);
                iVar2 = /* candidates: UnityEngine.Transform.GetParent | UnityEngine.Transform.get_parent (+1) */ unnamed_function_44958(uVar1,0);
                if (iVar2 != 0) {
                    pIVar4 = (Inventory)UnityEngine.Component.GetComponent<object>(iVar2,DAT_ram_00567eb0);
                }
            }
        }
        this.inventory = pIVar4;
    }

    // RVA: 0x3656 Offset: 0x3656 VA: 0x3656
    public void ResetItemUI()
    {
        int uVar1 = default;
        int iVar2 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.SelectorImg,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.ItemImg,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.quantityText,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        iVar2 = this.quantityText._opaque;
        Raw.VCall(iVar2, 66) /* virtual */ (this.quantityText,"",Raw.Read<int>(iVar2 + 0x2d4));
        UnityEngine.UI.Image.set_sprite(this.ItemImg,0,0);
        iVar2 = this.quantityText._opaque;
        Raw.VCall(iVar2, 66) /* virtual */ (this.quantityText,"",Raw.Read<int>(iVar2 + 0x2d4));
        this.isHasItem = false;
        this.inventoryItem = (InventoryItem)0x0;
    }

    // RVA: 0x38EB Offset: 0x38EB VA: 0x38EB Slot: 6
    public void OnBeginDrag(PointerEventData eventData)
    {
        int uVar1 = default;
        GameObject param1 = default;
        int uVar2 = default;
        ItemUIType IVar3 = default;
        Vector3 local_70 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        Vector3 local_38 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        if (this.inventoryItem != (InventoryItem)0x0) {
            uVar1 = UnityEngine.Component.get_gameObject(this.SelectorImg,0);
            UnityEngine.GameObject.SetActive(uVar1,0,0);
            uVar1 = UnityEngine.Component.get_gameObject(this,0);
            param1 = (GameObject)UnityEngine.Object.Instantiate<object>(uVar1,DAT_ram_0056b51c);
            this.itemUICopy = param1;
            uVar1 = UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569ae4);
            UnityEngine.RectTransform.get_sizeDelta(&local_8,this.rectTransform,0);
            local_40 = local_8;
            /* candidates: UnityEngine.RectTransform.set_sizeDelta | UnityEngine.RectTransform.set_sizeDelta_Injected */ unnamed_function_44939(uVar1,&local_40,0);
            UnityEngine.RectTransform.get_pivot(&local_10,this.rectTransform,0);
            local_48 = local_10;
            /* candidates: UnityEngine.RectTransform.set_pivot | UnityEngine.RectTransform.set_pivot_Injected */ unnamed_function_44942(uVar1,&local_48,0);
            UnityEngine.RectTransform.get_anchorMin(&local_18,this.rectTransform,0);
            local_50 = local_18;
            /* candidates: UnityEngine.RectTransform.set_anchorMin | UnityEngine.RectTransform.set_anchorMin_Injected */ unnamed_function_44930(uVar1,&local_50,0);
            UnityEngine.RectTransform.get_anchorMax(&local_20,this.rectTransform,0);
            local_58 = local_20;
            /* candidates: UnityEngine.RectTransform.set_anchorMax | UnityEngine.RectTransform.set_anchorMax_Injected */ unnamed_function_44933(uVar1,&local_58,0);
            UnityEngine.RectTransform.get_anchoredPosition(&local_28,this.rectTransform,0);
            local_60 = local_28;
            /* candidates: UnityEngine.RectTransform.set_anchoredPosition | UnityEngine.RectTransform.set_anchoredPosition_Injected */ unnamed_function_44936(uVar1,&local_60,0);
            IVar3 = this.ItemUIType;
            uVar1 = UnityEngine.GameObject.get_transform(this.itemUICopy,0);
            if (IVar3 == Inventory) {
                uVar2 = UnityEngine.Component.get_transform(this.inventory,0);
            }
            else {
                uVar2 = UnityEngine.Component.get_transform(this,0);
                uVar2 = /* candidates: UnityEngine.Transform.GetParent | UnityEngine.Transform.get_parent (+1) */ unnamed_function_44958(uVar2,0);
                uVar2 = /* candidates: UnityEngine.Transform.GetParent | UnityEngine.Transform.get_parent (+1) */ unnamed_function_44958(uVar2,0);
            }
            UnityEngine.Transform.SetParent(uVar1,uVar2,0,0);
            uVar1 = UnityEngine.GameObject.get_transform(this.itemUICopy,0);
            HelperUtilities.GetMousePositionInUI(&local_38, (UnityEngine.RectTransform)this.rectTransform, (UnityEngine.Camera)0x0);
            local_70.z = local_38.z;
            local_70.x = local_38.x;
            local_70.y = local_38.y;
            /* candidates: UnityEngine.Transform.set_position | UnityEngine.Transform.set_position_Injected */ unnamed_function_44962(uVar1,&local_70,0);
        }
    }

    // RVA: 0x38EC Offset: 0x38EC VA: 0x38EC Slot: 7
    public void OnDrag(PointerEventData eventData)
    {
        int iVar1 = default;
        int param1 = default;
        GameObject param1_00 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        param1_00 = this.itemUICopy;
        iVar1 = (param1_00 != null);
        if (iVar1 != 0) {
            param1 = UnityEngine.GameObject.get_transform(this.itemUICopy,0);
            HelperUtilities.GetMousePositionInUI(&local_10, (UnityEngine.RectTransform)this.rectTransform, (UnityEngine.Camera)0x0);
            local_20.z = local_10.z;
            local_20.x = local_10.x;
            local_20.y = local_10.y;
            /* candidates: UnityEngine.Transform.set_position | UnityEngine.Transform.set_position_Injected */ unnamed_function_44962(param1,&local_20,0);
        }
    }

    // RVA: 0x38ED Offset: 0x38ED VA: 0x38ED Slot: 8
    public void OnEndDrag(PointerEventData eventData)
    {
        OnItemUIChangedEventArgs __this_00 = default;
        int iVar1 = default;
        GameObject param1 = default;

        if (this.inventoryItem != (InventoryItem)0x0) {
            iVar1 = StaticEventHandler.OnItemUIEndDragChanged;
            if (iVar1 != 0) {
                __this_00 = (OnItemUIChangedEventArgs) new OnItemUIChangedEventArgs();
                new OnItemUIChangedEventArgs();
                __this_00.itemUI = this;
                Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
            }
            param1 = this.itemUICopy;
            UnityEngine.Object.Destroy(param1,0);
        }
    }

    // RVA: 0x38EE Offset: 0x38EE VA: 0x38EE Slot: 5
    public void OnPointerClick(PointerEventData eventData)
    {
        OnItemUIChangedEventArgs __this_00 = default;
        int iVar1 = default;

        if (this.inventoryItem != (InventoryItem)0x0) {
            iVar1 = StaticEventHandler.OnItemUIClickChanged;
            if (iVar1 != 0) {
                __this_00 = (OnItemUIChangedEventArgs) new OnItemUIChangedEventArgs();
                new OnItemUIChangedEventArgs();
                __this_00.itemUI = this;
                Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
            }
        }
    }

    // RVA: 0x38EF Offset: 0x38EF VA: 0x38EF Slot: 4
    public void OnPointerEnter(PointerEventData eventData)
    {
        OnItemUIChangedEventArgs __this_00 = default;
        int iVar1 = default;

        iVar1 = StaticEventHandler.OnItemUIHoverChanged;
        if (iVar1 != 0) {
            __this_00 = (OnItemUIChangedEventArgs) new OnItemUIChangedEventArgs();
            new OnItemUIChangedEventArgs();
            __this_00.itemUI = this;
            Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
        }
    }

    // RVA: 0x38F0 Offset: 0x38F0 VA: 0x38F0
    public ItemUI()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
