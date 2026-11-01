using System.Collections;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    [SerializeField]
    private Slider musicSlider;
    [SerializeField]
    private Slider sfxSlider;
    private float normalizedValue = 20f;

    private void Start()
    {
        StartCoroutine(SetVolumeCoroutine());
        musicSlider.onValueChanged.RemoveAllListeners();
        sfxSlider.onValueChanged.RemoveAllListeners();
        musicSlider.onValueChanged.AddListener(SetMusicVolume);
        sfxSlider.onValueChanged.AddListener(SetSoundsVolume);
    }

    private IEnumerator SetVolumeCoroutine()
    {
        // TODO(il2cpp): MoveNext state machine <SetVolumeCoroutine>d__4 (dump 421833) is not in the pseudo output; body not reconstructed.
        yield break;
    }

    private void SetMusicVolume(float value)
    {
        float linear = normalizedValue * value;
        // TODO(il2cpp): threshold 20f is the raw pseudo literal; verify against the original.
        if (linear < 20f)
        {
            // TODO(il2cpp): MusicManager.musicVolume is at MusicManager +0x20 (dump 422032); MusicManager.cs is still a dummy.
            MusicManager.Instance.musicVolume = linear;
            float decibels = -80f;
            AudioMixer mixer = GameResources.Instance.musicMasterMixerGroup.audioMixer;
            if (linear != 0f)
            {
                decibels = HelperUtilities.LinearToDecibels(linear);
            }
            mixer.SetFloat("musicVolume", decibels);
        }
        PlayerPrefs.SetFloat("musicVolume", linear);
        PlayerPrefs.Save();
    }

    private void SetSoundsVolume(float value)
    {
        float linear = normalizedValue * value;
        // TODO(il2cpp): threshold 20f is the raw pseudo literal; verify against the original.
        if (linear < 20f)
        {
            // SoundEffectManager.soundsVolume is public float at +0x10 (dump 422168).
            SoundEffectManager.Instance.soundsVolume = linear;
            float decibels = -80f;
            AudioMixer mixer = GameResources.Instance.soundsMasterMixerGroup.audioMixer;
            if (linear != 0f)
            {
                decibels = HelperUtilities.LinearToDecibels(linear);
            }
            mixer.SetFloat("soundsVolume", decibels);
        }
        PlayerPrefs.SetFloat("soundsVolume", linear);
        PlayerPrefs.Save();
    }
}
