// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Rage.c by tools/c2cs.py
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

public class Rage : MonoBehaviour // TypeDefIndex: 5627
{
    // Fields
    [HideInInspector]
    public float maxRage; // 0x10
    [HideInInspector]
    public float currentRage; // 0x14

    // Methods

    // RVA: 0x3843 Offset: 0x3843 VA: 0x3843
    public void IncreaseRage(float amount)
    {
        int iVar1 = default;
        float fVar2 = default;
        int iVar3 = default;
        float fVar4 = default;

        fVar4 = this.currentRage + amount;
        this.currentRage = fVar4;
        fVar2 = this.maxRage;
        if (fVar2 < fVar4) {
            this.currentRage = fVar2;
            fVar4 = fVar2;
        }
        iVar3 = Raw.Deref(Raw.Read<object>(RageEvent_TypeInfo + 0x5c));
        if (iVar3 != 0) {
            iVar1 = new RageEventArgs();
            Raw.Write<float>(iVar1 + 0x10, fVar2);
            Raw.Write<float>(iVar1 + 0xc, fVar2);
            Raw.Write<float>(iVar1 + 8, fVar4 / fVar2);
            Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar3 + 0x20),iVar1,Raw.Read<int>(iVar3 + 0x14));
        }
    }

    // RVA: 0x3844 Offset: 0x3844 VA: 0x3844
    public Rage()
    {
        this.maxRage = 10.0;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
