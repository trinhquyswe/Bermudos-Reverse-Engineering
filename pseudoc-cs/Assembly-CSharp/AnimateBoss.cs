// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AnimateBoss.c by tools/c2cs.py
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

public class AnimateBoss : MonoBehaviour // TypeDefIndex: 5541
{
    // Fields
    private Boss boss; // 0x10

    // Methods

    // RVA: 0x3698 Offset: 0x3698 VA: 0x3698
    private void Awake()
    {
        Boss pBVar1 = default;

        pBVar1 = (Boss)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e30);
        this.boss = pBVar1;
    }

    // RVA: 0x3699 Offset: 0x3699 VA: 0x3699
    public void Update()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        MethodInfo in_i3 = default;
        int uVar4 = default;
        int iVar5 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        byte[] local_30 = new byte[16];
        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        uVar4 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10),0);
        UnityEngine.Transform.get_position(&local_10,uVar4,0);
        fVar3 = local_8;
        fVar2 = local_c;
        fVar1 = local_10;
        uVar4 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar4,0);
        local_30._8_4_ = (float)fVar3 - (float)local_8;
        local_1c = (float)((float)fVar2 - (float)local_c);
        local_20 = (float)((float)fVar1 - (float)local_10);
        local_30._4_4_ = (object)local_1c;
        local_30._0_4_ = (object)local_20;
        local_18 = (float)local_30._8_4_;
        ((AimDirection)this).SetAimDirection((AnimateBoss)local_30, (Vector3)local_30, in_i3);
    }

    // RVA: 0x369A Offset: 0x369A VA: 0x369A
    public void InitializeAimDirection()
    {
        Animator param1 = default;

        param1 = this.boss.animator;
        unnamed_function_45420(param1,Settings.aimUp,0,0);
        unnamed_function_45420 (this.boss.animator,Settings.aimDown,0,0);
        unnamed_function_45420 (this.boss.animator,Settings.aimLeft,0,0);
        unnamed_function_45420 (this.boss.animator,Settings.aimRight,0,0);
    }

    // RVA: 0x369B Offset: 0x369B VA: 0x369B
    public AimDirection SetAimDirection(Vector3 direction)
    {
        int iVar1 = default;
        float fVar2 = default;
        int param1 = default;
        int iVar3 = default;
        long local_10 = default;
        int local_8 = default;

        local_8._0_1_ = this.pad_8[0];
        local_8._1_1_ = this.pad_8[1];
        local_8._2_1_ = this.pad_8[2];
        local_8._3_1_ = this.pad_8[3];
        local_10._0_4_ = (int)this.klass;
        local_10._4_4_ = (int)this.monitor;
        fVar2 = HelperUtilities.GetAngleFromVector((Vector3)&stack0xfffffff0);
        if ((fVar2 <= 45.0) || (135.0 < fVar2)) {
            if ((fVar2 <= 180.0 && 135.0 < fVar2) || ((-180.0 < fVar2 && (fVar2 <= -155.0)))) {
                ((AnimateBoss)__ret).InitializeAimDirection();
                param1 = Raw.Read<int>(Raw.Read<int>(__ret + 0x10) + 0x24);
                iVar1 = 0x28;
                iVar3 = Raw.Read<int>(Settings_TypeInfo + 0x74);
            }
            else if ((fVar2 <= -155.0) || (-45.0 < fVar2)) {
                if (fVar2 <= -45.0) {
                    return;
                }
                if (45.0 < fVar2) {
                    return;
                }
                ((AnimateBoss)__ret).InitializeAimDirection();
                param1 = Raw.Read<int>(Raw.Read<int>(__ret + 0x10) + 0x24);
                iVar1 = 0x24;
                iVar3 = Raw.Read<int>(Settings_TypeInfo + 0x74);
            }
            else {
                ((AnimateBoss)__ret).InitializeAimDirection();
                param1 = Raw.Read<int>(Raw.Read<int>(__ret + 0x10) + 0x24);
                iVar1 = 0x18;
                iVar3 = Raw.Read<int>(Settings_TypeInfo + 0x74);
            }
        }
        else {
            ((AnimateBoss)__ret).InitializeAimDirection();
            param1 = Raw.Read<int>(Raw.Read<int>(__ret + 0x10) + 0x24);
            iVar1 = 0x10;
            iVar3 = Raw.Read<int>(Settings_TypeInfo + 0x74);
        }
        if (iVar3 == 0) {
        }
        unnamed_function_45425(param1,Raw.Read<int>(Raw.Read<int>(Settings_TypeInfo + 0x5c) + iVar1),0);
        return;
    }

    // RVA: 0x369C Offset: 0x369C VA: 0x369C
    public AnimateBoss()
    {
        unnamed_function_44622(this,0);
    }
}
