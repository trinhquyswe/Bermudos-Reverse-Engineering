// SoundEffect.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in SoundEffect.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
[RequireComponent(typeof(AudioSource))]
public class SoundEffect : MonoBehaviour
{
	// Fields
	private AudioSource audioSource; // 0x10
	public SoundEffectSO soundEffect; // 0x14

	// Methods

	// wasm func86720 -> ram:81a4421d  [SoundEffect::Awake]
	private void Awake()
	{
			uint uVar1;
			int iVar2;

			if (cRam0066499d == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam0066499d = '\x01';
			}
			uVar1 = UnityEngine.AudioSource.get_timeSamples(this.audioSource,0);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar2 = UnityEngine.Camera.get_targetTexture(uVar1,0,0);
			if (iVar2 != 0) {
				UnityEngine.AudioSource.set_clip(this.audioSource,0);
			}
			return;
	}

	// no recovered body in SoundEffect.c
	private void OnEnable()
	{
		// <no recovered body>
	}

	// wasm func86721 -> ram:81a4427c  [SoundEffect::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
			UnityEngine.AudioSource.get_volume
								(this.audioSource,*(uint *)(param_2 + 0x18),0);
			UnityEngine.AudioSource.get_clip
								(this.audioSource,*(uint *)(param_2 + 0x14),0);
			UnityEngine.AudioSource.GetPitch
								(this.audioSource,*(uint *)(param_2 + 0x1c),0);
			this.soundEffect = param_2;
			UnityEngine.AudioSource.get_loop(this.audioSource,param_3,0);
			return;
	}

	// no recovered body in SoundEffect.c
	public void SetSound(SoundEffectSO soundEffect, bool isLoop = False)
	{
		// <no recovered body>
	}

	// wasm func86722 -> ram:81a442c4  [SoundEffect::.ctor]
	public SoundEffect()
	{
			uint uVar1;
			int iVar2;
			float fVar3;
			uint uVar4;

			if (cRam0066499e == '\0') {
				unnamed_function_1099(0x57d234);
				cRam0066499e = '\x01';
			}
			iVar2 = UnityEngine.PlayerPrefs.GetString_1(uRam0057d234,0);
			if (iVar2 == 0) {
				fVar3 = this.audioSource;
			}
			else {
				fVar3 = (float)UnityEngine.PlayerPrefs.GetFloat(uRam0057d234,0);
				this.audioSource = fVar3;
			}
			if (cRam006649a3 == '\0') {
				unnamed_function_1099(0x57d234);
				cRam006649a3 = '\x01';
			}
			uVar1 = 0xc2a00000;
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			uVar4 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar2 + 0x34),0);
			if (fVar3 != 0.0) {
				uVar1 = HelperUtilities.GetMousePositionInUI(fVar3,0);
			}
			UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar4,uRam0057d234,uVar1,0);
			return;
	}
}

