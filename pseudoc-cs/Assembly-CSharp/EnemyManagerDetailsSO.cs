// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyManagerDetailsSO.c by tools/c2cs.py
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

public class EnemyManagerDetailsSO : ScriptableObject // TypeDefIndex: 5592
{
    // Fields
    public GameObject enemyPrefab; // 0xC
    public string enemyName; // 0x10
    public List<Vector2> enemyPostionList; // 0x14
    public string enemyManagerDataKey; // 0x18

    // Methods

    // RVA: 0x37BF Offset: 0x37BF VA: 0x37BF
    public EnemyManagerDetailsSO()
    {
        UnityEngine.ScriptableObject.__ctor(this,0);
    }
}
