// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnterPhase2.c by tools/c2cs.py
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

public class EnterPhase2 : Action // TypeDefIndex: 5563
{
    // Fields
    private Animator animator; // 0x2C
    private DealContactDamage dealContactDamage; // 0x30
    public SharedMaterial material; // 0x34
    public float fadeInTime; // 0x38
    private float fadeInTime2; // 0x3C
    private float fadeInAmount; // 0x40
    private Rigidbody2D rb; // 0x44
    private RangedSkills rangedSkills; // 0x48
    private BossEffect bossEffect; // 0x4C
    public Poise poise; // 0x50
    private Boss boss; // 0x54

    // Methods

    // RVA: 0x371F Offset: 0x371F VA: 0x371F Slot: 4
    public override void OnAwake()
    {
        Animator pAVar1 = default;
        DealContactDamage pDVar2 = default;
        Rigidbody2D pRVar3 = default;
        RangedSkills pRVar4 = default;
        BossEffect pBVar5 = default;
        Poise pPVar6 = default;
        Boss pBVar7 = default;

        pAVar1 = (Animator)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec0);
        this.animator = pAVar1;
        pDVar2 = (DealContactDamage)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056ced0);
        this.dealContactDamage = pDVar2;
        pRVar3 = (Rigidbody2D)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee8);
        this.rb = pRVar3;
        pRVar4 = (RangedSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee4);
        this.rangedSkills = pRVar4;
        pBVar5 = (BossEffect)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec8);
        this.bossEffect = pBVar5;
        pPVar6 = (Poise)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee0);
        this.poise = pPVar6;
        pBVar7 = (Boss)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec4);
        this.boss = pBVar7;
    }

    // RVA: 0x3720 Offset: 0x3720 VA: 0x3720 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        int param1 = default;
        Animator param1_00 = default;

        param1 = Raw.Read<int>(this).pad_8;
        param2 = UnityEngine.LayerMask.NameToLayer("Boss",0);
        UnityEngine.GameObject.set_layer(param1,param2,0);
        this.poise.currentPoise = this.poise.maxPoise;
        this.rangedSkills.ammo = this.rangedSkills.ammoPhase2;
        param1_00 = this.animator;
        /* candidates: UnityEngine.Animator.SetTrigger | UnityEngine.Animator.SetTriggerID */ unnamed_function_45425(param1_00,Settings.Idle2,0);
        this.fadeInTime2 = this.fadeInTime;
        this.dealContactDamage.isRemoved = true;
        UnityEngine.Rigidbody2D.set_constraints(this.rb,4,0);
        this.bossEffect.isPhase2 = true;
        this.boss.isPhaseTwo = true;
    }

    // RVA: 0x3721 Offset: 0x3721 VA: 0x3721 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int uVar2 = default;
        int param1 = default;
        float fVar3 = default;

        if (0.0 < Raw.Read<float>(this + 0x38)) {
            fVar3 = Raw.Read<float>(this + 0x40);
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            Raw.Write<float>(this + 0x40, fVar3 - fVar1 / Raw.Read<float>(this + 0x3c));
            uVar2 = /* candidates: BehaviorDesigner.Runtime.SharedVariable<Int32Enum>.get_Value | BehaviorDesigner.Runtime.SharedVariable<LayerMask>.get_Value (+4) */ unnamed_function_61203(Raw.Read<int>(this + 0x34),DAT_ram_00565ccc);
            UnityEngine.Material.SetFloat(uVar2,"_FadeAmount",Raw.Read<float>(this + 0x40),0);
            fVar3 = Raw.Read<float>(this + 0x38);
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            Raw.Write<float>(this + 0x38, fVar3 - fVar1);
            return;
        }
        param1 = Raw.Read<int>(this + 8);
        uVar2 = UnityEngine.LayerMask.NameToLayer("Boss",0);
        UnityEngine.GameObject.set_layer(param1,uVar2,0);
        return;
    }

    // RVA: 0x3722 Offset: 0x3722 VA: 0x3722
    public EnterPhase2()
    {
        this.fadeInAmount = 1.0;
        this.fadeInTime = 1.0;
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
