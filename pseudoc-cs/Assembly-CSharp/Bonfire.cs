// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Bonfire.c by tools/c2cs.py
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

public class Bonfire : MonoBehaviour // TypeDefIndex: 5555
{
    // Fields
    private LayerMask playerLayer; // 0x10
    [SerializeField]
    private SpriteRenderer icon; // 0x14
    [SerializeField]
    private SoundEffectSO restSoundEffect; // 0x18

    // Methods

    // RVA: 0x36EB Offset: 0x36EB VA: 0x36EB
    private void Awake()
    {
        int iVar1 = default;
        int param1 = default;

        iVar1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar1 + 0x10, "Player");
        iVar1 = UnityEngine.LayerMask.GetMask(iVar1,0);
        this.playerLayer.m_Mask = iVar1;
        param1 = UnityEngine.Component.get_gameObject(this.icon,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }

    // RVA: 0x36EC Offset: 0x36EC VA: 0x36EC
    private void OnEnable()
    {
        System.Action value = default;

        value = (System.Action)new System_Action();
        System.Action.__ctor(value,this,DAT_ram_00567860,0);
        StaticEventHandler.add_OnPressRestEvent(value);
    }

    // RVA: 0x36ED Offset: 0x36ED VA: 0x36ED
    private void OnDisable()
    {
        System.Action value = default;

        value = (System.Action)new System_Action();
        System.Action.__ctor(value,this,DAT_ram_00567860,0);
        StaticEventHandler.remove_OnPressRestEvent(value);
    }

    // RVA: 0x36EE Offset: 0x36EE VA: 0x36EE
    private void OnCollisionEnter2D(Collision2D collision)
    {
        int uVar1 = default;
        uint uVar2 = default;
        uint uVar3 = default;

        uVar3 = this.playerLayer.m_Mask;
        uVar1 = UnityEngine.Collision2D.get_gameObject(collision,0);
        uVar2 = UnityEngine.GameObject.get_layer(uVar1,0);
        if (0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) {
            uVar1 = UnityEngine.Component.get_gameObject(this.icon,0);
            UnityEngine.GameObject.SetActive(uVar1,1,0);
        }
    }

    // RVA: 0x36EF Offset: 0x36EF VA: 0x36EF
    private void OnCollisionExit2D(Collision2D collision)
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this.icon,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }

    // RVA: 0x36F0 Offset: 0x36F0 VA: 0x36F0
    public void RestInBonfire()
    {
        int param1 = default;
        int iVar1 = default;

        param1 = UnityEngine.Component.get_gameObject(this.icon,0);
        iVar1 = UnityEngine.GameObject.get_activeSelf(param1,0);
        if (iVar1 != 0) {
            StaticEventHandler.CallRestInBonfireEvent();
            this.SaveCheckPointAtBonfire();
            iVar1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = unnamed_function_95087(iVar1);
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = unnamed_function_95087(iVar1);
            }
            ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c))).PlaySoundEffect(this.restSoundEffect);
        }
    }

    // RVA: 0x36F1 Offset: 0x36F1 VA: 0x36F1
    private void SaveCheckPointAtBonfire()
    {
        int uVar1 = default;
        int iVar2 = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x18),0);
        Esper.ESave.SaveFile.AddOrUpdateData<object>(uVar1,"Checkpoint","The Forest",DAT_ram_0056c1b0);
        iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x18),0);
        Esper.ESave.SaveFile.Save(uVar1,0,0);
        uVar1 = UnityEngine.JsonUtility.ToJson("The Forest",0);
        UnityEngine.PlayerPrefs.SetString("Checkpoint",uVar1,0);
        UnityEngine.PlayerPrefs.Save(0);
    }

    // RVA: 0x36F2 Offset: 0x36F2 VA: 0x36F2
    public Bonfire()
    {
        unnamed_function_44622(this,0);
    }
}
