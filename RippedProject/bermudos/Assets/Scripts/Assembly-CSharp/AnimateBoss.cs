// AnimateBoss.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AnimateBoss.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class AnimateBoss : MonoBehaviour
{
	// Fields
	private Boss boss; // 0x10

	// Methods

	// wasm func86852 -> ram:81a4793a  [AnimateBoss::Awake]
	private void Awake()
	{
			float fVar1;
			float fVar2;
			float fVar3;
			uint uVar4;
			int iVar5;
			ulong uStack_30;
			float fStack_28;
			float fStack_20;
			float fStack_1c;
			float fStack_18;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			if (cRam00664a6f == '\0') {
				unnamed_function_1099(0x565d78);
				cRam00664a6f = '\x01';
			}
			iVar5 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			uVar4 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar5 + 0x5c) + 0x10),0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar4,0);
			fVar3 = fStack_8;
			fVar2 = fStack_c;
			fVar1 = fStack_10;
			uVar4 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar4,0);
			fStack_28 = fVar3 - fStack_8;
			fStack_1c = fVar2 - fStack_c;
			fStack_20 = fVar1 - fStack_10;
			uStack_30 = CONCAT44(fStack_1c,fStack_20);
			fStack_18 = fStack_28;
			AnimateBoss.InitializeAimDirection(this,&uStack_30,&uStack_30);
			return;
	}

	// wasm func86854 -> ram:81a47bdb  [AnimateBoss::Update]
	public void Update()
	{
			uint uVar1;

			if (cRam00664a70 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a70 = '\x01';
			}
			uVar1 = *(uint *)(this.boss + 0x24);
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.GetBool_1
								(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x10),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.boss + 0x24),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x18),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.boss + 0x24),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x28),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.boss + 0x24),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x24),0,0);
			return;
	}

	// wasm func86853 -> ram:81a47a38  [AnimateBoss::InitializeAimDirection]
	public void InitializeAimDirection()
	{
		ulong * param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			float fVar3;
			uint uVar4;
			int iVar5;
			ulong uStack_10;
			uint uStack_8;

			uVar2 = 0;
			if (cRam00664a71 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a71 = '\x01';
			}
			uStack_8 = *(uint *)(param_2 + 1);
			uStack_10 = *param_2;
			fVar3 = (float)unnamed_function_86160(&uStack_10,0);
			if ((fVar3 <= 45.0) || (135.0 < fVar3)) {
				if ((fVar3 <= 180.0 && 135.0 < fVar3) || ((-180.0 < fVar3 && (fVar3 <= -155.0)))) {
					AnimateBoss.Update(this,&uStack_10);
					uVar4 = *(uint *)(this.boss + 0x24);
					uVar2 = 4;
					iVar1 = 0x28;
					iVar5 = *(int *)(iRam0055c620 + 0x74);
				}
				else if ((fVar3 <= -155.0) || (-45.0 < fVar3)) {
					if (fVar3 <= -45.0) {
						return 8;
					}
					if (45.0 < fVar3) {
						return 8;
					}
					AnimateBoss.Update(this,&uStack_10);
					uVar4 = *(uint *)(this.boss + 0x24);
					uVar2 = 3;
					iVar1 = 0x24;
					iVar5 = *(int *)(iRam0055c620 + 0x74);
				}
				else {
					AnimateBoss.Update(this,&uStack_10);
					uVar4 = *(uint *)(this.boss + 0x24);
					uVar2 = 5;
					iVar1 = 0x18;
					iVar5 = *(int *)(iRam0055c620 + 0x74);
				}
			}
			else {
				AnimateBoss.Update(this,&uStack_10);
				uVar4 = *(uint *)(this.boss + 0x24);
				iVar1 = 0x10;
				iVar5 = *(int *)(iRam0055c620 + 0x74);
			}
			if (iVar5 == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.SetTrigger
								(uVar4,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + iVar1),0);
			return uVar2;
	}

	// no recovered body in AnimateBoss.c
	public AimDirection SetAimDirection(Vector3 direction)
	{
		// <no recovered body>
	}

	// wasm func86855 -> ram:81a47c8d  [AnimateBoss::.ctor]
	public AnimateBoss()
	{
			uint uVar1;

			if (cRam00664a72 == '\0') {
				unnamed_function_1099(0x567e78);
				cRam00664a72 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e78);
			this.boss = uVar1;
			return;
	}
}

