// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.SetAngularSpeed.c by tools/c2cs.py
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

public class SetAngularSpeed : Action // TypeDefIndex: 6133
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The NavMeshAgent angular speed")]
    public SharedFloat angularSpeed; // 0x30
    private NavMeshAgent navMeshAgent; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x40AC Offset: 0x40AC VA: 0x40AC Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        NavMeshAgent pNVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pNVar2 = (NavMeshAgent)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569ad0);
            this.prevGameObject = param1;
            this.navMeshAgent = pNVar2;
        }
    }

    // RVA: 0x40AD Offset: 0x40AD VA: 0x40AD Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float param2 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("NavMeshAgent is null",0);
            return;
        }
        uVar2 = Raw.Read<int>(this + 0x34);
        param2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        UnityEngine.AI.NavMeshAgent.set_angularSpeed(uVar2,param2,0);
        return;
    }

    // RVA: 0x40AE Offset: 0x40AE VA: 0x40AE Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.torque = pBVar1;
    }

    // RVA: 0x40AF Offset: 0x40AF VA: 0x40AF
    public SetAngularSpeed()
    {
        unnamed_function_51834(this,0);
    }
}
