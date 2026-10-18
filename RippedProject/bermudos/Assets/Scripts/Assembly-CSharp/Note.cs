// Note.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Note.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class Note : MonoBehaviour
{
	// Fields
	private LayerMask playerLayer; // 0x10
	private SpriteRenderer spriteRenderer; // 0x14
	public string noteText; // 0x18

	// Methods

	// wasm func86556 -> ram:81a3bdc5  [Note::Awake]
	private void Awake()
	{
			uint uVar1;

			if (cRam00664938 == '\0') {
				unnamed_function_1099(0x56d374);
				unnamed_function_1099(0x56d390);
				cRam00664938 = '\x01';
			}
			uVar1 = DG.Tweening.DOTweenModuleSprite.DOColor
												(this.spriteRenderer,0x3e99999a,0x3fc00000,0);
			uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase(uVar1,4,uRam0056d374);
			DG.Tweening.TweenSettingsExtensions.SetLoops(uVar1,0xffffffff,1,uRam0056d390);
			return;
	}

	// wasm func86557 -> ram:81a3be23  [Note::Start]
	private void Start()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			int iVar3;
			uint uVar4;
			int iVar5;

			uVar4 = this.playerLayer;
			uVar1 = UnityEngine.Collision2D.get_rigidbody(param_2,0);
			uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			if (0 < (int)(uVar4 & 1 << (uVar2 & 0x1f))) {
				uVar1 = this.noteText;
				if (cRam006649ae == '\0') {
					unnamed_function_1099(0x55bea8);
					unnamed_function_1099(0x55c894);
					cRam006649ae = '\x01';
				}
				iVar5 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 8);
				if (iVar5 != 0) {
					iVar3 = unnamed_function_95402(uRam0055bea8);
					OnBuildNavMeshEventArgs.ctor(iVar3,0);
					*(uint *)(iVar3 + 0xc) = uVar1;
					*(byte *)(iVar3 + 8) = 1;
					(**(code **)((ulong)*(uint *)(iVar5 + 0xc) * 4))
										(*(uint *)(iVar5 + 0x20),iVar3,*(uint *)(iVar5 + 0x14));
				}
			}
			return;
	}

	// wasm func86559 -> ram:81a3bf2e  [Note::OnCollisionStay2D]
	private void OnCollisionStay2D(Collision2D collision)
	{
			uint uVar1;

			if (cRam00664939 == '\0') {
				unnamed_function_1099(0x55a7d4);
				cRam00664939 = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			return;
	}

	// wasm func86560 -> ram:81a3bf7b  [Note::OnDestroy]
	private void OnDestroy()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			int iVar3;
			uint uVar4;
			int iVar5;

			uVar4 = this.playerLayer;
			uVar1 = UnityEngine.Collision2D.get_rigidbody(param_2,0);
			uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			if (0 < (int)(uVar4 & 1 << (uVar2 & 0x1f))) {
				uVar1 = this.noteText;
				if (cRam006649ae == '\0') {
					unnamed_function_1099(0x55bea8);
					unnamed_function_1099(0x55c894);
					cRam006649ae = '\x01';
				}
				iVar5 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 8);
				if (iVar5 != 0) {
					iVar3 = unnamed_function_95402(uRam0055bea8);
					OnBuildNavMeshEventArgs.ctor(iVar3,0);
					*(uint *)(iVar3 + 0xc) = uVar1;
					*(byte *)(iVar3 + 8) = 0;
					(**(code **)((ulong)*(uint *)(iVar5 + 0xc) * 4))
										(*(uint *)(iVar5 + 0x20),iVar3,*(uint *)(iVar5 + 0x14));
				}
			}
			return;
	}

	// no recovered body in Note.c
	private void OnCollisionExit2D(Collision2D collision)
	{
		// <no recovered body>
	}

	// wasm func86561 -> ram:81a3c013  [Note::.ctor]
	public Note()
	{
			uint uVar1;

			if (cRam0066493a == '\0') {
				unnamed_function_1099(0x557a40);
				unnamed_function_1099(0x567f78);
				unnamed_function_1099(0x567ea8);
				unnamed_function_1099(0x56b4a0);
				cRam0066493a = '\x01';
			}
			uVar1 = unnamed_function_65372(this,uRam00567f78);
			this.playerLayer = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ea8);
			this.spriteRenderer = uVar1;
			uVar1 = unnamed_function_95402(uRam00557a40);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056b4a0,0);
			StaticEventHandler.CallMapTransitionEvent(uVar1,this);
			return;
	}
}

