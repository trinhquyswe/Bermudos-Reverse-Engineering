// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/PlayerShadow.c by tools/c2cs.py
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

public class PlayerShadow : MonoBehaviour // TypeDefIndex: 5584
{
    // Methods

    // RVA: 0x3795 Offset: 0x3795 VA: 0x3795
    public void InitialisePlayerShadow(SpriteRenderer[] playerSpriteRenderers)
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,1,0);
        this.InitialiseSprite(playerSpriteRenderers);
    }

    // RVA: 0x3796 Offset: 0x3796 VA: 0x3796
    private void EnablePlayerShadow()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,1,0);
    }

    // RVA: 0x3797 Offset: 0x3797 VA: 0x3797
    private void DisablePlayerShadow()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }

    // RVA: 0x3798 Offset: 0x3798 VA: 0x3798
    public void InitialiseSprite(SpriteRenderer[] playerSpriteRenderers)
    {
        int iVar1 = default;
        int uVar2 = default;
        int param2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;
        int param1_00 = default;
        int iVar5 = default;

        iVar5 = 0;
        iVar1 = UnityEngine.Component.GetComponentsInChildren<object>(this,DAT_ram_00567fe8);
        iVar3 = Raw.Read<int>(iVar1 + 0xc);
        if ((0 < iVar3) && (iVar4 = playerSpriteRenderers[3]._opaque, 0 < iVar4)) {
            do {
                if (0 < iVar4) {
                    param1 = Raw.Read<int>(iVar1 + iVar5 * 4 + 0x10);
                    iVar3 = 0;
                    do {
                        param1_00 = playerSpriteRenderers[iVar3 + 4]._opaque;
                        uVar2 = UnityEngine.Object.get_name(param1,0);
                        param2 = UnityEngine.Object.get_name(param1_00,0);
                        iVar4 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(uVar2,param2,0);
                        if (iVar4 != 0) {
                            uVar2 = UnityEngine.SpriteRenderer.get_sprite(param1_00,0);
                            UnityEngine.SpriteRenderer.set_sprite(param1,uVar2,0);
                        }
                        iVar3 = iVar3 + 1;
                        iVar4 = playerSpriteRenderers[3]._opaque;
                    } while (iVar3 < iVar4);
                    iVar3 = Raw.Read<int>(iVar1 + 0xc);
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3);
        }
    }

    // RVA: 0x3799 Offset: 0x3799 VA: 0x3799
    public PlayerShadow()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
