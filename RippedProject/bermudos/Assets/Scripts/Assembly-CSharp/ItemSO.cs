// ItemSO.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in ItemSO.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[CreateAssetMenu(fileName = "Item_", menuName = "ScriptableObjects/Item")]
public class ItemSO : ScriptableObject
{
	// Fields
	public string itemName; // 0xC
	public GameObject itemPrefabs; // 0x10
	public Sprite itemIcon; // 0x14
	public string itemDescription; // 0x18
	public float dropRate; // 0x1C
	public ItemType itemType; // 0x20

	// Methods

	// wasm func86419 -> ram:81a35b5e  [ItemSO::.ctor]
	public ItemSO()
	{
			uint uVar1;

			if (cRam006648de == '\0') {
				unnamed_function_1099(0x567f0c);
				cRam006648de = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f0c);
			*(uint *)(this + 0x34) = uVar1;
			return;
	}
}

