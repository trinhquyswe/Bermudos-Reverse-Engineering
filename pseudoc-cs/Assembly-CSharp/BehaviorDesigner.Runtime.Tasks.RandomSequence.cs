// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.RandomSequence.c by tools/c2cs.py
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

public class RandomSequence : Composite // TypeDefIndex: 5846
{
    // Fields
    [Tooltip("Seed the random number generator to make things easier to debug")]
    public int seed; // 0x34
    [Tooltip("Do we want to use the seed?")]
    public bool useSeed; // 0x38
    private List<int> childIndexList; // 0x3C
    private Stack<int> childrenExecutionOrder; // 0x40
    private TaskStatus executionStatus; // 0x44

    // Methods

    // RVA: 0x3C64 Offset: 0x3C64 VA: 0x3C64 Slot: 4
    public override void OnAwake()
    {
        int iVar1 = default;
        List param1 = default;
        int iVar2 = default;
        int param2 = default;
        uint uVar3 = default;
        int iVar4 = default;

        uVar3 = 0;
        param2 = 0;
        if (this.useSeed != false) {
            UnityEngine.Random.InitState(this.seed,0);
        }
        param1 = this.childIndexList;
        param1[3]._opaque = 0;
        iVar4 = param1[4]._opaque + 1;
        param1[4]._opaque = iVar4;
        iVar2 = Raw.Read<int>(this.pad_8 + 0x24);
        iVar1 = DAT_ram_00563320;
        if (0 < Raw.Read<int>(iVar2 + 0xc)) {
            while( true ) {
                param1[4]._opaque = iVar4 + 1;
                if (uVar3 < Raw.Read<uint>(param1[2]._opaque + 0xc)) {
                    param1[3]._opaque = uVar3 + 1;
                    Raw.Write<int>(param1[2]._opaque + uVar3 * 4 + 0x10, param2);
                }
                else {
                    unnamed_function_6534 (param1,param2,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
                    iVar2 = Raw.Read<int>(this.pad_8 + 0x24);
                    iVar1 = DAT_ram_00563320;
                }
                param2 = param2 + 1;
                if (Raw.Read<int>(iVar2 + 0xc) <= param2) break;
                param1 = this.childIndexList;
                uVar3 = param1[3]._opaque;
                iVar4 = param1[4]._opaque;
            }
        }
    }

    // RVA: 0x3C65 Offset: 0x3C65 VA: 0x3C65 Slot: 5
    public override void OnStart()
    {
        this.ShuffleChilden();
    }

    // RVA: 0x3C66 Offset: 0x3C66 VA: 0x3C66 Slot: 33
    public override int CurrentChildIndex()
    {
        unnamed_function_54810(Raw.Read<int>(this + 0x40),DAT_ram_00565f04);
        return;
    }

    // RVA: 0x3C67 Offset: 0x3C67 VA: 0x3C67 Slot: 34
    public override bool CanExecute()
    {
        bool bVar1 = default;

        if (this.childrenExecutionOrder[3]._opaque < 1) {
            bVar1 = false;
        }
        else {
            bVar1 = this.executionStatus != Failure;
        }
        return bVar1;
    }

    // RVA: 0x3C68 Offset: 0x3C68 VA: 0x3C68 Slot: 37
    public override void OnChildExecuted(TaskStatus childStatus)
    {
        if (0 < this.childrenExecutionOrder[3]._opaque) {
            unnamed_function_54811(this.childrenExecutionOrder,DAT_ram_00565f08);
        }
        this.executionStatus = childStatus;
    }

    // RVA: 0x3C69 Offset: 0x3C69 VA: 0x3C69 Slot: 43
    public override void OnConditionalAbort(int childIndex)
    {
        unnamed_function_6433(this.childrenExecutionOrder,DAT_ram_00565f00);
        this.executionStatus = Inactive;
        this.ShuffleChilden();
    }

    // RVA: 0x3C6A Offset: 0x3C6A VA: 0x3C6A Slot: 9
    public override void OnEnd()
    {
        this.executionStatus = Inactive;
        unnamed_function_6433(this.childrenExecutionOrder,DAT_ram_00565f00);
    }

    // RVA: 0x3C6B Offset: 0x3C6B VA: 0x3C6B Slot: 16
    public override void OnReset()
    {
        this.useSeed = false;
        this.seed = 0;
    }

    // RVA: 0x3C6C Offset: 0x3C6C VA: 0x3C6C
    private void ShuffleChilden()
    {
        bool bVar1 = default;
        int param2 = default;
        int param2_00 = default;
        int param3 = default;
        uint param2_01 = default;
        List param1 = default;
        uint param2_02 = default;

        param2_01 = this.childIndexList[3]._opaque;
        if (0 < (int)param2_01) {
            do {
                param2 = unnamed_function_44584(0,param2_01,0);
                param2_00 = unnamed_function_6529(this.childIndexList,param2,DAT_ram_0056335c);
                unnamed_function_54812(this.childrenExecutionOrder,param2_00,DAT_ram_00565f0c);
                param1 = this.childIndexList;
                param2_02 = param2_01 - 1;
                param3 = unnamed_function_6529(param1,param2_02,DAT_ram_0056335c);
                unnamed_function_6530(param1,param2,param3,DAT_ram_00563364);
                unnamed_function_6530(this.childIndexList,param2_02,param2_00,DAT_ram_00563364);
                bVar1 = 1 < param2_01;
                param2_01 = param2_02;
            } while (bVar1);
        }
    }

    // RVA: 0x3C6D Offset: 0x3C6D VA: 0x3C6D
    public RandomSequence()
    {
        List param1 = default;
        Stack param1_00 = default;

        param1 = (List)new System_Collections_Generic_List_int_();
        unnamed_function_5132(param1,DAT_ram_00563314);
        this.childIndexList = param1;
        param1_00 = (Stack)new System_Collections_Generic_Stack_int_();
        unnamed_function_30856(param1_00,DAT_ram_00565ef8);
        this.childrenExecutionOrder = param1_00;
        unnamed_function_51834(this,0);
    }
}
