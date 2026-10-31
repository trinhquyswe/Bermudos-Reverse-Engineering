// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.InvokeMethod.c by tools/c2cs.py
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

public class InvokeMethod : Action // TypeDefIndex: 5831
{
    // Fields
    [Tooltip("The GameObject to invoke the method on")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The component to invoke the method on")]
    public SharedString componentName; // 0x30
    [Tooltip("The name of the method")]
    public SharedString methodName; // 0x34
    [Tooltip("The first parameter of the method")]
    public SharedVariable parameter1; // 0x38
    [Tooltip("The second parameter of the method")]
    public SharedVariable parameter2; // 0x3C
    [Tooltip("The third parameter of the method")]
    public SharedVariable parameter3; // 0x40
    [Tooltip("The fourth parameter of the method")]
    public SharedVariable parameter4; // 0x44
    [Tooltip("Store the result of the invoke call")]
    public SharedVariable storeResult; // 0x48

    // Methods

    // RVA: 0x3C04 Offset: 0x3C04 VA: 0x3C04 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int param1 = default;
        int uVar4 = default;
        object piVar5 = default; // int*
        int param3 = default;
        uint uVar6 = default;
        int iVar7 = default;
        int iVar8 = default;
        int local_4 = default;

        iVar7 = 0;
        local_4 = 0;
        uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
        uVar1 = BehaviorDesigner.Runtime.TaskUtility.GetTypeWithinAssembly(uVar1,0);
        iVar2 = unnamed_function_7515(uVar1,0,0);
        if (iVar2 == 0) {
            uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565c9c);
            uVar3 = BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,uVar3,0);
            uVar1 = UnityEngine.GameObject.GetComponent(uVar3,uVar1,0);
            iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
            if (iVar2 == 0) {
                iVar2 = new System_Collections_Generic_List_object_();
                unnamed_function_5132(iVar2,DAT_ram_005636f4);
                param1 = new System_Collections_Generic_List_Type_();
                unnamed_function_5132(param1,DAT_ram_0056403c);
                while( true ) {
                    uVar3 = unnamed_function_82118(this);
                    iVar7 = iVar7 + 1;
                    local_4 = iVar7;
                    uVar4 = System.Int32.ToString(&local_4,0);
                    uVar4 = System.String.Concat("parameter",uVar4,0);
                    piVar5 = (object)System.Type.GetField(uVar3,uVar4,0);
                    piVar5 = (object)Raw.VCall((ulong)Raw.Read<uint>(*piVar5 + 400) * 4) /* virtual */ (piVar5,this,Raw.Read<int>(*piVar5 + 0x194));
                    if (piVar5 == (object)0x0) break;
                    iVar8 = *piVar5;
                    if (((uint)Raw.Read<byte>(iVar8 + 0xb8) < (uint)Raw.Read<byte>(BehaviorDesigner_Runtime_SharedVariable_TypeInfo + 0xb8)) || (Raw.Read<int>(Raw.Read<int>(iVar8 + 100) + (uint)Raw.Read<byte>(BehaviorDesigner_Runtime_SharedVariable_TypeInfo + 0xb8) * 4 + -4) != BehaviorDesigner_Runtime_SharedVariable_TypeInfo)) break;
                    uVar3 = Raw.VCall((ulong)Raw.Read<uint>(iVar8 + 0xe8) * 4) /* virtual */ (piVar5,Raw.Read<int>(iVar8 + 0xec));
                    iVar8 = DAT_ram_005636fc;
                    Raw.Write<int>(iVar2 + 0x10, Raw.Read<int>(iVar2 + 0x10) + 1);
                    uVar6 = Raw.Read<uint>(iVar2 + 0xc);
                    if (uVar6 < Raw.Read<uint>(Raw.Read<int>(iVar2 + 8) + 0xc)) {
                        Raw.Write<uint>(iVar2 + 0xc, uVar6 + 1);
                        Raw.Write<int>(Raw.Read<int>(iVar2 + 8) + uVar6 * 4 + 0x10, uVar3);
                    }
                    else {
                        unnamed_function_6534 (iVar2,uVar3,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar8 + 0x10) + 0x60) + 0x38));
                    }
                    uVar3 = unnamed_function_82118(piVar5);
                    piVar5 = (object)System.Type.GetProperty(uVar3,"Value",0);
                    uVar3 = Raw.VCall((ulong)Raw.Read<uint>(*piVar5 + 0x140) * 4) /* virtual */ (piVar5,Raw.Read<int>(*piVar5 + 0x144));
                    iVar8 = DAT_ram_00564044;
                    Raw.Write<int>(param1 + 0x10, Raw.Read<int>(param1 + 0x10) + 1);
                    uVar6 = Raw.Read<uint>(param1 + 0xc);
                    if (uVar6 < Raw.Read<uint>(Raw.Read<int>(param1 + 8) + 0xc)) {
                        Raw.Write<uint>(param1 + 0xc, uVar6 + 1);
                        Raw.Write<int>(Raw.Read<int>(param1 + 8) + uVar6 * 4 + 0x10, uVar3);
                    }
                    else {
                        unnamed_function_6534 (param1,uVar3,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar8 + 0x10) + 0x60) + 0x38));
                    }
                    if (iVar7 == 4) break;
                }
                uVar3 = unnamed_function_82118(uVar1);
                uVar4 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565d0c);
                param3 = unnamed_function_5184(param1,DAT_ram_00564054);
                uVar3 = System.Type.GetMethod(uVar3,uVar4,param3,0);
                iVar7 = unnamed_function_85324(uVar3,0,0);
                if (iVar7 == 0) {
                    uVar4 = unnamed_function_5184(iVar2,DAT_ram_00563710);
                    uVar1 = System.Reflection.MethodBase.Invoke(uVar3,uVar1,uVar4,0);
                    piVar5 = Raw.Read<object>(this + 0x48);
                    if (piVar5 != (object)0x0) {
                        Raw.VCall((ulong)Raw.Read<uint>(*piVar5 + 0xf0) * 4) /* virtual */ (piVar5,uVar1,Raw.Read<int>(*piVar5 + 0xf4));
                    }
                }
                else {
                    uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565d0c);
                    uVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
                    uVar1 = System.String.Concat("Unable to invoke method ",uVar1," on component ",uVar3,0);
                    UnityEngine.Debug.LogWarning(uVar1,0);
                }
            }
            else {
                uVar1 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565d0c);
                uVar1 = System.String.Concat("Unable to invoke method with component ",uVar1,0);
                UnityEngine.Debug.LogWarning(uVar1,0);
            }
        }
        else {
            UnityEngine.Debug.LogWarning("Unable to invoke - type is null",0);
        }
        return;
    }

    // RVA: 0x3C05 Offset: 0x3C05 VA: 0x3C05 Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.componentName = (BehaviorDesigner.Runtime.SharedString)0x0;
        this.parameter4 = (SharedVariable)0x0;
        this.storeResult = (SharedVariable)0x0;
        this.parameter2 = (SharedVariable)0x0;
        this.parameter3 = (SharedVariable)0x0;
        this.methodName = (BehaviorDesigner.Runtime.SharedString)0x0;
        this.parameter1 = (SharedVariable)0x0;
    }

    // RVA: 0x3C06 Offset: 0x3C06 VA: 0x3C06
    public InvokeMethod()
    {
        unnamed_function_51834(this,0);
    }
}
