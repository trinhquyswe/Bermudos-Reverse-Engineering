// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.Timeline.Play.c by tools/c2cs.py
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

public class Play : Action // TypeDefIndex: 5948
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("An asset to instantiate a playable from.")]
    public PlayableAsset playableAsset; // 0x30
    [Tooltip("Should the task be stopped when the timeline has stopped playing?")]
    public SharedBool stopWhenComplete; // 0x34
    private PlayableDirector playableDirector; // 0x38
    private GameObject prevGameObject; // 0x3C
    private bool playbackStarted; // 0x40

    // Methods

    // RVA: 0x3E14 Offset: 0x3E14 VA: 0x3E14 Slot: 5
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

    // RVA: 0x3E15 Offset: 0x3E15 VA: 0x3E15 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 == 0) {
            if (Raw.Read<sbyte>(this + 0x40) == '\0') {
                uVar2 = Raw.Read<int>(this + 0x30);
                iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
                if (iVar1 == 0) {
                    UnityEngine.Playables.PlayableDirector.Play(Raw.Read<int>(this + 0x38),Raw.Read<int>(this + 0x30),0);
                }
                else {
                    UnityEngine.Playables.PlayableDirector.Play(Raw.Read<int>(this + 0x38),0);
                }
                Raw.Write<byte>(this + 0x40, 1);
                BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
            }
            else {
                iVar1 = BehaviorDesigner.Runtime.SharedVariable<bool>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565c78);
                if ((iVar1 == 0) || (iVar1 = unnamed_function_63391(Raw.Read<int>(this + 0x38),0), iVar1 != 1)) {
                    return;
                }
            }
            return;
        }
        UnityEngine.Debug.LogWarning("PlayableDirector is null",0);
        return;
    }

    // RVA: 0x3E16 Offset: 0x3E16 VA: 0x3E16 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedBool pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.playableAsset = (PlayableAsset)0x0;
        pBVar1 = (BehaviorDesigner.Runtime.SharedBool) new BehaviorDesigner_Runtime_SharedBool();
        *(object)&pBVar1[4].monitor = 0;
        this.stopWhenComplete = pBVar1;
    }

    // RVA: 0x3E17 Offset: 0x3E17 VA: 0x3E17
    public Play()
    {
        unnamed_function_51834(this,0);
    }
}
