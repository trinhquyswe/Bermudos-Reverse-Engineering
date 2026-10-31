// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.GetFieldValue.c by tools/c2cs.py
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

public class GetFieldValue : Action // TypeDefIndex: 5829
{
    // Fields
    [Tooltip("The GameObject to get the field on")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The component to get the field on")]
    public SharedString componentName; // 0x30
    [Tooltip("The name of the field")]
    public SharedString fieldName; // 0x34
    [Tooltip("The value of the field")]
    [RequiredField]
    public SharedVariable fieldValue; // 0x38

    // Methods

    // RVA: 0x3BFE Offset: 0x3BFE VA: 0x3BFE Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int param2 = default;
        object piVar4 = default; // int*
        object piVar5 = default; // int*

        if (Raw.Read<int>(this + 0x38) == 0) {
            UnityEngine.Debug.LogWarning("Unable to get field - field value is null",0);
            return;
        }
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar1 = BehaviorDesigner.Runtime.TaskUtility.GetTypeWithinAssembly(uVar1,0);
        iVar2 = unnamed_function_7515(uVar1,0,0);
        if (iVar2 != 0) {
            UnityEngine.Debug.LogWarning("Unable to get field - type is null",0);
            return;
        }
        uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
        uVar3 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar3,0);
        uVar1 = UnityEngine.GameObject.GetComponent(uVar3,uVar1,0);
        iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
        if (iVar2 != 0) {
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
            uVar1 = System.String.Concat("Unable to get the field with component ",uVar1,0);
            UnityEngine.Debug.LogWarning(uVar1,0);
            return;
        }
        uVar3 = unnamed_function_82118(uVar1);
        param2 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565d0c);
        piVar4 = (object)System.Type.GetField(uVar3,param2,0);
        piVar5 = Raw.Read<object>(this + 0x38);
        uVar1 = Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 400) * 4) /* virtual */ (piVar4,uVar1,Raw.Read<int>(*piVar4 + 0x194));
        iVar2 = *piVar5;
        Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xf0) * 4) /* virtual */(piVar5,uVar1,Raw.Read<int>(iVar2 + 0xf4));
        return;
    }

    // RVA: 0x3BFF Offset: 0x3BFF VA: 0x3BFF Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.componentName = (BehaviorDesigner.Runtime.SharedString)0x0;
        this.fieldName = (BehaviorDesigner.Runtime.SharedString)0x0;
        this.fieldValue = (SharedVariable)0x0;
    }

    // RVA: 0x3C00 Offset: 0x3C00 VA: 0x3C00
    public GetFieldValue()
    {
        unnamed_function_51834(this,0);
    }
}
