using UnityEngine;

public class MusicTrackSO : ScriptableObject
{
    [Tooltip("The name for the music track")]
    [Header("MUSIC TRACK DETAILS")]
    [Space(10)]
    public string musicName;
    [Tooltip("The audio clip for the music track")]
    public AudioClip musicClip;
    [Tooltip("The volume for the music track")]
    [Range(0, 1)]
    public float musicVolume = 1f;
}
