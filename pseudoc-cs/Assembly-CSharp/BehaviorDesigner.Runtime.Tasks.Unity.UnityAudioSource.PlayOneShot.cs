// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.UnityAudioSource.PlayOneShot.c by tools/c2cs.py
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

public class PlayOneShot : Action // TypeDefIndex: 6271
{
    // Fields
    [Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
    public SharedGameObject targetGameObject; // 0x2C
    [Tooltip("The clip being played")]
    public SharedObject clip; // 0x30
    [Tooltip("The scale of the volume (0-1)")]
    public SharedFloat volumeScale; // 0x34
    private AudioSource audioSource; // 0x38
    private GameObject prevGameObject; // 0x3C

    // Methods

    // RVA: 0x4286 Offset: 0x4286 VA: 0x4286 Slot: 5
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

    // RVA: 0x4287 Offset: 0x4287 VA: 0x4287 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        object param1 = default; // int*
        float param3 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this + 0x38);
        iVar1 = UnityEngine.Object.op_Equality(uVar2,0,0);
        if (iVar1 != 0) {
            UnityEngine.Debug.LogWarning("AudioSource is null",0);
            return;
        }
        uVar2 = Raw.Read<int>(this + 0x38);
        param1 = (object)unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565cdc);
        param3 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0x34),DAT_ram_00565d00);
        if ((param1 != (object)0x0) && (UnityEngine_AudioClip_TypeInfo != *param1)) {
            unnamed_function_1116(param1,UnityEngine_AudioClip_TypeInfo);
            do {
                throw null;
            } while( true );
        }
        UnityEngine.AudioSource.PlayOneShot(uVar2,param1,param3,0);
        return;
    }

    // RVA: 0x4288 Offset: 0x4288 VA: 0x4288 Slot: 16
    public override void OnReset()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.clip = (BehaviorDesigner.Runtime.SharedObject)0x0;
        pBVar1 = SharedFloat.op_Implicit(1.0);
        this.volumeScale = pBVar1;
    }

    // RVA: 0x4289 Offset: 0x4289 VA: 0x4289
    public PlayOneShot()
    {
        BehaviorDesigner.Runtime.SharedFloat pBVar1 = default;

        pBVar1 = SharedFloat.op_Implicit(1.0);
        this.volumeScale = pBVar1;
        unnamed_function_51834(this,0);
    }
}
