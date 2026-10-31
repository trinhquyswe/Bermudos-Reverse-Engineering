// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyManager.c by tools/c2cs.py
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

public class EnemyManager : MonoBehaviour // TypeDefIndex: 5590
{
    // Fields
    [SerializeField]
    private GameObject enemy; // 0x10
    [SerializeField]
    private EnemyManagerDetailsSO enemyManagerDetailsSO; // 0x14
    private EnemyManagerData enemyManagerData; // 0x18
    public List<GameObject> enemyList; // 0x1C

    // Methods

    // RVA: 0x37B8 Offset: 0x37B8 VA: 0x37B8
    private void Start()
    {
        int uVar1 = default;
        EnemyManagerData pEVar2 = default;
        int iVar3 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x18),0);
        iVar3 = Esper.ESave.SaveFile.HasData(uVar1,this.enemyManagerDetailsSO.enemyManagerDataKey,0);
        if (iVar3 != 0) {
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = unnamed_function_95087(iVar3);
            }
            uVar1 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x18),0);
            pEVar2 = (EnemyManagerData) Esper.ESave.SaveFile.GetData<object>(uVar1,this.enemyManagerDetailsSO.enemyManagerDataKey,0,DAT_ram_0056c1bc);
            this.enemyManagerData = pEVar2;
        }
    }

    // RVA: 0x37B9 Offset: 0x37B9 VA: 0x37B9
    private void OnEnable()
    {
        System.Action.OnBuildNavMeshEventArgs value = default;

        value = (System.Action.OnBuildNavMeshEventArgs) new System_Action_OnBuildNavMeshEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00568ebc,0);
        StaticEventHandler.add_OnBuildNavMesh(value);
    }

    // RVA: 0x37BA Offset: 0x37BA VA: 0x37BA
    private void OnDisable()
    {
        System.Action.OnBuildNavMeshEventArgs value = default;

        value = (System.Action.OnBuildNavMeshEventArgs) new System_Action_OnBuildNavMeshEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00568ebc,0);
        StaticEventHandler.remove_OnBuildNavMesh(value);
    }

    // RVA: 0x37BB Offset: 0x37BB VA: 0x37BB
    private void StaticEventHandler_OnBuildNavMesh(OnBuildNavMeshEventArgs onBuildNavMeshEventArgs)
    {
        bool bVar1 = default;
        long lVar2 = default;
        int iVar3 = default;
        int uVar4 = default;
        int uVar5 = default;
        int iVar6 = default;
        object piVar7 = default; // int*
        GameObject pGVar8 = default;
        EnemyManagerDetailsSO pEVar9 = default;
        string psVar10 = default;
        List pLVar11 = default;
        uint uVar12 = default;
        long local_e8 = default;
        ulong local_e0 = default;
        long local_d8 = default;
        int local_d0 = default;
        long local_c8 = default;
        int local_c0 = default;
        long local_b8 = default;
        ulong local_b0 = default;
        long local_a8 = default;
        int local_a0 = default;
        long local_98 = default;
        int local_90 = default;
        long local_88 = default;
        ulong local_80 = default;
        int local_78 = default;
        object local_74 = default; // long*
        long local_70 = default;
        long local_68 = default;
        int local_5c = default;
        long local_58 = default;
        long local_50 = default;
        int local_44 = default;
        long local_40 = default;
        int local_38 = default;
        int local_30 = default;
        int uStack_2c = default;
        int local_28 = default;
        int uStack_24 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        ulong local_8 = default;

        local_44 = 0;
        local_50 = 0;
        local_58 = 0;
        local_5c = 0;
        local_68 = 0;
        local_70 = 0;
        if (onBuildNavMeshEventArgs.isBuildWhenMapChanged != false) {
            local_44 = 0;
            unnamed_function_9774(&local_10,this.enemyManagerData.enemieStateList,DAT_ram_00562b54);
            local_50 = local_8;
            local_58 = local_10;
            local_88 = ZEXT48(&local_58) << 0x20;
            code_r0x81a51b45: DAT_ram_005ddf34 = 0;
            iVar3 = import_env_invoke_iii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x27,&local_58, DAT_ram_00560ff4);
            iVar6 = DAT_ram_005ddf34;
            if (iVar6 == 1) goto code_r0x81a51f47;
            if (iVar3 == 0) {
                bVar1 = false;
                iVar6 = (int)local_88;
                goto code_r0x81a51f9b;
            }
            if (local_50._4_1_ != '\0') {
                pGVar8 = this.enemy;
                import_env_invoke_viiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x28,&local_10, this.enemyManagerDetailsSO.enemyPostionList,local_44,DAT_ram_0056411c);
                lVar2 = local_10;
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a51f4f;
                }
                local_90 = 0;
                local_38 = 0;
                local_98 = 0;
                local_40 = 0;
                import_env_invoke_viii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x29,&local_30,&local_98,0);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a51f4f;
                }
                local_8 = CONCAT44(uStack_24,local_28);
                local_10 = CONCAT44(uStack_2c,local_30);
                uVar5 = import_env_invoke_iii (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x25,this,0);
                if (DAT_ram_005ddf34 == 1) {
                    code_r0x81a51f0b: DAT_ram_005ddf34 = 0;
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a51f4f;
                }
                if (Raw.Read<int>(UnityEngine_Object_TypeInfo + 0x74) == 0) {
                    import_env_invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
                    if (DAT_ram_005ddf34 == 1) goto code_r0x81a51f0b;
                }
                local_a0 = 0;
                local_28 = 0;
                local_b0 = local_8;
                uStack_2c = (int)((ulong)lVar2 >> 0x20);
                local_30 = (int)lVar2;
                local_b8 = local_10;
                local_a8 = lVar2;
                uVar5 = import_env_invoke_iiiiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2a,pGVar8,&local_a8, &local_b8,uVar5,DAT_ram_0056b554);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a51f4f;
                }
                iVar3 = import_env_invoke_iii (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x28,uVar5, DAT_ram_00569aa8);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a51f4f;
                }
                pEVar9 = this.enemyManagerDetailsSO;
                psVar10 = pEVar9.enemyManagerDataKey;
                Raw.Write<int>(iVar3 + 0x48, local_44);
                Raw.Write<object>(iVar3 + 0x44, psVar10);
                psVar10 = pEVar9.enemyName;
                uVar4 = import_env_invoke_iii (s___Scripting__Unity__Profiling__P_ram_000008ea + 0x31,&local_44,0);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a51f4f;
                }
                uVar4 = import_env_invoke_iiiii (s_MotionT_z_ram_00000655 + 9,psVar10," ",uVar4,0);
                if (DAT_ram_005ddf34 != 1) {
                    import_env_invoke_viii (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x27,uVar5,uVar4,0);
                    iVar6 = DAT_ram_00563078;
                    if (DAT_ram_005ddf34 != 1) {
                        pLVar11 = this.enemyList;
                        pLVar11[4]._opaque = pLVar11[4]._opaque + 1;
                        uVar12 = pLVar11[3]._opaque;
                        if (uVar12 < Raw.Read<uint>(pLVar11[2]._opaque + 0xc)) {
                            pLVar11[3]._opaque = uVar12 + 1;
                            Raw.Write<int>(pLVar11[2]._opaque + uVar12 * 4 + 0x10, uVar5);
                            goto code_r0x81a51ed6;
                        }
                        import_env_invoke_viii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3b,pLVar11,uVar5, Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar6 + 0x10) + 0x60) + 0x38));
                        iVar6 = DAT_ram_005ddf34;
                        if (iVar6 == 1) {
                            uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                            goto code_r0x81a51f4f;
                        }
                        goto code_r0x81a51ed6;
                    }
                }
                uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a51f4f;
            }
            code_r0x81a51ed6: local_44 = local_44 + 1;
            goto code_r0x81a51b45;
        }
        code_r0x81a51fb4: if (this.enemyList[3]._opaque < 1) {
            code_r0x81a521ad: local_5c = 0;
            unnamed_function_9774(&local_10,this.enemyManagerData.enemieStateList,DAT_ram_00562b54);
            local_50 = local_8;
            local_58 = local_10;
            local_78 = 0;
            local_74 = &local_58;
            while( true ) {
                iVar3 = import_env_invoke_iii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x27,&local_58, DAT_ram_00560ff4);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) break;
                iVar6 = local_78;
                if (iVar3 == 0) goto code_r0x81a52693;
                pGVar8 = this.enemy;
                import_env_invoke_viiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x28,&local_10, this.enemyManagerDetailsSO.enemyPostionList,local_5c,DAT_ram_0056411c);
                lVar2 = local_10;
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a5264b;
                }
                local_c0 = 0;
                local_18 = 0;
                local_c8 = 0;
                local_20 = 0;
                import_env_invoke_viii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x29,&local_10,&local_c8,0);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a5264b;
                }
                local_80 = local_8;
                local_88 = local_10;
                uVar5 = import_env_invoke_iii (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x25,this,0);
                if (DAT_ram_005ddf34 == 1) {
                    code_r0x81a52607: DAT_ram_005ddf34 = 0;
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a5264b;
                }
                if (Raw.Read<int>(UnityEngine_Object_TypeInfo + 0x74) == 0) {
                    import_env_invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
                    if (DAT_ram_005ddf34 == 1) goto code_r0x81a52607;
                }
                local_d0 = 0;
                local_8 = local_8 & 0xffffffff00000000;
                local_e0 = local_80;
                local_d8 = lVar2;
                local_e8 = local_88;
                local_10 = lVar2;
                uVar5 = import_env_invoke_iiiiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2a,pGVar8,&local_d8, &local_e8,uVar5,DAT_ram_0056b554);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a5264b;
                }
                iVar3 = import_env_invoke_iii (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x28,uVar5, DAT_ram_00569aa8);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a5264b;
                }
                pEVar9 = this.enemyManagerDetailsSO;
                psVar10 = pEVar9.enemyManagerDataKey;
                Raw.Write<int>(iVar3 + 0x48, local_5c);
                Raw.Write<object>(iVar3 + 0x44, psVar10);
                psVar10 = pEVar9.enemyName;
                uVar4 = import_env_invoke_iii (s___Scripting__Unity__Profiling__P_ram_000008ea + 0x31,&local_5c,0);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a5264b;
                }
                uVar4 = import_env_invoke_iiiii (s_MotionT_z_ram_00000655 + 9,psVar10," ",uVar4,0);
                if (DAT_ram_005ddf34 == 1) {
                    code_r0x81a5262f: DAT_ram_005ddf34 = 0;
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a5264b;
                }
                import_env_invoke_viii(s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x27,uVar5,uVar4,0);
                iVar6 = DAT_ram_00563078;
                if (DAT_ram_005ddf34 == 1) goto code_r0x81a5262f;
                pLVar11 = this.enemyList;
                pLVar11[4]._opaque = pLVar11[4]._opaque + 1;
                uVar12 = pLVar11[3]._opaque;
                if (uVar12 < Raw.Read<uint>(pLVar11[2]._opaque + 0xc)) {
                    pLVar11[3]._opaque = uVar12 + 1;
                    Raw.Write<int>(pLVar11[2]._opaque + uVar12 * 4 + 0x10, uVar5);
                }
                else {
                    import_env_invoke_viii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3b,pLVar11,uVar5, Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar6 + 0x10) + 0x60) + 0x38));
                    iVar6 = DAT_ram_005ddf34;
                    if (iVar6 == 1) {
                        uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                        goto code_r0x81a5264b;
                    }
                }
                local_5c = local_5c + 1;
            }
            uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
            code_r0x81a5264b: iVar6 = import_env_getTempRet0();
            iVar3 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
            if (iVar6 == iVar3) {
                piVar7 = (object)import_env___cxa_begin_catch(uVar5);
                iVar6 = *piVar7;
                local_78 = iVar6;
                import_env_invoke_v(0x3a);
                iVar3 = DAT_ram_005ddf34;
                if (iVar3 != 1) {
                    code_r0x81a52693: DAT_ram_005ddf34 = 0;
                    if (iVar6 == 0) {
                        return;
                    }
                    unnamed_function_1088(iVar6);
                    do {
                        throw null;
                    } while( true );
                }
                uVar5 = import_env___cxa_find_matching_catch_2();
                import_env_getTempRet0();
            }
            import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2d,&local_78);
        }
        else {
            unnamed_function_6549(&local_10,this.enemyList,DAT_ram_00563088);
            local_68 = local_8;
            local_70 = local_10;
            local_10 = ZEXT48(&local_70) << 0x20;
            do {
                iVar3 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_70, DAT_ram_00561108);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 == 1) {
                    uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a52120;
                }
                if (iVar3 == 0) goto code_r0x81a52176;
                uVar5 = local_68._4_4_;
                if (Raw.Read<int>(UnityEngine_Object_TypeInfo + 0x74) == 0) {
                    import_env_invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
                    if (DAT_ram_005ddf34 == 1) break;
                }
                import_env_invoke_vii(s___Scripting__UnityEngine__VFX__V_ram_00002079 + 0x1a,uVar5,0);
            } while (DAT_ram_005ddf34 != 1);
            uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
            code_r0x81a52120: iVar6 = import_env_getTempRet0();
            iVar3 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
            if (iVar6 == iVar3) {
                piVar7 = (object)import_env___cxa_begin_catch(uVar5);
                iVar3 = *piVar7;
                local_10 = CONCAT44(local_10._4_4_,iVar3);
                import_env_invoke_v(0x3a);
                iVar6 = DAT_ram_005ddf34;
                if (iVar6 != 1) {
                    if (iVar3 != 0) {
                        unnamed_function_1088(iVar3);
                        do {
                            throw null;
                        } while( true );
                    }
                    code_r0x81a52176: DAT_ram_005ddf34 = 0;
                    pLVar11 = this.enemyList;
                    iVar6 = pLVar11[3]._opaque;
                    pLVar11[3]._opaque = 0;
                    pLVar11[4]._opaque = pLVar11[4]._opaque + 1;
                    if (0 < iVar6) {
                        System.Array.Clear(pLVar11[2]._opaque,0,iVar6,0);
                    }
                    goto code_r0x81a521ad;
                }
                uVar5 = import_env___cxa_find_matching_catch_2();
                import_env_getTempRet0();
            }
            import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2c,&local_10);
        }
        joined_r0x81a52238: if (DAT_ram_005ddf34 != 1) {
            import_env___resumeException(uVar5);
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
        code_r0x81a51f47: uVar5 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a51f4f: iVar6 = import_env_getTempRet0();
        iVar3 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar6 == iVar3) {
            piVar7 = (object)import_env___cxa_begin_catch(uVar5);
            iVar6 = *piVar7;
            local_88 = CONCAT44(local_88._4_4_,iVar6);
            import_env_invoke_v(0x3a);
            iVar3 = DAT_ram_005ddf34;
            bVar1 = true;
            if (iVar3 != 1) {
                code_r0x81a51f9b: DAT_ram_005ddf34 = 0;
                if (iVar6 != 0) {
                    unnamed_function_1088(iVar6);
                    do {
                        throw null;
                    } while( true );
                }
                if (!bVar1) {
                    return;
                }
                goto code_r0x81a51fb4;
            }
            uVar5 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
        }
        import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2b,&local_88);
        goto joined_r0x81a52238;
    }

    // RVA: 0x37BC Offset: 0x37BC VA: 0x37BC
    public EnemyManager()
    {
        List param1 = default;

        param1 = (List)new System_Collections_Generic_List_GameObject_();
        unnamed_function_5132(param1,DAT_ram_00563074);
        this.enemyList = param1;
        unnamed_function_44622(this,0);
    }
}
