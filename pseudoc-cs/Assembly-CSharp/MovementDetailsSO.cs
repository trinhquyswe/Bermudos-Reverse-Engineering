// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MovementDetailsSO.c by tools/c2cs.py
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

public class MovementDetailsSO : ScriptableObject // TypeDefIndex: 5678
{
    // Fields
    [Space(10)]
    [Tooltip("The minimum move speed. The GetMoveSpeed method calculates a random value between the minimum and maximum")]
    [Header("MOVEMENT DETAILS")]
    public float minMoveSpeed; // 0xC
    [Tooltip("The maximum move speed. The GetMoveSpeed method calculates a random value between the minimum and maximum")]
    public float maxMoveSpeed; // 0x10
    [Tooltip("If there is a roll movement- this is the roll speed")]
    public float dashSpeed; // 0x14
    [Tooltip("If there is a roll movement - this is the roll distance")]
    public float dashDistance; // 0x18
    [Tooltip("If there is a roll movement - this is the cooldown time in seconds between roll actions")]
    public float dashCooldownTime; // 0x1C

    // Methods

    // RVA: 0x3968 Offset: 0x3968 VA: 0x3968
    public float GetMoveSpeed()
    {
        float param1 = default;

        param1 = this.minMoveSpeed;
        if (param1 != this.maxMoveSpeed) {
            param1 = UnityEngine.Random.Range(param1,this.maxMoveSpeed,0);
        }
        return param1;
    }

    // RVA: 0x3969 Offset: 0x3969 VA: 0x3969
    public MovementDetailsSO()
    {
        this.minMoveSpeed = 8.0;
        this.maxMoveSpeed = 8.0;
        UnityEngine.ScriptableObject.__ctor(this,0);
    }
}
