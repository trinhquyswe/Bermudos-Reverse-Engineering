// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat.c by tools/c2cs.py
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

public class LogFormat : Action // TypeDefIndex: 6215
{
    // Fields
    [Tooltip("Text format with {0}, {1}, etc")]
    public SharedString textFormat; // 0x2C
    [Tooltip("Is this text an error?")]
    public SharedBool logError; // 0x30
    public SharedVariable arg0; // 0x34
    public SharedVariable arg1; // 0x38
    public SharedVariable arg2; // 0x3C
    public SharedVariable arg3; // 0x40

    // Methods

    // RVA: 0x41AA Offset: 0x41AA VA: 0x41AA Slot: 6
    public override TaskStatus OnUpdate()
    {
        System.Object.arr param2 = default;
        int iVar1 = default;
        int param1 = default;

        param2 = ((BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat)this).buildParamsArray();
        iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
        param1 = unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogErrorFormat(param1,param2,0);
            return;
        }
        UnityEngine.Debug.LogFormat(param1,param2,0);
        return;
    }

    // RVA: 0x41AB Offset: 0x41AB VA: 0x41AB
    private object[] buildParamsArray()
    {
        int iVar1 = default;
        System.Object.arr pSVar2 = default;
        int iVar3 = default;
        int uVar4 = default;

        if ((this.arg3 == (SharedVariable)0x0) || (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.arg3,0), iVar1 != 0)) {
            if ((this.arg2 == (SharedVariable)0x0) || (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.arg2,0), iVar1 != 0)) {
                if ((this.arg1 == (SharedVariable)0x0) || (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.arg1,0), iVar1 != 0)) {
                    if (this.arg0 == (SharedVariable)0x0) {
                        return (System.Object.arr)0x0;
                    }
                    iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.arg0,0);
                    if (iVar1 != 0) {
                        return (System.Object.arr)0x0;
                    }
                    pSVar2 = (System.Object.arr)unnamed_function_1050(object___TypeInfo,1);
                    iVar1 = this.arg0._opaque;
                    iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg0,Raw.Read<int>(iVar1 + 0xec));
                    if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0 )) {
                        uVar4 = unnamed_function_1123();
                        unnamed_function_1109(uVar4,0);
                        do {
                            throw null;
                        } while( true );
                    }
                }
                else {
                    pSVar2 = (System.Object.arr)unnamed_function_1050(object___TypeInfo,2);
                    iVar1 = this.arg1._opaque;
                    iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg1,Raw.Read<int>(iVar1 + 0xec));
                    if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0 )) {
                        uVar4 = unnamed_function_1123();
                        unnamed_function_1109(uVar4,0);
                        do {
                            throw null;
                        } while( true );
                    }
                    pSVar2[5]._opaque = iVar1;
                    iVar1 = this.arg0._opaque;
                    iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg0,Raw.Read<int>(iVar1 + 0xec));
                    if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0 )) {
                        uVar4 = unnamed_function_1123();
                        unnamed_function_1109(uVar4,0);
                        do {
                            throw null;
                        } while( true );
                    }
                }
            }
            else {
                pSVar2 = (System.Object.arr)unnamed_function_1050(object___TypeInfo,3);
                iVar1 = this.arg2._opaque;
                iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg2,Raw.Read<int>(iVar1 + 0xec));
                if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0)) {
                    uVar4 = unnamed_function_1123();
                    unnamed_function_1109(uVar4,0);
                    do {
                        throw null;
                    } while( true );
                }
                pSVar2[6]._opaque = iVar1;
                iVar1 = this.arg1._opaque;
                iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg1,Raw.Read<int>(iVar1 + 0xec));
                if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0)) {
                    uVar4 = unnamed_function_1123();
                    unnamed_function_1109(uVar4,0);
                    do {
                        throw null;
                    } while( true );
                }
                pSVar2[5]._opaque = iVar1;
                iVar1 = this.arg0._opaque;
                iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg0,Raw.Read<int>(iVar1 + 0xec));
                if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0)) {
                    uVar4 = unnamed_function_1123();
                    unnamed_function_1109(uVar4,0);
                    do {
                        throw null;
                    } while( true );
                }
            }
        }
        else {
            pSVar2 = (System.Object.arr)unnamed_function_1050(object___TypeInfo,4);
            iVar1 = this.arg3._opaque;
            iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg3,Raw.Read<int>(iVar1 + 0xec));
            if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0)) {
                uVar4 = unnamed_function_1123();
                unnamed_function_1109(uVar4,0);
                do {
                    throw null;
                } while( true );
            }
            pSVar2[7]._opaque = iVar1;
            iVar1 = this.arg2._opaque;
            iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg2,Raw.Read<int>(iVar1 + 0xec));
            if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0)) {
                uVar4 = unnamed_function_1123();
                unnamed_function_1109(uVar4,0);
                do {
                    throw null;
                } while( true );
            }
            pSVar2[6]._opaque = iVar1;
            iVar1 = this.arg1._opaque;
            iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg1,Raw.Read<int>(iVar1 + 0xec));
            if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0)) {
                uVar4 = unnamed_function_1123();
                unnamed_function_1109(uVar4,0);
                do {
                    throw null;
                } while( true );
            }
            pSVar2[5]._opaque = iVar1;
            iVar1 = this.arg0._opaque;
            iVar1 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xe8) * 4) /* virtual */ (this.arg0,Raw.Read<int>(iVar1 + 0xec));
            if ((iVar1 != 0) && (iVar3 = unnamed_function_1112(iVar1,Raw.Read<int>(pSVar2._opaque + 0x20)), iVar3 == 0)) {
                uVar4 = unnamed_function_1123();
                unnamed_function_1109(uVar4,0);
                do {
                    throw null;
                } while( true );
            }
        }
        pSVar2[4]._opaque = iVar1;
        return pSVar2;
    }

    // RVA: 0x41AC Offset: 0x41AC VA: 0x41AC
    private bool isValid(SharedVariable sv)
    {
        int uVar1 = default;

        if (sv != (BehaviorDesigner.Runtime.SharedVariable)0x0) {
            uVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(sv,0);
            return (bool)((byte)uVar1 ^ 1);
        }
        return false;
    }

    // RVA: 0x41AD Offset: 0x41AD VA: 0x41AD Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedString pBVar1 = default;
        BehaviorDesigner.Runtime.SharedBool pBVar2 = default;

        pBVar1 = SharedString.op_Implicit((System.String)Raw.Deref(Raw.Read<object>(string_TypeInfo + 0x5c)));
        this.textFormat = pBVar1;
        pBVar2 = SharedBool.op_Implicit(false);
        this.arg0 = (SharedVariable)0x0;
        this.arg1 = (SharedVariable)0x0;
        this.logError = pBVar2;
        this.arg2 = (SharedVariable)0x0;
        this.arg3 = (SharedVariable)0x0;
    }

    // RVA: 0x41AE Offset: 0x41AE VA: 0x41AE
    public LogFormat()
    {
        unnamed_function_51834(this,0);
    }
}
