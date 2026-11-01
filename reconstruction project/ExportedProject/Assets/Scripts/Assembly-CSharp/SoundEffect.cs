using UnityEngine;

public class SoundEffect : MonoBehaviour
{
    private AudioSource audioSource;
    [HideInInspector]
    public SoundEffectSO soundEffect;

    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }

    private void OnEnable()
    {
        if (audioSource.clip != null)
        {
            audioSource.Play();
        }
    }

    private void OnDisable()
    {
        audioSource.Stop(); // TODO(il2cpp): pseudo stopped undefined musicAudioSource; verify target.
    }

    public void SetSound(SoundEffectSO soundEffect, bool isLoop = false)
    {
        audioSource.volume = soundEffect.soundEffectVolume;
        audioSource.clip = soundEffect.soundEffectClip;
        audioSource.pitch = soundEffect.soundEffectPitch;
        this.soundEffect = soundEffect;
        audioSource.loop = isLoop;
    }
}