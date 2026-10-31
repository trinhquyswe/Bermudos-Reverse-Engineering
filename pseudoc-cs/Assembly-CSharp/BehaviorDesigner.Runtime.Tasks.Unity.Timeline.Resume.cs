// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Resume.c by tools/c2cs.py
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

public class Resume : Action // TypeDefIndex: 5949
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("Should the task be stopped when the timeline has stopped playing?")]
    public SharedBool stopWhenComplete; // 0x30
    private PlayableDirector playableDirector; // 0x34
    private GameObject prevGameObject; // 0x38
    private bool playbackStarted; // 0x3C

    // Methods

    // RVA: 0x3E18 Offset: 0x3E18 VA: 0x3E18 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        PlayableDirector pPVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pPVar2 = (PlayableDirector)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569adc);
            this.prevGameObject = param1;
            this.playableDirector = pPVar2;
        }
        this.playbackStarted = false;
    }

    // RVA: 0x3E19 Offset: 0x3E19 VA: 0x3E19 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int param1 = default;

        param1 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(param1,0,0);
        if (iVar1 == 0) {
            if (Raw.Read<sbyte>(this + 0x3c) == '\0') {
                UnityEngine.Playables.PlayableDirector.Resume(Raw.Read<int>(this + 0x34),0);
                Raw.Write<byte>(this + 0x3c, 1);
                BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
            }
            else {
                iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565c78);
                if ((iVar1 == 0) || (iVar1 = unnamed_function_63391(Raw.Read<int>(this + 0x34),0), iVar1 != 1)) {
                    return;
                }
            }
            return;
        }
        UnityEngine.Debug.LogWarning("PlayableDirector is null",0);
        return;
    }

    // RVA: 0x3E1A Offset: 0x3E1A VA: 0x3E1A Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.interruptTasks = (BehaviorDesigner.Runtime.Tasks.Interrupt)0x0;
        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 0;
        this.interruptSuccess = pBVar1;
    }

    // RVA: 0x3E1B Offset: 0x3E1B VA: 0x3E1B
    public Resume()
    {
        unnamed_function_51834(this,0);
    }
}
