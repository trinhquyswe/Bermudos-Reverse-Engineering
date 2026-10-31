// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.HasReceivedEvent.c by tools/c2cs.py
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

public class HasReceivedEvent : Conditional // TypeDefIndex: 5851
{
    // Fields
    [Tooltip("The name of the event to receive")]
    public SharedString eventName; // 0x2C
    [Tooltip("Optionally store the first sent argument")]
    [SharedRequired]
    public SharedVariable storedValue1; // 0x30
    [SharedRequired]
    [Tooltip("Optionally store the second sent argument")]
    public SharedVariable storedValue2; // 0x34
    [SharedRequired]
    [Tooltip("Optionally store the third sent argument")]
    public SharedVariable storedValue3; // 0x38
    private bool eventReceived; // 0x3C
    private bool registered; // 0x3D

    // Methods

    // RVA: 0x3C93 Offset: 0x3C93 VA: 0x3C93 Slot: 5
    public override void OnStart()
    {
        int uVar1 = default;
        int uVar2 = default;
        int uVar3 = default;

        if (this.registered == false) {
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action();
            System.Action.__ctor(uVar2,this,DAT_ram_00569d88,0);
            BehaviorDesigner.Runtime.Behavior.RegisterEvent(uVar3,uVar1,uVar2,0);
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action_object_();
            System.Action<object>.__ctor(uVar2,this,DAT_ram_00569d8c,0);
            unnamed_function_65304(uVar3,uVar1,uVar2,DAT_ram_005676a8);
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action_object__object_();
            System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00569d90,0);
            unnamed_function_65304(uVar3,uVar1,uVar2,DAT_ram_005676ac);
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action_object__object__object_();
            System.Action<object, object, object>.__ctor(uVar2,this,DAT_ram_00569d94,0);
            unnamed_function_65304(uVar3,uVar1,uVar2,DAT_ram_005676b0);
            this.registered = true;
        }
    }

    // RVA: 0x3C94 Offset: 0x3C94 VA: 0x3C94 Slot: 6
    public override TaskStatus OnUpdate()
    {

    }

    // RVA: 0x3C95 Offset: 0x3C95 VA: 0x3C95 Slot: 9
    public override void OnEnd()
    {
        int uVar1 = default;
        int uVar2 = default;
        int uVar3 = default;

        if (this.eventReceived != false) {
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action();
            System.Action.__ctor(uVar2,this,DAT_ram_00569d88,0);
            BehaviorDesigner.Runtime.Behavior.UnregisterEvent(uVar3,uVar1,uVar2,0);
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action_object_();
            System.Action<object>.__ctor(uVar2,this,DAT_ram_00569d8c,0);
            unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c0);
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action_object__object_();
            System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00569d90,0);
            unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c4);
            uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
            uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
            uVar2 = new System_Action_object__object__object_();
            System.Action<object, object, object>.__ctor(uVar2,this,DAT_ram_00569d94,0);
            unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c8);
            this.registered = false;
        }
        this.eventReceived = false;
    }

    // RVA: 0x3C96 Offset: 0x3C96 VA: 0x3C96
    private void ReceivedEvent()
    {
        this.eventReceived = true;
    }

    // RVA: 0x3C97 Offset: 0x3C97 VA: 0x3C97
    private void ReceivedEvent(object arg1)
    {
        int iVar1 = default;

        this.eventReceived = true;
        if ((this.storedValue1 != (SharedVariable)0x0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.storedValue1,0), iVar1 == 0)) {
            iVar1 = this.storedValue1._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xf0) * 4) /* virtual */ (this.storedValue1,arg1,Raw.Read<int>(iVar1 + 0xf4));
        }
    }

    // RVA: 0x3C98 Offset: 0x3C98 VA: 0x3C98
    private void ReceivedEvent(object arg1, object arg2)
    {
        int iVar1 = default;

        this.eventReceived = true;
        if ((this.storedValue1 != (SharedVariable)0x0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.storedValue1,0), iVar1 == 0)) {
            iVar1 = this.storedValue1._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xf0) * 4) /* virtual */ (this.storedValue1,arg1,Raw.Read<int>(iVar1 + 0xf4));
        }
        if ((this.storedValue2 != (SharedVariable)0x0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.storedValue2,0), iVar1 == 0)) {
            iVar1 = this.storedValue2._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xf0) * 4) /* virtual */ (this.storedValue2,arg2,Raw.Read<int>(iVar1 + 0xf4));
        }
    }

    // RVA: 0x3C99 Offset: 0x3C99 VA: 0x3C99
    private void ReceivedEvent(object arg1, object arg2, object arg3)
    {
        int iVar1 = default;

        this.eventReceived = true;
        if ((this.storedValue1 != (SharedVariable)0x0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.storedValue1,0), iVar1 == 0)) {
            iVar1 = this.storedValue1._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xf0) * 4) /* virtual */ (this.storedValue1,arg1,Raw.Read<int>(iVar1 + 0xf4));
        }
        if ((this.storedValue2 != (SharedVariable)0x0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.storedValue2,0), iVar1 == 0)) {
            iVar1 = this.storedValue2._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xf0) * 4) /* virtual */ (this.storedValue2,arg2,Raw.Read<int>(iVar1 + 0xf4));
        }
        if ((this.storedValue3 != (SharedVariable)0x0) && (iVar1 = BehaviorDesigner.Runtime.SharedVariable.get_IsNone(this.storedValue3,0), iVar1 == 0)) {
            iVar1 = this.storedValue3._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0xf0) * 4) /* virtual */ (this.storedValue3,arg3,Raw.Read<int>(iVar1 + 0xf4));
        }
    }

    // RVA: 0x3C9A Offset: 0x3C9A VA: 0x3C9A Slot: 15
    public override void OnBehaviorComplete()
    {
        int uVar1 = default;
        int uVar2 = default;
        int uVar3 = default;

        uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
        uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
        uVar2 = new System_Action();
        System.Action.__ctor(uVar2,this,DAT_ram_00569d88,0);
        BehaviorDesigner.Runtime.Behavior.UnregisterEvent(uVar3,uVar1,uVar2,0);
        uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
        uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
        uVar2 = new System_Action_object_();
        System.Action<object>.__ctor(uVar2,this,DAT_ram_00569d8c,0);
        unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c0);
        uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
        uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
        uVar2 = new System_Action_object__object_();
        System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00569d90,0);
        unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c4);
        uVar3 = Raw.Read<int>(this.pad_8 + 0xc);
        uVar1 = unnamed_function_61203(this.eventName,DAT_ram_00565d0c);
        uVar2 = new System_Action_object__object__object_();
        System.Action<object, object, object>.__ctor(uVar2,this,DAT_ram_00569d94,0);
        unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c8);
        this.eventReceived = false;
        this.registered = false;
    }

    // RVA: 0x3C9B Offset: 0x3C9B VA: 0x3C9B Slot: 16
    public override void OnReset()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.eventName = pBVar2;
    }

    // RVA: 0x3C9C Offset: 0x3C9C VA: 0x3C9C
    public HasReceivedEvent()
    {
        object pvVar1 = default; // object*
        BehaviorDesigner.Runtime.SharedString pBVar2 = default;

        pvVar1 = "";
        pBVar2 = (BehaviorDesigner.Runtime.SharedString) new BehaviorDesigner_Runtime_SharedString();
        pBVar2[4].monitor = pvVar1;
        this.eventName = pBVar2;
        unnamed_function_51834(this,0);
    }
}
