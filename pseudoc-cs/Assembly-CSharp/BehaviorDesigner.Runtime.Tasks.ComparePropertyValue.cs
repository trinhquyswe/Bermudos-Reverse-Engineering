// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.ComparePropertyValue.c by tools/c2cs.py
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

public class ComparePropertyValue : Conditional // TypeDefIndex: 5862
{
    // Fields
    [Tooltip("The GameObject to compare the property of")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The component to compare the property of")]
    public SharedString componentName; // 0x30
    [Tooltip("The name of the property")]
    public SharedString propertyName; // 0x34
    [Tooltip("The value to compare to")]
    public SharedVariable compareValue; // 0x38

    // Methods

    // RVA: 0x3CCC Offset: 0x3CCC VA: 0x3CCC Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int param2 = default;
        object piVar4 = default; // int*

        if (Raw.Read<int>(this + 0x38) == 0) {
            UnityEngine.Debug.LogWarning("Unable to compare field - compare value is null",0);
            return;
        }
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar1 = BehaviorDesigner.Runtime.TaskUtility.GetTypeWithinAssembly(uVar1,0);
        iVar2 = unnamed_function_7515(uVar1,0,0);
        if (iVar2 == 0) {
            uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
            uVar3 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar3,0);
            uVar1 = UnityEngine.GameObject.GetComponent(uVar3,uVar1,0);
            iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
            if (iVar2 == 0) {
                uVar3 = unnamed_function_82118(uVar1);
                param2 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565d0c);
                piVar4 = (object)System.Type.GetProperty(uVar3,param2,0);
                piVar4 = (object)Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 0x188) * 4) /* virtual */ (piVar4,uVar1,0,Raw.Read<int>(*piVar4 + 0x18c));
                if ((piVar4 == (object)0x0) && (iVar2 = Raw.Deref(Raw.Read<object>(this + 0x38)), iVar2 = Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x38),Raw.Read<int>(iVar2 + 0xec)), iVar2 == 0)) {
                    return;
                }
                iVar2 = Raw.Deref(Raw.Read<object>(this + 0x38));
                uVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(this + 0x38),Raw.Read<int>(iVar2 + 0xec));
                Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 0xc0) * 4) /* virtual */ (piVar4,uVar1,Raw.Read<int>(*piVar4 + 0xc4));
                return;
            }
            uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
            uVar1 = System.String.Concat("Unable to compare the property with component ",uVar1,0);
            UnityEngine.Debug.LogWarning(uVar1,0);
            return;
        }
        UnityEngine.Debug.LogWarning("Unable to compare property - type is null",0);
        return;
    }

    // RVA: 0x3CCD Offset: 0x3CCD VA: 0x3CCD Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.componentName = (BehaviorDesigner.Runtime.SharedString)0x0;
        this.fieldName = (BehaviorDesigner.Runtime.SharedString)0x0;
        this.fieldValue = (SharedVariable)0x0;
    }

    // RVA: 0x3CCE Offset: 0x3CCE VA: 0x3CCE
    public ComparePropertyValue()
    {
        unnamed_function_51834(this,0);
    }
}
