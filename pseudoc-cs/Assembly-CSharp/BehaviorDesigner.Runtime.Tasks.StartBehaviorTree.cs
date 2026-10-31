// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.StartBehaviorTree.c by tools/c2cs.py
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

public class StartBehaviorTree : Action // TypeDefIndex: 5838
{
    // Fields
    [Tooltip("The GameObject of the behavior tree that should be started. If null use the current behavior")]
    public SharedGameObject behaviorGameObject; // 0x2C
    [Tooltip("The group of the behavior tree that should be started")]
    public SharedInt group; // 0x30
    [Tooltip("Should this task wait for the behavior tree to complete?")]
    public SharedBool waitForCompletion; // 0x34
    [Tooltip("Should the variables be synchronized?")]
    public SharedBool synchronizeVariables; // 0x38
    private bool behaviorComplete; // 0x3C
    private Behavior behavior; // 0x40

    // Methods

    // RVA: 0x3C26 Offset: 0x3C26 VA: 0x3C26 Slot: 5
    public override void OnStart()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        object piVar5 = default; // int*
        int iVar6 = default;
        Behavior pBVar7 = default;
        int param2 = default;

        uVar1 = unnamed_function_61203(this.behaviorGameObject,DAT_ram_00565c9c);
        uVar1 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar1,0);
        iVar2 = unnamed_function_73856(uVar1,DAT_ram_00569b54);
        if (Raw.Read<int>(iVar2 + 0xc) == 1) {
            this.behavior = Raw.Read<object>(iVar2 + 0x10);
        }
        else if (1 < Raw.Read<int>(iVar2 + 0xc)) {
            iVar3 = 0;
            do {
                piVar5 = (object)(iVar2 + iVar3 * 4 + 0x10);
                iVar6 = Raw.Read<int>(*piVar5 + 0x18);
                iVar4 = unnamed_function_61203(this.group,DAT_ram_00565cb8);
                if (iVar6 == iVar4) {
                    this.behavior = (Behavior)*piVar5;
                    break;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < Raw.Read<int>(iVar2 + 0xc));
            pBVar7 = this.behavior;
            iVar3 = UnityEngine.Object.op_Equality(pBVar7,0,0);
            if (iVar3 != 0) {
                this.behavior = Raw.Read<object>(iVar2 + 0x10);
            }
        }
        pBVar7 = this.behavior;
        iVar2 = (pBVar7 != null);
        if (iVar2 != 0) {
            iVar2 = BehaviorDesigner.Runtime.Behavior.GetAllVariables(Raw.Read<int>(this.pad_8 + 0xc),0);
            if (((iVar2 != 0) && (iVar3 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.synchronizeVariables,DAT_ram_00565c78), iVar3 != 0)) && (0 < Raw.Read<int>(iVar2 + 0xc))) {
                iVar3 = 0;
                do {
                    pBVar7 = this.behavior;
                    iVar4 = unnamed_function_6529(iVar2,iVar3,DAT_ram_00563b0c);
                    param2 = Raw.Read<int>(iVar4 + 0xc);
                    uVar1 = unnamed_function_6529(iVar2,iVar3,DAT_ram_00563b0c);
                    BehaviorDesigner.Runtime.Behavior.SetVariableValue(pBVar7,param2,uVar1,0);
                    iVar3 = iVar3 + 1;
                } while (iVar3 < Raw.Read<int>(iVar2 + 0xc));
            }
            BehaviorDesigner.Runtime.Behavior.EnableBehavior(this.behavior,0);
            iVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.waitForCompletion,DAT_ram_00565c78);
            if (iVar2 != 0) {
                this.behaviorComplete = false;
                pBVar7 = this.behavior;
                uVar1 = new BehaviorDesigner_Runtime_Behavior_BehaviorHandler();
                BehaviorDesigner.Runtime.Behavior.BehaviorHandler.__ctor(uVar1,this,DAT_ram_0056c9d0,0);
                BehaviorDesigner.Runtime.Behavior.add_OnBehaviorEnd(pBVar7,uVar1,0);
            }
        }
    }

    // RVA: 0x3C27 Offset: 0x3C27 VA: 0x3C27 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x40);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (((iVar1 == 0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78), iVar1 != 0)) && (Raw.Read<sbyte>(this + 0x3c) == '\0')) {
            return;
        }
        return;
    }

    // RVA: 0x3C28 Offset: 0x3C28 VA: 0x3C28
    private void BehaviorEnded(Behavior behavior)
    {
        this.behaviorComplete = true;
    }

    // RVA: 0x3C29 Offset: 0x3C29 VA: 0x3C29 Slot: 9
    public override void OnEnd()
    {
        int iVar1 = default;
        int param1 = default;
        Behavior pBVar2 = default;

        pBVar2 = this.behavior;
        iVar1 = (pBVar2 != null);
        if ((iVar1 != 0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(this.waitForCompletion,DAT_ram_00565c78), iVar1 != 0)) {
            pBVar2 = this.behavior;
            param1 = new BehaviorDesigner_Runtime_Behavior_BehaviorHandler();
            BehaviorDesigner.Runtime.Behavior.BehaviorHandler.__ctor(param1,this,DAT_ram_0056c9d0,0);
            BehaviorDesigner.Runtime.Behavior.remove_OnBehaviorEnd(pBVar2,param1,0);
        }
    }

    // RVA: 0x3C2A Offset: 0x3C2A VA: 0x3C2A Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        this.behaviorGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x0;
        this.group = pBVar1;
        pBVar2 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar2[4].monitor = 0;
        this.waitForCompletion = pBVar2;
        pBVar2 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar2[4].monitor = 0;
        this.synchronizeVariables = pBVar2;
    }

    // RVA: 0x3C2B Offset: 0x3C2B VA: 0x3C2B
    public StartBehaviorTree()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 0;
        this.waitForCompletion = pBVar1;
        unnamed_function_51834(this,0);
    }
}
