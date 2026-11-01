// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Poise.c by tools/c2cs.py
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

public class Poise : MonoBehaviour // TypeDefIndex: 5624
{
    // Fields
    private PoiseEvent poiseEvent; // 0x10
    public float maxPoise; // 0x14
    public float currentPoise; // 0x18
    public float stunTime; // 0x1C

    // Methods

    // RVA: 0x383A Offset: 0x383A VA: 0x383A
    private void Awake()
    {
        PoiseEvent pPVar1 = default;

        pPVar1 = (PoiseEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567efc);
        this.poiseEvent = pPVar1;
    }

    // RVA: 0x383B Offset: 0x383B VA: 0x383B
    private void Start()
    {
        this.currentPoise = this.maxPoise;
    }

    // RVA: 0x383C Offset: 0x383C VA: 0x383C
    public void TakePoise(int poiseAmount)
    {
        int iVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        PoiseEvent pPVar4 = default;
        Action pAVar5 = default;
        float fVar6 = default;

        fVar6 = this.currentPoise - (float)poiseAmount;
        this.currentPoise = fVar6;
        if (fVar6 <= 0.0) {
            fVar2 = this.stunTime;
            fVar3 = this.maxPoise;
            pPVar4 = this.poiseEvent;
            pAVar5 = pPVar4.OnPoise;
            if (pAVar5 != (Action)0x0) {
                iVar1 = new PoiseEventArgs();
                Raw.Write<float>(iVar1 + 0x14, fVar2);
                Raw.Write<float>(iVar1 + 0x10, fVar3);
                Raw.Write<float>(iVar1 + 0xc, fVar6);
                Raw.Write<float>(iVar1 + 8, (float)poiseAmount);
                Raw.DelegateInvoke(pAVar5) /* delegate invoke */ (pAVar5[8]._opaque,pPVar4,iVar1,pAVar5[5]._opaque);
            }
        }
    }

    // RVA: 0x383D Offset: 0x383D VA: 0x383D
    public Poise()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
