// MusicTrackSO.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in MusicTrackSO.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[CreateAssetMenu(fileName = "MusicTrack_", menuName = "ScriptableObjects/Sounds/MusicTrack")]
public class MusicTrackSO : ScriptableObject
{
	// Fields
	public string musicName; // 0xC
	public AudioClip musicClip; // 0x10
	public float musicVolume; // 0x14

	// Methods

	// wasm func86719 -> ram:81a441e9  [MusicTrackSO::.ctor]
	public MusicTrackSO()
	{
			uint uVar1;

			if (cRam0066499c == '\0') {
				unnamed_function_1099(0x567e24);
				cRam0066499c = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e24);
			this.musicClip = uVar1;
			return;
	}
}

