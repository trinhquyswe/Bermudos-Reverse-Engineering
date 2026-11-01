// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Map.c by tools/c2cs.py
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

public class Map : MonoBehaviour // TypeDefIndex: 5664
{
    // Fields
    [SerializeField]
    private string mapName; // 0x10
    private float repeatInterval; // 0x14
    [SerializeField]
    private List<Enviroment> enviroments; // 0x18

    // Methods

    // RVA: 0x3935 Offset: 0x3935 VA: 0x3935
    private void Start()
    {
        MapChangedEventArgs __this_00 = default;
        int iVar1 = default;
        int uVar2 = default;
        object piVar3 = default; // int*
        int iVar4 = default;
        int local_18 = default;
        object local_14 = default; // long*
        long local_10 = default;
        long local_8 = default;

        byte[] auStack_20 = new byte[8];
        local_8 = 0;
        local_10 = 0;
        iVar4 = Raw.Deref(Raw.Read<object>(StaticEventHandler_TypeInfo + 0x5c));
        if (iVar4 != 0) {
            __this_00 = (MapChangedEventArgs)new MapChangedEventArgs();
            new MapChangedEventArgs();
            *(Map)&__this_00.map = this;
            Raw.VCall((ulong)Raw.Read<uint>(iVar4 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar4 + 0x20),__this_00,Raw.Read<int>(iVar4 + 0x14));
        }
        /* candidates: System.Collections.Generic.List<Color32>.GetEnumerator | System.Collections.Generic.List<EasingFunction>.GetEnumerator (+9) */ unnamed_function_6549(&local_10,this.enviroments,DAT_ram_00562f7c);
        local_18 = 0;
        local_14 = &local_10;
        do {
            do {
                while( true ) {
                    iVar1 = import_env_invoke_iii (s___Scripting__UnityEngine__Render_ram_00001cf5 + 0x33,&local_10, DAT_ram_005610e4);
                    iVar4 = DAT_ram_005ddf34;
                    if (iVar4 == 1) {
                        uVar2 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                        goto code_r0x81a38b34;
                    }
                    if (iVar1 == 0) {
                        return;
                    }
                    if (local_8._4_4_ != 1) break;
                    import_env_invoke_viiffi (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1f,this,"PlayFlowingWaterSoundEffect", 0.0,this.repeatInterval,0);
                    iVar4 = DAT_ram_005ddf34;
                    if (iVar4 == 1) {
                        uVar2 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                        goto code_r0x81a38b34;
                    }
                }
            } while (local_8._4_4_ != 2);
            iVar4 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                iVar4 = import_env_invoke_ii(0x100,iVar4);
                if (DAT_ram_005ddf34 != 1) goto code_r0x81a38a48;
                code_r0x81a38b0e: DAT_ram_005ddf34 = 0;
                uVar2 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a38b34;
            }
            code_r0x81a38a48: iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                iVar4 = import_env_invoke_ii(0x100,iVar4);
                if (DAT_ram_005ddf34 == 1) goto code_r0x81a38b0e;
            }
            uVar2 = Raw.Deref(Raw.Read<object>(iVar4 + 0x5c));
            iVar1 = import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x20,0);
            iVar4 = DAT_ram_005ddf34;
            if (iVar4 == 1) {
                uVar2 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a38b34;
            }
            import_env_invoke_viiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x21,uVar2, Raw.Read<int>(iVar1 + 0x68),1,auStack_20);
            iVar4 = DAT_ram_005ddf34;
        } while (iVar4 != 1);
        uVar2 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a38b34: iVar4 = import_env_getTempRet0();
        iVar1 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar4 == iVar1) {
            piVar3 = (object)import_env___cxa_begin_catch(uVar2);
            iVar1 = *piVar3;
            local_18 = iVar1;
            import_env_invoke_v(0x3a);
            iVar4 = DAT_ram_005ddf34;
            if (iVar4 != 1) {
                if (iVar1 == 0) {
                    return;
                }
                unnamed_function_1088(iVar1);
                do {
                    throw null;
                } while( true );
            }
            uVar2 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
        }
        import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x22,&local_18);
        iVar4 = DAT_ram_005ddf34;
        if (iVar4 != 1) {
            import_env___resumeException(uVar2);
            do {
                throw null;
            } while( true );
        }
        import_env___cxa_find_matching_catch_3(0);
        import_env_getTempRet0();
        unnamed_function_642();
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3936 Offset: 0x3936 VA: 0x3936
    private void OnDisable()
    {
        GameResources pGVar1 = default;
        int param1 = default;
        MethodInfo method_00 = default;
        SoundEffectManager __this_00 = default;

        UnityEngine.MonoBehaviour.CancelInvoke(this,"PlayFlowingWaterSoundEffect",0);
        param1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(param1 + 0xbd) & 1) == 0) {
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(param1 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        __this_00 = (SoundEffectManager)**(object)&method_00[2].field_0x1c;
        pGVar1 = GameResources.Instance;
        __this_00.StopSoundEffectLoop(pGVar1.waweOceanEffect, method_00);
    }

    // RVA: 0x3937 Offset: 0x3937 VA: 0x3937
    private void PlayFlowingWaterSoundEffect()
    {
        GameResources pGVar1 = default;
        int param1 = default;
        MethodInfo method_00 = default;
        SoundEffectManager __this_00 = default;

        param1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(param1 + 0xbd) & 1) == 0) {
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(param1 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        __this_00 = (SoundEffectManager)**(object)&method_00[2].field_0x1c;
        pGVar1 = GameResources.Instance;
        __this_00.PlaySoundEffect(pGVar1.flowingWater, method_00);
    }

    // RVA: 0x3938 Offset: 0x3938 VA: 0x3938
    public int GetBossState()
    {
        int iVar1 = default;

        iVar1 = UnityEngine.PlayerPrefs.HasKey("isBossDefeated",0);
        if (iVar1 != 0) {
            UnityEngine.PlayerPrefs.GetInt("isBossDefeated",0);
        }
    }

    // RVA: 0x3939 Offset: 0x3939 VA: 0x3939
    public Map()
    {
        this.pad_8[0xc] = 0;
        this.pad_8[0xd] = 0;
        this.pad_8[0xe] = 0x20;
        this.pad_8[0xf] = 0x41;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
