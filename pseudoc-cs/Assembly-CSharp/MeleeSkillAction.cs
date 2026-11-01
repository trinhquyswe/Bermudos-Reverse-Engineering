// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MeleeSkillAction.c by tools/c2cs.py
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

public class MeleeSkillAction : SkillsAction // TypeDefIndex: 5570
{
    // Fields
    private MeleeSkills meleeSkills; // 0xA8

    // Methods

    // RVA: 0x3738 Offset: 0x3738 VA: 0x3738 Slot: 4
    public override void OnAwake()
    {
        MeleeSkills pMVar1 = default;

        ((SkillsAction)this).OnAwake();
        pMVar1 = (MeleeSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cedc);
        this.meleeSkills = pMVar1;
    }

    // RVA: 0x3739 Offset: 0x3739 VA: 0x3739 Slot: 5
    public override void OnStart()
    {
        int skill = default;
        MeleeSkills __this_00 = default;

        this.pad_8[0x30] = 1;
        __this_00 = this.meleeSkills;
        skill = /* candidates: System.Collections.Generic.Dictionary<Int32Enum, Int32Enum>.get_Item | System.Collections.Generic.Dictionary<Int32Enum, int>.get_Item (+1) */ unnamed_function_77425 (Raw.Read<int>(this.pad_8 + 0x9c),Raw.Read<int>(this.pad_8 + 0x28), DAT_ram_0055fd54);
        __this_00.PlayActiveSkill(skill);
    }

    // RVA: 0x373A Offset: 0x373A VA: 0x373A Slot: 6
    public override TaskStatus OnUpdate()
    {
        if (Raw.Read<sbyte>(Raw.Read<int>(this + 0xa8) + 0x4c) != '\0') {
            Raw.VCall(Raw.Read<int>(this), 31) /* virtual */ (this,Raw.Read<int>(this + 0x34),Raw.Read<int>(Raw.Read<int>(this) + 0x1bc));
            return;
        }
        return;
    }

    // RVA: 0x373B Offset: 0x373B VA: 0x373B Slot: 9
    public override void OnEnd()
    {
        this.pad_8[0x30] = 0;
        this.meleeSkills.isAttacking = false;
    }

    // RVA: 0x373C Offset: 0x373C VA: 0x373C
    public MeleeSkillAction()
    {
        new SkillsAction();
    }
}
