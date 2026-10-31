// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.RestartBehaviorTree.c by tools/c2cs.py
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

public class RestartBehaviorTree : Action // TypeDefIndex: 5834
{
    // Fields
    [Tooltip("The GameObject of the behavior tree that should be restarted. If null use the current behavior")]
    public SharedGameObject behaviorGameObject; // 0x2C
    [Tooltip("The group of the behavior tree that should be restarted")]
    public SharedInt group; // 0x30
    private Behavior behavior; // 0x34

    // Methods

    // RVA: 0x3C0D Offset: 0x3C0D VA: 0x3C0D Slot: 4
    public override void OnAwake()
    {
        int iVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        object piVar5 = default; // int*
        int iVar6 = default;
        Behavior param1 = default;

        uVar2 = unnamed_function_61203(this.behaviorGameObject,DAT_ram_00565c9c);
        uVar2 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar2,0);
        iVar3 = unnamed_function_73856(uVar2,DAT_ram_00569b54);
        if (Raw.Read<int>(iVar3 + 0xc) == 1) {
            this.behavior = Raw.Read<object>(iVar3 + 0x10);
            return;
        }
        if (1 < Raw.Read<int>(iVar3 + 0xc)) {
            iVar1 = 0;
            do {
                piVar5 = (object)(iVar3 + iVar1 * 4 + 0x10);
                iVar6 = Raw.Read<int>(*piVar5 + 0x18);
                iVar4 = unnamed_function_61203(this.group,DAT_ram_00565cb8);
                if (iVar6 == iVar4) {
                    this.behavior = (Behavior)*piVar5;
                    break;
                }
                iVar1 = iVar1 + 1;
            } while (iVar1 < Raw.Read<int>(iVar3 + 0xc));
            param1 = this.behavior;
            iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
            if (iVar1 != 0) {
                this.behavior = Raw.Read<object>(iVar3 + 0x10);
            }
        }
    }

    // RVA: 0x3C0E Offset: 0x3C0E VA: 0x3C0E Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (iVar1 == 0) {
            BehaviorDesigner.Runtime.Behavior.DisableBehavior(Raw.Read<int>(this + 0x34),0);
            BehaviorDesigner.Runtime.Behavior.EnableBehavior(Raw.Read<int>(this + 0x34),0);
        }
        return;
    }

    // RVA: 0x3C0F Offset: 0x3C0F VA: 0x3C0F Slot: 16
    public override void OnReset()
    {
        this.behavior = (Behavior)0x0;
    }

    // RVA: 0x3C10 Offset: 0x3C10 VA: 0x3C10
    public RestartBehaviorTree()
    {
        unnamed_function_51834(this,0);
    }
}
