// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/RangedSkills.c by tools/c2cs.py
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

public class RangedSkills : MonoBehaviour // TypeDefIndex: 5698
{
    // Fields
    private Animator animator; // 0x10
    public Transform shootPosition; // 0x14
    public AmmoDetailsSO ammo; // 0x18
    public AmmoDetailsSO ammoPhase2; // 0x1C
    [Header("EYE ATTACK")]
    public GameObject Beam; // 0x20
    public float[] offsetArr; // 0x24

    // Methods

    // RVA: 0x39D3 Offset: 0x39D3 VA: 0x39D3
    private void Awake()
    {
        Animator pAVar1 = default;

        pAVar1 = (Animator)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e18);
        this.animator = pAVar1;
    }

    // RVA: 0x3667 Offset: 0x3667 VA: 0x3667
    public void Shoot(AmmoDetailsSO ammoDetailsSO, Vector3 shootPosition, Vector3 target)
    {
        uint uVar1 = default;
        UnityEngine.Component param1 = default;
        object param1_00 = default; // int*
        object puVar2 = default; // uint*
        int iVar3 = default;
        UnityEngine.GameObject prefab = default;
        PoolManager __this_00 = default;
        long local_30 = default;
        float local_28 = default;
        Quaternion local_20 = default;
        Vector3 local_10 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d64 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        prefab = (UnityEngine.GameObject)ammoDetailsSO.ammoPrefab;
        __this_00 = (PoolManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        local_10.z = shootPosition.z;
        local_10.x = shootPosition.x;
        local_10.y = shootPosition.y;
        local_20._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_20._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        param1 = __this_00.ReuseComponent(prefab, &local_10, &local_20);
        iVar3 = IFireable_TypeInfo;
        if (param1 != (UnityEngine.Component)0x0) {
            param1_00 = (object)(param1 as IFireable);
            if (param1_00 == (object)0x0) {
                unnamed_function_1116(param1,iVar3);
                do {
                    throw null;
                } while( true );
            }
            uVar1 = 0;
            iVar3 = *param1_00;
            if (Raw.Read<ushort>(iVar3 + 0xb6) != 0) {
                do {
                    if (IFireable_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar3 + 0x58) + uVar1 * 8)) {
                        puVar2 = (object)(iVar3 + Raw.Read<int>(Raw.Read<int>(iVar3 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0);
                        goto code_r0x81a40092;
                    }
                    uVar1 = uVar1 + 1;
                } while (Raw.Read<ushort>(iVar3 + 0xb6) != uVar1);
            }
            puVar2 = (object)unnamed_function_95091(param1_00,IFireable_TypeInfo,0);
            code_r0x81a40092: local_28 = target.z;
            local_30._0_4_ = target.x;
            local_30._4_4_ = target.y;
            Raw.VCallAt(puVar2) /* virtual */(param1_00,ammoDetailsSO,&local_30,puVar2[1]);
        }
    }

    // RVA: 0x39D4 Offset: 0x39D4 VA: 0x39D4
    private Vector2[] Get15ShootDirections()
    {
        int iVar1 = default;
        UnityEngine.Vector2.arr pUVar2 = default;
        float fVar3 = default;
        long uVar4 = default;
        float fVar5 = default;
        long local_60 = default;
        int local_58 = default;
        long local_50 = default;
        long local_48 = default;
        long local_40 = default;
        float local_38 = default;
        float local_30 = default;
        float local_2c = default;
        int local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        float local_8 = default;

        pUVar2 = (UnityEngine.Vector2.arr)unnamed_function_1050(UnityEngine_Vector2___TypeInfo,0xf);
        uVar4 = Raw.Read<long>(Raw.Read<int>(UnityEngine_Vector2_TypeInfo + 0x5c) + 0x28);
        fVar3 = (float)((ulong)uVar4 >> 0x20) * 30.0;
        fVar5 = (float)uVar4 * 30.0;
        Raw.Write<ulong>(pUVar2 + 4, CONCAT44(fVar3,fVar5));
        iVar1 = 1;
        do {
            local_38 = (float)(iVar1 * 0x18) * 0.017453292;
            local_40 = 0;
            local_10 = 0;
            local_8 = (float)local_38;
            UnityEngine.Quaternion.Internal_FromEulerRad(&local_20,&local_40,0);
            local_28 = 0;
            local_58 = 0;
            local_48 = local_18;
            local_50 = local_20;
            local_60 = CONCAT44(fVar3,fVar5);
            local_30 = (float)fVar5;
            local_2c = (float)fVar3;
            UnityEngine.Quaternion.op_Multiply(&local_10,&local_50,&local_60,0);
            Raw.Write<long>(pUVar2 + iVar1 * 2 + 4, local_10);
            iVar1 = iVar1 + 1;
        } while (iVar1 != 0xf);
        return pUVar2;
    }

    // RVA: 0x39D5 Offset: 0x39D5 VA: 0x39D5
    public void BaseShoot()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        UnityEngine.Vector2.arr pUVar4 = default;
        int uVar5 = default;
        AmmoDetailsSO ammoDetailsSO = default;
        int iVar6 = default;
        long uVar7 = default;
        Vector3 local_30 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        byte[] local_40 = new byte[16];
        iVar6 = 0;
        pUVar4 = ((RangedSkills)local_40).Get15ShootDirections();
        if (0 < pUVar4[3]._opaque) {
            do {
                uVar5 = UnityEngine.Component.get_transform(this,0);
                UnityEngine.Transform.get_position(&local_10,uVar5,0);
                fVar3 = local_8;
                fVar2 = local_c;
                fVar1 = local_10;
                uVar7 = Raw.Read<long>(pUVar4 + iVar6 * 2 + 4);
                ammoDetailsSO = this.ammo;
                uVar5 = UnityEngine.Component.get_transform(this,0);
                UnityEngine.Transform.get_position(&local_10,uVar5,0);
                local_40._8_4_ = (float)fVar3 + 0.0;
                local_30.z = (float)local_8;
                local_20 = (float)((float)fVar1 + (float)uVar7);
                local_1c = (float)((float)fVar2 + (float)((ulong)uVar7 >> 0x20));
                local_40._4_4_ = (object)local_1c;
                local_40._0_4_ = (object)local_20;
                local_18 = (float)local_40._8_4_;
                ((RangedSkills)local_40).Shoot(ammoDetailsSO, &local_30, (Vector3)local_40);
                iVar6 = iVar6 + 1;
            } while (iVar6 < pUVar4[3]._opaque);
        }
    }

    // RVA: 0x39D6 Offset: 0x39D6 VA: 0x39D6
    public void EyeAttack()
    {
        float fVar1 = default;
        float fVar2 = default;
        int uVar3 = default;
        float fVar4 = default;
        int param2 = default;
        GameObject param1 = default;
        int iVar5 = default;
        long local_60 = default;
        long local_58 = default;
        long local_50 = default;
        float local_48 = default;
        long local_40 = default;
        float local_38 = default;
        long local_30 = default;
        long local_28 = default;
        float local_20 = default;
        float local_1c = default;
        long local_18 = default;
        long local_10 = default;
        float local_8 = default;

        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        uVar3 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10),0);
        UnityEngine.Transform.get_position(&local_20,uVar3,0);
        fVar2 = local_1c;
        fVar1 = local_20;
        uVar3 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_20,uVar3,0);
        fVar4 = unnamed_function_12077((float)fVar2 - (float)local_1c,(float)fVar1 - (float)local_20);
        local_38 = (fVar4 * 57.29578 + 90.0) * 0.017453292;
        local_40 = 0;
        local_10 = 0;
        local_8 = (float)local_38;
        UnityEngine.Quaternion.Internal_FromEulerRad(&local_30,&local_40,0);
        local_18 = local_28;
        _local_20 = local_30;
        param1 = this.Beam;
        UnityEngine.Transform.get_position(&local_10,this.shootPosition,0);
        local_48 = local_8;
        local_58 = local_18;
        local_50 = local_10;
        local_60 = _local_20;
        uVar3 = unnamed_function_86418(param1,&local_50,&local_60,DAT_ram_0056b548);
        iVar5 = UnityEngine.GameObject.GetComponent<object>(uVar3,DAT_ram_00569a58);
        Raw.Write<int>(iVar5 + 0x2c, 0x40600000);
        uVar3 = UnityEngine.GameObject.get_transform(uVar3,0);
        param2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.set_parent(uVar3,param2,0);
    }

    // RVA: 0x39D7 Offset: 0x39D7 VA: 0x39D7
    public void StartEyeLoop(float eyeLoopDuration, float eyeLoopRate)
    {
        int param2 = default;

        param2 = new RangedSkills__EyeLoop_d__11();
        Raw.Write<float>(param2 + 0x18 /* ammo */, eyeLoopRate);
        Raw.Write<float>(param2 + 0x14 /* shootPosition */, eyeLoopDuration);
        Raw.Write<object>(param2 + 0x10 /* animator */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(RangedSkills._EyeLoop_d__11))]
    // RVA: 0x39D8 Offset: 0x39D8 VA: 0x39D8
    public IEnumerator EyeLoop(float eyeLoopDuration, float eyeLoopRate)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new RangedSkills__EyeLoop_d__11();
        pSVar1[6]._opaque = (int)eyeLoopRate;
        pSVar1[5]._opaque = (int)eyeLoopDuration;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x39D9 Offset: 0x39D9 VA: 0x39D9
    public void OpenMouth()
    {
        System.Collections.Generic.List.Vector3 param2 = default;
        int iVar1 = default;
        int param1 = default;
        int iVar2 = default;
        object piVar3 = default; // int*
        AmmoDetailsSO param3 = default;
        MethodInfo local_70 = default;
        long local_50 = default;
        int local_48 = default;
        int local_30 = default;
        object local_2c = default; // byte*
        MethodInfo local_28 = default;
        int local_8 = default;
        int uStack_4 = default;

        long[] local_40 = new long[2];
        local_8 = 0;
        uStack_4 = 0;
        local_28._24_4_ = 0;
        local_28._28_4_ = 0;
        local_28._16_8_ = 0;
        param2 = this.GetTargetPositionList(&local_70);
        /* candidates: System.Collections.Generic.List<DecalEntityIndexer.DecalEntityItem>.GetEnumerator | System.Collections.Generic.List<HIDParser.HIDReportData>.GetEnumerator (+26) */ unnamed_function_5249(&local_28.field_0x10,param2,DAT_ram_00564134);
        local_30 = 0;
        local_2c = &local_28.field_0x10;
        while( true ) {
            iVar1 = import_env_invoke_iii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x24,&local_28.field_0x10, DAT_ram_005615d0);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 == 1) {
                param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a40758;
            }
            if (iVar1 == 0) {
                return;
            }
            local_28._8_4_ = uStack_4;
            local_28._opaque1 = local_8;
            local_28._opaque0 = local_28._28_4_;
            param3 = this.ammo;
            import_env_invoke_viii (s___Scripting__UnityEngine__Player_ram_00000896 + 0x51,local_40,this.shootPosition ,0);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 == 1) break;
            local_48 = (int)local_40[1];
            local_70._24_4_ = (int)local_40[1];
            local_70._8_4_ = local_28._8_4_;
            local_50 = local_40[0];
            local_70._16_8_ = local_40[0];
            local_70._opaque0 = local_28._opaque0;
            local_70._opaque1 = local_28._opaque1;
            import_env_invoke_viiiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x25,&local_70,param3, &local_70.field_0x10,&local_70,&local_70);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 == 1) {
                param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                code_r0x81a40758: iVar2 = import_env_getTempRet0();
                iVar1 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
                if (iVar2 == iVar1) {
                    piVar3 = (object)import_env___cxa_begin_catch(param1);
                    iVar1 = *piVar3;
                    local_30 = iVar1;
                    import_env_invoke_v(0x3a);
                    iVar2 = DAT_ram_005ddf34;
                    if (iVar2 != 1) {
                        if (iVar1 == 0) {
                            return;
                        }
                        unnamed_function_1088(iVar1);
                        do {
                            throw null;
                        } while( true );
                    }
                    param1 = import_env___cxa_find_matching_catch_2();
                    import_env_getTempRet0();
                }
                import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x26,&local_30);
                iVar2 = DAT_ram_005ddf34;
                if (iVar2 != 1) {
                    import_env___resumeException(param1);
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
        }
        param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a40758;
    }

    // RVA: 0x39DA Offset: 0x39DA VA: 0x39DA
    public List<Vector3> GetTargetPositionList()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        int uVar5 = default;
        System.Collections.Generic.List.Vector3 param1 = default;
        float fVar6 = default;
        uint uVar7 = default;
        int iVar8 = default;
        int iVar9 = default;
        float fVar10 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        int local_18 = default;
        float local_10 = default;
        float local_c = default;
        int local_8 = default;

        iVar8 = 0;
        iVar9 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar9 + 0xbd) & 1) == 0) {
        }
        iVar9 = Raw.Read<int>(Raw.Read<int>(iVar9 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar9 + 0xbd) & 1) == 0) {
        }
        uVar5 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar9 + 0x5c)) + 0x10),0);
        UnityEngine.Transform.get_position(&local_10,uVar5,0);
        fVar3 = local_c;
        fVar1 = local_10;
        uVar5 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar5,0);
        fVar4 = local_c;
        fVar2 = local_10;
        param1 = (System.Collections.Generic.List.Vector3) new System_Collections_Generic_List_Vector3_();
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(param1,DAT_ram_00564120);
        fVar6 = (float)fVar3 - (float)fVar4;
        fVar10 = (float)fVar1 - (float)fVar2;
        if (Mathf.Abs(fVar6) < Mathf.Abs(fVar10)) {
            if (0 < this.offsetArr[3]._opaque) {
                do {
                    iVar9 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                    if ((Raw.Read<byte>(iVar9 + 0xbd) & 1) == 0) {
                    }
                    iVar9 = Raw.Read<int>(Raw.Read<int>(iVar9 + 0x60) + 8);
                    if ((Raw.Read<byte>(iVar9 + 0xbd) & 1) == 0) {
                    }
                    uVar5 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar9 + 0x5c)) + 0x10),0);
                    UnityEngine.Transform.get_position(&local_10,uVar5,0);
                    iVar9 = DAT_ram_00564128;
                    local_8 = 0;
                    local_10 = (float)(fVar10 + (float)local_10);
                    local_c = (float)((float)local_c + fVar6 + (float)this.offsetArr[iVar8 + 4]._opaque);
                    param1[4]._opaque = param1[4]._opaque + 1;
                    uVar7 = param1[3]._opaque;
                    if (uVar7 < Raw.Read<uint>(param1[2]._opaque + 0xc)) {
                        param1[3]._opaque = uVar7 + 1;
                        iVar9 = param1[2]._opaque + uVar7 * 0xc;
                        Raw.Write<int>(iVar9 + 0x18, 0);
                        Raw.Write<ulong>(iVar9 + 0x10, CONCAT44(local_c,local_10));
                    }
                    else {
                        local_28 = 0;
                        local_30 = CONCAT44(local_c,local_10);
                        /* candidates: System.Collections.Generic.List<DecalEntityIndexer.DecalEntityItem>.AddWithResize | System.Collections.Generic.List<HIDParser.HIDReportData>.AddWithResize (+26) */ unnamed_function_5234 (param1,&local_30, Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar9 + 0x10) + 0x60) + 0x38));
                    }
                    iVar8 = iVar8 + 1;
                } while (iVar8 < this.offsetArr[3]._opaque);
            }
        }
        else if ((Mathf.Abs(fVar10) < Mathf.Abs(fVar6)) && (0 < this.offsetArr[3]._opaque)) {
            do {
                iVar9 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar9 + 0xbd) & 1) == 0) {
                }
                iVar9 = Raw.Read<int>(Raw.Read<int>(iVar9 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar9 + 0xbd) & 1) == 0) {
                }
                uVar5 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar9 + 0x5c)) + 0x10),0);
                UnityEngine.Transform.get_position(&local_10,uVar5,0);
                iVar9 = DAT_ram_00564128;
                local_8 = 0;
                local_c = (float)(fVar6 + (float)local_c);
                local_10 = (float)((float)local_10 + fVar10 + (float)this.offsetArr[iVar8 + 4]._opaque);
                param1[4]._opaque = param1[4]._opaque + 1;
                uVar7 = param1[3]._opaque;
                if (uVar7 < Raw.Read<uint>(param1[2]._opaque + 0xc)) {
                    param1[3]._opaque = uVar7 + 1;
                    iVar9 = param1[2]._opaque + uVar7 * 0xc;
                    Raw.Write<int>(iVar9 + 0x18, 0);
                    Raw.Write<ulong>(iVar9 + 0x10, CONCAT44(local_c,local_10));
                }
                else {
                    local_18 = 0;
                    local_20 = CONCAT44(local_c,local_10);
                    /* candidates: System.Collections.Generic.List<DecalEntityIndexer.DecalEntityItem>.AddWithResize | System.Collections.Generic.List<HIDParser.HIDReportData>.AddWithResize (+26) */ unnamed_function_5234 (param1,&local_20,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar9 + 0x10) + 0x60) + 0x38));
                }
                iVar8 = iVar8 + 1;
            } while (iVar8 < this.offsetArr[3]._opaque);
        }
        return param1;
    }

    // RVA: 0x39DB Offset: 0x39DB VA: 0x39DB
    public void StartMouthOpenLoopMouth(float mouthOpenLoopRate, float mouthOpenLoopDuration)
    {
        int param2 = default;

        param2 = new RangedSkills__MouthOpenLoop_d__16();
        Raw.Write<float>(param2 + 0x18 /* ammo */, mouthOpenLoopRate);
        Raw.Write<object>(param2 + 0x10 /* animator */, this);
        Raw.Write<int>(param2 + 8, 0);
        Raw.Write<float>(param2 + 0x14 /* shootPosition */, mouthOpenLoopDuration);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    [IteratorStateMachine(typeof(RangedSkills._MouthOpenLoop_d__16))]
    // RVA: 0x39DC Offset: 0x39DC VA: 0x39DC
    public IEnumerator MouthOpenLoop(float mouthOpenLoopRate, float mouthOpenLoopDuration)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new RangedSkills__MouthOpenLoop_d__16();
        pSVar1[6]._opaque = (int)mouthOpenLoopRate;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        pSVar1[5]._opaque = (int)mouthOpenLoopDuration;
        return pSVar1;
    }

    // RVA: 0x39DD Offset: 0x39DD VA: 0x39DD
    public RangedSkills()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
