// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Log.c by tools/c2cs.py
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

public class Log : Action // TypeDefIndex: 5827
{
    // Fields
    [Tooltip("Text to output to the log")]
    public SharedString text; // 0x2C
    [Tooltip("Is this text an error?")]
    public SharedBool logError; // 0x30
    [Tooltip("Should the time be included in the log message?")]
    public SharedBool logTime; // 0x34

    // Methods

    // RVA: 0x3BF8 Offset: 0x3BF8 VA: 0x3BF8 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        float local_8 = default;
        float local_4 = default;

        iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        iVar2 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
        if (iVar1 == 0) {
            if (iVar2 == 0) {
                iVar1 = Raw.Read<int>(this + 0x2c);
            }
            else {
                local_8 = (float)UnityEngine.Time.get_time(0);
                uVar3 = unnamed_function_1113(float_TypeInfo,&local_8);
                uVar3 = System.String.Format("{0}: {1}",uVar3,Raw.Read<int>(this + 0x2c),0);
                iVar1 = new BehaviorDesigner_Runtime_SharedString();
                Raw.Write<int>(iVar1 + 0x24, uVar3);
            }
            UnityEngine.Debug.Log(iVar1,0);
        }
        else {
            if (iVar2 == 0) {
                iVar1 = Raw.Read<int>(this + 0x2c);
            }
            else {
                local_4 = (float)UnityEngine.Time.get_time(0);
                uVar3 = unnamed_function_1113(float_TypeInfo,&local_4);
                uVar3 = System.String.Format("{0}: {1}",uVar3,Raw.Read<int>(this + 0x2c),0);
                iVar1 = new BehaviorDesigner_Runtime_SharedString();
                Raw.Write<int>(iVar1 + 0x24, uVar3);
            }
            UnityEngine.Debug.LogError(iVar1,0);
        }
        return;
    }

    // RVA: 0x3BF9 Offset: 0x3BF9 VA: 0x3BF9 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar3 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.text = pBVar2;
        pBVar3 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar3[4].monitor = 0;
        this.logError = pBVar3;
        pBVar3 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar3[4].monitor = 0;
        this.logTime = pBVar3;
    }

    // RVA: 0x3BFA Offset: 0x3BFA VA: 0x3BFA
    public Log()
    {
        unnamed_function_51834(this,0);
    }
}
