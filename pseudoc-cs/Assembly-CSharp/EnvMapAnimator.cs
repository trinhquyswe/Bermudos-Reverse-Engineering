// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnvMapAnimator.c by tools/c2cs.py
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

public class EnvMapAnimator : MonoBehaviour // TypeDefIndex: 5735
{
    // Fields
    public Vector3 RotationSpeeds; // 0x10
    private TMP_Text m_textMeshPro; // 0x1C
    private Material m_material; // 0x20

    // Methods

    // RVA: 0x3ABC Offset: 0x3ABC VA: 0x3ABC
    private void Awake()
    {
        TMP_Text pTVar1 = default;
        Material pMVar2 = default;

        pTVar1 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f3c);
        this.m_textMeshPro = pTVar1;
        pMVar2 = (Material) Raw.VCall(pTVar1._opaque, 67) /* virtual */ (pTVar1,Raw.Read<int>(pTVar1._opaque + 0x2dc));
        this.m_material = pMVar2;
    }

    [IteratorStateMachine(typeof(EnvMapAnimator._Start_d__4))]
    // RVA: 0x3ABD Offset: 0x3ABD VA: 0x3ABD
    private IEnumerator Start()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new EnvMapAnimator__Start_d__4();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3ABE Offset: 0x3ABE VA: 0x3ABE
    public EnvMapAnimator()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
