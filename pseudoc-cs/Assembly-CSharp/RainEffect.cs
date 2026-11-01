// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/RainEffect.c by tools/c2cs.py
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

public class RainEffect : MonoBehaviour // TypeDefIndex: 5585
{
    // Fields
    private int appearanceRate; // 0x10
    [SerializeField]
    private SoundEffectSO rainEffect; // 0x14

    // Methods

    // RVA: 0x379A Offset: 0x379A VA: 0x379A
    private void Start()
    {
        int uVar1 = default;
        int iVar2 = default;

        int[] local_8 = new int[2];
        local_8[0] = 0;
        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        iVar2 = /* candidates: UnityEngine.Random.RandomRangeInt | UnityEngine.Random.Range */ unnamed_function_44584(0,3,0);
        this.appearanceRate = iVar2;
        if (iVar2 != 0) {
            local_8[0] = UnityEngine.SceneManagement.SceneManager.GetSceneAt(0,0);
            uVar1 = UnityEngine.SceneManagement.Scene.get_name(local_8,0);
            iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(uVar1,"MainMenu",0);
            if (iVar2 == 0) {
                return;
            }
        }
        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        iVar2 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c))).PlaySoundEffectPersistent(this.rainEffect, true);
    }

    // RVA: 0x379B Offset: 0x379B VA: 0x379B
    private void OnDisable()
    {
        int iVar1 = default;

        iVar1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c))).StopSoundEffectLoop(this.rainEffect);
    }

    // RVA: 0x379C Offset: 0x379C VA: 0x379C
    public RainEffect()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
