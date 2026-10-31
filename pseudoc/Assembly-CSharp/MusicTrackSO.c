// Assembly-CSharp :: MusicTrackSO
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MusicTrackSO : ScriptableObject // TypeDefIndex: 5715
{
	// Fields
	[Tooltip("The name for the music track")]
	[Header("MUSIC TRACK DETAILS")]
	[Space(10)]
	public string musicName; // 0xC
	[Tooltip("The audio clip for the music track")]
	public AudioClip musicClip; // 0x10
	[Tooltip("The volume for the music track")]
	[Range(0, 1)]
	public float musicVolume; // 0x14

	// Methods

	// RVA: 0x3A51 Offset: 0x3A51 VA: 0x3A51
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MusicTrackSO$$.ctor ----
// C#: void MusicTrackSO___ctor (MusicTrackSO_o* __this, const MethodInfo* method);

void MusicTrackSO___ctor(MusicTrackSO_o *__this,MethodInfo *method)

{
  __this->musicVolume = 1.0;
  unnamed_function_44741(__this,0);
  return;
}

