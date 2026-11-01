// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/DeadAction.c by tools/c2cs.py
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

public class DeadAction : Action // TypeDefIndex: 5560
{
    // Fields
    public SharedMaterial deadMaterial; // 0x2C
    [ColorUsage(True, True)]
    public Color fadeColor; // 0x30
    public float fadeTime; // 0x40
    private float fadeAmount; // 0x44
    private float fadeTime2; // 0x48
    private Color defaultColor; // 0x4C

    // Methods

    // RVA: 0x3710 Offset: 0x3710 VA: 0x3710 Slot: 5
    public override void OnStart()
    {
        int uVar1 = default;
        long local_10 = default;
        long local_8 = default;

        UnityEngine.ColorUtility.TryParseHtmlString("#FFFF00",&this.defaultColor,0);
        uVar1 = /* candidates: BehaviorDesigner.Runtime.SharedVariable<Int32Enum>.get_Value | BehaviorDesigner.Runtime.SharedVariable<LayerMask>.get_Value (+4) */ unnamed_function_61203(this.deadMaterial,DAT_ram_00565ccc);
        UnityEngine.Material.SetFloat(uVar1,"_FadeAmount",this.fadeAmount,0);
        this.fadeTime2 = this.fadeTime;
        uVar1 = /* candidates: BehaviorDesigner.Runtime.SharedVariable<Int32Enum>.get_Value | BehaviorDesigner.Runtime.SharedVariable<LayerMask>.get_Value (+4) */ unnamed_function_61203(this.deadMaterial,DAT_ram_00565ccc);
        local_8._0_4_ = this.fadeColor.b;
        local_8._4_4_ = this.fadeColor.a;
        local_10._0_4_ = this.fadeColor.r;
        local_10._4_4_ = this.fadeColor.g;
        UnityEngine.Material.SetColor(uVar1,"_FadeBurnColor",&local_10,0);
    }

    // RVA: 0x3711 Offset: 0x3711 VA: 0x3711 Slot: 6
    public override TaskStatus OnUpdate()
    {
        float fVar1 = default;
        int param1 = default;
        int iVar2 = default;
        GameManager __this_00 = default;
        Action pAVar3 = default;
        float fVar4 = default;

        if (0.0 < Raw.Read<float>(this + 0x40)) {
            fVar4 = Raw.Read<float>(this + 0x44);
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            Raw.Write<float>(this + 0x44, fVar4 + fVar1 / Raw.Read<float>(this + 0x48));
            param1 = /* candidates: BehaviorDesigner.Runtime.SharedVariable<Int32Enum>.get_Value | BehaviorDesigner.Runtime.SharedVariable<LayerMask>.get_Value (+4) */ unnamed_function_61203(Raw.Read<int>(this + 0x2c),DAT_ram_00565ccc);
            UnityEngine.Material.SetFloat(param1,"_FadeAmount",Raw.Read<float>(this + 0x44),0);
            fVar4 = Raw.Read<float>(this + 0x40);
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            Raw.Write<float>(this + 0x40, fVar4 - fVar1);
            return;
        }
        iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        __this_00 = (GameManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c));
        __this_00.gameState = Won;
        UnityEngine.PlayerPrefs.SetInt("isBossDefeated",1,0);
        __this_00.WonScene();
        pAVar3 = __this_00.OnGameStateChange;
        if (pAVar3 != (Action)0x0) {
            Raw.DelegateInvoke(pAVar3) /* delegate invoke */(pAVar3[8]._opaque,5,pAVar3[5]._opaque);
        }
        return;
    }

    // RVA: 0x3712 Offset: 0x3712 VA: 0x3712 Slot: 9
    public override void OnEnd()
    {
        int uVar1 = default;
        long local_10 = default;
        long local_8 = default;

        uVar1 = /* candidates: BehaviorDesigner.Runtime.SharedVariable<Int32Enum>.get_Value | BehaviorDesigner.Runtime.SharedVariable<LayerMask>.get_Value (+4) */ unnamed_function_61203(this.deadMaterial,DAT_ram_00565ccc);
        local_8._0_4_ = this.defaultColor.b;
        local_8._4_4_ = this.defaultColor.a;
        local_10._0_4_ = this.defaultColor.r;
        local_10._4_4_ = this.defaultColor.g;
        UnityEngine.Material.SetColor(uVar1,"_FadeBurnColor",&local_10,0);
        UnityEngine.GameObject.SetActive(Raw.Read<int>(this).pad_8,0,0);
        uVar1 = /* candidates: BehaviorDesigner.Runtime.SharedVariable<Int32Enum>.get_Value | BehaviorDesigner.Runtime.SharedVariable<LayerMask>.get_Value (+4) */ unnamed_function_61203(this.deadMaterial,DAT_ram_00565ccc);
        UnityEngine.Material.SetFloat(uVar1,"_FadeAmount",0.0,0);
    }

    // RVA: 0x3713 Offset: 0x3713 VA: 0x3713
    public DeadAction()
    {
        this.fadeTime = 3.0;
        /* candidates: BehaviorDesigner.Runtime.Tasks.Action.ctor | BehaviorDesigner.Runtime.Tasks.BehaviorReference.ctor (+6) */ unnamed_function_51834(this,0);
    }
}
