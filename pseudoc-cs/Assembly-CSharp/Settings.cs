// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Settings.c by tools/c2cs.py
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

public static class Settings // TypeDefIndex: 5669
{
    // Fields
    public static int isIdle; // 0x0
    public static int isMoving; // 0x4
    public static int isAttack; // 0x8
    public static int isFaint; // 0xC
    public static int aimUp; // 0x10
    public static int aimUp1; // 0x14
    public static int aimDown; // 0x18
    public static int aimUpRight; // 0x1C
    public static int aimUpLeft; // 0x20
    public static int aimRight; // 0x24
    public static int aimLeft; // 0x28
    public static int aimDownRight; // 0x2C
    public static int aimDownLeft; // 0x30
    public static int Idle; // 0x34
    public static int ouch; // 0x38
    public static int OpenMouth; // 0x3C
    public static int eyeAttack; // 0x40
    public static int eyeLoop; // 0x44
    public static int Hop; // 0x48
    public static int EyeLoopDeath; // 0x4C
    public static int Base; // 0x50
    public static int Walk; // 0x54
    public static int swipe; // 0x58
    public static int mouthOpenLoop; // 0x5C
    public static int spearAtk; // 0x60
    public static int spinny; // 0x64
    public static int Idle2; // 0x68
    public static int ouch2; // 0x6C
    public static int OpenMouth2; // 0x70
    public static int eyeAttack2; // 0x74
    public static int eyeLoop2; // 0x78
    public static int Hop2; // 0x7C
    public static int EyeLoopDeath2; // 0x80
    public static int Base2; // 0x84
    public static int Walk2; // 0x88
    public static int swipe2; // 0x8C
    public static int mouthOpenLoop2; // 0x90
    public static int spearAtk2; // 0x94
    public static int spinny2; // 0x98
    public const float epsilon = 0.01;
    public const float contactDamageCollisionResetDelay = 0.5;
    public const float dashCooldown = 1;
    public const float rageAmount = 1;
    public const float bashCooldown = 0.5;
    public const float beamRotationOffset = 90;
    public const int inventorySlotQuantity = 70;
    public const int hotBarSlotQuantity = 10;
    public const int maxStack = 10;
    public const float orthoSize = 8.4375;
    public const float musicFadeOutTime = 0.5;
    public const float musicFadeInTime = 0.5;
    public const int attackCost = 10;

    // Methods

    // RVA: 0x394B Offset: 0x394B VA: 0x394B
    private static Settings()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.Animator.StringToHash("isIdle",0);
        Raw.Write<object>(Raw.Read<object>(Settings_TypeInfo + 0x5c), uVar1);
        uVar1 = UnityEngine.Animator.StringToHash("isMove",0);
        Settings.isMoving = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("isAttack",0);
        Settings.isAttack = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("isFaint",0);
        Settings.isFaint = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimUp",0);
        Settings.aimUp = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimUp1",0);
        Settings.aimUp1 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimDown",0);
        Settings.aimDown = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimUpRight",0);
        Settings.aimUpRight = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimUpLeft",0);
        Settings.aimUpLeft = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimRight",0);
        Settings.aimRight = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimLeft",0);
        Settings.aimLeft = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimDownRight",0);
        Settings.aimDownRight = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("aimDownLeft",0);
        Settings.aimDownLeft = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Idle",0);
        Settings.Idle = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("ouch",0);
        Settings.ouch = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("OpenMouth",0);
        Settings.OpenMouth = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("eyeAttack",0);
        Settings.eyeAttack = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("eyeLoop",0);
        Settings.eyeLoop = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Hop",0);
        Settings.Hop = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("EyeLoopDeath",0);
        Settings.EyeLoopDeath = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Base",0);
        Settings.Base = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Walk",0);
        Settings.Walk = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("swipe",0);
        Settings.swipe = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("mouthOpenLoop",0);
        Settings.mouthOpenLoop = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("spearAtk",0);
        Settings.spearAtk = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("spinny",0);
        Settings.spinny = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Idle2",0);
        Settings.Idle2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("ouch2",0);
        Settings.ouch2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("OpenMouth2",0);
        Settings.OpenMouth2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("eyeAttack2",0);
        Settings.eyeAttack2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("eyeLoop2",0);
        Settings.eyeLoop2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Hop2",0);
        Settings.Hop2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("EyeLoopDeath2",0);
        Settings.EyeLoopDeath2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Base2",0);
        Settings.Base2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("Walk2",0);
        Settings.Walk2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("swipe2",0);
        Settings.swipe2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("mouthOpenLoop2",0);
        Settings.mouthOpenLoop2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("spearAtk2",0);
        Settings.spearAtk2 = uVar1;
        uVar1 = UnityEngine.Animator.StringToHash("spinny2",0);
        Settings.spinny2 = uVar1;
    }
}
