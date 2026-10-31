// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.PlayScheduled.c by tools/c2cs.py
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

public class PlayScheduled : Action // TypeDefIndex: 6272
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("Time in seconds on the absolute time-line that AudioSettings.dspTime refers to for when the sound should start playing")]
    public SharedFloat time; // 0x30
    private AudioSource audioSource; // 0x34
    private GameObject prevGameObject; // 0x38

    // Methods

    // RVA: 0x428A Offset: 0x428A VA: 0x428A Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        GameObject param1 = default;
        int iVar1 = default;
        AudioSource pAVar2 = default;
        GameObject param2_00 = default;

        param2 = unnamed_function_61203(this.targetGameObject,DAT_ram_00565c9c);
        param1 = (GameObject)BehaviorDesigner.Runtime.Tasks.Task.GetDefaultGameObject(this,param2,0);
        param2_00 = this.prevGameObject;
        iVar1 = (param1 != param2_00);
        if (iVar1 != 0) {
            pAVar2 = (AudioSource)UnityEngine.GameObject.GetComponent<object>(param1,DAT_ram_00569a54);
            this.prevGameObject = param1;
            this.audioSource = pAVar2;
        }
    }

    // RVA: 0x428B Offset: 0x428B VA: 0x428B Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        float fVar2 = default;
        int uVar3 = default;

        uVar3 = Raw.Read<int>(this + 0x34);
        iVar1 = UnityEngine.Object.op_Equality(uVar3,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("AudioSource is null",0);
            return;
        }
        uVar3 = Raw.Read<int>(this + 0x34);
        fVar2 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x30),DAT_ram_00565d00);
        UnityEngine.AudioSource.PlayScheduled(uVar3,(double)fVar2,0);
        return;
    }

    // RVA: 0x428C Offset: 0x428C VA: 0x428C Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.torque = pBVar1;
    }

    // RVA: 0x428D Offset: 0x428D VA: 0x428D
    public PlayScheduled()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(0.0);
        this.delay = pBVar1;
        unnamed_function_51834(this,0);
    }
}
