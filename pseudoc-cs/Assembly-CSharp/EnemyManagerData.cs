// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyManagerData.c by tools/c2cs.py
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

public class EnemyManagerData // TypeDefIndex: 5591
{
    // Fields
    public string enemyName; // 0x8
    public int enemyCount; // 0xC
    public List<bool> enemieStateList; // 0x10

    // Methods

    // RVA: 0x37BD Offset: 0x37BD VA: 0x37BD
    public EnemyManagerData(string enemyName, int enemyCount, int count)
    {
        List param1 = default;

        param1 = (List)new System_Collections_Generic_List_bool_();
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(param1,DAT_ram_00562b48);
        this.enemieStateList = param1;
        this.enemyCount = enemyCount;
        this.enemyName = (string)enemyName;
        this.GetEnemyList(count);
    }

    // RVA: 0x37BE Offset: 0x37BE VA: 0x37BE
    public void GetEnemyList(int count)
    {
        int iVar1 = default;
        List param1 = default;
        uint uVar2 = default;
        int iVar3 = default;
        int iVar4 = default;

        iVar4 = 0;
        if (0 < this.enemyCount) {
            do {
                iVar1 = DAT_ram_00562b4c;
                param1 = this.enemieStateList;
                param1[4]._opaque = param1[4]._opaque + 1;
                uVar2 = param1[3]._opaque;
                iVar3 = param1[2]._opaque;
                if (count == iVar4) {
                    if (uVar2 < Raw.Read<uint>(iVar3 + 0xc)) {
                        param1[3]._opaque = uVar2 + 1;
                        Raw.Write<byte>(uVar2 + iVar3 + 0x10, 0);
                    }
                    else {
                        /* candidates: System.Collections.Generic.List<bool>.AddWithResize | System.Collections.Generic.List<byte>.AddWithResize (+1) */ unnamed_function_9759 (param1,0,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
                    }
                }
                else if (uVar2 < Raw.Read<uint>(iVar3 + 0xc)) {
                    param1[3]._opaque = uVar2 + 1;
                    Raw.Write<byte>(uVar2 + iVar3 + 0x10, 1);
                }
                else {
                    /* candidates: System.Collections.Generic.List<bool>.AddWithResize | System.Collections.Generic.List<byte>.AddWithResize (+1) */ unnamed_function_9759 (param1,1,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
                }
                iVar4 = iVar4 + 1;
            } while (iVar4 < this.enemyCount);
        }
    }
}
