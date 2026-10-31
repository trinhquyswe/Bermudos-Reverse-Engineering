// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityNavMeshAgent.Move.c by tools/c2cs.py
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

public class Move : Action // TypeDefIndex: 6129
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The relative movement vector")]
    public SharedVector3 offset; // 0x30
    private NavMeshAgent navMeshAgent; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x409C Offset: 0x409C VA: 0x409C Slot: 5
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

    // RVA: 0x409D Offset: 0x409D VA: 0x409D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar2 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            uVar2 = Raw.Read<int>(this + 0x34);
            unnamed_function_61245(&local_10,Raw.Read<int>(this + 0x30),DAT_ram_00565d38);
            local_18 = local_8;
            local_20 = local_10;
            unnamed_function_51266(uVar2,&local_20,0);
        }
        else {
            UnityEngine.Debug.LogWarning("NavMeshAgent is null",0);
        }
        return;
    }

    // RVA: 0x409E Offset: 0x409E VA: 0x409E Slot: 16
    public override void OnReset()
    {
        Vector3 pVVar1 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_20.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = local_20._0_8_;
        local_10.z = local_20.z;
        pVVar1 = SharedVector3.op_Implicit(&local_20);
        this.storeValue = (BehaviorDesigner.Runtime.SharedVector3)pVVar1;
    }

    // RVA: 0x409F Offset: 0x409F VA: 0x409F
    public Move()
    {
        unnamed_function_51834(this,0);
    }
}
