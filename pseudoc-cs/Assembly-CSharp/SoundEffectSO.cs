// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/SoundEffectSO.c by tools/c2cs.py
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

public class SoundEffectSO : ScriptableObject // TypeDefIndex: 5719
{
    // Fields
    [Tooltip("The name for the sound effect")]
    [Header("SOUND EFFECT DETAILS")]
    [Space(10)]
    public string soundEffectName; // 0xC
    [Tooltip("The prefab for the sound effect")]
    public GameObject soundPrefab; // 0x10
    [Tooltip("The audio clip for the sound effect")]
    public AudioClip soundEffectClip; // 0x14
    [Range(0, 1)]
    [Tooltip("The sound effect volume.")]
    public float soundEffectVolume; // 0x18
    [Range(0, 3)]
    public float soundEffectPitch; // 0x1C

    // Methods

    // RVA: 0x3A64 Offset: 0x3A64 VA: 0x3A64
    public SoundEffectSO()
    {
        this.soundEffectVolume = 1.0;
        this.soundEffectPitch = 1.0;
        UnityEngine.ScriptableObject.__ctor(this,0);
    }
}
