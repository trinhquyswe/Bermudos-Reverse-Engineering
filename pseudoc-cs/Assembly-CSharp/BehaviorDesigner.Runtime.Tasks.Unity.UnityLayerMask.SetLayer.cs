// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.SetLayer.c by tools/c2cs.py
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

public class SetLayer : Action // TypeDefIndex: 6184
{
    // Fields
    [Tooltip("The GameObject to set the layer of")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The name of the layer to set")]
    public SharedString layerName; // 0x30

    // Methods

    // RVA: 0x414D Offset: 0x414D VA: 0x414D Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int uVar2 = default;

        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        uVar1 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar1,0);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar2 = UnityEngine.LayerMask.NameToLayer(uVar2,0);
        UnityEngine.GameObject.set_layer(uVar1,uVar2,0);
        return;
    }

    // RVA: 0x414E Offset: 0x414E VA: 0x414E Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("Default");
        this.layerName = pBVar1;
    }

    // RVA: 0x414F Offset: 0x414F VA: 0x414F
    public SetLayer()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        pBVar1 = SharedString.op_Implicit("Default");
        this.layerName = pBVar1;
        unnamed_function_51834(this,0);
    }
}
