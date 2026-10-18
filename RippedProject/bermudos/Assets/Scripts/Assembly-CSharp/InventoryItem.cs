// InventoryItem.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in InventoryItem.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[Serializable]
public class InventoryItem
{
	// Fields
	public ItemSO itemSO; // 0x8
	public int quantity; // 0xC
	public int inventorySlot; // 0x10
	public int hotbarSlot; // 0x14
	public bool isOnHotBar; // 0x18

	// Methods

	// wasm func86386 -> ram:81a34527  [InventoryItem::.ctor]
	public InventoryItem()
	{
			int iVar1;
			uint uVar2;

			if (cRam006648cd == '\0') {
				unnamed_function_1099(0x559cf4);
				unnamed_function_1099(0x576924);
				cRam006648cd = '\x01';
			}
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar1 + 0x10) = uRam00576924;
			uVar2 = UnityEngine.LayerMask.NameToLayer(iVar1,0);
			Mono.Runtime.cctor(this + 0x14,uVar2,0);
			Item.OnTriggerEnter2D(this,this);
			return;
	}
}

