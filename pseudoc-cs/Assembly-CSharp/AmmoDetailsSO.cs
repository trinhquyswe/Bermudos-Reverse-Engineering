// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AmmoDetailsSO.c by tools/c2cs.py
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

public class AmmoDetailsSO : ScriptableObject // TypeDefIndex: 5537
{
    // Fields
    public float maxSpeed; // 0xC
    public int damage; // 0x10
    public float trajectoryMaxHeight; // 0x14
    public AnimationClip enemyAmmoType; // 0x18
    public Color ammoEffectType; // 0x1C
    public GameObject ammoPrefab; // 0x2C
    public AnimationCurve trajectoryAnimationCurve; // 0x30
    public AnimationCurve axisCorrectionAnimationCurve; // 0x34
    public AnimationCurve ammoSpeedAnimationCurve; // 0x38

    // Methods

    // RVA: 0x368E Offset: 0x368E VA: 0x368E
    public AmmoDetailsSO()
    {
        UnityEngine.ScriptableObject.__ctor(this,0);
    }
}
