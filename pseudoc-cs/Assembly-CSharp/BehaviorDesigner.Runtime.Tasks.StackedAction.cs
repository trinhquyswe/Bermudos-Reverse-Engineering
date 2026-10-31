// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.StackedAction.c by tools/c2cs.py
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

public class StackedAction : Action // TypeDefIndex: 5837
{
    // Fields
    [InspectTask]
    public Action[] actions; // 0x2C
    [Tooltip("Specifies if the tasks should be traversed with an AND (Sequence) or an OR (Selector).")]
    public StackedAction.ComparisonType comparisonType; // 0x30
    [Tooltip("Should the tasks be labeled within the graph?")]
    public bool graphLabel; // 0x34

    // Methods

    // RVA: 0x3C15 Offset: 0x3C15 VA: 0x3C15 Slot: 4
    public override void OnAwake()
    {
        Action pAVar1 = default;
        Action pAVar2 = default;
        int iVar3 = default;
        int iVar4 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                pAVar2 = pAVar1 + iVar3 + 4;
                if (pAVar2._opaque != 0) {
                    Raw.Write<int>(pAVar2._opaque + 8, Raw.Read<int>(this).pad_8);
                    Raw.Write<int>(pAVar2._opaque + 0xc, Raw.Read<int>(this.pad_8 + 4));
                    Raw.Write<int>(pAVar2._opaque + 0x14, Raw.Read<int>(this.pad_8 + 0xc));
                    iVar4 = Raw.Read<int>(pAVar2)._opaque;
                    Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0xe0) * 4) /* virtual */ ((object)pAVar2._opaque,Raw.Read<int>(iVar4 + 0xe4));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C16 Offset: 0x3C16 VA: 0x3C16 Slot: 5
    public override void OnStart()
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0xe8) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0xec));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C17 Offset: 0x3C17 VA: 0x3C17 Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        iVar1 = Raw.Read<int>(this + 0x2c);
        if (iVar1 == 0) {
            return;
        }
        if (0 < Raw.Read<int>(iVar1 + 0xc)) {
            do {
                piVar2 = Raw.Read<object>(iVar1 + iVar3 * 4 + 0x10);
                if (piVar2 != (object)0x0) {
                    iVar1 = Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0xf0) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0xf4));
                    if (Raw.Read<int>(this + 0x30) == 0) {
                        if (iVar1 == 1) {
                            return;
                        }
                    }
                    else if ((Raw.Read<int>(this + 0x30) == 1) && (iVar1 == 2)) {
                        return;
                    }
                }
                iVar3 = iVar3 + 1;
                iVar1 = Raw.Read<int>(this + 0x2c);
            } while (iVar3 < Raw.Read<int>(iVar1 + 0xc));
        }
        return;
    }

    // RVA: 0x3C18 Offset: 0x3C18 VA: 0x3C18 Slot: 8
    public override void OnFixedUpdate()
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x100) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0x104));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C19 Offset: 0x3C19 VA: 0x3C19 Slot: 7
    public override void OnLateUpdate()
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0xf8) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0xfc));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C1A Offset: 0x3C1A VA: 0x3C1A Slot: 9
    public override void OnEnd()
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x108) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0x10c));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C1B Offset: 0x3C1B VA: 0x3C1B Slot: 21
    public override void OnTriggerEnter(Collider other)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x168) * 4) /* virtual */ (piVar2,other,Raw.Read<int>(*piVar2 + 0x16c));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C1C Offset: 0x3C1C VA: 0x3C1C Slot: 25
    public override void OnTriggerEnter2D(Collider2D other)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x188) * 4) /* virtual */ (piVar2,other,Raw.Read<int>(*piVar2 + 0x18c));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C1D Offset: 0x3C1D VA: 0x3C1D Slot: 22
    public override void OnTriggerExit(Collider other)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x170) * 4) /* virtual */ (piVar2,other,Raw.Read<int>(*piVar2 + 0x174));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C1E Offset: 0x3C1E VA: 0x3C1E Slot: 26
    public override void OnTriggerExit2D(Collider2D other)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 400) * 4) /* virtual */ (piVar2,other,Raw.Read<int>(*piVar2 + 0x194));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C1F Offset: 0x3C1F VA: 0x3C1F Slot: 19
    public override void OnCollisionEnter(Collision collision)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x158) * 4) /* virtual */ (piVar2,collision,Raw.Read<int>(*piVar2 + 0x15c));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C20 Offset: 0x3C20 VA: 0x3C20 Slot: 23
    public override void OnCollisionEnter2D(Collision2D collision)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x178) * 4) /* virtual */ (piVar2,collision,Raw.Read<int>(*piVar2 + 0x17c));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C21 Offset: 0x3C21 VA: 0x3C21 Slot: 20
    public override void OnCollisionExit(Collision collision)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x160) * 4) /* virtual */ (piVar2,collision,Raw.Read<int>(*piVar2 + 0x164));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C22 Offset: 0x3C22 VA: 0x3C22 Slot: 24
    public override void OnCollisionExit2D(Collision2D collision)
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x180) * 4) /* virtual */ (piVar2,collision,Raw.Read<int>(*piVar2 + 0x184));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C23 Offset: 0x3C23 VA: 0x3C23 Slot: 18
    public override string OnDrawNodeText()
    {
        int iVar1 = default;
        object piVar2 = default; // int*
        int param2 = default;
        Action pAVar3 = default;
        System.String param1 = default;
        int iVar4 = default;

        iVar4 = 0;
        pAVar3 = this.actions;
        if ((pAVar3 != (Action)0x0) && (this.graphLabel != false)) {
            param1 = (System.String)Raw.Deref(Raw.Read<object>(string_TypeInfo + 0x5c));
            if (0 < pAVar3[3]._opaque) {
                do {
                    if (pAVar3[iVar4 + 4]._opaque != 0) {
                        iVar1 = System.String.IsNullOrEmpty(param1,0);
                        if (iVar1 == 0) {
                            param1 = (System.String)System.String.Concat(param1,"\n",0);
                        }
                        piVar2 = (object)unnamed_function_82118(this.actions[iVar4 + 4]._opaque);
                        param2 = Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x100) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0x104));
                        param1 = (System.String)System.String.Concat(param1,param2,0);
                        pAVar3 = this.actions;
                    }
                    iVar4 = iVar4 + 1;
                } while (iVar4 < pAVar3[3]._opaque);
            }
            return param1;
        }
        return (System.String)Raw.Deref(Raw.Read<object>(string_TypeInfo + 0x5c));
    }

    // RVA: 0x3C24 Offset: 0x3C24 VA: 0x3C24 Slot: 16
    public override void OnReset()
    {
        Action pAVar1 = default;
        object piVar2 = default; // int*
        int iVar3 = default;

        iVar3 = 0;
        pAVar1 = this.actions;
        if ((pAVar1 != (Action)0x0) && (0 < pAVar1[3]._opaque)) {
            do {
                piVar2 = (object)pAVar1[iVar3 + 4]._opaque;
                if (piVar2 != (object)0x0) {
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0x140) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0x144));
                    pAVar1 = this.actions;
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 < pAVar1[3]._opaque);
        }
    }

    // RVA: 0x3C25 Offset: 0x3C25 VA: 0x3C25
    public StackedAction()
    {
        unnamed_function_51834(this,0);
    }
}
