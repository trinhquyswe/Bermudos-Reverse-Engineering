// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/InventoryDescription.c by tools/c2cs.py
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

public class InventoryDescription : MonoBehaviour // TypeDefIndex: 5641
{
    // Fields
    private ItemUI itemUI; // 0x10
    [SerializeField]
    private Image image; // 0x14
    [SerializeField]
    private TextMeshProUGUI titleText; // 0x18
    [SerializeField]
    private TextMeshProUGUI descriptionText; // 0x1C

    // Methods

    // RVA: 0x38AF Offset: 0x38AF VA: 0x38AF
    private void OnEnable()
    {
        System.Action.OnItemUIChangedEventArgs value = default;

        value = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056a774,0);
        StaticEventHandler.add_OnItemUIClickChanged(value);
    }

    // RVA: 0x38B0 Offset: 0x38B0 VA: 0x38B0
    private void OnDisable()
    {
        System.Action.OnItemUIChangedEventArgs value = default;

        value = (System.Action.OnItemUIChangedEventArgs) new System_Action_OnItemUIChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056a774,0);
        StaticEventHandler.remove_OnItemUIClickChanged(value);
    }

    // RVA: 0x38B1 Offset: 0x38B1 VA: 0x38B1
    private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
    {
        int iVar1 = default;
        int param1 = default;
        ItemUI param1_00 = default;

        param1_00 = onItemUIChangedEventArgs.itemUI;
        this.itemUI = param1_00;
        iVar1 = (param1_00 != null);
        if (iVar1 != 0) {
            param1 = UnityEngine.Component.get_gameObject(this.image,0);
            UnityEngine.GameObject.SetActive(param1,1,0);
            UnityEngine.UI.Image.set_sprite(this.image,this.itemUI.inventoryItem.itemSO.itemIcon,0);
            iVar1 = this.titleText._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2d0) * 4) /* virtual */ (this.titleText,this.itemUI.inventoryItem.itemSO.itemName, Raw.Read<int>(iVar1 + 0x2d4));
            iVar1 = this.descriptionText._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2d0) * 4) /* virtual */ (this.descriptionText,this.itemUI.inventoryItem.itemSO.itemDescription, Raw.Read<int>(iVar1 + 0x2d4));
        }
    }

    // RVA: 0x38B2 Offset: 0x38B2 VA: 0x38B2
    public InventoryDescription()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
