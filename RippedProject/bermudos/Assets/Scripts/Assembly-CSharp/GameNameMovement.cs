// GameNameMovement.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in GameNameMovement.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class GameNameMovement : MonoBehaviour
{
	// Fields
	private RectTransform rectTransform; // 0x10
	public float moveDistance; // 0x14
	public float duration; // 0x18
	public Ease easeType; // 0x1C

	// Methods

	// wasm func86430 -> ram:81a361ff  [GameNameMovement::Awake]
	private void Awake()
	{
			GameNameMovement.OnDestroy(this,this);
			return;
	}

	// wasm func86432 -> ram:81a3630a  [GameNameMovement::Start]
	private void Start()
	{
			uint uVar1;

			if (cRam006648e5 == '\0') {
				unnamed_function_1099(0x55a7d4);
				cRam006648e5 = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// wasm func86431 -> ram:81a3620b  [GameNameMovement::OnDestroy]
	private void OnDestroy()
	{
			int iVar1;
			uint uVar2;
			uint uVar3;
			float fVar4;
			byte[] auStack_8 = new byte[8];

			if (cRam006648e6 == '\0') {
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d340);
				unnamed_function_1099(0x56d37c);
				unnamed_function_1099(0x56f26c);
				unnamed_function_1099(0x55df68);
				cRam006648e6 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055df68);
			*(int *)(iVar1 + 8) = this;
			UnityEngine.RectTransform.set_anchorMax(auStack_8,this.rectTransform,0);
			fVar4 = this.moveDistance;
			*(uint *)(iVar1 + 0x14) = 0;
			*(int *)(iVar1 + 0xc) = auStack_8._0_4_;
			*(float *)(iVar1 + 0x10) = auStack_8._4_4_ - fVar4;
			uVar2 = DG.Tweening.DOTweenModuleUI.DOAnchorPosX
												(this.rectTransform,fVar4 + auStack_8._4_4_,
												 this.duration,0,0);
			uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase
												(uVar2,this.easeType,uRam0056d37c);
			uVar3 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar3,iVar1,uRam0056f26c,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar2,uVar3,uRam0056d340);
			return;
	}

	// wasm func86433 -> ram:81a36356  [GameNameMovement::GameNameAnimation]
	private void GameNameAnimation()
	{
			this.easeType = 4;
			this.moveDistance = 0x3f80000040a00000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in GameNameMovement.c
	public GameNameMovement()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86434 -> ram:81a36377  [GameNameMovement+<>c__DisplayClass7_0::.ctor]
	void GameNameMovement___c__DisplayClass7_0__ctor(int param_1)
	{
			uint uVar1;

			if (cRam006648e7 == '\0') {
				unnamed_function_1099(0x56d37c);
				unnamed_function_1099(0x56d394);
				cRam006648e7 = '\x01';
			}
			uVar1 = DG.Tweening.DOTweenModuleUI.DOAnchorPosX
												(*(uint *)(*(int *)(param_1 + 8) + 0x10),*(uint *)(param_1 + 0x10),
												 *(uint *)(*(int *)(param_1 + 8) + 0x18),0,0);
			uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase
												(uVar1,*(uint *)(*(int *)(param_1 + 8) + 0x1c),uRam0056d37c);
			DG.Tweening.TweenSettingsExtensions.SetLoops(uVar1,0xffffffff,1,uRam0056d394);
			return;
	}

	// wasm func86435 -> ram:81a363e1  [GameNameMovement+<>c__DisplayClass7_0::<GameNameAnimation>b__0]
	void GameNameMovement___c__DisplayClass7_0__GameNameAnimation_b__0(uint param_1)
	{
			uint uVar1;

			if (cRam006648e8 == '\0') {
				unnamed_function_1099(0x557b40);
				unnamed_function_1099(0x56a718);
				cRam006648e8 = '\x01';
			}
			uVar1 = unnamed_function_44644(param_1,0);
			unnamed_function_44686(uVar1,0,0);
			uVar1 = unnamed_function_95402(uRam00557b40);
			unnamed_function_60359(uVar1,param_1,uRam0056a718,0);
			StaticEventHandler.CallMoveItemToHotBarEvent(uVar1,param_1);
			return;
	}
}

