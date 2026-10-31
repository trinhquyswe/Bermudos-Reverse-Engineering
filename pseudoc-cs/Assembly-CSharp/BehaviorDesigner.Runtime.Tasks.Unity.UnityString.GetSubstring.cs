// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetSubstring.c by tools/c2cs.py
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

public class GetSubstring : Action // TypeDefIndex: 5961
{
    // Fields
    [Tooltip("The target string")]
    public SharedString targetString; // 0x2C
    [Tooltip("The start substring index")]
    public SharedInt startIndex; // 0x30
    [Tooltip("The length of the substring. Don't use if -1")]
    public SharedInt length; // 0x34
    [Tooltip("The stored result")]
    [RequiredField]
    public SharedString storeResult; // 0x38

    // Methods

    // RVA: 0x3E3F Offset: 0x3E3F VA: 0x3E3F Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;
        int param2 = default;
        int param3 = default;
        int param1 = default;

        iVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
        param1 = Raw.Read<int>(this + 0x38);
        uVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cb8);
        if (iVar1 == -1) {
            uVar2 = System.String.Substring(uVar2,param2,0);
        }
        else {
            param3 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565cb8);
            uVar2 = System.String.Substring(uVar2,param2,param3,0);
        }
        unnamed_function_61204(param1,uVar2,DAT_ram_00565d10);
        return;
    }

    // RVA: 0x3E40 Offset: 0x3E40 VA: 0x3E40 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;
        BehaviorDesigner.Runtime.SharedInt pBVar3 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.targetString = pBVar2;
        pBVar3 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar3[4].monitor = (object)0x0;
        this.startIndex = pBVar3;
        pBVar3 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar3[4].monitor = (object)0xffffffff;
        this.length = pBVar3;
        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.storeResult = pBVar2;
    }

    // RVA: 0x3E41 Offset: 0x3E41 VA: 0x3E41
    public GetSubstring()
    {
        BehaviorDesigner.Runtime.SharedInt pBVar1 = default;

        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0x0;
        this.startIndex = pBVar1;
        pBVar1 = (BehaviorDesigner.Runtime.SharedInt) new BehaviorDesigner_Runtime_SharedInt();
        pBVar1[4].monitor = (object)0xffffffff;
        this.length = pBVar1;
        unnamed_function_51834(this,0);
    }
}
