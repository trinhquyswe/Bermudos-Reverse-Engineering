// ItemDropper.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in ItemDropper.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class ItemDropper : MonoBehaviour
{
	// Fields
	private List<ItemSO> itemSOList; // 0x10
	private DestroyedEvent destroyedEvent; // 0x14

	// Methods

	// wasm func86414 -> ram:81a358f2  [ItemDropper::Awake]
	private void Awake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam006648db == '\0') {
				unnamed_function_1099(0x557ac4);
				unnamed_function_1099(0x56a7c8);
				cRam006648db = '\x01';
			}
			uVar2 = this.destroyedEvent;
			uVar1 = unnamed_function_95402(uRam00557ac4);
			unnamed_function_60334(uVar1,this,uRam0056a7c8,0);
			Destroyed__Die_d__7.get_Current(uVar2,uVar1,0);
			return;
	}

	// wasm func86415 -> ram:81a3594c  [ItemDropper::OnEnable]
	private void OnEnable()
	{
			uint uVar1;
			uint uVar2;

			if (cRam006648dc == '\0') {
				unnamed_function_1099(0x557ac4);
				unnamed_function_1099(0x56a7c8);
				cRam006648dc = '\x01';
			}
			uVar2 = this.destroyedEvent;
			uVar1 = unnamed_function_95402(uRam00557ac4);
			unnamed_function_60334(uVar1,this,uRam0056a7c8,0);
			DestroyedEvent.add_OnDestroyed(uVar2,uVar1,0);
			return;
	}

	// wasm func86416 -> ram:81a359a6  [ItemDropper::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			if (*(byte *)(param_2 + 8) == '\0') {
				ItemDropper.DestroyedEvent_OnDestroyed(this,param_2);
			}
			return;
	}

	// wasm func86417 -> ram:81a359bb  [ItemDropper::DestroyedEvent_OnDestroyed]
	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam006648dd == '\0') {
				unnamed_function_1099(0x569abc);
				unnamed_function_1099(0x563438);
				unnamed_function_1099(0x56343c);
				unnamed_function_1099(0x56b548);
				unnamed_function_1099(0x55be2c);
				cRam006648dd = '\x01';
			}
			uVar1 = UnityEngine.PropertyName.ToString
												(0,*(uint *)(this.itemSOList + 0xc),0);
			iVar2 = unnamed_function_6529(this.itemSOList,uVar1,uRam0056343c);
			iVar3 = UnityEngine.PropertyName.ToString(0,100,0);
			if ((float)iVar3 < *(float *)(iVar2 + 0x1c)) {
				uVar4 = *(uint *)(iVar2 + 0x10);
				uVar1 = System.Linq.Enumerable.Count(this,0);
				UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar1,0);
				if (cRam006603e8 == '\0') {
					unnamed_function_1099(0x55c148);
					cRam006603e8 = '\x01';
				}
				uStack_18 = (*(ulong **)(iRam0055c148 + 0x5c))[1];
				uStack_20 = **(ulong **)(iRam0055c148 + 0x5c);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				uStack_28 = uStack_8;
				uStack_38 = uStack_18;
				uStack_30 = uStack_10;
				uStack_40 = uStack_20;
				uVar1 = unnamed_function_86418(uVar4,&uStack_30,&uStack_40,uRam0056b548);
				iVar3 = UnityEngine.Object.set_name(uVar1,uRam00569abc);
				*(int *)(iVar3 + 0x18) = iVar2;
			}
			return;
	}

	// no recovered body in ItemDropper.c
	private void DropItemOnDeath()
	{
		// <no recovered body>
	}

	// no recovered body in ItemDropper.c
	public ItemDropper()
	{
		// <no recovered body>
	}
}

