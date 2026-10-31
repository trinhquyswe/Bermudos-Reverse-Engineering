// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/ItemDropper.c by tools/c2cs.py
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

public class ItemDropper : MonoBehaviour // TypeDefIndex: 5648
{
    // Fields
    [SerializeField]
    private List<ItemSO> itemSOList; // 0x10
    private DestroyedEvent destroyedEvent; // 0x14

    // Methods

    // RVA: 0x38E1 Offset: 0x38E1 VA: 0x38E1
    private void Awake()
    {
        DestroyedEvent pDVar1 = default;

        pDVar1 = (DestroyedEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        this.destroyedEvent = pDVar1;
    }

    // RVA: 0x38E2 Offset: 0x38E2 VA: 0x38E2
    private void OnEnable()
    {
        System.Action.DestroyedEvent.DestroyedEventArgs value = default;
        DestroyedEvent __this_00 = default;

        __this_00 = this.destroyedEvent;
        value = (System.Action.DestroyedEvent.DestroyedEventArgs) new System_Action_DestroyedEvent__DestroyedEventArgs_();
        System.Action<object, object>.__ctor(value,this,DAT_ram_0056a7c8,0);
        __this_00.add_OnDestroyed(value);
    }

    // RVA: 0x38E3 Offset: 0x38E3 VA: 0x38E3
    private void OnDisable()
    {
        System.Action.DestroyedEvent.DestroyedEventArgs value = default;
        DestroyedEvent __this_00 = default;

        __this_00 = this.destroyedEvent;
        value = (System.Action.DestroyedEvent.DestroyedEventArgs) new System_Action_DestroyedEvent__DestroyedEventArgs_();
        System.Action<object, object>.__ctor(value,this,DAT_ram_0056a7c8,0);
        __this_00.remove_OnDestroyed(value);
    }

    // RVA: 0x38E4 Offset: 0x38E4 VA: 0x38E4
    private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
    {
        if (destroyedEventArgs.playerDied == false) {
            this.DropItemOnDeath();
        }
    }

    // RVA: 0x38E5 Offset: 0x38E5 VA: 0x38E5
    private void DropItemOnDeath()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int param1 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar1 = unnamed_function_44584(0,this.itemSOList[3]._opaque,0);
        iVar2 = unnamed_function_6529(this.itemSOList,uVar1,DAT_ram_0056343c);
        iVar3 = unnamed_function_44584(0,100,0);
        if ((float)iVar3 < Raw.Read<float>(iVar2 + 0x1c)) {
            param1 = Raw.Read<int>(iVar2 + 0x10);
            uVar1 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(&local_10,uVar1,0);
            local_18 = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
            local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
            local_28 = local_8;
            local_38 = local_18;
            local_30 = local_10;
            local_40 = local_20;
            uVar1 = unnamed_function_86418(param1,&local_30,&local_40,DAT_ram_0056b548);
            iVar3 = UnityEngine.GameObject.GetComponent<object>(uVar1,DAT_ram_00569abc);
            Raw.Write<int>(iVar3 + 0x18, iVar2);
        }
    }

    // RVA: 0x38E6 Offset: 0x38E6 VA: 0x38E6
    public ItemDropper()
    {
        unnamed_function_44622(this,0);
    }
}
