// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AmmoHitEffect.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(k, s)(args)               virtual call: vtable slot s of class k (k+0xc0+8*s)
//   Raw.VCallAt(e)(args)                virtual call: vtable entry at address e (interface)
//   Raw.DelegateInvoke(d)(args)         delegate invoke: target from d+0xc, this d+0x20
//   Raw.IndirectCall(a)(args)           unresolved indirect call (function-table offset a)
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class AmmoHitEffect : MonoBehaviour // TypeDefIndex: 5538
{
    // Fields
    private ParticleSystem particleSystemHitEffect; // 0x10

    // Methods

    // RVA: 0x368F Offset: 0x368F VA: 0x368F
    private void Awake()
    {
        ParticleSystem pPVar1 = default;

        pPVar1 = (ParticleSystem)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567eec);
        this.particleSystemHitEffect = pPVar1;
    }

    // RVA: 0x3690 Offset: 0x3690 VA: 0x3690
    public void InitialiseAmmoHitEffect(Color ammoHitEffectType)
    {
        int param1 = default;
        long local_78 = default;
        long local_70 = default;
        long local_68 = default;
        long local_60 = default;
        long local_58 = default;
        int local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        int local_10 = default;

        ParticleSystem[] local_8 = new ParticleSystem[2];
        local_8[0] = this.particleSystemHitEffect;
        local_40._0_4_ = ammoHitEffectType.b;
        local_40._4_4_ = ammoHitEffectType.a;
        local_48._0_4_ = ammoHitEffectType.r;
        local_48._4_4_ = ammoHitEffectType.g;
        /* candidates: UnityEngine.ParticleSystem.MinMaxGradient.ctor | UnityEngine.ParticleSystem.MinMaxGradient.op_Implicit */ unnamed_function_86814(&local_38,&local_48,0);
        local_50 = local_10;
        local_58 = local_18;
        local_60 = local_20;
        local_68 = local_28;
        local_70 = local_30;
        local_78 = local_38;
        /* candidates: UnityEngine.ParticleSystem.MainModule.set_startColor | UnityEngine.ParticleSystem.MainModule.set_startColor_Injected */ unnamed_function_86787(local_8,&local_78,0);
        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,1,0);
    }

    // RVA: 0x3691 Offset: 0x3691 VA: 0x3691
    public AmmoHitEffect()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
