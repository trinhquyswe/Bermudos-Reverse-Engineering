// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AmmoAnimation.c by tools/c2cs.py
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

public class AmmoAnimation : MonoBehaviour // TypeDefIndex: 5536
{
    // Fields
    private Animator animator; // 0x10
    private Ammo ammo; // 0x14

    // Methods

    // RVA: 0x368B Offset: 0x368B VA: 0x368B
    private void Awake()
    {
        Ammo pAVar1 = default;
        Animator pAVar2 = default;

        pAVar1 = (Ammo)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e08);
        this.ammo = pAVar1;
        pAVar2 = (Animator)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e18);
        this.animator = pAVar2;
    }

    // RVA: 0x368C Offset: 0x368C VA: 0x368C
    public void InitializeAmmoAnimation()
    {
        int param2 = default;
        int param1 = default;

        param2 = UnityEngine.Animator.get_runtimeAnimatorController(this.animator,0);
        param1 = new UnityEngine_AnimatorOverrideController();
        UnityEngine.AnimatorOverrideController.__ctor(param1,param2,0);
        /* candidates: UnityEngine.AnimatorOverrideController.Internal_SetClipByName | UnityEngine.AnimatorOverrideController.set_Item */ unnamed_function_45474(param1,"MagickShoot",this.ammo.ammoDetailsSO.enemyAmmoType,0);
        UnityEngine.Animator.set_runtimeAnimatorController(this.animator,param1,0);
    }

    // RVA: 0x368D Offset: 0x368D VA: 0x368D
    public AmmoAnimation()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
