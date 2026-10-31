// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Instruction.c by tools/c2cs.py
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

public class Instruction : MonoBehaviour // TypeDefIndex: 5654
{
    // Fields
    [SerializeField]
    private TextMeshProUGUI instructionText; // 0x10
    [SerializeField]
    private TextMeshProUGUI displayCount; // 0x14

    // Methods

    // RVA: 0x38F8 Offset: 0x38F8 VA: 0x38F8
    private void Start()
    {
        int param1 = default;
        System.Action.@string.@int.@bool value = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
        value = (System.Action.@string.@int.@bool) new System_Action_string__int__bool_();
        System.Action<object, int, bool>.__ctor(value,this,DAT_ram_0056a718,0);
        StaticEventHandler.add_OnInstructionChanged(value);
    }

    // RVA: 0x38F9 Offset: 0x38F9 VA: 0x38F9
    private void OnEnable()
    {
        int uVar1 = default;
        int iVar2 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        uVar1 = UnityEngine.Component.get_transform(this,0);
        iVar2 = Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c);
        local_18 = Raw.Read<float>(iVar2 + 0x14) + Raw.Read<float>(iVar2 + 0x14);
        local_c = (float)(Raw.Read<float>(iVar2 + 0x10) + Raw.Read<float>(iVar2 + 0x10));
        local_10 = (float)(Raw.Read<float>(iVar2 + 0xc) + Raw.Read<float>(iVar2 + 0xc));
        local_20 = CONCAT44(local_c,local_10);
        local_8 = (float)local_18;
        unnamed_function_44982(uVar1,&local_20,0);
        uVar1 = UnityEngine.Component.get_transform(this,0);
        local_28 = Raw.Read<int>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x14);
        local_30 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0xc);
        uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,&local_30,0.3,0);
        DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,0x1b,DAT_ram_0056d380);
    }

    // RVA: 0x38FA Offset: 0x38FA VA: 0x38FA
    private void OnDestroy()
    {
        System.Action.@string.@int.@bool value = default;
        int param1 = default;

        value = (System.Action.@string.@int.@bool) new System_Action_string__int__bool_();
        System.Action<object, int, bool>.__ctor(value,this,DAT_ram_0056a718,0);
        StaticEventHandler.remove_OnInstructionChanged(value);
        param1 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(param1,0,0);
    }

    // RVA: 0x38FB Offset: 0x38FB VA: 0x38FB
    private void OnInstructionChanged(string instruction, int displayCount = -1, bool isActive = True)
    {
        uint in_register_20000031 = default;
        int uVar1 = default;
        int iVar2 = default;
        TextMeshProUGUI pTVar3 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;
        int local_4 = default;

        local_4 = displayCount;
        if (displayCount == -1) {
            uVar1 = UnityEngine.Component.get_gameObject(this,0);
            UnityEngine.GameObject.SetActive(uVar1,1,0);
            iVar2 = this.instructionText._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x2d0) * 4) /* virtual */ (this.instructionText,instruction,Raw.Read<int>(iVar2 + 0x2d4));
            iVar2 = this.displayCount._opaque;
            Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x2d0) * 4) /* virtual */ (this.displayCount,"",Raw.Read<int>(iVar2 + 0x2d4));
        }
        else {
            if ((uint)displayCount < 3) {
                uVar1 = UnityEngine.Component.get_transform(this,0);
                iVar2 = Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c);
                local_18 = Raw.Read<float>(iVar2 + 0x14) + Raw.Read<float>(iVar2 + 0x14);
                local_c = (float)(Raw.Read<float>(iVar2 + 0x10) + Raw.Read<float>(iVar2 + 0x10));
                local_10 = (float)(Raw.Read<float>(iVar2 + 0xc) + Raw.Read<float>(iVar2 + 0xc));
                local_20 = CONCAT44(local_c,local_10);
                local_8 = (float)local_18;
                unnamed_function_44982(uVar1,&local_20,0);
                uVar1 = UnityEngine.Component.get_transform(this,0);
                local_28 = Raw.Read<int>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0x14);
                local_30 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector3_TypeInfo + 0x5c) + 0xc);
                uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,&local_30,0.3,0);
                uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,0x1b,DAT_ram_0056d380);
                DG.Tweening.TweenSettingsExtensions.SetUpdate<object>(uVar1,1,DAT_ram_0056d3e0);
                uVar1 = UnityEngine.Component.get_gameObject(this,0);
                UnityEngine.GameObject.SetActive(uVar1,1,0);
                iVar2 = this.instructionText._opaque;
                Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x2d0) * 4) /* virtual */ (this.instructionText,instruction,Raw.Read<int>(iVar2 + 0x2d4));
                uVar1 = System.Int32.ToString(&local_4,0);
                pTVar3 = this.displayCount;
                uVar1 = System.String.Concat(uVar1,"/3",0);
                iVar2 = pTVar3._opaque;
                Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0x2d0) * 4) /* virtual */ (pTVar3,uVar1,Raw.Read<int>(iVar2 + 0x2d4));
            }
            else {
                uVar1 = UnityEngine.Component.get_gameObject(this,0);
                UnityEngine.GameObject.SetActive(uVar1,0,0);
            }
            if (CONCAT31(in_register_20000031,isActive) == 0) {
                uVar1 = UnityEngine.Component.get_gameObject(this,0);
                UnityEngine.GameObject.SetActive(uVar1,0,0);
            }
        }
    }

    // RVA: 0x38FC Offset: 0x38FC VA: 0x38FC
    public Instruction()
    {
        unnamed_function_44622(this,0);
    }
}
