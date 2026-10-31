// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.TextMeshSpawner.c by tools/c2cs.py
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

public class TextMeshSpawner : MonoBehaviour // TypeDefIndex: 5771
{
    // Fields
    public int SpawnType; // 0x10
    public int NumberOfNPC; // 0x14
    public Font TheFont; // 0x18
    private TextMeshProFloatingText floatingText_Script; // 0x1C

    // Methods

    // RVA: 0x3B4A Offset: 0x3B4A VA: 0x3B4A
    private void Awake()
    {

    }

    // RVA: 0x3B4B Offset: 0x3B4B VA: 0x3B4B
    private void Start()
    {
        bool bVar1 = default;
        int param1 = default;
        int uVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        object param1_00 = default; // int*
        int param1_01 = default;
        int param2 = default;
        TMPro_Examples_TextMeshProFloatingText pTVar5 = default;
        int iVar6 = default;
        int iVar7 = default;
        long local_80 = default;
        long local_78 = default;
        long local_70 = default;
        float local_68 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        float local_48 = default;
        long local_40 = default;
        long local_38 = default;
        float local_30 = default;
        int local_2c = default;
        float local_28 = default;
        float local_20 = default;
        int local_1c = default;
        float local_18 = default;
        long local_10 = default;
        long local_8 = default;

        iVar7 = 0;
        if (0 < this.NumberOfNPC) {
            do {
                iVar6 = this.SpawnType;
                param1 = new UnityEngine_GameObject();
                UnityEngine.GameObject.__ctor(param1,0);
                uVar2 = UnityEngine.GameObject.get_transform(param1,0);
                fVar3 = UnityEngine.Random.Range(-95.0,95.0,0);
                fVar4 = UnityEngine.Random.Range(-95.0,95.0,0);
                bVar1 = iVar6 == 0;
                if (bVar1) {
                    local_1c = 0x3f000000;
                    local_70 = CONCAT44(0x3f000000,fVar3);
                    local_68 = fVar4;
                    local_20 = (float)fVar3;
                    local_18 = (float)fVar4;
                    unnamed_function_44962(uVar2,&local_70,0);
                    param1_00 = (object)UnityEngine.GameObject.AddComponent<object>(param1,DAT_ram_00569a24);
                    TMPro.TMP_Text.set_fontSize(param1_00,96.0,0);
                    Raw.VCall((ulong)Raw.Read<uint>(*param1_00 + 0x2d0) * 4) /* virtual */ (param1_00,"!",Raw.Read<int>(*param1_00 + 0x2d4));
                    local_8 = 0x3f80000000000000;
                    local_10 = 0x3f8000003f800000;
                    local_78 = 0x3f80000000000000;
                    local_80 = 0x3f8000003f800000;
                    Raw.VCall((ulong)Raw.Read<uint>(*param1_00 + 0x178) * 4) /* virtual */ (param1_00,&local_80,Raw.Read<int>(*param1_00 + 0x17c));
                }
                else {
                    local_2c = 0x3f000000;
                    local_50 = CONCAT44(0x3f000000,fVar3);
                    local_48 = fVar4;
                    local_30 = (float)fVar3;
                    local_28 = (float)fVar4;
                    unnamed_function_44962(uVar2,&local_50,0);
                    uVar2 = UnityEngine.GameObject.AddComponent<object>(param1,DAT_ram_00569a20);
                    param1_01 = UnityEngine.Component.GetComponent<object>(uVar2,DAT_ram_00567f10);
                    param2 = UnityEngine.Font.get_material(this.TheFont,0);
                    unnamed_function_52795(param1_01,param2,0);
                    UnityEngine.TextMesh.set_font(uVar2,this.TheFont,0);
                    UnityEngine.TextMesh.set_anchor(uVar2,7,0);
                    UnityEngine.TextMesh.set_fontSize(uVar2,0x60,0);
                    local_38 = 0x3f80000000000000;
                    local_58 = 0x3f80000000000000;
                    local_40 = 0x3f8000003f800000;
                    local_60 = 0x3f8000003f800000;
                    unnamed_function_16190(uVar2,&local_60,0);
                    UnityEngine.TextMesh.set_text(uVar2,"!",0);
                }
                pTVar5 = (TMPro_Examples_TextMeshProFloatingText) UnityEngine.GameObject.AddComponent<object>(param1,DAT_ram_00569a28);
                this.floatingText_Script = pTVar5;
                pTVar5.SpawnType = (uint)!bVar1;
                iVar7 = iVar7 + 1;
            } while (iVar7 < this.NumberOfNPC);
        }
    }

    // RVA: 0x3B4C Offset: 0x3B4C VA: 0x3B4C
    public TextMeshSpawner()
    {
        this.NumberOfNPC = 0xc;
        unnamed_function_44622(this,0);
    }
}
