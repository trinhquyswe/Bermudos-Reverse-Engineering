using UnityEngine;

public class SoundEffectSO : ScriptableObject
{
    [Tooltip("The name for the sound effect")]
    [Header("SOUND EFFECT DETAILS")]
    [Space(10)]
    public string soundEffectName;
    [Tooltip("The prefab for the sound effect")]
    public GameObject soundPrefab;
    [Tooltip("The audio clip for the sound effect")]
    public AudioClip soundEffectClip;
    [Range(0, 1)]
    [Tooltip("The sound effect volume.")]
    public float soundEffectVolume = 1f;
    [Range(0, 3)]
    public float soundEffectPitch = 1f;
}
