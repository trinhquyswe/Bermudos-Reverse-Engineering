// InventoryDescription.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in InventoryDescription.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class InventoryDescription : MonoBehaviour
{
	// Fields
	private ItemUI itemUI; // 0x10
	private Image image; // 0x14
	private TextMeshProUGUI titleText; // 0x18
	private TextMeshProUGUI descriptionText; // 0x1C

	// Methods

	// wasm func86362 -> ram:81a32cab  [InventoryDescription::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam006648bf == '\0') {
				unnamed_function_1099(0x557a3c);
				unnamed_function_1099(0x56a774);
				cRam006648bf = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a3c);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a774,0);
			StaticEventHandler.add_OnItemUIClickChanged(uVar1,this);
			return;
	}

	// wasm func86363 -> ram:81a32cfb  [InventoryDescription::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;

			if (cRam006648c0 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam006648c0 = '\x01';
			}
			uVar2 = *(uint *)(param_2 + 8);
			this.itemUI = uVar2;
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar1 = UnityEngine.Camera.get_targetTexture(uVar2,0,0);
			if (iVar1 != 0) {
				uVar2 = unnamed_function_44644(this.image,0);
				unnamed_function_44686(uVar2,1,0);
				unnamed_function_16520
									(this.image,
									 *(uint *)(*(int *)(*(int *)(this.itemUI + 0x20) + 8) + 0x14),0);
				iVar1 = **(int **)(this + 0x18);
				(**(code **)((ulong)*(uint *)(iVar1 + 0x2d0) * 4))
									(*(int **)(this + 0x18),
									 *(uint *)(*(int *)(*(int *)(this.itemUI + 0x20) + 8) + 0xc),
									 *(uint *)(iVar1 + 0x2d4));
				iVar1 = **(int **)(this + 0x1c);
				(**(code **)((ulong)*(uint *)(iVar1 + 0x2d0) * 4))
									(*(int **)(this + 0x1c),
									 *(uint *)(*(int *)(*(int *)(this.itemUI + 0x20) + 8) + 0x18),
									 *(uint *)(iVar1 + 0x2d4));
			}
			return;
	}

	// no recovered body in InventoryDescription.c
	private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
		// <no recovered body>
	}

	// wasm func86330 -> ram:81a30c7f  [InventoryDescription::.ctor]
	public InventoryDescription()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam006648c1 == '\0') {
				unnamed_function_1099(0x569184);
				unnamed_function_1099(0x56931c);
				unnamed_function_1099(0x569384);
				unnamed_function_1099(0x5586b8);
				unnamed_function_1099(0x5586b4);
				unnamed_function_1099(0x56f490);
				unnamed_function_1099(0x56f494);
				unnamed_function_1099(0x55e1b8);
				cRam006648c1 = '\x01';
			}
			uVar1 = this.itemUI;
			if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055e1b8);
			}
			iVar2 = *(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 4);
			if (iVar2 == 0) {
				if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055e1b8);
				}
				uVar3 = **(uint **)(iRam0055e1b8 + 0x5c);
				iVar2 = unnamed_function_95402(uRam005586b4);
				UnityEngine.Rendering.DebugUI.Panel.get_isEditorOnly(iVar2,uVar3,uRam0056f490,0);
				*(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 4) = iVar2;
			}
			uVar1 = UnityEngine.Rendering.ListPool.Get(uVar1,iVar2,uRam00569384);
			if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055e1b8);
			}
			iVar2 = *(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 8);
			if (iVar2 == 0) {
				if (*(int *)(iRam0055e1b8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055e1b8);
				}
				uVar3 = **(uint **)(iRam0055e1b8 + 0x5c);
				iVar2 = unnamed_function_95402(uRam005586b8);
				unnamed_function_74373(iVar2,uVar3,uRam0056f494,0);
				*(int *)(*(int *)(iRam0055e1b8 + 0x5c) + 8) = iVar2;
			}
			uVar1 = unnamed_function_71720(uVar1,iVar2,uRam00569184);
			uVar1 = unnamed_function_71779(uVar1,uRam0056931c);
			return uVar1;
	}
}

