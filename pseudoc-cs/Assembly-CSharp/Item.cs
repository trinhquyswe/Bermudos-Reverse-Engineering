// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Item.c by tools/c2cs.py
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

public class Item : MonoBehaviour // TypeDefIndex: 5645
{
    // Fields
    private float timeToDestroy; // 0x10
    private LayerMask playerLayerMark; // 0x14
    public ItemSO itemSO; // 0x18
    private float jumDuration; // 0x1C
    private int numJumps; // 0x20
    private float jumpPower; // 0x24
    private float shakeDuration; // 0x28
    private float shakeStrength; // 0x2C
    private int shakeVibrato; // 0x30
    private bool isColliding; // 0x34
    [SerializeField]
    private SoundEffectSO dropItemSoundEffect; // 0x38

    // Methods

    // RVA: 0x38C8 Offset: 0x38C8 VA: 0x38C8
    private void Start()
    {
        int param1 = default;
        InputSystem_Actions wrapper = default;

        param1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(param1 + 0x10 /* timeToDestroy */, "Player");
        wrapper = (InputSystem_Actions)UnityEngine.LayerMask.GetMask(param1,0);
        new PlayerActions(wrapper);
        this.DropItemEffect();
    }

    // RVA: 0x38C9 Offset: 0x38C9 VA: 0x38C9
    private void Update()
    {
        int param1 = default;
        float fVar1 = default;
        float fVar2 = default;

        fVar2 = this.timeToDestroy;
        if (fVar2 <= 0.0) {
            param1 = UnityEngine.Component.get_gameObject(this,0);
            UnityEngine.Object.Destroy(param1,0);
            return;
        }
        fVar1 = UnityEngine.Time.get_deltaTime(0);
        this.timeToDestroy = fVar2 - fVar1;
    }

    // RVA: 0x38CA Offset: 0x38CA VA: 0x38CA
    private void OnDestroy()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        uVar1 = UnityEngine.Object.op_Implicit(uVar1,0);
        DG.Tweening.DOTween.KillAll(uVar1,0);
    }

    // RVA: 0x38CB Offset: 0x38CB VA: 0x38CB
    private void OnTriggerEnter2D(Collider2D collision)
    {
        int uVar1 = default;
        uint uVar2 = default;
        InventoryManager __this_00 = default;
        uint uVar3 = default;
        int iVar4 = default;

        uVar3 = this.playerLayerMark.m_Mask;
        uVar1 = UnityEngine.Component.get_gameObject(collision,0);
        uVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
        if ((0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) && (this.isColliding != false)) {
            iVar4 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                iVar4 = unnamed_function_95087(iVar4);
            }
            iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                iVar4 = unnamed_function_95087(iVar4);
            }
            ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar4 + 0x5c))).PlaySoundEffect(this.dropItemSoundEffect);
            __this_00 = (InventoryManager)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567eb4);
            if (__this_00 != (InventoryManager)0x0) {
                __this_00.CollectIntentoryItem(this.itemSO);
            }
            uVar1 = UnityEngine.Component.get_gameObject(this,0);
            UnityEngine.Object.Destroy(uVar1,0);
            this.isColliding = false;
        }
    }

    // RVA: 0x38CC Offset: 0x38CC VA: 0x38CC
    public void DropItemEffect()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        int uVar7 = default;
        int param1 = default;
        float fVar8 = default;
        float fVar9 = default;
        float fVar10 = default;
        float fVar11 = default;
        object pfVar12 = default; // float*
        int iVar13 = default;
        long local_30 = default;
        float local_28 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        uVar7 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar7,0);
        fVar5 = local_8;
        fVar3 = local_c;
        fVar1 = local_10;
        iVar13 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar13 + 0xbd) & 1) == 0) {
            iVar13 = unnamed_function_95087(iVar13);
        }
        iVar13 = Raw.Read<int>(Raw.Read<int>(iVar13 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar13 + 0xbd) & 1) == 0) {
            iVar13 = unnamed_function_95087(iVar13);
        }
        uVar7 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar13 + 0x5c)) + 0x10),0);
        UnityEngine.Transform.get_position(&local_10,uVar7,0);
        fVar6 = local_8;
        fVar4 = local_c;
        fVar2 = local_10;
        fVar8 = (float)fVar5 - (float)fVar6;
        fVar9 = (float)fVar3 - (float)fVar4;
        fVar10 = (float)fVar1 - (float)fVar2;
        fVar11 = Mathf.Sqrt(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
        if (1e-05 < fVar11) {
            fVar8 = fVar8 / fVar11;
            fVar10 = fVar10 / fVar11;
            fVar9 = fVar9 / fVar11;
        }
        else {
            pfVar12 = Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c);
            fVar8 = pfVar12[2];
            fVar10 = *pfVar12;
            fVar9 = pfVar12[1];
        }
        uVar7 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar7,0);
        uVar7 = UnityEngine.Component.get_transform(this,0);
        local_28 = (float)local_8 + fVar8 + fVar8;
        local_1c = (float)((float)local_c + fVar9 + fVar9);
        local_20 = (float)((float)local_10 + fVar10 + fVar10);
        local_30 = CONCAT44(local_1c,local_20);
        local_18 = (float)local_28;
        uVar7 = DG.Tweening.ShortcutExtensions.DOJump(uVar7,&local_30,this.jumpPower,this.numJumps,this.jumDuration,0,0);
        param1 = new DG_Tweening_TweenCallback();
        DG.Tweening.TweenCallback.__ctor(param1,this,DAT_ram_0056a7c0,0);
        DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar7,param1,DAT_ram_0056d348);
    }

    // RVA: 0x38CD Offset: 0x38CD VA: 0x38CD
    public Item()
    {
        this.isColliding = true;
        this.shakeStrength = 0.5;
        this.shakeVibrato = 3;
        this.jumpPower = 1.0;
        this.shakeDuration = 0.46;
        this.jumDuration = 0.5;
        this.numJumps = 2;
        this.timeToDestroy = 10.0;
        unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x38CE Offset: 0x38CE VA: 0x38CE
    private void _DropItemEffect_b__15_0() { }

    // methods without a dump.cs skeleton stub
    public void _DropItemEffect_b__15_0()
    {
        int uVar1 = default;
        long local_20 = default;
        int local_18 = default;
        int local_10 = default;
        float local_c = default;
        int local_8 = default;

        uVar1 = UnityEngine.Component.get_transform(this,0);
        local_c = (float)this.shakeStrength;
        local_8 = 0;
        local_18 = 0;
        local_10 = 0;
        local_20 = (ulong)(uint)local_c << 0x20;
        uVar1 = DG.Tweening.ShortcutExtensions.DOShakePosition(uVar1,this.shakeDuration,&local_20,this.shakeVibrato,0.0,0,1,0,0);
        DG.Tweening.TweenSettingsExtensions.SetLoops<object>(uVar1,0xffffffff,DAT_ram_0056d38c);
    }
}
