// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.Benchmark04.c by tools/c2cs.py
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

public class Benchmark04 : MonoBehaviour // TypeDefIndex: 5753
{
    // Fields
    public int SpawnType; // 0x10
    public int MinPointSize; // 0x14
    public int MaxPointSize; // 0x18
    public int Steps; // 0x1C
    private Transform m_Transform; // 0x20

    // Methods

    // RVA: 0x3AF9 Offset: 0x3AF9 VA: 0x3AF9
    private void Start()
    {
        int iVar1 = default;
        float fVar2 = default;
        RuleTile_TilingRuleOutput_Transform RVar3 = default;
        int uVar4 = default;
        int iVar5 = default;
        int iVar6 = default;
        int iVar7 = default;
        int param1 = default;
        object param1_00 = default; // int*
        float param2 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        long local_38 = default;
        float local_30 = default;
        long local_28 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        int local_14 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        RVar3 = UnityEngine.Component.get_transform(this,0);
        this.m_Transform = RVar3;
        uVar4 = UnityEngine.Camera.get_main(0);
        iVar5 = UnityEngine.Screen.get_height(0);
        param2 = (float)(iVar5 / 2);
        UnityEngine.Camera.set_orthographicSize(uVar4,param2,0);
        iVar6 = UnityEngine.Screen.get_width(0);
        iVar7 = UnityEngine.Screen.get_height(0);
        local_14 = this.MinPointSize;
        iVar5 = this.MaxPointSize;
        if ((local_14 <= iVar5) && (this.SpawnType == 0)) {
            fVar2 = 0.0;
            iVar1 = 0;
            while( true ) {
                if (iVar1 == 0) {
                    uVar4 = System.Int32.ToString(&local_14,0);
                    uVar4 = System.String.Concat("Text - ",uVar4," Pts",0);
                    param1 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(param1,uVar4,0);
                    if (param2 + param2 < fVar2) {
                        return;
                    }
                    uVar4 = UnityEngine.GameObject.get_transform(param1,0);
                    UnityEngine.Transform.get_position(&local_10,this.m_Transform,0);
                    local_30 = (float)local_8 + 0.0;
                    local_1c = (float)((param2 * 0.975 - fVar2) + (float)local_c);
                    local_20 = (float)(((float)iVar6 / (float)iVar7) * -param2 * 0.975 + (float)local_10);
                    local_38 = CONCAT44(local_1c,local_20);
                    local_18 = (float)local_30;
                    unnamed_function_44962(uVar4,&local_38,0);
                    param1_00 = (object)UnityEngine.GameObject.AddComponent<object>(param1,DAT_ram_00569a24);
                    uVar4 = TMPro.TMP_Text.get_rectTransform(param1_00,0);
                    local_28 = 0x3f00000000000000;
                    local_40 = 0x3f00000000000000;
                    unnamed_function_44942(uVar4,&local_40,0);
                    TMPro.TMP_Text.set_enableWordWrapping(param1_00,0,0);
                    TMPro.TMP_Text.set_extraPadding(param1_00,1,0);
                    TMPro.TMP_Text.set_isOrthographic(param1_00,1,0);
                    TMPro.TMP_Text.set_fontSize(param1_00,(float)local_14,0);
                    uVar4 = System.Int32.ToString(&local_14,0);
                    uVar4 = System.String.Concat(uVar4," pts - Lorem ipsum dolor sit...",0);
                    Raw.VCall((ulong)Raw.Read<uint>(*param1_00 + 0x2d0) * 4) /* virtual */ (param1_00,uVar4,Raw.Read<int>(*param1_00 + 0x2d4));
                    _local_8 = 0x3f8000003f800000;
                    _local_10 = 0x3f8000003f800000;
                    local_48 = 0x3f8000003f800000;
                    local_50 = 0x3f8000003f800000;
                    Raw.VCall((ulong)Raw.Read<uint>(*param1_00 + 0x178) * 4) /* virtual */ (param1_00,&local_50,Raw.Read<int>(*param1_00 + 0x17c));
                    iVar5 = this.MaxPointSize;
                    fVar2 = fVar2 + (float)local_14;
                }
                local_14 = this.Steps + local_14;
                if (iVar5 < local_14) break;
                iVar1 = this.SpawnType;
            }
            return;
        }
    }

    // RVA: 0x3AFA Offset: 0x3AFA VA: 0x3AFA
    public Benchmark04()
    {
        this.Steps = 4;
        this.MinPointSize = 0xc;
        this.MaxPointSize = 0x40;
        unnamed_function_44622(this,0);
    }
}
