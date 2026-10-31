// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.SendEvent.c by tools/c2cs.py
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

public class SendEvent : Action // TypeDefIndex: 5835
{
    // Fields
    [Tooltip("The GameObject of the behavior tree that should have the event sent to it. If null use the current behavior")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The event to send")]
    public SharedString eventName; // 0x30
    [Tooltip("The group of the behavior tree that the event should be sent to")]
    public SharedInt group; // 0x34
    [SharedRequired]
    [Tooltip("Optionally specify a first argument to send")]
    public SharedVariable argument1; // 0x38
    [SharedRequired]
    [Tooltip("Optionally specify a second argument to send")]
    public SharedVariable argument2; // 0x3C
    [Tooltip("Optionally specify a third argument to send")]
    [SharedRequired]
    public SharedVariable argument3; // 0x40
    private BehaviorTree behaviorTree; // 0x44

    // Methods

    // RVA: 0x3C11 Offset: 0x3C11 VA: 0x3C11 Slot: 5
    public override void OnStart()
    {
        int iVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        object piVar5 = default; // int*
        int iVar6 = default;
        BehaviorDesigner.Runtime.BehaviorTree param1 = default;

        uVar2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        uVar2 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar2,0);
        iVar3 = unnamed_function_73856(uVar2,DAT_ram_00569b58);
        if (Raw.Read<int>(iVar3 + 0xc) == 1) {
            this.behaviorTree = Raw.Read<object>(iVar3 + 0x10);
            return;
        }
        if (1 < Raw.Read<int>(iVar3 + 0xc)) {
            iVar1 = 0;
            do {
                piVar5 = (object)(iVar3 + iVar1 * 4 + 0x10);
                iVar6 = Raw.Read<int>(*piVar5 + 0x18);
                iVar4 = unnamed_function_61203(this.group,DAT_ram_00565cb8);
                if (iVar6 == iVar4) {
                    this.behaviorTree = (BehaviorDesigner.Runtime.BehaviorTree)*piVar5;
                    break;
                }
                iVar1 = iVar1 + 1;
            } while (iVar1 < Raw.Read<int>(iVar3 + 0xc));
            param1 = this.behaviorTree;
            iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
            if (iVar1 != 0) {
                this.behaviorTree = Raw.Read<object>(iVar3 + 0x10);
            }
        }
    }

    // RVA: 0x3C12 Offset: 0x3C12 VA: 0x3C12 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        int uVar4 = default;
        int uVar5 = default;
        int param1 = default;

        if ((Raw.Read<int>(this + 0x38) != 0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x38),0), iVar1 == 0)) {
            if ((Raw.Read<int>(this + 0x3c) != 0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x3c),0), iVar1 == 0)) {
                if ((Raw.Read<int>(this + 0x40) != 0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(Raw.Read<int>(this + 0x40),0), iVar1 == 0)) {
                    param1 = Raw.Read<int>(this + 0x44);
                    uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
                    iVar1 = Raw.Deref(Raw.Read<object>(this + 0x38));
                    uVar3 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x38),Raw.Read<int>(iVar1 + 0xec));
                    iVar1 = Raw.Deref(Raw.Read<object>(this + 0x3c));
                    uVar4 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x3c),Raw.Read<int>(iVar1 + 0xec));
                    iVar1 = Raw.Deref(Raw.Read<object>(this + 0x40));
                    uVar5 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x40),Raw.Read<int>(iVar1 + 0xec));
                    BehaviorDesigner.Runtime.Behavior.SendEvent<object, object, object>(param1,uVar2,uVar3,uVar4,uVar5,DAT_ram_005676bc);
                    return;
                }
                uVar5 = Raw.Read<int>(this + 0x44);
                uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
                iVar1 = Raw.Deref(Raw.Read<object>(this + 0x38));
                uVar3 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x38),Raw.Read<int>(iVar1 + 0xec));
                iVar1 = Raw.Deref(Raw.Read<object>(this + 0x3c));
                uVar4 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x3c),Raw.Read<int>(iVar1 + 0xec));
                BehaviorDesigner.Runtime.Behavior.SendEvent<object, object>(uVar5,uVar2,uVar3,uVar4,DAT_ram_005676b8);
                return;
            }
            uVar4 = Raw.Read<int>(this + 0x44);
            uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
            iVar1 = Raw.Deref(Raw.Read<object>(this + 0x38));
            uVar3 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x38),Raw.Read<int>(iVar1 + 0xec));
            BehaviorDesigner.Runtime.Behavior.SendEvent<object>(uVar4,uVar2,uVar3,DAT_ram_005676b4);
            return;
        }
        uVar3 = Raw.Read<int>(this + 0x44);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        BehaviorDesigner.Runtime.Behavior.SendEvent(uVar3,uVar2,0);
        return;
    }

    // RVA: 0x3C13 Offset: 0x3C13 VA: 0x3C13 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.eventName = pBVar2;
    }

    // RVA: 0x3C14 Offset: 0x3C14 VA: 0x3C14
    public SendEvent()
    {
        unnamed_function_51834(this,0);
    }
}
