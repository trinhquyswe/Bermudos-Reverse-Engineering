// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/SkillsAction.c by tools/c2cs.py
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

public class SkillsAction : Action // TypeDefIndex: 5572
{
    // Fields
    [HideInInspector]
    public Animator animator; // 0x2C
    public BossAnimationState bossAnimationState; // 0x30
    public float normalizedTime; // 0x34
    [HideInInspector]
    public bool isFirstUpdate; // 0x38
    private int Idle; // 0x3C
    private int ouch; // 0x40
    private int OpenMouth; // 0x44
    private int eyeAttack; // 0x48
    private int eyeLoop; // 0x4C
    private int Hop; // 0x50
    private int EyeLoopDeath; // 0x54
    private int Base; // 0x58
    private int Walk; // 0x5C
    private int swipe; // 0x60
    private int mouthOpenLoop; // 0x64
    private int spearAtk; // 0x68
    private int spinny; // 0x6C
    private int Idle2; // 0x70
    private int ouch2; // 0x74
    private int OpenMouth2; // 0x78
    private int eyeAttack2; // 0x7C
    private int eyeLoop2; // 0x80
    private int Hop2; // 0x84
    private int EyeLoopDeath2; // 0x88
    private int Base2; // 0x8C
    private int Walk2; // 0x90
    private int swipe2; // 0x94
    private int mouthOpenLoop2; // 0x98
    private int spearAtk2; // 0x9C
    private int spinny2; // 0xA0
    protected Dictionary<BossAnimationState, int> bossAnimationStateDic; // 0xA4

    // Methods

    // RVA: 0x3741 Offset: 0x3741 VA: 0x3741 Slot: 4
    public override void OnAwake()
    {
        Animator pAVar1 = default;

        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0xb,this.spearAtk,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0,this.Idle,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,1,this.ouch,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,2,this.OpenMouth,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,3,this.eyeAttack,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,4,this.eyeLoop,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,5,this.Hop,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,6,this.EyeLoopDeath,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,7,this.Base,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,8,this.Walk,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,9,this.swipe,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,10,this.mouthOpenLoop,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0xc,this.spinny,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0xd,this.Idle2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0xe,this.ouch2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0xf,this.OpenMouth2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x10,this.eyeAttack2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x11,this.eyeLoop2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x12,this.Hop2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x13,this.EyeLoopDeath2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x14,this.Base2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x15,this.Walk2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x16,this.swipe2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x17,this.mouthOpenLoop2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x18,this.spearAtk2,DAT_ram_0055fd50);
        System.Collections.Generic.Dictionary<Int32Enum, int>.Add(this.bossAnimationStateDic,0x19,this.spinny2,DAT_ram_0055fd50);
        pAVar1 = (Animator)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec0);
        this.animator = pAVar1;
    }

    // RVA: 0x3742 Offset: 0x3742 VA: 0x3742 Slot: 5
    public override void OnStart()
    {
        int param2 = default;
        Animator param1 = default;

        param1 = this.animator;
        param2 = /* candidates: System.Collections.Generic.Dictionary<Int32Enum, Int32Enum>.get_Item | System.Collections.Generic.Dictionary<Int32Enum, int>.get_Item (+1) */ unnamed_function_77425 (this.bossAnimationStateDic,this.bossAnimationState,DAT_ram_0055fd54);
        /* candidates: UnityEngine.Animator.SetTrigger | UnityEngine.Animator.SetTriggerID */ unnamed_function_45425(param1,param2,0);
        this.isFirstUpdate = true;
    }

    // RVA: 0x3743 Offset: 0x3743 VA: 0x3743 Slot: 6
    public override TaskStatus OnUpdate()
    {
        Raw.VCall((ulong)Raw.Read<uint>(Raw.Read<int>(this) + 0x1b8) * 4) /* virtual */ (this,Raw.Read<int>(this + 0x34),Raw.Read<int>(Raw.Read<int>(this) + 0x1bc));
        return;
    }

    // RVA: 0x3744 Offset: 0x3744 VA: 0x3744 Slot: 31
    public virtual TaskStatus HandleTimeOfHits(float time)
    {
        byte[] local_50 = new byte[80];
        if (Raw.Read<sbyte>(this + 0x38) == '\0') {
            UnityEngine.Animator.GetCurrentAnimatorStateInfo(local_50,Raw.Read<int>(this + 0x2c),0,0);
        }
        else {
            Raw.Write<byte>(this + 0x38, 0);
        }
        return;
    }

    // RVA: 0x3745 Offset: 0x3745 VA: 0x3745 Slot: 9
    public override void OnEnd()
    {
        this.isFirstUpdate = false;
    }

    // RVA: 0x3746 Offset: 0x3746 VA: 0x3746
    public SkillsAction()
    {
        int iVar1 = default;
        Dictionary param1 = default;

        iVar1 = UnityEngine.Animator.StringToHash("Idle",0);
        this.Idle = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("ouch",0);
        this.ouch = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("OpenMouth",0);
        this.OpenMouth = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("eyeAttack",0);
        this.eyeAttack = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("eyeLoop",0);
        this.eyeLoop = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("Hop",0);
        this.Hop = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("EyeLoopDeath",0);
        this.EyeLoopDeath = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("Base",0);
        this.Base = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("Walk",0);
        this.Walk = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("swipe",0);
        this.swipe = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("mouthOpenLoop",0);
        this.mouthOpenLoop = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("spearAtk",0);
        this.spearAtk = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("spinny",0);
        this.spinny = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("Idle2",0);
        this.Idle2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("ouch2",0);
        this.ouch2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("OpenMouth2",0);
        this.OpenMouth2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("eyeAttack2",0);
        this.eyeAttack2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("eyeLoop2",0);
        this.eyeLoop2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("Hop2",0);
        this.Hop2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("EyeLoopDeath2",0);
        this.EyeLoopDeath2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("Base2",0);
        this.Base2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("Walk2",0);
        this.Walk2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("swipe2",0);
        this.swipe2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("mouthOpenLoop2",0);
        this.mouthOpenLoop2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("spearAtk2",0);
        this.spearAtk2 = iVar1;
        iVar1 = UnityEngine.Animator.StringToHash("spinny2",0);
        this.spinny2 = iVar1;
        param1 = (Dictionary) unnamed_function_95402 (System_Collections_Generic_Dictionary_BossAnimationState__int__TypeInfo);
        /* candidates: System.Collections.Generic.Dictionary<Int32Enum, Int32Enum>..ctor | System.Collections.Generic.Dictionary<Int32Enum, bool>..ctor (+2) */ unnamed_function_77380(param1,DAT_ram_0055fd4c);
        this.bossAnimationStateDic = param1;
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
