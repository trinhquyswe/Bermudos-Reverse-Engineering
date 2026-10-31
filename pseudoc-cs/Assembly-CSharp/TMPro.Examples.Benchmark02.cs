// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.Benchmark02.c by tools/c2cs.py
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

public class Benchmark02 : MonoBehaviour // TypeDefIndex: 5750
{
    // Fields
    public int SpawnType; // 0x10
    public int NumberOfNPC; // 0x14
    public bool IsTextObjectScaleStatic; // 0x18
    private TextMeshProFloatingText floatingText_Script; // 0x1C

    // Methods

    // RVA: 0x3AF4 Offset: 0x3AF4 VA: 0x3AF4
    private void Start()
    {
        int uVar1 = default;
        int uVar2 = default;
        float fVar3 = default;
        object piVar4 = default; // int*
        TMPro_Examples_TextMeshProFloatingText pTVar5 = default;
        int uVar6 = default;
        int uVar7 = default;
        int iVar8 = default;
        int iVar9 = default;
        long local_e0 = default;
        long local_d8 = default;
        long local_d0 = default;
        long local_c8 = default;
        float local_c0 = default;
        long local_b8 = default;
        long local_b0 = default;
        long local_a8 = default;
        float local_a0 = default;
        long local_98 = default;
        long local_90 = default;
        long local_88 = default;
        float local_80 = default;
        long local_78 = default;
        int local_70 = default;
        float local_68 = default;
        int local_64 = default;
        float local_60 = default;
        long local_58 = default;
        int local_50 = default;
        long local_48 = default;
        long local_40 = default;
        float local_38 = default;
        int local_34 = default;
        float local_30 = default;
        long local_28 = default;
        float local_20 = default;
        int local_1c = default;
        float local_18 = default;
        long local_10 = default;
        long local_8 = default;

        iVar9 = 0;
        if (0 < this.NumberOfNPC) {
            do {
                iVar8 = this.SpawnType;
                if (iVar8 == 0) {
                    uVar1 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(uVar1,0);
                    uVar2 = UnityEngine.GameObject.get_transform(uVar1,0);
                    fVar3 = UnityEngine.Random.Range(-95.0,95.0,0);
                    local_c0 = UnityEngine.Random.Range(-95.0,95.0,0);
                    local_1c = 0x3e800000;
                    local_c8 = CONCAT44(0x3e800000,fVar3);
                    local_20 = (float)fVar3;
                    local_18 = (float)local_c0;
                    unnamed_function_44962(uVar2,&local_c8,0);
                    piVar4 = (object)UnityEngine.GameObject.AddComponent<object>(uVar1,DAT_ram_00569a24);
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 800) * 4) /* virtual */ (piVar4,1,Raw.Read<int>(*piVar4 + 0x324));
                    uVar2 = TMPro.TMP_Text.get_rectTransform(piVar4,0);
                    local_28 = 0x3f000000;
                    local_d0 = 0x3f000000;
                    unnamed_function_44942(uVar2,&local_d0,0);
                    TMPro.TMP_Text.set_alignment(piVar4,&DAT_ram_00000402,0);
                    TMPro.TMP_Text.set_fontSize(piVar4,96.0,0);
                    TMPro.TMP_Text.set_enableKerning(piVar4,0,0);
                    local_8 = 0x3f80000000000000;
                    local_10 = 0x3f8000003f800000;
                    local_d8 = 0x3f80000000000000;
                    local_e0 = 0x3f8000003f800000;
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 0x178) * 4) /* virtual */ (piVar4,&local_e0,Raw.Read<int>(*piVar4 + 0x17c));
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 0x2d0) * 4) /* virtual */ (piVar4,"!",Raw.Read<int>(*piVar4 + 0x2d4));
                    TMPro.TMP_Text.set_isTextObjectScaleStatic(piVar4,(uint)this.IsTextObjectScaleStatic,0);
                    pTVar5 = (TMPro_Examples_TextMeshProFloatingText) UnityEngine.GameObject.AddComponent<object>(uVar1,DAT_ram_00569a28);
                    this.floatingText_Script = pTVar5;
                    pTVar5.SpawnType = 0;
                    pTVar5.IsTextObjectScaleStatic = this.IsTextObjectScaleStatic;
                }
                else if (iVar8 == 1) {
                    uVar1 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(uVar1,0);
                    uVar2 = UnityEngine.GameObject.get_transform(uVar1,0);
                    fVar3 = UnityEngine.Random.Range(-95.0,95.0,0);
                    local_a0 = UnityEngine.Random.Range(-95.0,95.0,0);
                    local_34 = 0x3e800000;
                    local_a8 = CONCAT44(0x3e800000,fVar3);
                    local_38 = (float)fVar3;
                    local_30 = (float)local_a0;
                    unnamed_function_44962(uVar2,&local_a8,0);
                    uVar2 = UnityEngine.GameObject.AddComponent<object>(uVar1,DAT_ram_00569a20);
                    uVar6 = UnityEngine.Resources.Load<object>("Fonts/ARIAL",DAT_ram_0056bfa0);
                    UnityEngine.TextMesh.set_font(uVar2,uVar6,0);
                    uVar6 = UnityEngine.Component.GetComponent<object>(uVar2,DAT_ram_00567f10);
                    uVar7 = UnityEngine.TextMesh.get_font(uVar2,0);
                    uVar7 = UnityEngine.Font.get_material(uVar7,0);
                    unnamed_function_52795(uVar6,uVar7,0);
                    UnityEngine.TextMesh.set_anchor(uVar2,7,0);
                    UnityEngine.TextMesh.set_fontSize(uVar2,0x60,0);
                    local_40 = 0x3f80000000000000;
                    local_b0 = 0x3f80000000000000;
                    local_48 = 0x3f8000003f800000;
                    local_b8 = 0x3f8000003f800000;
                    unnamed_function_16190(uVar2,&local_b8,0);
                    UnityEngine.TextMesh.set_text(uVar2,"!",0);
                    pTVar5 = (TMPro_Examples_TextMeshProFloatingText) UnityEngine.GameObject.AddComponent<object>(uVar1,DAT_ram_00569a28);
                    this.floatingText_Script = pTVar5;
                    pTVar5.SpawnType = 1;
                }
                else if (iVar8 == 2) {
                    uVar1 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(uVar1,0);
                    uVar2 = UnityEngine.GameObject.AddComponent<object>(uVar1,DAT_ram_005699a8);
                    uVar6 = UnityEngine.Camera.get_main(0);
                    UnityEngine.Canvas.set_worldCamera(uVar2,uVar6,0);
                    uVar2 = UnityEngine.GameObject.get_transform(uVar1,0);
                    local_50 = 0x3dcccccd;
                    local_70 = 0x3dcccccd;
                    local_58 = 0x3dcccccd3dcccccd;
                    local_78 = 0x3dcccccd3dcccccd;
                    unnamed_function_44982(uVar2,&local_78,0);
                    uVar2 = UnityEngine.GameObject.get_transform(uVar1,0);
                    fVar3 = UnityEngine.Random.Range(-95.0,95.0,0);
                    local_80 = UnityEngine.Random.Range(-95.0,95.0,0);
                    local_64 = 0x40a00000;
                    local_88 = CONCAT44(0x40a00000,fVar3);
                    local_68 = (float)fVar3;
                    local_60 = (float)local_80;
                    unnamed_function_44962(uVar2,&local_88,0);
                    uVar2 = new UnityEngine_GameObject();
                    UnityEngine.GameObject.__ctor(uVar2,0);
                    piVar4 = (object)UnityEngine.GameObject.AddComponent<object>(uVar2,DAT_ram_00569a2c);
                    uVar2 = TMPro.TMP_Text.get_rectTransform(piVar4,0);
                    uVar6 = UnityEngine.GameObject.get_transform(uVar1,0);
                    UnityEngine.Transform.SetParent(uVar2,uVar6,0,0);
                    local_8 = 0x3f80000000000000;
                    local_10 = 0x3f8000003f800000;
                    local_90 = 0x3f80000000000000;
                    local_98 = 0x3f8000003f800000;
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 0x178) * 4) /* virtual */ (piVar4,&local_98,Raw.Read<int>(*piVar4 + 0x17c));
                    TMPro.TMP_Text.set_alignment(piVar4,&DAT_ram_00000402,0);
                    TMPro.TMP_Text.set_fontSize(piVar4,96.0,0);
                    Raw.VCall((ulong)Raw.Read<uint>(*piVar4 + 0x2d0) * 4) /* virtual */ (piVar4,"!",Raw.Read<int>(*piVar4 + 0x2d4));
                    pTVar5 = (TMPro_Examples_TextMeshProFloatingText) UnityEngine.GameObject.AddComponent<object>(uVar1,DAT_ram_00569a28);
                    this.floatingText_Script = pTVar5;
                    pTVar5.SpawnType = 0;
                }
                iVar9 = iVar9 + 1;
            } while (iVar9 < this.NumberOfNPC);
        }
    }

    // RVA: 0x3AF5 Offset: 0x3AF5 VA: 0x3AF5
    public Benchmark02()
    {
        this.NumberOfNPC = 0xc;
        unnamed_function_44622(this,0);
    }
}
