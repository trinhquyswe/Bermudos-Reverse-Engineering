// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedGameObjectToTransform.c by tools/c2cs.py
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

public class SharedGameObjectToTransform : Action // TypeDefIndex: 6002
{
    // Fields
    [Tooltip("The GameObject to get the Transform of")]
    public SharedGameObject sharedGameObject; // 0x2C
    [RequiredField]
    [Tooltip("The Transform to set")]
    public SharedTransform sharedTransform; // 0x30

    // Methods

    // RVA: 0x3EBF Offset: 0x3EBF VA: 0x3EBF Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        int param1 = default;

        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
        if (iVar2 == 0) {
            param1 = Raw.Read<int>(this + 0x30);
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
            uVar1 = UnityEngine.GameObject.GetComponent<object>(uVar1,DAT_ram_00569b30);
            unnamed_function_61204(param1,uVar1,DAT_ram_00565d1c);
        }
        return;
    }

    // RVA: 0x3EC0 Offset: 0x3EC0 VA: 0x3EC0 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3EC1 Offset: 0x3EC1 VA: 0x3EC1
    public SharedGameObjectToTransform()
    {
        unnamed_function_51834(this,0);
    }
}
