// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.SendMessage.c by tools/c2cs.py
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

public class SendMessage : Action // TypeDefIndex: 6210
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The message to send")]
    public SharedString message; // 0x30
    [Tooltip("The value to send")]
    public SharedGenericVariable value; // 0x34

    // Methods

    // RVA: 0x419B Offset: 0x419B VA: 0x419B Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param2 = default;
        int param3 = default;
        int iVar3 = default;

        iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565ca8);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        uVar2 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar2,0);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        if (iVar1 != 0) {
            iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565ca8);
            iVar3 = Raw.Deref(Raw.Read<object>(iVar1 + 0xc));
            param3 = Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(iVar1 + 0xc),Raw.Read<int>(iVar3 + 0xec));
            UnityEngine.GameObject.SendMessage(uVar2,param2,param3,0);
            return;
        }
        UnityEngine.GameObject.SendMessage(uVar2,param2,0);
        return;
    }

    // RVA: 0x419C Offset: 0x419C VA: 0x419C Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedString.op_Implicit("");
        this.message = pBVar1;
    }

    // RVA: 0x419D Offset: 0x419D VA: 0x419D
    public SendMessage()
    {
        unnamed_function_51834(this,0);
    }
}
