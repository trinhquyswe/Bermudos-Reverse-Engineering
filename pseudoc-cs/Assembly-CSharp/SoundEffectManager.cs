// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/SoundEffectManager.c by tools/c2cs.py
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

public class SoundEffectManager : SingletonMonobehaviourPersistent<SoundEffectManager> // TypeDefIndex: 5718
{
    // Fields
    public float soundsVolume; // 0x10
    private List<SoundEffect> soundEffects; // 0x14

    // Methods

    // RVA: 0x3A57 Offset: 0x3A57 VA: 0x3A57
    private void Start()
    {
        float param3 = default;
        int iVar1 = default;
        float linear = default;
        GameResources pGVar2 = default;
        int param1 = default;

        iVar1 = UnityEngine.PlayerPrefs.HasKey("soundsVolume",0);
        if (iVar1 == 0) {
            linear = this.soundsVolume;
        }
        else {
            linear = UnityEngine.PlayerPrefs.GetFloat("soundsVolume",0);
            this.soundsVolume = linear;
        }
        param3 = -80.0;
        pGVar2 = GameResources.Instance;
        param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar2.soundsMasterMixerGroup,0);
        if (linear != 0.0) {
            param3 = HelperUtilities.LinearToDecibels(linear);
        }
        UnityEngine.Audio.AudioMixer.SetFloat(param1,"soundsVolume",param3,0);
    }

    // RVA: 0x3A58 Offset: 0x3A58 VA: 0x3A58
    public void PlaySoundEffect(SoundEffectSO soundEffect)
    {
        UnityEngine.Component param1 = default;
        int param1_00 = default;
        float fVar1 = default;
        int iVar2 = default;
        UnityEngine.GameObject prefab = default;
        PoolManager __this_00 = default;
        UnityEngine.Component pUVar3 = default;
        Quaternion local_30 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d64 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        prefab = (UnityEngine.GameObject)soundEffect.soundPrefab;
        __this_00 = (PoolManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c));
        local_10.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_20.z = local_10.z;
        local_20.x = local_10.x;
        local_20.y = local_10.y;
        local_30._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        param1 = __this_00.ReuseComponent(prefab, &local_20, &local_30);
        if (param1 != (UnityEngine.Component)0x0) {
            if (((uint)Raw.Read<byte>(param1._opaque + 0xb8) < (uint)Raw.Read<byte>(SoundEffect_TypeInfo + 0xb8)) || (Raw.Read<int>(Raw.Read<int>(param1._opaque + 100) + (uint)Raw.Read<byte>(SoundEffect_TypeInfo + 0xb8) * 4 + -4) != SoundEffect_TypeInfo)) {
                unnamed_function_1116(param1,SoundEffect_TypeInfo);
                do {
                    throw null;
                } while( true );
            }
        }
        pUVar3 = param1 + 4;
        UnityEngine.AudioSource.set_volume(pUVar3._opaque,soundEffect.soundEffectVolume,0);
        UnityEngine.AudioSource.set_clip(pUVar3._opaque,soundEffect.soundEffectClip,0);
        /* candidates: UnityEngine.AudioSource.SetPitch | UnityEngine.AudioSource.set_pitch */ unnamed_function_63125(pUVar3._opaque,soundEffect.soundEffectPitch,0);
        param1[5]._opaque = (int)soundEffect;
        UnityEngine.AudioSource.set_loop(pUVar3._opaque,0,0);
        param1_00 = UnityEngine.Component.get_gameObject(param1,0);
        UnityEngine.GameObject.SetActive(param1_00,1,0);
        fVar1 = UnityEngine.AudioClip.get_length(soundEffect.soundEffectClip,0);
        iVar2 = new SoundEffectManager__DisableSound_d__6();
        Raw.Write<object>(iVar2 + 0x14, param1);
        Raw.Write<int>(iVar2 + 8, 0);
        Raw.Write<float>(iVar2 + 0x10, fVar1);
        UnityEngine.MonoBehaviour.StartCoroutine(this,iVar2,0);
    }

    // RVA: 0x3663 Offset: 0x3663 VA: 0x3663
    public void PlaySoundEffectPersistent(SoundEffectSO soundEffect, bool isLoop)
    {
        uint in_register_20000021 = default;
        UnityEngine.Component param1 = default;
        int param1_00 = default;
        int iVar1 = default;
        UnityEngine.GameObject prefab = default;
        PoolManager __this_00 = default;
        UnityEngine.Component pUVar2 = default;
        List param1_01 = default;
        uint uVar3 = default;
        Quaternion local_30 = default;
        Vector3 local_20 = default;
        Vector3 local_10 = default;

        iVar1 = Raw.Read<int>(DAT_ram_00565d64 + 0x10);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        prefab = (UnityEngine.GameObject)soundEffect.soundPrefab;
        __this_00 = (PoolManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c));
        local_10.z = Raw.Read<float>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
        local_10._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
        local_20.z = local_10.z;
        local_20.x = local_10.x;
        local_20.y = local_10.y;
        local_30._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_30._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        param1 = __this_00.ReuseComponent(prefab, &local_20, &local_30);
        if (param1 != (UnityEngine.Component)0x0) {
            if (((uint)Raw.Read<byte>(param1._opaque + 0xb8) < (uint)Raw.Read<byte>(SoundEffect_TypeInfo + 0xb8)) || (Raw.Read<int>(Raw.Read<int>(param1._opaque + 100) + (uint)Raw.Read<byte>(SoundEffect_TypeInfo + 0xb8) * 4 + -4) != SoundEffect_TypeInfo)) {
                unnamed_function_1116(param1,SoundEffect_TypeInfo);
                do {
                    throw null;
                } while( true );
            }
        }
        pUVar2 = param1 + 4;
        UnityEngine.AudioSource.set_volume(pUVar2._opaque,soundEffect.soundEffectVolume,0);
        UnityEngine.AudioSource.set_clip(pUVar2._opaque,soundEffect.soundEffectClip,0);
        /* candidates: UnityEngine.AudioSource.SetPitch | UnityEngine.AudioSource.set_pitch */ unnamed_function_63125(pUVar2._opaque,soundEffect.soundEffectPitch,0);
        param1[5]._opaque = (int)soundEffect;
        UnityEngine.AudioSource.set_loop(pUVar2._opaque,CONCAT31(in_register_20000021,isLoop),0);
        param1_00 = UnityEngine.Component.get_gameObject(param1,0);
        UnityEngine.GameObject.SetActive(param1_00,1,0);
        iVar1 = DAT_ram_00563b3c;
        param1_01 = this.soundEffects;
        param1_01[4]._opaque = param1_01[4]._opaque + 1;
        uVar3 = param1_01[3]._opaque;
        if (uVar3 < Raw.Read<uint>(param1_01[2]._opaque + 0xc)) {
            param1_01[3]._opaque = uVar3 + 1;
            Raw.Write<object>(param1_01[2]._opaque + uVar3 * 4 + 0x10, param1);
        }
        else {
            /* candidates: System.Collections.Generic.List<EasingFunction>.AddWithResize | System.Collections.Generic.List<InputEventPtr>.AddWithResize (+6) */ unnamed_function_6534 (param1_01,param1,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
        }
    }

    // RVA: 0x3A59 Offset: 0x3A59 VA: 0x3A59
    public void StopSoundEffectLoop(SoundEffectSO soundEffect)
    {
        int iVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        object piVar5 = default; // int*
        int local_18 = default;
        object local_14 = default; // long*
        long local_10 = default;
        long local_8 = default;

        local_8 = 0;
        local_10 = 0;
        /* candidates: System.Collections.Generic.List<Color32>.GetEnumerator | System.Collections.Generic.List<EasingFunction>.GetEnumerator (+9) */ unnamed_function_6549(&local_10,this.soundEffects,DAT_ram_00563b40);
        local_18 = 0;
        local_14 = &local_10;
        do {
            iVar1 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10, DAT_ram_005614a4);
            iVar4 = DAT_ram_005ddf34;
            if (iVar4 == 1) {
                uVar3 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a39103;
            }
            if (iVar1 == 0) {
                return;
            }
            iVar4 = local_8._4_4_;
            uVar3 = Raw.Read<int>(local_8._4_4_ + 0x14);
            if (Raw.Read<int>(UnityEngine_Object_TypeInfo + 0x74) == 0) {
                import_env_invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
                iVar1 = DAT_ram_005ddf34;
                if (iVar1 == 1) {
                    uVar3 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a39103;
                }
            }
            iVar2 = import_env_invoke_iiii (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x27,uVar3,soundEffect,0);
            iVar1 = DAT_ram_005ddf34;
            if (iVar1 == 1) {
                uVar3 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a39103;
            }
        } while (iVar2 == 0);
        uVar3 = import_env_invoke_iii(s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x1b,iVar4,0);
        if (DAT_ram_005ddf34 != 1) {
            import_env_invoke_viii(s___Scripting__UnityEngine__XR__Me_ram_00001f0e + 0x24,uVar3,0,0);
            if (DAT_ram_005ddf34 != 1) {
                import_env_invoke_iiii (s___Scripting__UnityEngine__UIElem_ram_00000830 + 0x36,this.soundEffects,iVar4, DAT_ram_00563b44);
                iVar4 = DAT_ram_005ddf34;
                if (iVar4 != 1) {
                    return;
                }
                uVar3 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a39103;
            }
        }
        uVar3 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a39103: iVar4 = import_env_getTempRet0();
        iVar1 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar4 == iVar1) {
            piVar5 = (object)import_env___cxa_begin_catch(uVar3);
            iVar1 = *piVar5;
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
            uVar3 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
        }
        import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x23,&local_18);
        iVar4 = DAT_ram_005ddf34;
        if (iVar4 != 1) {
            import_env___resumeException(uVar3);
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

    [IteratorStateMachine(typeof(SoundEffectManager._DisableSound_d__6))]
    // RVA: 0x3A5A Offset: 0x3A5A VA: 0x3A5A
    private IEnumerator DisableSound(SoundEffect sound, float soundDuration)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new SoundEffectManager__DisableSound_d__6();
        pSVar1[5]._opaque = (int)sound;
        pSVar1[2]._opaque = 0;
        pSVar1[4]._opaque = (int)soundDuration;
        return pSVar1;
    }

    // RVA: 0x3A5B Offset: 0x3A5B VA: 0x3A5B
    public void ChangeSoundsVolume(float soundsVolume)
    {
        float param3 = default;
        GameResources pGVar1 = default;
        int param1 = default;

        if (soundsVolume < 20.0) {
            this.soundsVolume = soundsVolume;
            param3 = -80.0;
            pGVar1 = GameResources.Instance;
            param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar1.soundsMasterMixerGroup,0);
            if (soundsVolume != 0.0) {
                param3 = HelperUtilities.LinearToDecibels(soundsVolume);
            }
            UnityEngine.Audio.AudioMixer.SetFloat(param1,"soundsVolume",param3,0);
        }
    }

    // RVA: 0x3A5C Offset: 0x3A5C VA: 0x3A5C
    private void SetSoundsVolume(float soundsVolume)
    {
        float param3 = default;
        GameResources pGVar1 = default;
        int param1 = default;

        param3 = -80.0;
        pGVar1 = GameResources.Instance;
        param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar1.soundsMasterMixerGroup,0);
        if (soundsVolume != 0.0) {
            param3 = HelperUtilities.LinearToDecibels(soundsVolume);
        }
        UnityEngine.Audio.AudioMixer.SetFloat(param1,"soundsVolume",param3,0);
    }

    // RVA: 0x3A5D Offset: 0x3A5D VA: 0x3A5D
    public SoundEffectManager()
    {
        List param1 = default;

        this.soundsVolume = 10.0;
        param1 = (List)new System_Collections_Generic_List_SoundEffect_();
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(param1,DAT_ram_00563b38);
        this.soundEffects = param1;
        new AmmoAnimation(DAT_ram_00565d68);
    }
}
