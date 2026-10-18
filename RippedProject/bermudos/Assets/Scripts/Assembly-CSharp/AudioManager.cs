// AudioManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AudioManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class AudioManager : MonoBehaviour
{
	// Fields
	private Slider musicSlider; // 0x10
	private Slider sfxSlider; // 0x14
	private float normalizedValue; // 0x18

	// Methods

	// wasm func86694 -> ram:81a4368f  [AudioManager::Start]
	private void Start()
	{
			int iVar1;

			if (cRam0066498c == '\0') {
				unnamed_function_1099(0x55d7cc);
				cRam0066498c = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d7cc);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86695 -> ram:81a436cc  [AudioManager::SetVolumeCoroutine]
	private IEnumerator SetVolumeCoroutine()
	{
			this.normalizedValue = 0x41a00000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86696 -> ram:81a436e3  [AudioManager::.ctor]
	public AudioManager()
	{
		float param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			int iVar3;
			float fVar4;

			if (cRam0066498d == '\0') {
				unnamed_function_1099(0x565d58);
				unnamed_function_1099(0x57c658);
				cRam0066498d = '\x01';
			}
			iVar3 = *(int *)(iRam00565d58 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			fVar4 = this.normalizedValue * param_2;
			if (fVar4 < 20.0) {
				*(float *)(**(int **)(iVar3 + 0x5c) + 0x20) = fVar4;
				if (cRam00664997 == '\0') {
					unnamed_function_1099(0x57c658);
					cRam00664997 = '\x01';
				}
				uVar1 = 0xc2a00000;
				iVar3 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				uVar2 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar3 + 0x38),0);
				if (fVar4 != 0.0) {
					uVar1 = HelperUtilities.GetMousePositionInUI(fVar4,0);
				}
				UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar2,uRam0057c658,uVar1,0);
				fVar4 = this.normalizedValue * param_2;
			}
			UnityEngine.PlayerPrefs.GetInt_1(uRam0057c658,fVar4,0);
			UnityEngine.PlayerPrefs.DeleteAll(0);
			return;
	}

	// wasm func86698 -> ram:81a4385f  [AudioManager::<Start>b__3_0]
	private void _Start_b__3_0(float value)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			float fVar4;

			if (cRam0066498e == '\0') {
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x57d234);
				cRam0066498e = '\x01';
			}
			iVar3 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			fVar4 = this.normalizedValue * value;
			if (fVar4 < 20.0) {
				*(float *)(**(int **)(iVar3 + 0x5c) + 0x10) = fVar4;
				if (cRam006649a3 == '\0') {
					unnamed_function_1099(0x57d234);
					cRam006649a3 = '\x01';
				}
				uVar1 = 0xc2a00000;
				iVar3 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				uVar2 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar3 + 0x34),0);
				if (fVar4 != 0.0) {
					uVar1 = HelperUtilities.GetMousePositionInUI(fVar4,0);
				}
				UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar2,uRam0057d234,uVar1,0);
				fVar4 = this.normalizedValue * value;
			}
			UnityEngine.PlayerPrefs.GetInt_1(uRam0057d234,fVar4,0);
			UnityEngine.PlayerPrefs.DeleteAll(0);
			return;
	}

	// no recovered body in AudioManager.c
	private void _Start_b__3_1(float value)
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86700 -> ram:81a439db  [AudioManager+<SetVolumeCoroutine>d__4::System.IDisposable.Dispose]
	uint AudioManager__SetVolumeCoroutine_d__4_System_IDisposable_Dispose(int param_1)
	{
			int iVar1;
			int *piVar2;
			int iVar3;
			int iVar4;

			if (cRam0066498f == '\0') {
				unnamed_function_1099(0x565d58);
				unnamed_function_1099(0x565d6c);
				cRam0066498f = '\x01';
			}
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					iVar1 = *(int *)(param_1 + 0x10);
					*(uint *)(param_1 + 8) = 0xffffffff;
					piVar2 = *(int **)(iVar1 + 0x10);
					iVar3 = *(int *)(iRam00565d58 + 0x10);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					iVar4 = *piVar2;
					(**(code **)((ulong)*(uint *)(iVar4 + 0x238) * 4))
										(piVar2,*(float *)(**(int **)(iVar3 + 0x5c) + 0x20) / *(float *)(iVar1 + 0x18),
										 *(uint *)(iVar4 + 0x23c));
					piVar2 = *(int **)(iVar1 + 0x14);
					iVar3 = *(int *)(iRam00565d6c + 0x10);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
					if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
						iVar3 = System.Threading.Monitor.Enter_1(iVar3);
					}
					iVar4 = *piVar2;
					(**(code **)((ulong)*(uint *)(iVar4 + 0x238) * 4))
										(piVar2,*(float *)(**(int **)(iVar3 + 0x5c) + 0x10) / *(float *)(iVar1 + 0x18),
										 *(uint *)(iVar4 + 0x23c));
				}
				return 0;
			}
			*(ulong *)(param_1 + 8) = 1;
			return 1;
	}

	// wasm func86701 -> ram:81a43b01  [AudioManager+<SetVolumeCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void AudioManager__SetVolumeCoroutine_d__4_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56eacc);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86702 -> ram:81a43b28  [AudioManager+<SetVolumeCoroutine>d__4::System.Collections.IEnumerator.get_Current]
	void AudioManager__SetVolumeCoroutine_d__4_System_Collections_IEnumerator_get_Current(int param_1)
	{
			uint uVar1;
			int iVar2;

			if (cRam00664990 == '\0') {
				unnamed_function_1099(0x567e24);
				unnamed_function_1099(0x565d54);
				cRam00664990 = '\x01';
			}
			SingletonMonobehaviourPersistent_1.ctor(param_1,uRam00565d54);
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567e24);
			*(uint *)(param_1 + 0x10) = uVar1;
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			UnityEngine.Audio.AudioMixerSnapshot.get_audioMixer(*(uint *)(iVar2 + 0x44),0,0);
			return;
	}
}

