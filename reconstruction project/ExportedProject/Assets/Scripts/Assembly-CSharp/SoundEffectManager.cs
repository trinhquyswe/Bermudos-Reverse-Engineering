using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

// Approx: AudioSource and SoundEffect lookups on the pooled component use GetComponent.
// Requires PoolManager.Instance.ReuseComponent (PoolManager.cs is still a dummy and excluded from this batch).
public class SoundEffectManager : SingletonMonobehaviourPersistent<SoundEffectManager>
{
    private List<SoundEffect> soundEffects = new List<SoundEffect>();
    public float soundsVolume = 10f;

    private void Start()
    {
        float linear;
        if (PlayerPrefs.HasKey("soundsVolume"))
        {
            linear = PlayerPrefs.GetFloat("soundsVolume");
            soundsVolume = linear;
        }
        else
        {
            linear = soundsVolume;
        }

        SetSoundsVolume(linear);
    }

    public void PlaySoundEffect(SoundEffectSO soundEffect)
    {
        SoundEffect sfx = SpawnSoundEffect(soundEffect);
        if (sfx == null)
        {
            return;
        }

        sfx.SetSound(soundEffect, false);
        sfx.gameObject.SetActive(true);
        StartCoroutine(DisableSound(sfx, soundEffect.soundEffectClip.length));
    }

    public void PlaySoundEffectPersistent(SoundEffectSO soundEffect, bool isLoop)
    {
        SoundEffect sfx = SpawnSoundEffect(soundEffect);
        if (sfx == null)
        {
            return;
        }

        sfx.SetSound(soundEffect, isLoop);
        sfx.gameObject.SetActive(true);
        soundEffects.Add(sfx);
    }

    private SoundEffect SpawnSoundEffect(SoundEffectSO soundEffect)
    {
        Component pooled = PoolManager.Instance.ReuseComponent(soundEffect.soundPrefab, transform.position, Quaternion.identity);
        if (pooled == null)
        {
            return null;
        }

        return pooled.GetComponent<SoundEffect>();
    }

    // Approx: removes the first matching loop; exact stop call on the AudioSource not recovered.
    public void StopSoundEffectLoop(SoundEffectSO soundEffect)
    {
        foreach (SoundEffect sound in soundEffects)
        {
            if (sound != null && sound.soundEffect == soundEffect)
            {
                sound.gameObject.SetActive(false);
                soundEffects.Remove(sound);
                return;
            }
        }
    }

    private IEnumerator DisableSound(SoundEffect sound, float soundDuration)
    {
        yield return new WaitForSeconds(soundDuration);
        sound.gameObject.SetActive(false);
    }

    public void ChangeSoundsVolume(float soundsVolume)
    {
        if (soundsVolume < 20f)
        {
            this.soundsVolume = soundsVolume;
            SetSoundsVolume(soundsVolume);
        }
    }

    private void SetSoundsVolume(float soundsVolume)
    {
        float db = -80f;
        AudioMixer mixer = GameResources.Instance.soundsMasterMixerGroup.audioMixer;
        if (soundsVolume != 0f)
        {
            db = HelperUtilities.LinearToDecibels(soundsVolume);
        }

        mixer.SetFloat("soundsVolume", db);
    }
}
