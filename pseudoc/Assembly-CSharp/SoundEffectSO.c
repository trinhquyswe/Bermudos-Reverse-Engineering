// Assembly-CSharp :: SoundEffectSO
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SoundEffectSO : ScriptableObject // TypeDefIndex: 5719
{
	// Fields
	[Tooltip("The name for the sound effect")]
	[Header("SOUND EFFECT DETAILS")]
	[Space(10)]
	public string soundEffectName; // 0xC
	[Tooltip("The prefab for the sound effect")]
	public GameObject soundPrefab; // 0x10
	[Tooltip("The audio clip for the sound effect")]
	public AudioClip soundEffectClip; // 0x14
	[Range(0, 1)]
	[Tooltip("The sound effect volume.")]
	public float soundEffectVolume; // 0x18
	[Range(0, 3)]
	public float soundEffectPitch; // 0x1C

	// Methods

	// RVA: 0x3A64 Offset: 0x3A64 VA: 0x3A64
	public void .ctor() { }
}

===== C# end =====
*/

// ---- SoundEffectSO$$.ctor ----
// C#: void SoundEffectSO___ctor (SoundEffectSO_o* __this, const MethodInfo* method);

void SoundEffectSO___ctor(SoundEffectSO_o *__this,MethodInfo *method)

{
  __this->soundEffectVolume = 1.0;
  __this->soundEffectPitch = 1.0;
  unnamed_function_44741(__this,0);
  return;
}

