// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Spinny.c by tools/c2cs.py
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

public class Spinny : Action // TypeDefIndex: 5573
{
    // Fields
    private Animator animator; // 0x2C
    private Vector2 direction; // 0x30
    private Weapon weapon; // 0x38
    private DealContactDamage dealContactDamage; // 0x3C
    private Rigidbody2D rb; // 0x40
    [SerializeField]
    private float speed; // 0x44
    [SerializeField]
    private int damage; // 0x48
    private bool isColliding; // 0x4C
    private MeleeSkills meleeSkills; // 0x50
    private BoxCollider2D boxCollider2D; // 0x54
    [SerializeField]
    private SoundEffectSO spinnySoundEffect; // 0x58
    [SerializeField]
    private float spinnyTime; // 0x5C

    // Methods

    // RVA: 0x3747 Offset: 0x3747 VA: 0x3747 Slot: 4
    public override void OnAwake()
    {
        Animator pAVar1 = default;
        Rigidbody2D pRVar2 = default;
        MeleeSkills pMVar3 = default;
        Weapon pWVar4 = default;
        DealContactDamage pDVar5 = default;
        BoxCollider2D pBVar6 = default;

        pAVar1 = (Animator)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cec0);
        this.animator = pAVar1;
        pRVar2 = (Rigidbody2D)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cee8);
        this.rb = pRVar2;
        pMVar3 = (MeleeSkills)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cedc);
        this.meleeSkills = pMVar3;
        pWVar4 = (Weapon)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056ceec);
        this.weapon = pWVar4;
        pDVar5 = (DealContactDamage)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056ced0);
        this.dealContactDamage = pDVar5;
        pBVar6 = (BoxCollider2D)BehaviorDesigner.Runtime.Tasks.Task.GetComponent<object>(this,DAT_ram_0056cecc);
        this.boxCollider2D = pBVar6;
    }

    // RVA: 0x3748 Offset: 0x3748 VA: 0x3748 Slot: 5
    public override void OnStart()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        int uVar4 = default;
        BoxCollider2D param1 = default;
        int iVar5 = default;
        Animator param1_00 = default;
        float fVar6 = default;
        float fVar7 = default;
        float fVar8 = default;
        Vector2 VVar9 = default;
        long local_30 = default;
        int local_28 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        long local_10 = default;
        int local_8 = default;

        UnityEngine.Rigidbody2D.set_drag(this.rb,0.0,0);
        param1 = this.boxCollider2D;
        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        uVar4 = UnityEngine.Component.GetComponent<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10),DAT_ram_00567e38);
        UnityEngine.Physics2D.IgnoreCollision(param1,uVar4,0);
        uVar4 = UnityEngine.GameObject.get_transform(Raw.Read<int>(this).pad_8,0);
        local_8 = 0x3fc00000;
        local_28 = 0x3fc00000;
        local_10 = 0x3fc000003fc00000;
        local_30 = 0x3fc000003fc00000;
        unnamed_function_44982(uVar4,&local_30,0);
        this.dealContactDamage.isRemoved = false;
        this.isColliding = false;
        param1_00 = this.animator;
        unnamed_function_45425(param1_00,Settings.spinny2,0);
        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        uVar4 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10),0);
        UnityEngine.Transform.get_position(&local_20,uVar4,0);
        fVar3 = local_18;
        fVar2 = local_1c;
        fVar1 = local_20;
        UnityEngine.Transform.get_position(&local_20,Raw.Read<int>(this.pad_8 + 4),0);
        fVar6 = (float)fVar2 - (float)local_1c;
        fVar7 = (float)fVar1 - (float)local_20;
        fVar8 = Mathf.Sqrt(fVar7 * fVar7 + fVar6 * fVar6 + ((float)fVar3 - (float)local_18) * ((float)fVar3 - (float)local_18));
        if (1e-05 < fVar8) {
            fVar6 = fVar6 / fVar8;
            fVar7 = fVar7 / fVar8;
        }
        else {
            fVar6 = (Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c))[1];
            fVar7 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        }
        VVar9.y = fVar6;
        VVar9.x = fVar7;
        this.direction = VVar9;
        this.dealContactDamage.contactDamageAmount = this.damage;
        iVar5 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = unnamed_function_95087(iVar5);
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar5 + 0x5c))).PlaySoundEffectPersistent(this.spinnySoundEffect, true);
        this.spinnyTime = 5.0;
    }

    // RVA: 0x3749 Offset: 0x3749 VA: 0x3749 Slot: 8
    public override void OnFixedUpdate()
    {
        long local_10 = default;
        long local_8 = default;

        local_10 = CONCAT44(this.speed * this.direction.y,this.speed * this.direction.x);
        local_8 = local_10;
        unnamed_function_16392(this.rb,&local_10,0);
    }

    // RVA: 0x374A Offset: 0x374A VA: 0x374A Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        float fVar2 = default;

        if ((Raw.Read<sbyte>(this + 0x4c) == '\0') && (fVar2 = Raw.Read<float>(this + 0x5c), 0.0 <= fVar2)) {
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            Raw.Write<float>(this + 0x5c, fVar2 - fVar1);
        }
        return;
    }

    // RVA: 0x374B Offset: 0x374B VA: 0x374B Slot: 7
    public override void OnLateUpdate()
    {
        this.weapon.GetWeaponCollider();
    }

    // RVA: 0x374C Offset: 0x374C VA: 0x374C Slot: 23
    public override void OnCollisionEnter2D(Collision2D collision)
    {
        int param1 = default;
        int iVar1 = default;
        int iVar2 = default;

        param1 = UnityEngine.Collision2D.get_gameObject(collision,0);
        iVar1 = UnityEngine.GameObject.get_layer(param1,0);
        iVar2 = UnityEngine.LayerMask.NameToLayer("Collision",0);
        if (iVar1 == iVar2) {
            this.isColliding = true;
        }
    }

    // RVA: 0x374D Offset: 0x374D VA: 0x374D Slot: 9
    public override void OnEnd()
    {
        int uVar1 = default;
        int iVar2 = default;
        BoxCollider2D param1 = default;
        Rigidbody2D param1_00 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        int local_10 = default;
        long local_8 = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c))).StopSoundEffectLoop(this.spinnySoundEffect);
        UnityEngine.Rigidbody2D.set_drag(this.rb,100000.0,0);
        param1 = this.boxCollider2D;
        iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        uVar1 = UnityEngine.Component.GetComponent<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x10),DAT_ram_00567e38);
        UnityEngine.Physics2D.IgnoreCollision(param1,uVar1,0,0);
        param1_00 = this.rb;
        local_20 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        local_8 = local_20;
        unnamed_function_16392(param1_00,&local_20,0);
        this.dealContactDamage.isRemoved = true;
        uVar1 = UnityEngine.GameObject.get_transform(Raw.Read<int>(this).pad_8,0);
        local_10 = 0x40400000;
        local_28 = 0x40400000;
        local_18 = 0x4040000040400000;
        local_30 = 0x4040000040400000;
        unnamed_function_44982(uVar1,&local_30,0);
    }

    // RVA: 0x374E Offset: 0x374E VA: 0x374E
    public Spinny()
    {
        this.spinnyTime = 5.0;
        this.speed = 5.0;
        this.damage = 10;
        unnamed_function_51834(this,0);
    }
}
