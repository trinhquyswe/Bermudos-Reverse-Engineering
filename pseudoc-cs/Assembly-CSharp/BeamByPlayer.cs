// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BeamByPlayer.c by tools/c2cs.py
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

public class BeamByPlayer : MonoBehaviour // TypeDefIndex: 5703
{
    // Fields
    public GameObject beamPrefab; // 0x10
    public Material beamMaterial; // 0x14
    private Rage rage; // 0x18
    private AnimateEvent animateEvent; // 0x1C
    private Vector3 direction; // 0x20
    private float ragePercent; // 0x2C

    // Methods

    // RVA: 0x3A02 Offset: 0x3A02 VA: 0x3A02
    private void Awake()
    {
        Rage pRVar1 = default;
        AnimateEvent pAVar2 = default;

        pRVar1 = (Rage)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f00);
        this.rage = pRVar1;
        pAVar2 = (AnimateEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e14);
        this.animateEvent = pAVar2;
    }

    // RVA: 0x3A03 Offset: 0x3A03 VA: 0x3A03
    private void OnEnable()
    {
        System.Action.RageEventArgs value = default;
        System.Action.AnimateEvent.AnimateEventArgs value_00 = default;
        AnimateEvent __this_00 = default;

        value = (System.Action.RageEventArgs) new System_Action_RageEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_005676a4,0);
        RageEvent.add_OnRageChanged(value);
        __this_00 = this.animateEvent;
        value_00 = (System.Action.AnimateEvent.AnimateEventArgs) new System_Action_AnimateEvent__AnimateEventArgs_();
        System.Action<object, object>.__ctor(value_00,this,DAT_ram_005676a0,0);
        __this_00.add_OnAnimate(value_00);
    }

    // RVA: 0x3A04 Offset: 0x3A04 VA: 0x3A04
    private void OnDisable()
    {
        System.Action.RageEventArgs value = default;
        System.Action.AnimateEvent.AnimateEventArgs value_00 = default;
        AnimateEvent __this_00 = default;

        value = (System.Action.RageEventArgs) new System_Action_RageEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_005676a4,0);
        RageEvent.remove_OnRageChanged(value);
        __this_00 = this.animateEvent;
        value_00 = (System.Action.AnimateEvent.AnimateEventArgs) new System_Action_AnimateEvent__AnimateEventArgs_();
        System.Action<object, object>.__ctor(value_00,this,DAT_ram_005676a0,0);
        __this_00.remove_OnAnimate(value_00);
    }

    // RVA: 0x3A05 Offset: 0x3A05 VA: 0x3A05
    private void AnimateEvent_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
    {
        AimDirection AVar1 = default;
        int iVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;
        long uVar8 = default;

        AVar1 = animateEventArgs.aimDirection;
        if (AVar1 == Up) {
            uVar8 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x18);
            this.direction.z = Raw.Read<float>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x20);
            this.direction.x = (float)(int)uVar8;
            this.direction.y = (float)(int)((ulong)uVar8 >> 0x20);
            return;
        }
        if (AVar1 == UpRight) {
            iVar2 = Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c);
            fVar3 = Raw.Read<float>(iVar2 + 0x20);
            fVar4 = Raw.Read<float>(iVar2 + 0x1c);
            fVar5 = Raw.Read<float>(iVar2 + 0x18);
            fVar6 = Raw.Read<float>(iVar2 + 0x3c);
            fVar7 = Raw.Read<float>(iVar2 + 0x40);
            this.direction.z = fVar3 + Raw.Read<float>(iVar2 + 0x44);
            this.direction.y = fVar4 + fVar7;
            this.direction.x = fVar5 + fVar6;
            return;
        }
        if (AVar1 == UpLeft) {
            iVar2 = Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c);
            fVar3 = Raw.Read<float>(iVar2 + 0x20);
            fVar4 = Raw.Read<float>(iVar2 + 0x1c);
            fVar5 = Raw.Read<float>(iVar2 + 0x18);
            fVar6 = Raw.Read<float>(iVar2 + 0x30);
            fVar7 = Raw.Read<float>(iVar2 + 0x34);
            this.direction.z = fVar3 + Raw.Read<float>(iVar2 + 0x38);
            this.direction.y = fVar4 + fVar7;
            this.direction.x = fVar5 + fVar6;
            return;
        }
        if (AVar1 != Right) {
            if (AVar1 == Left) {
                uVar8 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x30);
                this.direction.z = Raw.Read<float>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x38);
                this.direction.x = (float)(int)uVar8;
                this.direction.y = (float)(int)((ulong)uVar8 >> 0x20);
                return;
            }
            if (AVar1 != Down) {
                if (AVar1 == DownRight) {
                    iVar2 = Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c);
                    fVar3 = Raw.Read<float>(iVar2 + 0x2c);
                    fVar4 = Raw.Read<float>(iVar2 + 0x28);
                    fVar5 = Raw.Read<float>(iVar2 + 0x24);
                    fVar6 = Raw.Read<float>(iVar2 + 0x3c);
                    fVar7 = Raw.Read<float>(iVar2 + 0x40);
                    this.direction.z = fVar3 + Raw.Read<float>(iVar2 + 0x44);
                    this.direction.y = fVar4 + fVar7;
                    this.direction.x = fVar5 + fVar6;
                }
                else if (AVar1 == DownLeft) {
                    iVar2 = Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c);
                    fVar3 = Raw.Read<float>(iVar2 + 0x2c);
                    fVar4 = Raw.Read<float>(iVar2 + 0x28);
                    fVar5 = Raw.Read<float>(iVar2 + 0x24);
                    fVar6 = Raw.Read<float>(iVar2 + 0x30);
                    fVar7 = Raw.Read<float>(iVar2 + 0x34);
                    this.direction.z = fVar3 + Raw.Read<float>(iVar2 + 0x38);
                    this.direction.y = fVar4 + fVar7;
                    this.direction.x = fVar5 + fVar6;
                    return;
                }
                return;
            }
            uVar8 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x24);
            this.direction.z = Raw.Read<float>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x2c);
            this.direction.x = (float)(int)uVar8;
            this.direction.y = (float)(int)((ulong)uVar8 >> 0x20);
            return;
        }
        uVar8 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x3c);
        this.direction.z = Raw.Read<float>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x44);
        this.direction.x = (float)(int)uVar8;
        this.direction.y = (float)(int)((ulong)uVar8 >> 0x20);
    }

    // RVA: 0x3A06 Offset: 0x3A06 VA: 0x3A06
    private void RageEvent_OnRageChanged(RageEventArgs rageEventArgs)
    {
        this.ragePercent = rageEventArgs.ragePercent;
    }

    // RVA: 0x3A07 Offset: 0x3A07 VA: 0x3A07
    public void Beam()
    {
        float fVar1 = default;
        int uVar2 = default;
        int param2 = default;
        int iVar3 = default;
        GameObject param1 = default;
        Rage pRVar4 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        float local_48 = default;
        long local_40 = default;
        float local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        float local_8 = default;

        if (1.0 <= this.ragePercent) {
            fVar1 = unnamed_function_12077(this.direction.y,this.direction.x);
            local_38 = (fVar1 * 57.29578 + 90.0) * 0.017453292;
            local_40 = 0;
            local_10 = 0;
            local_8 = (float)local_38;
            UnityEngine.Quaternion.Internal_FromEulerRad(&local_30,&local_40,0);
            local_18 = local_28;
            local_20 = local_30;
            param1 = this.beamPrefab;
            uVar2 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(&local_10,uVar2,0);
            local_48 = local_8;
            local_58 = local_18;
            local_50 = local_10;
            local_60 = local_20;
            uVar2 = unnamed_function_86418(param1,&local_50,&local_60,DAT_ram_0056b548);
            param2 = UnityEngine.LayerMask.NameToLayer("BashAmmo",0);
            UnityEngine.GameObject.set_layer(uVar2,param2,0);
            iVar3 = UnityEngine.GameObject.GetComponent<object>(uVar2,DAT_ram_00569a58);
            Raw.Write<int>(iVar3 + 0x2c, 0x41200000);
            uVar2 = UnityEngine.GameObject.GetComponent<object>(uVar2,DAT_ram_00569b08);
            unnamed_function_52795(uVar2,this.beamMaterial,0);
            pRVar4 = this.rage;
            pRVar4.currentRage = 0.0;
            RageEvent.CallRageChangedEvent(0.0, 0.0, pRVar4.maxRage);
        }
    }

    // RVA: 0x3A08 Offset: 0x3A08 VA: 0x3A08
    public BeamByPlayer()
    {
        unnamed_function_44622(this,0);
    }
}
