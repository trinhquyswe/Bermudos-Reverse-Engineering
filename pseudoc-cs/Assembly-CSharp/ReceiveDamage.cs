// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/ReceiveDamage.c by tools/c2cs.py
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

public class ReceiveDamage : MonoBehaviour // TypeDefIndex: 5554
{
    // Fields
    [SerializeField]
    [Header("The damage amount to receive")]
    private int damageAmount; // 0x10
    private Health health; // 0x14
    public bool isNotReceivingDamage; // 0x18

    // Methods

    // RVA: 0x36E8 Offset: 0x36E8 VA: 0x36E8
    private void Awake()
    {
        Health pHVar1 = default;

        pHVar1 = (Health)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e98);
        this.health = pHVar1;
    }

    // RVA: 0x36E9 Offset: 0x36E9 VA: 0x36E9
    public void TakeDamage(int damageAmount = 0)
    {
        MethodInfo method_00 = default;

        if (this.isNotReceivingDamage == false) {
            method_00 = this.damageAmount;
            if (0 < (int)method_00) {
                damageAmount = (int)method_00;
            }
            this.health.TakeDamage(damageAmount, method_00);
        }
    }

    // RVA: 0x36EA Offset: 0x36EA VA: 0x36EA
    public ReceiveDamage()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
