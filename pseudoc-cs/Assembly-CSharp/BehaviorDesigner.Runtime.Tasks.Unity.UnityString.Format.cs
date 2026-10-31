// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Format.c by tools/c2cs.py
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

public class Format : Action // TypeDefIndex: 5958
{
    // Fields
    [Tooltip("The format of the string")]
    public SharedString format; // 0x2C
    [Tooltip("Any variables to appear in the string")]
    public SharedGenericVariable[] variables; // 0x30
    [RequiredField]
    [Tooltip("The result of the format")]
    public SharedString storeResult; // 0x34
    private object[] variableValues; // 0x38

    // Methods

    // RVA: 0x3E35 Offset: 0x3E35 VA: 0x3E35 Slot: 4
    public override void OnAwake()
    {
        object poVar1 = default; // object*

        poVar1 = (object)unnamed_function_1050(object___TypeInfo,this.variables[3]._opaque);
        this.variableValues = poVar1;
    }

    // RVA: 0x3E36 Offset: 0x3E36 VA: 0x3E36 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        object puVar4 = default; // int*
        object param2 = default; // int*
        object piVar5 = default; // int*
        int param2_00 = default;
        int iVar6 = default;

        piVar5 = Raw.Read<object>(this + 0x38);
        if (0 < piVar5[3]) {
            iVar2 = 0;
            do {
                iVar3 = unnamed_function_61203 (Raw.Read<int>(iVar2 * 4 + Raw.Read<int>(this + 0x30) + 0x10),DAT_ram_00565ca8 );
                iVar6 = Raw.Deref(Raw.Read<object>(iVar3 + 0xc));
                iVar3 = Raw.VCall((ulong)Raw.Read<uint>(iVar6 + 0xe8) * 4) /* virtual */ (Raw.Read<object>(iVar3 + 0xc),Raw.Read<int>(iVar6 + 0xec));
                if ((iVar3 != 0) && (iVar6 = unnamed_function_1112(iVar3,Raw.Read<int>(*piVar5 + 0x20)), iVar6 == 0)) {
                    uVar1 = unnamed_function_1123();
                    unnamed_function_1109(uVar1,0);
                    do {
                        throw null;
                    } while( true );
                }
                piVar5[iVar2 + 4] = iVar3;
                iVar2 = iVar2 + 1;
                piVar5 = Raw.Read<object>(this + 0x38);
            } while (iVar2 < piVar5[3]);
        }
        param2_00 = Raw.Read<int>(this + 0x34);
        uVar1 = import_env_invoke_iii (s___Scripting__UnityEngine__Capsul_ram_00003670 + 4, Raw.Read<int>(this + 0x2c),DAT_ram_00565d0c);
        iVar2 = DAT_ram_005ddf34;
        if (iVar2 == 1) {
            uVar1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        }
        else {
            uVar1 = import_env_invoke_iiii (s___Scripting__Unity__Collections__ram_0000091f + 2,uVar1, Raw.Read<int>(this + 0x38),0);
            if (DAT_ram_005ddf34 != 1) {
                import_env_invoke_viii (s___Scripting__UnityEngine__Capsul_ram_00003670 + 5,param2_00,uVar1, DAT_ram_00565d10);
                if (DAT_ram_005ddf34 != 1) {
                    return;
                }
            }
            uVar1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        }
        iVar2 = import_env_getTempRet0();
        iVar3 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar2 == iVar3) {
            puVar4 = (object)import_env___cxa_begin_catch(uVar1);
            uVar1 = import_env_invoke_ii(0x108,&System_Exception_TypeInfo);
            uVar1 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
            import_env_invoke_v(0x3a);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 == 1) {
                import_env___cxa_find_matching_catch_3(0);
                import_env_getTempRet0();
                unnamed_function_642();
                code_r0x81a6cdd8: do {
                    throw null;
                } while( true );
            }
        }
        import_env___resumeException(uVar1);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3E37 Offset: 0x3E37 VA: 0x3E37 Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.variables = (SharedGenericVariable)0x0;
        this.storeResult = (BehaviorDesigner.Runtime.SharedString)0x0;
        this.format = pBVar2;
    }

    // RVA: 0x3E38 Offset: 0x3E38 VA: 0x3E38
    public Format()
    {
        unnamed_function_51834(this,0);
    }
}
