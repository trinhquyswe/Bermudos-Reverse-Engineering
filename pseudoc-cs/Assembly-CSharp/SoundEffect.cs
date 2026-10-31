// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/SoundEffect.c by tools/c2cs.py
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

public class SoundEffect : MonoBehaviour // TypeDefIndex: 5716
{
    // Fields
    private AudioSource audioSource; // 0x10
    [HideInInspector]
    public SoundEffectSO soundEffect; // 0x14

    // Methods

    // RVA: 0x3A52 Offset: 0x3A52 VA: 0x3A52
    private void Awake()
    {
        AudioSource pAVar1 = default;

        pAVar1 = (AudioSource)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e24);
        this.audioSource = pAVar1;
    }

    // RVA: 0x3A53 Offset: 0x3A53 VA: 0x3A53
    private void OnEnable()
    {
        int param1 = default;
        int iVar1 = default;

        param1 = UnityEngine.AudioSource.get_clip(this.audioSource,0);
        iVar1 = (param1 != null);
        if (iVar1 != 0) {
            UnityEngine.AudioSource.Play(this.audioSource,0);
        }
    }

    // RVA: 0x3A54 Offset: 0x3A54 VA: 0x3A54
    private void OnDisable()
    {
        UnityEngine.AudioSource.Stop(this.musicAudioSource,0);
    }

    // RVA: 0x3A55 Offset: 0x3A55 VA: 0x3A55
    public void SetSound(SoundEffectSO soundEffect, bool isLoop = False)
    {
        uint in_register_20000021 = default;

        UnityEngine.AudioSource.set_volume(this.audioSource,soundEffect.soundEffectVolume,0);
        UnityEngine.AudioSource.set_clip(this.audioSource,soundEffect.soundEffectClip,0);
        unnamed_function_63125(this.audioSource,soundEffect.soundEffectPitch,0);
        this.soundEffect = soundEffect;
        UnityEngine.AudioSource.set_loop(this.audioSource,CONCAT31(in_register_20000021,isLoop),0);
    }

    // RVA: 0x3A56 Offset: 0x3A56 VA: 0x3A56
    public SoundEffect()
    {
        unnamed_function_44622(this,0);
    }
}
