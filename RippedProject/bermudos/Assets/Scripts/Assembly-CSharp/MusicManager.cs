// MusicManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in MusicManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class MusicManager : SingletonMonobehaviourPersistent<MusicManager>
{
	// Fields
	private AudioSource musicAudioSource; // 0x10
	private AudioClip currentAudioClip; // 0x14
	private Coroutine fadeOutMusicCoroutine; // 0x18
	private Coroutine fadeInMusicCoroutine; // 0x1C
	public float musicVolume; // 0x20
	private bool isPlayingFirstClip; // 0x24

	// Methods

	// wasm func86703 -> ram:81a43b87  [MusicManager::Awake]
	protected override void Awake()
	{
			uint uVar1;
			int iVar2;
			float fVar3;
			uint uVar4;

			if (cRam00664991 == '\0') {
				unnamed_function_1099(0x57c658);
				cRam00664991 = '\x01';
			}
			iVar2 = UnityEngine.PlayerPrefs.GetString_1(uRam0057c658,0);
			if (iVar2 == 0) {
				fVar3 = this.musicVolume;
			}
			else {
				fVar3 = (float)UnityEngine.PlayerPrefs.GetFloat(uRam0057c658,0);
				this.musicVolume = fVar3;
			}
			if (cRam00664997 == '\0') {
				unnamed_function_1099(0x57c658);
				cRam00664997 = '\x01';
			}
			uVar1 = 0xc2a00000;
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			uVar4 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar2 + 0x38),0);
			if (fVar3 != 0.0) {
				uVar1 = HelperUtilities.GetMousePositionInUI(fVar3,0);
			}
			UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar4,uRam0057c658,uVar1,0);
			MusicManager.Start(this,this);
			return;
	}

	// wasm func86580 -> ram:81a3d270  [MusicManager::Start]
	private void Start()
	{
			byte cVar1;
			int iVar2;
			uint uVar3;
			int *piVar4;

			if (cRam00664992 == '\0') {
				unnamed_function_1099(0x576930);
				cRam00664992 = '\x01';
			}
			cVar1 = this.isPlayingFirstClip;
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			if (cVar1 == '\0') {
				uVar3 = *(uint *)(iVar2 + 0x4c);
				if (cRam00664994 == '\0') {
					unnamed_function_1099(0x55e40c);
					cRam00664994 = '\x01';
				}
				iVar2 = unnamed_function_95402(uRam0055e40c);
				*(ulong *)(iVar2 + 0x18) = 0x3f0000003f000000;
				*(uint *)(iVar2 + 0x14) = uVar3;
				*(int *)(iVar2 + 0x10) = this;
				*(uint *)(iVar2 + 8) = 0;
				UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar2,0);
				this.isPlayingFirstClip = 1;
				iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				piVar4 = (int *)(iVar2 + 0x4c);
			}
			else {
				uVar3 = *(uint *)(iVar2 + 0x48);
				if (cRam00664994 == '\0') {
					unnamed_function_1099(0x55e40c);
					cRam00664994 = '\x01';
				}
				iVar2 = unnamed_function_95402(uRam0055e40c);
				*(ulong *)(iVar2 + 0x18) = 0x3f0000003f000000;
				*(uint *)(iVar2 + 0x14) = uVar3;
				*(int *)(iVar2 + 0x10) = this;
				*(uint *)(iVar2 + 8) = 0;
				UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar2,0);
				this.isPlayingFirstClip = 0;
				iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				piVar4 = (int *)(iVar2 + 0x48);
			}
			uVar3 = UnityEngine.AudioClip.ctor(*(uint *)(*piVar4 + 0x10),0);
			UnityEngine.MonoBehaviour.CancelInvoke(this,uRam00576930,uVar3,0);
			return;
	}

	// wasm func86706 -> ram:81a43d01  [MusicManager::PlayBackgroundMusic]
	public void PlayBackgroundMusic()
	{
			if (cRam00664993 == '\0') {
				unnamed_function_1099(0x576910);
				cRam00664993 = '\x01';
			}
			UnityEngine.AudioSource.SetScheduledEndTime(this.musicAudioSource,0);
			UnityEngine.MonoBehaviour.Invoke(this,uRam00576910,0);
			return;
	}

	// wasm func86705 -> ram:81a43ca6  [MusicManager::StopPlayingBackgroundMusic]
	public void StopPlayingBackgroundMusic()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
		uint param_4 = 0; // IL2CPP hidden slot
			int iVar1;

			if (cRam00664994 == '\0') {
				unnamed_function_1099(0x55e40c);
				cRam00664994 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e40c);
			*(uint *)(iVar1 + 0x1c) = param_4;
			*(uint *)(iVar1 + 0x18) = param_3;
			*(uint *)(iVar1 + 0x14) = param_2;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			return;
	}

	// no recovered body in MusicManager.c
	public void PlayMusic(MusicTrackSO musicTrack, float fadeOutTime = 0.5, float fadeInTime = 0.5)
	{
		// <no recovered body>
	}

	// wasm func86708 -> ram:81a43d4b  [MusicManager::StopMusic]
	public void StopMusic()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
		uint param_4 = 0; // IL2CPP hidden slot
			int iVar1;

			if (cRam00664994 == '\0') {
				unnamed_function_1099(0x55e40c);
				cRam00664994 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e40c);
			*(uint *)(iVar1 + 0x1c) = param_4;
			*(uint *)(iVar1 + 0x18) = param_3;
			*(uint *)(iVar1 + 0x14) = param_2;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86709 -> ram:81a43d9d  [MusicManager::PlayMusicRoutine]
	private IEnumerator PlayMusicRoutine(MusicTrackSO musicTrack, float fadeOutTime, float fadeInTime)
	{
			int iVar1;

			if (cRam00664995 == '\0') {
				unnamed_function_1099(0x55e408);
				cRam00664995 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e408);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86710 -> ram:81a43dda  [MusicManager::FadeOutMusic]
	private IEnumerator FadeOutMusic(float fadeOutTime)
	{
		uint param_3 = 0; // IL2CPP hidden slot
			int iVar1;

			if (cRam00664996 == '\0') {
				unnamed_function_1099(0x55e404);
				cRam00664996 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e404);
			*(uint *)(iVar1 + 0x18) = param_3;
			*(uint *)(iVar1 + 0x14) = fadeOutTime;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86697 -> ram:81a437e8  [MusicManager::FadeInMusic]
	private IEnumerator FadeInMusic(MusicTrackSO musicTrack, float fadeInTime)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (musicTrack < 20.0) {
				this.musicVolume = musicTrack;
				if (cRam00664997 == '\0') {
					unnamed_function_1099(0x57c658);
					cRam00664997 = '\x01';
				}
				uVar1 = 0xc2a00000;
				iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				uVar3 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar2 + 0x38),0);
				if (musicTrack != 0.0) {
					uVar1 = HelperUtilities.GetMousePositionInUI(musicTrack,0);
				}
				UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar3,uRam0057c658,uVar1,0);
			}
			return;
	}

	// wasm func86704 -> ram:81a43c43  [MusicManager::ChangeMusicVolume]
	public void ChangeMusicVolume(float musicVolume)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam00664997 == '\0') {
				unnamed_function_1099(0x57c658);
				cRam00664997 = '\x01';
			}
			uVar1 = 0xc2a00000;
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			uVar3 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar2 + 0x38),0);
			if (this != 0.0) {
				uVar1 = HelperUtilities.GetMousePositionInUI(this,0);
			}
			UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar3,uRam0057c658,uVar1,0);
			return;
	}

	// wasm func86711 -> ram:81a43e25  [MusicManager::SetMusicVolume]
	public void SetMusicVolume(float musicVolume)
	{
			if (cRam00664998 == '\0') {
				unnamed_function_1099(0x565d50);
				cRam00664998 = '\x01';
			}
			this.isPlayingFirstClip = 1;
			this.musicVolume = 0x41a00000;
			System.Collections.Generic.ShortEnumEqualityComparer.GetHashCode
								(this,uRam00565d50);
			return;
	}

	// no recovered body in MusicManager.c
	public MusicManager()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86712 -> ram:81a43e66  [MusicManager+<FadeInMusic>d__14::System.IDisposable.Dispose]
	uint MusicManager__FadeInMusic_d__14_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;

			uVar1 = 0;
			if (cRam00664999 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam00664999 = '\x01';
			}
			uVar2 = 0xffffffff;
			if (*(int *)(param_1 + 8) == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				iVar3 = *(int *)(param_1 + 0x10);
				UnityEngine.AudioSource.get_clip
									(*(uint *)(iVar3 + 0x10),*(uint *)(*(int *)(param_1 + 0x14) + 0x10),0);
				UnityEngine.AudioSource.get_volume
									(*(uint *)(iVar3 + 0x10),*(uint *)(*(int *)(param_1 + 0x14) + 0x14),0);
				UnityEngine.AudioSource.set_clip(*(uint *)(iVar3 + 0x10),0);
				iVar3 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				UnityEngine.Audio.AudioMixerSnapshot.get_audioMixer
									(*(uint *)(iVar3 + 0x40),*(uint *)(param_1 + 0x18),0);
				uVar2 = *(uint *)(param_1 + 0x18);
				uVar1 = unnamed_function_95402(uRam0055d134);
				UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,uVar2,0);
				*(uint *)(param_1 + 0xc) = uVar1;
				uVar2 = 1;
				uVar1 = 1;
			}
			else if (*(int *)(param_1 + 8) != 1) {
				return 0;
			}
			*(uint *)(param_1 + 8) = uVar2;
			return uVar1;
	}

	// wasm func86713 -> ram:81a43f2b  [MusicManager+<FadeInMusic>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void MusicManager__FadeInMusic_d__14_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f60c);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86714 -> ram:81a43f53  [MusicManager+<FadeOutMusic>d__13::System.IDisposable.Dispose]
	uint MusicManager__FadeOutMusic_d__13_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;

			uVar1 = 0;
			if (cRam0066499a == '\0') {
				unnamed_function_1099(0x55d134);
				cRam0066499a = '\x01';
			}
			uVar2 = 0xffffffff;
			if (*(int *)(param_1 + 8) == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				iVar3 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				UnityEngine.Audio.AudioMixerSnapshot.get_audioMixer
									(*(uint *)(iVar3 + 0x3c),*(uint *)(param_1 + 0x10),0);
				uVar2 = *(uint *)(param_1 + 0x10);
				uVar1 = unnamed_function_95402(uRam0055d134);
				UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,uVar2,0);
				*(uint *)(param_1 + 0xc) = uVar1;
				uVar2 = 1;
				uVar1 = 1;
			}
			else if (*(int *)(param_1 + 8) != 1) {
				return 0;
			}
			*(uint *)(param_1 + 8) = uVar2;
			return uVar1;
	}

	// wasm func86715 -> ram:81a43fe2  [MusicManager+<FadeOutMusic>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void MusicManager__FadeOutMusic_d__13_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f610);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86716 -> ram:81a4400a  [MusicManager+<PlayMusicRoutine>d__12::System.IDisposable.Dispose]
	uint MusicManager__PlayMusicRoutine_d__12_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			uint uVar6;

			uVar2 = 0;
			if (cRam0066499b == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam0066499b = '\x01';
			}
			iVar3 = *(int *)(param_1 + 0x10);
			uVar1 = 0xffffffff;
			iVar4 = *(int *)(param_1 + 8);
			uVar6 = 3;
			if (iVar4 == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				if (*(int *)(iVar3 + 0x18) != 0) {
					UnityEngine.MonoBehaviour.StopCoroutine(iVar3,*(int *)(iVar3 + 0x18),0);
				}
				if (*(int *)(iVar3 + 0x1c) != 0) {
					UnityEngine.MonoBehaviour.StopCoroutine(iVar3,*(int *)(iVar3 + 0x1c),0);
				}
				uVar1 = *(uint *)(iVar3 + 0x14);
				uVar5 = *(uint *)(*(int *)(param_1 + 0x14) + 0x10);
				uVar2 = 0;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				iVar4 = UnityEngine.Camera.get_targetTexture(uVar5,uVar1,0);
				if (iVar4 != 0) {
					*(uint *)(iVar3 + 0x14) = *(uint *)(*(int *)(param_1 + 0x14) + 0x10);
					uVar2 = *(uint *)(param_1 + 0x18);
					if (cRam00664995 == '\0') {
						unnamed_function_1099(0x55e408);
						cRam00664995 = '\x01';
					}
					iVar4 = unnamed_function_95402(uRam0055e408);
					*(uint *)(iVar4 + 0x10) = uVar2;
					*(uint *)(iVar4 + 8) = 0;
					uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(iVar3,iVar4,0);
					*(uint *)(iVar3 + 0x18) = uVar2;
					uVar6 = 1;
				}
			}
			else if (iVar4 == 1) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				uVar2 = *(uint *)(param_1 + 0x1c);
				uVar6 = *(uint *)(param_1 + 0x14);
				if (cRam00664996 == '\0') {
					unnamed_function_1099(0x55e404);
					cRam00664996 = '\x01';
				}
				iVar4 = unnamed_function_95402(uRam0055e404);
				*(uint *)(iVar4 + 0x18) = uVar2;
				*(uint *)(iVar4 + 0x14) = uVar6;
				*(int *)(iVar4 + 0x10) = iVar3;
				*(uint *)(iVar4 + 8) = 0;
				uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(iVar3,iVar4,0);
				*(uint *)(iVar3 + 0x1c) = uVar2;
				uVar6 = 2;
			}
			else if (iVar4 != 2) {
				if (iVar4 != 3) {
					return 0;
				}
				goto code_r0x81a441a0;
			}
			uVar1 = uVar6;
			*(uint *)(param_1 + 0xc) = uVar2;
			uVar2 = 1;
		code_r0x81a441a0:
			*(uint *)(param_1 + 8) = uVar1;
			return uVar2;
	}

	// wasm func86717 -> ram:81a441ac  [MusicManager+<PlayMusicRoutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void MusicManager__PlayMusicRoutine_d__12_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f614);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86718 -> ram:81a441d3  [MusicManager+<PlayMusicRoutine>d__12::System.Collections.IEnumerator.get_Current]
	void MusicManager__PlayMusicRoutine_d__12_System_Collections_IEnumerator_get_Current(int param_1)
	{
			*(uint *)(param_1 + 0x14) = 0x3f800000;
			UnityEngine.RuntimeInitializeOnLoadMethodAttribute.set_loadType(param_1,0);
			return;
	}
}

