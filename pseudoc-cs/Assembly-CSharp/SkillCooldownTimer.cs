// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/SkillCooldownTimer.c by tools/c2cs.py
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

public class SkillCooldownTimer : MonoBehaviour // TypeDefIndex: 5708
{
    // Fields
    [SerializeField]
    private Image dashCooldownImage; // 0x10
    [SerializeField]
    private Image bashCooldownImage; // 0x14
    [SerializeField]
    private Image beamCooldownImage; // 0x18
    [SerializeField]
    private Image beamIcon; // 0x1C
    public float dashCooldown; // 0x20
    public float bashCooldown; // 0x24

    // Methods

    // RVA: 0x3A1F Offset: 0x3A1F VA: 0x3A1F
    private void OnEnable()
    {
        bool bVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        object piVar4 = default; // int*
        int iVar5 = default;
        System.Action.RageEventArgs value = default;

        uVar3 = new System_Action();
        System.Action.__ctor(uVar3,this,DAT_ram_0056c590,0);
        iVar2 = StaticEventHandler.OnTriggerDash;
        while ((piVar4 = (object)System.Delegate.Combine(iVar2,uVar3,0), piVar4 == (object)0x0 || (System_Action_TypeInfo == *piVar4))) {
            iVar5 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,piVar4,iVar2);
            bVar1 = iVar2 == iVar5;
            iVar2 = iVar5;
            if (bVar1) {
                uVar3 = new System_Action();
                System.Action.__ctor(uVar3,this,DAT_ram_0056c58c,0);
                iVar2 = StaticEventHandler.OnTriggerBash;
                while ((piVar4 = (object)System.Delegate.Combine(iVar2,uVar3,0), piVar4 == (object)0x0 || (System_Action_TypeInfo == *piVar4))) {
                    iVar5 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x18,piVar4,iVar2);
                    bVar1 = iVar2 == iVar5;
                    iVar2 = iVar5;
                    if (bVar1) {
                        value = (System.Action.RageEventArgs) new System_Action_RageEventArgs_();
                        System.Action<object>.__ctor(value,this,DAT_ram_0056c594,0);
                        RageEvent.add_OnRageChanged(value);
                        return;
                    }
                }
                unnamed_function_1116(piVar4,System_Action_TypeInfo);
                do {
                    throw null;
                } while( true );
            }
        }
        unnamed_function_1116(piVar4,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A20 Offset: 0x3A20 VA: 0x3A20
    private void OnDisable()
    {
        bool bVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        object piVar4 = default; // int*
        int iVar5 = default;
        System.Action.RageEventArgs value = default;

        uVar3 = new System_Action();
        System.Action.__ctor(uVar3,this,DAT_ram_0056c590,0);
        iVar2 = StaticEventHandler.OnTriggerDash;
        while ((piVar4 = (object)System.Delegate.Remove(iVar2,uVar3,0), piVar4 == (object)0x0 || (System_Action_TypeInfo == *piVar4))) {
            iVar5 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,piVar4,iVar2);
            bVar1 = iVar2 == iVar5;
            iVar2 = iVar5;
            if (bVar1) {
                uVar3 = new System_Action();
                System.Action.__ctor(uVar3,this,DAT_ram_0056c58c,0);
                iVar2 = StaticEventHandler.OnTriggerBash;
                while ((piVar4 = (object)System.Delegate.Remove(iVar2,uVar3,0), piVar4 == (object)0x0 || (System_Action_TypeInfo == *piVar4))) {
                    iVar5 = unnamed_function_1144 (Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x18,piVar4,iVar2);
                    bVar1 = iVar2 == iVar5;
                    iVar2 = iVar5;
                    if (bVar1) {
                        value = (System.Action.RageEventArgs) new System_Action_RageEventArgs_();
                        System.Action<object>.__ctor(value,this,DAT_ram_0056c594,0);
                        RageEvent.remove_OnRageChanged(value);
                        return;
                    }
                }
                unnamed_function_1116(piVar4,System_Action_TypeInfo);
                do {
                    throw null;
                } while( true );
            }
        }
        unnamed_function_1116(piVar4,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3A21 Offset: 0x3A21 VA: 0x3A21
    public void GetDashCooldown()
    {
        this.dashCooldown = 1.0;
        UnityEngine.UI.Image.set_fillAmount(this.dashCooldownImage,1.0,0);
    }

    // RVA: 0x3A22 Offset: 0x3A22 VA: 0x3A22
    public void GetBashCooldown()
    {
        this.bashCooldown = 0.5;
        UnityEngine.UI.Image.set_fillAmount(this.bashCooldownImage,1.0,0);
    }

    // RVA: 0x3A23 Offset: 0x3A23 VA: 0x3A23
    public void IncreaseBeamCooldown(RageEventArgs rageEventArgs)
    {
        int param1 = default;
        int param1_00 = default;

        param1 = DG.Tweening.DOTweenModuleUI.DOFillAmount(this.beamCooldownImage,rageEventArgs.ragePercent,0.3,0);
        param1_00 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1_00,this,DAT_ram_0056c588,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(param1,param1_00,DAT_ram_0056d33c);
    }

    // RVA: 0x3A24 Offset: 0x3A24 VA: 0x3A24
    private void Start()
    {
        UnityEngine.UI.Image.set_fillAmount(this.dashCooldownImage,0.0,0);
        UnityEngine.UI.Image.set_fillAmount(this.bashCooldownImage,0.0,0);
        UnityEngine.UI.Image.set_fillAmount(this.beamCooldownImage,0.0,0);
    }

    // RVA: 0x3A25 Offset: 0x3A25 VA: 0x3A25
    private void Update()
    {
        float fVar1 = default;
        Image pIVar2 = default;
        float fVar3 = default;
        float fVar4 = default;

        pIVar2 = this.dashCooldownImage;
        fVar3 = (float)pIVar2[0x25]._opaque;
        if (0.0 < fVar3) {
            fVar4 = this.dashCooldown;
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            UnityEngine.UI.Image.set_fillAmount(pIVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
        }
        pIVar2 = this.bashCooldownImage;
        fVar3 = (float)pIVar2[0x25]._opaque;
        if (0.0 < fVar3) {
            fVar4 = this.bashCooldown;
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            UnityEngine.UI.Image.set_fillAmount(pIVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
        }
    }

    // RVA: 0x3A26 Offset: 0x3A26 VA: 0x3A26
    public SkillCooldownTimer()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x3A27 Offset: 0x3A27 VA: 0x3A27
    private void _IncreaseBeamCooldown_b__10_0() { }

    // methods without a dump.cs skeleton stub
    public void _IncreaseBeamCooldown_b__10_0()
    {
        int uVar1 = default;
        float fVar2 = default;

        fVar2 = (float)this.beamCooldownImage[0x25]._opaque;
        uVar1 = UnityEngine.Component.get_gameObject(this.beamCooldownImage,0);
        UnityEngine.GameObject.SetActive(uVar1,(uint)(fVar2 != 1.0),0);
        uVar1 = UnityEngine.Component.get_gameObject(this.beamIcon,0);
        UnityEngine.GameObject.SetActive(uVar1,(uint)(fVar2 == 1.0),0);
    }
}
