// BeamByPlayer.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in BeamByPlayer.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class BeamByPlayer : MonoBehaviour
{
	// Fields
	public GameObject beamPrefab; // 0x10
	public Material beamMaterial; // 0x14
	private Rage rage; // 0x18
	private AnimateEvent animateEvent; // 0x1C
	private Vector3 direction; // 0x20
	private float ragePercent; // 0x2C

	// Methods

	// wasm func86663 -> ram:81a42107  [BeamByPlayer::Awake]
	private void Awake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam0066497b == '\0') {
				unnamed_function_1099(0x557a4c);
				unnamed_function_1099(0x557aa8);
				unnamed_function_1099(0x5676a0);
				unnamed_function_1099(0x5676a4);
				cRam0066497b = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a4c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam005676a4,0);
			Rage.ctor(uVar1,0);
			uVar2 = this.animateEvent;
			uVar1 = unnamed_function_95402(uRam00557aa8);
			unnamed_function_60334(uVar1,this,uRam005676a0,0);
			AnimateEnemy__PlayAttackAnimationCoroutine_d__10.get_Current
								(uVar2,uVar1,0);
			return;
	}

	// wasm func86664 -> ram:81a42198  [BeamByPlayer::OnEnable]
	private void OnEnable()
	{
			uint uVar1;
			uint uVar2;

			if (cRam0066497c == '\0') {
				unnamed_function_1099(0x557a4c);
				unnamed_function_1099(0x557aa8);
				unnamed_function_1099(0x5676a0);
				unnamed_function_1099(0x5676a4);
				cRam0066497c = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a4c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam005676a4,0);
			RageEvent.add_OnRageChanged(uVar1,0);
			uVar2 = this.animateEvent;
			uVar1 = unnamed_function_95402(uRam00557aa8);
			unnamed_function_60334(uVar1,this,uRam005676a0,0);
			AnimateEvent.add_OnAnimate(uVar2,uVar1,0);
			return;
	}

	// wasm func86665 -> ram:81a42229  [BeamByPlayer::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			float fVar2;
			float fVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			ulong uVar7;

			iVar1 = *(int *)(param_2 + 8);
			if (iVar1 == 0) {
				if (cRam0066482b == '\0') {
					unnamed_function_1099(0x55d048);
					cRam0066482b = '\x01';
				}
				uVar7 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0x18);
				*(uint *)(this + 0x28) = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x20);
				this.direction = uVar7;
				return;
			}
			if (iVar1 == 1) {
				if (cRam0066482b == '\0') {
					unnamed_function_1099(0x55d048);
					cRam0066482b = '\x01';
				}
				iVar1 = *(int *)(iRam0055d048 + 0x5c);
				fVar2 = *(float *)(iVar1 + 0x20);
				fVar3 = *(float *)(iVar1 + 0x1c);
				fVar4 = *(float *)(iVar1 + 0x18);
				if (cRam00662ef1 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00662ef1 = '\x01';
					iVar1 = *(int *)(iRam0055d048 + 0x5c);
				}
				fVar5 = *(float *)(iVar1 + 0x3c);
				fVar6 = *(float *)(iVar1 + 0x40);
				*(float *)(this + 0x28) = fVar2 + *(float *)(iVar1 + 0x44);
				*(float *)(this + 0x24) = fVar3 + fVar6;
				this.direction = fVar4 + fVar5;
				return;
			}
			if (iVar1 == 2) {
				if (cRam0066482b == '\0') {
					unnamed_function_1099(0x55d048);
					cRam0066482b = '\x01';
				}
				iVar1 = *(int *)(iRam0055d048 + 0x5c);
				fVar2 = *(float *)(iVar1 + 0x20);
				fVar3 = *(float *)(iVar1 + 0x1c);
				fVar4 = *(float *)(iVar1 + 0x18);
				if (cRam00662ef0 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00662ef0 = '\x01';
					iVar1 = *(int *)(iRam0055d048 + 0x5c);
				}
				fVar5 = *(float *)(iVar1 + 0x30);
				fVar6 = *(float *)(iVar1 + 0x34);
				*(float *)(this + 0x28) = fVar2 + *(float *)(iVar1 + 0x38);
				*(float *)(this + 0x24) = fVar3 + fVar6;
				this.direction = fVar4 + fVar5;
				return;
			}
			if (iVar1 != 3) {
				if (iVar1 == 4) {
					if (cRam00662ef0 == '\0') {
						unnamed_function_1099(0x55d048);
						cRam00662ef0 = '\x01';
					}
					uVar7 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0x30);
					*(uint *)(this + 0x28) = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x38);
					this.direction = uVar7;
					return;
				}
				if (iVar1 != 5) {
					if (iVar1 == 6) {
						if (cRam00662eed == '\0') {
							unnamed_function_1099(0x55d048);
							cRam00662eed = '\x01';
						}
						iVar1 = *(int *)(iRam0055d048 + 0x5c);
						fVar2 = *(float *)(iVar1 + 0x2c);
						fVar3 = *(float *)(iVar1 + 0x28);
						fVar4 = *(float *)(iVar1 + 0x24);
						if (cRam00662ef1 == '\0') {
							unnamed_function_1099(0x55d048);
							cRam00662ef1 = '\x01';
							iVar1 = *(int *)(iRam0055d048 + 0x5c);
						}
						fVar5 = *(float *)(iVar1 + 0x3c);
						fVar6 = *(float *)(iVar1 + 0x40);
						*(float *)(this + 0x28) = fVar2 + *(float *)(iVar1 + 0x44);
						*(float *)(this + 0x24) = fVar3 + fVar6;
						this.direction = fVar4 + fVar5;
					}
					else if (iVar1 == 7) {
						if (cRam00662eed == '\0') {
							unnamed_function_1099(0x55d048);
							cRam00662eed = '\x01';
						}
						iVar1 = *(int *)(iRam0055d048 + 0x5c);
						fVar2 = *(float *)(iVar1 + 0x2c);
						fVar3 = *(float *)(iVar1 + 0x28);
						fVar4 = *(float *)(iVar1 + 0x24);
						if (cRam00662ef0 == '\0') {
							unnamed_function_1099(0x55d048);
							cRam00662ef0 = '\x01';
							iVar1 = *(int *)(iRam0055d048 + 0x5c);
						}
						fVar5 = *(float *)(iVar1 + 0x30);
						fVar6 = *(float *)(iVar1 + 0x34);
						*(float *)(this + 0x28) = fVar2 + *(float *)(iVar1 + 0x38);
						*(float *)(this + 0x24) = fVar3 + fVar6;
						this.direction = fVar4 + fVar5;
						return;
					}
					return;
				}
				if (cRam00662eed == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00662eed = '\x01';
				}
				uVar7 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0x24);
				*(uint *)(this + 0x28) = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x2c);
				this.direction = uVar7;
				return;
			}
			if (cRam00662ef1 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00662ef1 = '\x01';
			}
			uVar7 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0x3c);
			*(uint *)(this + 0x28) = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x44);
			this.direction = uVar7;
			return;
	}

	// wasm func86666 -> ram:81a425c6  [BeamByPlayer::AnimateEvent_OnAnimate]
	private void AnimateEvent_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
	{
			this.ragePercent = *(uint *)(animateEvent + 8);
			return;
	}

	// wasm func86596 -> ram:81a3e94f  [BeamByPlayer::RageEvent_OnRageChanged]
	private void RageEvent_OnRageChanged(RageEventArgs rageEventArgs)
	{
			float fVar1;
			uint uVar2;
			int iVar3;
			uint uVar4;
			ulong uStack_60;
			ulong uStack_58;
			ulong uStack_50;
			float fStack_48;
			ulong uStack_40;
			float fStack_38;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			float fStack_8;

			if (cRam0066497d == '\0') {
				unnamed_function_1099(0x569a58);
				unnamed_function_1099(0x569b08);
				unnamed_function_1099(0x56b548);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x572944);
				cRam0066497d = '\x01';
			}
			if (1.0 <= this.ragePercent) {
				fVar1 = (float)unnamed_function_12077
																 (*(uint *)(this + 0x24),this.direction);
				fStack_38 = (fVar1 * 57.29578 + 90.0) * 0.017453292;
				uStack_40 = 0;
				uStack_10 = 0;
				fStack_8 = fStack_38;
				unnamed_function_8664(&uStack_30,&uStack_40,0);
				uStack_18 = uStack_28;
				uStack_20 = uStack_30;
				uVar4 = this.beamPrefab;
				uVar2 = System.Linq.Enumerable.Count(this,0);
				UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar2,0);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				fStack_48 = fStack_8;
				uStack_58 = uStack_18;
				uStack_50 = uStack_10;
				uStack_60 = uStack_20;
				uVar2 = unnamed_function_86418(uVar4,&uStack_50,&uStack_60,uRam0056b548);
				uVar4 = UnityEngine.LayerMask.LayerToName(uRam00572944,0);
				UnityEngine.GameObject.get_transform(uVar2,uVar4,0);
				iVar3 = UnityEngine.Object.set_name(uVar2,uRam00569a58);
				*(uint *)(iVar3 + 0x2c) = 0x41200000;
				uVar2 = UnityEngine.Object.set_name(uVar2,uRam00569b08);
				UnityEngine.Renderer.GetSharedMaterial(uVar2,this.beamMaterial,0);
				iVar3 = this.rage;
				*(uint *)(iVar3 + 0x14) = 0;
				RageEvent.remove_OnRageChanged(0,0,*(uint *)(iVar3 + 0x10),0);
			}
			return;
	}

	// no recovered body in BeamByPlayer.c
	public void Beam()
	{
		// <no recovered body>
	}

	// wasm func86667 -> ram:81a425d3  [BeamByPlayer::.ctor]
	public BeamByPlayer()
	{
			uint uVar1;

			if (cRam0066497e == '\0') {
				unnamed_function_1099(0x567ef0);
				cRam0066497e = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ef0);
			this.beamPrefab = uVar1;
			return;
	}
}

