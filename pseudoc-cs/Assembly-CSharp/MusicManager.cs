// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MusicManager.c by tools/c2cs.py
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

public class MusicManager : SingletonMonobehaviourPersistent<MusicManager> // TypeDefIndex: 5714
{
    // Fields
    private AudioSource musicAudioSource; // 0x10
    private AudioClip currentAudioClip; // 0x14
    private Coroutine fadeOutMusicCoroutine; // 0x18
    private Coroutine fadeInMusicCoroutine; // 0x1C
    public float musicVolume; // 0x20
    private bool isPlayingFirstClip; // 0x24

    // Methods

    // RVA: 0x3A33 Offset: 0x3A33 VA: 0x3A33 Slot: 4
    protected override void Awake()
    {
        AudioSource pAVar1 = default;
        GameResources pGVar2 = default;

        SingletonMonobehaviourPersistent<object>.Awake(this,DAT_ram_00565d54);
        pAVar1 = (AudioSource)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e24);
        this.musicAudioSource = pAVar1;
        pGVar2 = GameResources.Instance;
        UnityEngine.Audio.AudioMixerSnapshot.TransitionTo(pGVar2.musicOffSnapshot,0.0,0);
    }

    // RVA: 0x3A34 Offset: 0x3A34 VA: 0x3A34
    private void Start()
    {
        float param3 = default;
        int iVar1 = default;
        float linear = default;
        GameResources pGVar2 = default;
        int param1 = default;

        iVar1 = UnityEngine.PlayerPrefs.HasKey("musicVolume",0);
        if (iVar1 == 0) {
            linear = this.musicVolume;
        }
        else {
            linear = UnityEngine.PlayerPrefs.GetFloat("musicVolume",0);
            this.musicVolume = linear;
        }
        param3 = -80.0;
        pGVar2 = GameResources.Instance;
        param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar2.musicMasterMixerGroup,0);
        if (linear != 0.0) {
            param3 = HelperUtilities.LinearToDecibels(linear);
        }
        UnityEngine.Audio.AudioMixer.SetFloat(param1,"musicVolume",param3,0);
        this.PlayBackgroundMusic();
    }

    // RVA: 0x3A35 Offset: 0x3A35 VA: 0x3A35
    public void PlayBackgroundMusic()
    {
        bool bVar1 = default;
        GameResources pGVar2 = default;
        int iVar3 = default;
        float param3 = default;
        MusicTrackSO pMVar4 = default;
        MusicTrackSO ppMVar5 = default;

        bVar1 = this.isPlayingFirstClip;
        pGVar2 = GameResources.Instance;
        if (bVar1 == false) {
            pMVar4 = pGVar2.musicTrack2;
            iVar3 = new MusicManager__PlayMusicRoutine_d__12();
            Raw.Write<long>(iVar3 + 0x18, 0x3f0000003f000000);
            Raw.Write<object>(iVar3 + 0x14, pMVar4);
            Raw.Write<object>(iVar3 + 0x10, this);
            Raw.Write<int>(iVar3 + 8, 0);
            UnityEngine.MonoBehaviour.StartCoroutine(this,iVar3,0);
            this.isPlayingFirstClip = true;
            pGVar2 = GameResources.Instance;
            ppMVar5 = &pGVar2.musicTrack2;
        }
        else {
            pMVar4 = pGVar2.musicTrack1;
            iVar3 = new MusicManager__PlayMusicRoutine_d__12();
            Raw.Write<long>(iVar3 + 0x18, 0x3f0000003f000000);
            Raw.Write<object>(iVar3 + 0x14, pMVar4);
            Raw.Write<object>(iVar3 + 0x10, this);
            Raw.Write<int>(iVar3 + 8, 0);
            UnityEngine.MonoBehaviour.StartCoroutine(this,iVar3,0);
            this.isPlayingFirstClip = false;
            pGVar2 = GameResources.Instance;
            ppMVar5 = &pGVar2.musicTrack1;
        }
        param3 = UnityEngine.AudioClip.get_length((*ppMVar5).musicClip,0);
        UnityEngine.MonoBehaviour.Invoke(this,"PlayerBackgroundMusic",param3,0);
    }

    // RVA: 0x3A36 Offset: 0x3A36 VA: 0x3A36
    public void StopPlayingBackgroundMusic()
    {
        UnityEngine.AudioSource.Stop(this.musicAudioSource,0);
        UnityEngine.MonoBehaviour.CancelInvoke(this,"PlayBackgroundMusic",0);
    }

    // RVA: 0x3A37 Offset: 0x3A37 VA: 0x3A37
    public void PlayMusic(MusicTrackSO musicTrack, float fadeOutTime = 0.5, float fadeInTime = 0.5)
    {
        int param2 = default;

        param2 = new MusicManager__PlayMusicRoutine_d__12();
        Raw.Write<float>(param2 + 0x1c /* fadeInMusicCoroutine */, fadeInTime);
        Raw.Write<float>(param2 + 0x18 /* fadeOutMusicCoroutine */, fadeOutTime);
        Raw.Write<object>(param2 + 0x14 /* currentAudioClip */, musicTrack);
        Raw.Write<object>(param2 + 0x10 /* musicAudioSource */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    // RVA: 0x3A38 Offset: 0x3A38 VA: 0x3A38
    public void StopMusic()
    {
        UnityEngine.AudioSource.Stop(this.musicAudioSource,0);
    }

    [IteratorStateMachine(typeof(MusicManager._PlayMusicRoutine_d__12))]
    // RVA: 0x3A39 Offset: 0x3A39 VA: 0x3A39
    private IEnumerator PlayMusicRoutine(MusicTrackSO musicTrack, float fadeOutTime, float fadeInTime)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new MusicManager__PlayMusicRoutine_d__12();
        pSVar1[7]._opaque = (int)fadeInTime;
        pSVar1[6]._opaque = (int)fadeOutTime;
        pSVar1[5]._opaque = (int)musicTrack;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    [IteratorStateMachine(typeof(MusicManager._FadeOutMusic_d__13))]
    // RVA: 0x3A3A Offset: 0x3A3A VA: 0x3A3A
    private IEnumerator FadeOutMusic(float fadeOutTime)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new MusicManager__FadeOutMusic_d__13();
        pSVar1[4]._opaque = (int)fadeOutTime;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    [IteratorStateMachine(typeof(MusicManager._FadeInMusic_d__14))]
    // RVA: 0x3A3B Offset: 0x3A3B VA: 0x3A3B
    private IEnumerator FadeInMusic(MusicTrackSO musicTrack, float fadeInTime)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new MusicManager__FadeInMusic_d__14();
        pSVar1[6]._opaque = (int)fadeInTime;
        pSVar1[5]._opaque = (int)musicTrack;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3A3C Offset: 0x3A3C VA: 0x3A3C
    public void ChangeMusicVolume(float musicVolume)
    {
        float param3 = default;
        GameResources pGVar1 = default;
        int param1 = default;

        if (musicVolume < 20.0) {
            this.musicVolume = musicVolume;
            param3 = -80.0;
            pGVar1 = GameResources.Instance;
            param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar1.musicMasterMixerGroup,0);
            if (musicVolume != 0.0) {
                param3 = HelperUtilities.LinearToDecibels(musicVolume);
            }
            UnityEngine.Audio.AudioMixer.SetFloat(param1,"musicVolume",param3,0);
        }
    }

    // RVA: 0x3A3D Offset: 0x3A3D VA: 0x3A3D
    public void SetMusicVolume(float musicVolume)
    {
        float param3 = default;
        GameResources pGVar1 = default;
        int param1 = default;

        param3 = -80.0;
        pGVar1 = GameResources.Instance;
        param1 = UnityEngine.Audio.AudioMixerGroup.get_audioMixer(pGVar1.musicMasterMixerGroup,0);
        if (musicVolume != 0.0) {
            param3 = HelperUtilities.LinearToDecibels(musicVolume);
        }
        UnityEngine.Audio.AudioMixer.SetFloat(param1,"musicVolume",param3,0);
    }

    // RVA: 0x3A3E Offset: 0x3A3E VA: 0x3A3E
    public MusicManager()
    {
        this.isPlayingFirstClip = true;
        this.musicVolume = 20.0;
        new AmmoAnimation(DAT_ram_00565d50);
    }
}
