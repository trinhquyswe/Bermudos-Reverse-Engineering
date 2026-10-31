// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AudioManager.c by tools/c2cs.py
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

public class AudioManager : MonoBehaviour // TypeDefIndex: 5710
{
    // Fields
    [SerializeField]
    private Slider musicSlider; // 0x10
    [SerializeField]
    private Slider sfxSlider; // 0x14
    private float normalizedValue; // 0x18

    // Methods

    // RVA: 0x3A28 Offset: 0x3A28 VA: 0x3A28
    private void Start()
    {
        int iVar1 = default;
        int uVar2 = default;

        iVar1 = new AudioManager__SetVolumeCoroutine_d__4();
        Raw.Write<object>(iVar1 + 0x10, this);
        Raw.Write<int>(iVar1 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,iVar1,0);
        UnityEngine.Events.UnityEventBase.RemoveAllListeners(this.musicSlider[0x34]._opaque,0);
        UnityEngine.Events.UnityEventBase.RemoveAllListeners(this.sfxSlider[0x34]._opaque,0);
        iVar1 = this.musicSlider[0x34]._opaque;
        uVar2 = new UnityEngine_Events_UnityAction_float_();
        UnityEngine.Events.UnityAction<float>.__ctor(uVar2,this,DAT_ram_0056758c,0);
        unnamed_function_71922(iVar1,uVar2,DAT_ram_005667e4);
        iVar1 = this.sfxSlider[0x34]._opaque;
        uVar2 = new UnityEngine_Events_UnityAction_float_();
        UnityEngine.Events.UnityAction<float>.__ctor(uVar2,this,DAT_ram_00567590,0);
        unnamed_function_71922(iVar1,uVar2,DAT_ram_005667e4);
    }

    [IteratorStateMachine(typeof(AudioManager._SetVolumeCoroutine_d__4))]
    // RVA: 0x3A29 Offset: 0x3A29 VA: 0x3A29
    private IEnumerator SetVolumeCoroutine()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new AudioManager__SetVolumeCoroutine_d__4();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3A2A Offset: 0x3A2A VA: 0x3A2A
    public AudioManager()
    {
        this.normalizedValue = 20.0;
        unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x3A2B Offset: 0x3A2B VA: 0x3A2B
    private void _Start_b__3_0(float value) { }

    [CompilerGenerated]
    // RVA: 0x3A2C Offset: 0x3A2C VA: 0x3A2C
    private void _Start_b__3_1(float value) { }

    // methods without a dump.cs skeleton stub
    public void _Start_b__3_0(float value)
    {
        float param3 = default;
        GameResources pGVar1 = default;
        int param1 = default;
        int iVar2 = default;
        float linear = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d58 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        linear = this.normalizedValue * value;
        if (linear < 20.0) {
            Raw.Write<float>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x20, linear);
            param3 = -80.0;
            pGVar1 = GameResources.Instance;
            param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar1.musicMasterMixerGroup,0);
            if (linear != 0.0) {
                param3 = HelperUtilities.LinearToDecibels(linear);
            }
            UnityEngine.Audio.AudioMixer.SetFloat(param1,"musicVolume",param3,0);
            linear = this.normalizedValue * value;
        }
        UnityEngine.PlayerPrefs.SetFloat("musicVolume",linear,0);
        UnityEngine.PlayerPrefs.Save(0);
    }
    public void _Start_b__3_1(float value)
    {
        float param3 = default;
        GameResources pGVar1 = default;
        int param1 = default;
        int iVar2 = default;
        float linear = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        linear = this.normalizedValue * value;
        if (linear < 20.0) {
            Raw.Write<float>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x10, linear);
            param3 = -80.0;
            pGVar1 = GameResources.Instance;
            param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar1.soundsMasterMixerGroup,0);
            if (linear != 0.0) {
                param3 = HelperUtilities.LinearToDecibels(linear);
            }
            UnityEngine.Audio.AudioMixer.SetFloat(param1,"soundsVolume",param3,0);
            linear = this.normalizedValue * value;
        }
        UnityEngine.PlayerPrefs.SetFloat("soundsVolume",linear,0);
        UnityEngine.PlayerPrefs.Save(0);
    }
}
