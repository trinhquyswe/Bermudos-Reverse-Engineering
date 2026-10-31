// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.StunAction.c by tools/c2cs.py
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

public class StunAction : SkillsAction // TypeDefIndex: 5876
{
    // Fields
    private Boss boss; // 0xA8
    private Poise poise; // 0xAC
    public SharedFloat stunTime; // 0xB0

    // Methods

    // RVA: 0x3D1E Offset: 0x3D1E VA: 0x3D1E Slot: 4
    public override void OnAwake()
    {
        Poise pPVar1 = default;
        Boss pBVar2 = default;

        ((SkillsAction)this).OnAwake();
        pPVar1 = (Poise)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee0);
        this.poise = pPVar1;
        pBVar2 = (Boss)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec4);
        this.boss = pBVar2;
    }

    // RVA: 0x3D1F Offset: 0x3D1F VA: 0x3D1F Slot: 5
    public override void OnStart()
    {

    }

    // RVA: 0x3D20 Offset: 0x3D20 VA: 0x3D20 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int uVar2 = default;
        float fVar3 = default;
        int param1 = default;

        if ((Raw.Read<float>(Raw.Read<int>(this + 0xac) + 0x18) <= 0.0) && (fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0xb0),DAT_ram_00565d00), 0.0 < fVar1)) {
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0xb0),DAT_ram_00565d00);
            if ((0.5 <= fVar1) || (fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(Raw.Read<int>(this + 0xb0),DAT_ram_00565d00), fVar1 <= 0.0 )) {
                param1 = Raw.Read<int>(this + 0x2c);
                uVar2 = unnamed_function_77425 (Raw.Read<int>(this + 0xa4),Raw.Read<int>(this + 0x30), DAT_ram_0055fd54);
                unnamed_function_45425(param1,uVar2,0);
            }
            uVar2 = Raw.Read<int>(this + 0xb0);
            fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(uVar2,DAT_ram_00565d00);
            fVar3 = UnityEngine.Time.get_deltaTime(0);
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(uVar2,fVar1 - fVar3,DAT_ram_00565d04);
        }
        return;
    }

    // RVA: 0x3D21 Offset: 0x3D21 VA: 0x3D21 Slot: 9
    public override void OnEnd()
    {
        float fVar1 = default;
        BehaviorDesigner.Runtime.SharedFloat param1 = default;
        Poise pPVar2 = default;

        pPVar2 = this.poise;
        if (pPVar2.currentPoise <= 0.0) {
            pPVar2.currentPoise = pPVar2.maxPoise;
        }
        fVar1 = BehaviorDesigner.Runtime.SharedVariable<float>.get_Value(this.stunTime,DAT_ram_00565d00);
        if (fVar1 <= 0.0) {
            fVar1 = this.poise.stunTime;
            param1 = (BehaviorDesigner.Runtime.SharedFloat) new BehaviorDesigner_Runtime_SharedFloat();
            BehaviorDesigner.Runtime.SharedVariable<float>.set_Value(param1,fVar1,DAT_ram_00565d04);
            this.stunTime = param1;
        }
    }

    // RVA: 0x3D22 Offset: 0x3D22 VA: 0x3D22
    public StunAction()
    {
        new SkillsAction();
    }
}
