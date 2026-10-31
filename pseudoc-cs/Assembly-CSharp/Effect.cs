// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Effect.c by tools/c2cs.py
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

public abstract class Effect : MonoBehaviour // TypeDefIndex: 5576
{
    // Fields
    [SerializeField]
    [ColorUsage(True, True)]
    protected Color flashColor; // 0x10
    protected Rigidbody2D rb; // 0x20
    public AnimationCurve damageFlashCurve; // 0x24
    protected WaitForFixedUpdate waitForFixedUpdate; // 0x28
    [SerializeField]
    protected float damageForce; // 0x2C
    [SerializeField]
    protected float duration; // 0x30
    [SerializeField]
    protected ParticleSystem stunEffect; // 0x34
    [SerializeField]
    protected ParticleSystem bloodEffect; // 0x38

    // Methods

    // RVA: 0x375D Offset: 0x375D VA: 0x375D
    public void StunEffect(float stunTime)
    {
        ParticleSystem[] local_8 = new ParticleSystem[2];
        local_8[0] = this.stunEffect;
        unnamed_function_86779(local_8,stunTime,0);
        UnityEngine.ParticleSystem.Play(this.stunEffect,0);
    }

    // RVA: 0x375E Offset: 0x375E VA: 0x375E
    protected Effect()
    {
        int uVar1 = default;

        uVar1 = new UnityEngine_WaitForFixedUpdate();
        this.pad_8[0x28] = 0;
        this.pad_8[0x29] = 0;
        this.pad_8[0x2a] = 0x80;
        this.pad_8[0x2b] = 0x3e;
        Raw.Write<int>(this.pad_8 + 0x20, uVar1);
        unnamed_function_44622(this,0);
    }
}
