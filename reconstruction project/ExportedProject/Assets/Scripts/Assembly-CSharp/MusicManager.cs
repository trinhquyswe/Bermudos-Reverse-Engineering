// NOTE: the original base class is SingletonMonobehaviourPersistent<MusicManager> (dump TypeDefIndex 5671).
// That base has no source file in this export (same gap as GameManager.cs). The base is kept so that
// MusicManager.Instance call sites in other files match the original.
using System.Collections;
using UnityEngine;
using UnityEngine.Audio;

[DisallowMultipleComponent]
public class MusicManager : SingletonMonobehaviourPersistent<MusicManager>
{
    private AudioSource musicAudioSource;
    private AudioClip currentAudioClip;
    private Coroutine fadeOutMusicCoroutine;
    private Coroutine fadeInMusicCoroutine;
    public float musicVolume;
    private bool isPlayingFirstClip;

    public MusicManager()
    {
        isPlayingFirstClip = true;
        musicVolume = 20f;
        // TODO(il2cpp): the original also constructed an AmmoAnimation from an unresolved static (DAT_ram_00565d50); not reproduced.
    }

    protected override void Awake()
    {
        base.Awake();
        musicAudioSource = GetComponent<AudioSource>();
        GameResources.Instance.musicOffSnapshot.TransitionTo(0f);
    }

    private void Start()
    {
        float linear;
        if (!PlayerPrefs.HasKey("musicVolume"))
        {
            linear = musicVolume;
        }
        else
        {
            linear = PlayerPrefs.GetFloat("musicVolume");
            musicVolume = linear;
        }

        float decibels = -80f;
        AudioMixer mixer = GameResources.Instance.musicMasterMixerGroup.audioMixer;
        if (linear != 0f)
        {
            decibels = HelperUtilities.LinearToDecibels(linear);
        }
        mixer.SetFloat("musicVolume", decibels);
        PlayBackgroundMusic();
    }

    public void PlayBackgroundMusic()
    {
        MusicTrackSO musicTrack;
        if (!isPlayingFirstClip)
        {
            musicTrack = GameResources.Instance.musicTrack2;
            StartCoroutine(PlayMusicRoutine(musicTrack, 0.5f, 0.5f));
            isPlayingFirstClip = true;
        }
        else
        {
            musicTrack = GameResources.Instance.musicTrack1;
            StartCoroutine(PlayMusicRoutine(musicTrack, 0.5f, 0.5f));
            isPlayingFirstClip = false;
        }
        float clipLength = musicTrack.musicClip.length;
        // TODO(il2cpp): original invokes "PlayerBackgroundMusic", which is not a method in this class (probably meant PlayBackgroundMusic). Kept as decompiled.
        Invoke("PlayerBackgroundMusic", clipLength);
    }

    public void StopPlayingBackgroundMusic()
    {
        musicAudioSource.Stop();
        CancelInvoke("PlayBackgroundMusic");
    }

    public void PlayMusic(MusicTrackSO musicTrack, float fadeOutTime = 0.5f, float fadeInTime = 0.5f)
    {
        StartCoroutine(PlayMusicRoutine(musicTrack, fadeOutTime, fadeInTime));
    }

    public void StopMusic()
    {
        musicAudioSource.Stop();
    }

    private IEnumerator PlayMusicRoutine(MusicTrackSO musicTrack, float fadeOutTime, float fadeInTime)
    {
        // TODO(il2cpp): state machine body (d__12 MoveNext) was not recovered; not reproduced.
        yield break;
    }

    private IEnumerator FadeOutMusic(float fadeOutTime)
    {
        // TODO(il2cpp): state machine body (d__13 MoveNext) was not recovered; not reproduced.
        yield break;
    }

    private IEnumerator FadeInMusic(MusicTrackSO musicTrack, float fadeInTime)
    {
        // TODO(il2cpp): state machine body (d__14 MoveNext) was not recovered; not reproduced.
        yield break;
    }

    public void ChangeMusicVolume(float musicVolume)
    {
        if (musicVolume < 20f)
        {
            this.musicVolume = musicVolume;
            SetMusicVolume(musicVolume);
        }
    }

    public void SetMusicVolume(float musicVolume)
    {
        float decibels = -80f;
        if (musicVolume != 0f)
        {
            decibels = HelperUtilities.LinearToDecibels(musicVolume);
        }
        GameResources.Instance.musicMasterMixerGroup.audioMixer.SetFloat("musicVolume", decibels);
    }
}
