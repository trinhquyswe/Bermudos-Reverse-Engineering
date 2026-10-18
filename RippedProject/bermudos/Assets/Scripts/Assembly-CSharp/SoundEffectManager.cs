// SoundEffectManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in SoundEffectManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class SoundEffectManager : SingletonMonobehaviourPersistent<SoundEffectManager>
{
	// Fields
	public float soundsVolume; // 0x10
	private List<SoundEffect> soundEffects; // 0x14

	// Methods

	// wasm func86391 -> ram:81a349c0  [SoundEffectManager::Start]
	private void Start()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int *piVar1;
			int iVar2;
			uint uVar3;
			uint uVar4;
			int *piVar5;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam0066499f == '\0') {
				unnamed_function_1099(0x565d64);
				unnamed_function_1099(0x55c78c);
				cRam0066499f = '\x01';
			}
			iVar2 = *(int *)(iRam00565d64 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar3 = *(uint *)(param_2 + 0x10);
			uVar4 = **(uint **)(iVar2 + 0x5c);
			if (cRam00664829 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00664829 = '\x01';
			}
			uStack_8 = *(uint *)(*(ulong **)(iRam0055d048 + 0x5c) + 1);
			uStack_10 = **(ulong **)(iRam0055d048 + 0x5c);
			if (cRam006603e8 == '\0') {
				unnamed_function_1099(0x55c148);
				cRam006603e8 = '\x01';
			}
			uStack_18 = uStack_8;
			uStack_20 = uStack_10;
			uStack_28 = (*(ulong **)(iRam0055c148 + 0x5c))[1];
			uStack_30 = **(ulong **)(iRam0055c148 + 0x5c);
			piVar1 = (int *)PoolManager.CreatePool(uVar4,uVar3,&uStack_20,&uStack_30,&uStack_30);
			if (piVar1 != (int *)0x0) {
				if (((uint)*(byte *)(*piVar1 + 0xb8) < (uint)*(byte *)(iRam0055c78c + 0xb8)) ||
					 (*(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iRam0055c78c + 0xb8) * 4 + -4) !=
						iRam0055c78c)) {
					unnamed_function_1116(piVar1,iRam0055c78c);
					do {
						halt_trap();
					} while( true );
				}
			}
			piVar5 = piVar1 + 4;
			UnityEngine.AudioSource.get_volume(*piVar5,*(uint *)(param_2 + 0x18),0);
			UnityEngine.AudioSource.get_clip(*piVar5,*(uint *)(param_2 + 0x14),0);
			UnityEngine.AudioSource.GetPitch(*piVar5,*(uint *)(param_2 + 0x1c),0);
			piVar1[5] = param_2;
			UnityEngine.AudioSource.get_loop(*piVar5,0,0);
			uVar3 = unnamed_function_44644(piVar1,0);
			unnamed_function_44686(uVar3,1,0);
			uVar3 = UnityEngine.AudioClip.ctor(*(uint *)(param_2 + 0x14),0);
			if (cRam006649a2 == '\0') {
				unnamed_function_1099(0x55ea0c);
				cRam006649a2 = '\x01';
			}
			iVar2 = unnamed_function_95402(uRam0055ea0c);
			*(int **)(iVar2 + 0x14) = piVar1;
			*(uint *)(iVar2 + 8) = 0;
			*(uint *)(iVar2 + 0x10) = uVar3;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar2,0);
			return;
	}

	// wasm func86490 -> ram:81a38ecc  [SoundEffectManager::PlaySoundEffect]
	public void PlaySoundEffect(SoundEffectSO soundEffect)
	{
			int iVar1;
			int iVar2;
			uint uVar3;
			int iVar4;
			int *piVar5;
			int iStack_18;
			ulong *puStack_14;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam006649a1 == '\0') {
				unnamed_function_1099(0x5614a0);
				unnamed_function_1099(0x5614a4);
				unnamed_function_1099(0x5614a8);
				unnamed_function_1099(0x563b40);
				unnamed_function_1099(0x563b44);
				unnamed_function_1099(0x55be2c);
				cRam006649a1 = '\x01';
			}
			uStack_8 = 0;
			uStack_10 = 0;
			UnityEngine.ComputeBuffer.Release(&uStack_10,this.soundEffects,uRam00563b40);
			iStack_18 = 0;
			puStack_14 = &uStack_10;
			do {
				iRam005ddf34 = 0;
				iVar1 = import.env.invoke_iii(0x483,&uStack_10,uRam005614a4);
				iVar4 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar4 == 1) {
					uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a39103;
				}
				if (iVar1 == 0) {
					iRam005ddf34 = 0;
					return;
				}
				iVar4 = uStack_8._4_4_;
				uVar3 = *(uint *)(uStack_8._4_4_ + 0x14);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					iRam005ddf34 = 0;
					import.env.invoke_vi(0xfc,iRam0055be2c);
					iVar1 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar1 == 1) {
						uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a39103;
					}
				}
				iRam005ddf34 = 0;
				iVar2 = import.env.invoke_iiii(0x857,uVar3,soundEffect,0);
				iVar1 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar1 == 1) {
					uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a39103;
				}
			} while (iVar2 == 0);
			iRam005ddf34 = 0;
			uVar3 = import.env.invoke_iii(0x883,iVar4,0);
			if (iRam005ddf34 != 1) {
				iRam005ddf34 = 0;
				import.env.invoke_viii(0x1f32,uVar3,0,0);
				if (iRam005ddf34 != 1) {
					iRam005ddf34 = 0;
					import.env.invoke_iiii(0x866,this.soundEffects,iVar4,uRam00563b44);
					iVar4 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar4 != 1) {
						iRam005ddf34 = 0;
						return;
					}
					uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a39103;
				}
			}
			iRam005ddf34 = 0;
			uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a39103:
			iVar4 = import.env.getTempRet0();
			iVar1 = import.env.llvm_eh_typeid_for(0x4a99ec);
			if (iVar4 == iVar1) {
				piVar5 = (int *)import.env.__cxa_begin_catch(uVar3);
				iVar1 = *piVar5;
				iRam005ddf34 = 0;
				iStack_18 = iVar1;
				import.env.invoke_v(0x3a);
				iVar4 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar4 != 1) {
					if (iVar1 == 0) {
						iRam005ddf34 = 0;
						return;
					}
					System.Net.CommandStream.ReceiveCommandResponseCallback(iVar1);
					do {
						halt_trap();
					} while( true );
				}
				uVar3 = import.env.__cxa_find_matching_catch_2();
				import.env.getTempRet0();
			}
			iRam005ddf34 = 0;
			import.env.invoke_ii(0x3665,&iStack_18);
			iVar4 = iRam005ddf34;
			iRam005ddf34 = 0;
			if (iVar4 != 1) {
				import.env.__resumeException(uVar3);
				do {
					halt_trap();
				} while( true );
			}
			import.env.__cxa_find_matching_catch_3(0);
			import.env.getTempRet0();
			unnamed_function_642();
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86488 -> ram:81a38e19  [SoundEffectManager::PlaySoundEffectPersistent]
	public void PlaySoundEffectPersistent(SoundEffectSO soundEffect, bool isLoop)
	{
			if (*this == 0) {
				return this;
			}
			System.Net.CommandStream.ReceiveCommandResponseCallback(*this);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86724 -> ram:81a443db  [SoundEffectManager::StopSoundEffectLoop]
	public void StopSoundEffectLoop(SoundEffectSO soundEffect)
	{
			int iVar1;

			if (cRam006649a2 == '\0') {
				unnamed_function_1099(0x55ea0c);
				cRam006649a2 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ea0c);
			*(uint *)(iVar1 + 0x14) = this;
			*(uint *)(iVar1 + 8) = 0;
			*(uint *)(iVar1 + 0x10) = soundEffect;
			return iVar1;
	}

	// wasm func86699 -> ram:81a43964  [SoundEffectManager::DisableSound]
	private IEnumerator DisableSound(SoundEffect sound, float soundDuration)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (sound < 20.0) {
				this.soundsVolume = sound;
				if (cRam006649a3 == '\0') {
					unnamed_function_1099(0x57d234);
					cRam006649a3 = '\x01';
				}
				uVar1 = 0xc2a00000;
				iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
				uVar3 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar2 + 0x34),0);
				if (sound != 0.0) {
					uVar1 = HelperUtilities.GetMousePositionInUI(sound,0);
				}
				UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar3,uRam0057d234,uVar1,0);
			}
			return;
	}

	// wasm func86723 -> ram:81a44378  [SoundEffectManager::ChangeSoundsVolume]
	public void ChangeSoundsVolume(float soundsVolume)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam006649a3 == '\0') {
				unnamed_function_1099(0x57d234);
				cRam006649a3 = '\x01';
			}
			uVar1 = 0xc2a00000;
			iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(0);
			uVar3 = UnityEngine.Audio.AudioMixer.GetFloat(*(uint *)(iVar2 + 0x34),0);
			if (this != 0.0) {
				uVar1 = HelperUtilities.GetMousePositionInUI(this,0);
			}
			UnityEngine.Audio.AudioMixer.TransitionToSnapshotInternal(uVar3,uRam0057d234,uVar1,0);
			return;
	}

	// wasm func86725 -> ram:81a4441f  [SoundEffectManager::SetSoundsVolume]
	private void SetSoundsVolume(float soundsVolume)
	{
			uint uVar1;

			if (cRam006649a4 == '\0') {
				unnamed_function_1099(0x563b38);
				unnamed_function_1099(0x5590ec);
				unnamed_function_1099(0x565d68);
				cRam006649a4 = '\x01';
			}
			this.soundsVolume = 0x41200000;
			uVar1 = unnamed_function_95402(uRam005590ec);
			System.Collections.Generic.List.cctor(uVar1,uRam00563b38);
			this.soundEffects = uVar1;
			System.Collections.Generic.ShortEnumEqualityComparer.GetHashCode
								(this,uRam00565d68);
			return;
	}

	// no recovered body in SoundEffectManager.c
	public SoundEffectManager()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86726 -> ram:81a44489  [SoundEffectManager+<DisableSound>d__6::System.IDisposable.Dispose]
	uint SoundEffectManager__DisableSound_d__6_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			uint uVar2;

			if (cRam006649a5 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam006649a5 = '\x01';
			}
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					uVar1 = unnamed_function_44644(*(uint *)(param_1 + 0x14),0);
					unnamed_function_44686(uVar1,0,0);
				}
				return 0;
			}
			*(uint *)(param_1 + 8) = 0xffffffff;
			uVar2 = *(uint *)(param_1 + 0x10);
			uVar1 = unnamed_function_95402(uRam0055d134);
			UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,uVar2,0);
			*(uint *)(param_1 + 8) = 1;
			*(uint *)(param_1 + 0xc) = uVar1;
			return 1;
	}

	// wasm func86727 -> ram:81a4450f  [SoundEffectManager+<DisableSound>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void SoundEffectManager__DisableSound_d__6_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56fd68);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86728 -> ram:81a44536  [SoundEffectManager+<DisableSound>d__6::System.Collections.IEnumerator.get_Current]
	void SoundEffectManager__DisableSound_d__6_System_Collections_IEnumerator_get_Current(int param_1)
	{
			*(ulong *)(param_1 + 0x18) = 0x3f8000003f800000;
			UnityEngine.RuntimeInitializeOnLoadMethodAttribute.set_loadType(param_1,0);
			return;
	}
}

