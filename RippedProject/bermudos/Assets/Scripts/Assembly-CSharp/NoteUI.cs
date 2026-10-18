// NoteUI.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in NoteUI.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class NoteUI : MonoBehaviour
{
	// Fields
	private TextMeshProUGUI textMeshPro; // 0x10
	private Image Image; // 0x14

	// Methods

	// no recovered body in NoteUI.c
	private void Awake()
	{
		// <no recovered body>
	}

	// wasm func86563 -> ram:81a3c12f  [NoteUI::Start]
	private void Start()
	{
			ulong uVar1;
			uint uVar2;
			int iVar3;
			int *piVar4;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam0066493b == '\0') {
				unnamed_function_1099(0x56d374);
				cRam0066493b = '\x01';
			}
			uStack_8 = 0x3f800000;
			uStack_10 = 0x3f8000003f800000;
			iVar3 = **(int **)(this + 0x14);
			uStack_18 = 0x3f800000;
			uStack_20 = 0x3f8000003f800000;
			(**(code **)((ulong)*(uint *)(iVar3 + 0x178) * 4))
								(*(int **)(this + 0x14),&uStack_20,*(uint *)(iVar3 + 0x17c));
			piVar4 = *(int **)(this + 0x10);
			(**(code **)((ulong)*(uint *)(*piVar4 + 0x170) * 4))
								(&uStack_10,piVar4,*(uint *)(*piVar4 + 0x174));
			uVar2 = (uint)uStack_10;
			iVar3 = **(int **)(this + 0x10);
			(**(code **)((ulong)*(uint *)(iVar3 + 0x170) * 4))
								(&uStack_10,*(int **)(this + 0x10),*(uint *)(iVar3 + 0x174));
			uVar1 = uStack_10;
			iVar3 = **(int **)(this + 0x10);
			(**(code **)((ulong)*(uint *)(iVar3 + 0x170) * 4))
								(&uStack_10,*(int **)(this + 0x10),*(uint *)(iVar3 + 0x174));
			uStack_8 = uStack_8 & 0xffffffff;
			uStack_30 = CONCAT44((int)((ulong)uVar1 >> 0x20),uVar2);
			uStack_28 = uStack_8;
			uStack_10 = uStack_30;
			(**(code **)((ulong)*(uint *)(*piVar4 + 0x178) * 4))
								(piVar4,&uStack_30,*(uint *)(*piVar4 + 0x17c));
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor_1
												(this.Image,0x3f800000,0x3f800000,0);
			DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,4,uRam0056d374);
			uVar2 = DG.Tweening.DOTweenModuleUI.DOColor
												(this.textMeshPro,0x3f800000,0x3f800000,0);
			DG.Tweening.TweenSettingsExtensions.SetEase(uVar2,4,uRam0056d374);
			return;
	}

	// wasm func86564 -> ram:81a3c2d1  [NoteUI::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam0066493c == '\0') {
				unnamed_function_1099(0x557a40);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56b4a0);
				cRam0066493c = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.KillAll_1(uVar1,0,0);
			uVar1 = unnamed_function_95402(uRam00557a40);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056b4a0,0);
			StaticEventHandler.add_OnNoteOpened(uVar1,this);
			return;
	}

	// wasm func86566 -> ram:81a3c3eb  [NoteUI::OnDestroy]
	private void OnDestroy()
	{
		int param_2 = 0; // IL2CPP hidden slot
			byte cVar1;
			uint uVar2;
			int iVar3;

			cVar1 = *(byte *)(param_2 + 8);
			uVar2 = unnamed_function_44644(this,0);
			if (cVar1 == '\0') {
				unnamed_function_44686(uVar2,0,0);
				return;
			}
			unnamed_function_44686(uVar2,1,0);
			iVar3 = **(int **)(this + 0x10);
			(**(code **)((ulong)*(uint *)(iVar3 + 0x2d0) * 4))
								(*(int **)(this + 0x10),*(uint *)(param_2 + 0xc),*(uint *)(iVar3 + 0x2d4)
								);
			return;
	}

	// no recovered body in NoteUI.c
	private void OnNoteOpened(OnNoteOpenedEventArgs onNoteOpenedEventArgs)
	{
		// <no recovered body>
	}

	// wasm func86567 -> ram:81a3c43c  [NoteUI::.ctor]
	public NoteUI()
	{
			uint uVar1;

			if (cRam0066493d == '\0') {
				unnamed_function_1099(0x567e14);
				unnamed_function_1099(0x567e18);
				unnamed_function_1099(0x567e20);
				unnamed_function_1099(0x567e28);
				unnamed_function_1099(0x567e60);
				unnamed_function_1099(0x567e64);
				unnamed_function_1099(0x567e70);
				unnamed_function_1099(0x567e74);
				unnamed_function_1099(0x567e9c);
				unnamed_function_1099(0x567ea4);
				unnamed_function_1099(0x567eb4);
				unnamed_function_1099(0x567ed4);
				unnamed_function_1099(0x567ed8);
				unnamed_function_1099(0x567ef4);
				unnamed_function_1099(0x567f00);
				unnamed_function_1099(0x567f2c);
				unnamed_function_1099(0x567f28);
				cRam0066493d = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ed4);
			this.textMeshPro = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ed8);
			this.Image = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ea4);
			*(uint *)(this + 0x1c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e14);
			*(uint *)(this + 0x20) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e20);
			*(uint *)(this + 0x24) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e64);
			*(uint *)(this + 0x28) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e9c);
			*(uint *)(this + 0x2c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e70);
			*(uint *)(this + 0x30) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e28);
			*(uint *)(this + 0x34) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e60);
			*(uint *)(this + 0x38) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f2c);
			*(uint *)(this + 0x3c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f28);
			*(uint *)(this + 0x40) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e18);
			*(uint *)(this + 0x44) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ef4);
			*(uint *)(this + 0x48) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f00);
			*(uint *)(this + 0x4c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567eb4);
			*(uint *)(this + 0x50) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e74);
			*(uint *)(this + 0x54) = uVar1;
			return;
	}
}

