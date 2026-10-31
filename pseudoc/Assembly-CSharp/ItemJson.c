// Assembly-CSharp :: ItemJson
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ItemJson // TypeDefIndex: 5649
{
	// Fields
	public int quantity; // 0x8
	public int inventorySlot; // 0xC
	public int hotbarSlot; // 0x10
	public bool isOnHotBar; // 0x14

	// Methods

	// RVA: 0x38E7 Offset: 0x38E7 VA: 0x38E7
	public void .ctor(int quantity, int inventorySlot, int hotbarSlot, bool isOnHotBar) { }
}

===== C# end =====
*/

// ---- ItemJson$$.ctor ----
// C#: void ItemJson___ctor (ItemJson_o* __this, int32_t quantity, int32_t inventorySlot, int32_t hotbarSlot, bool isOnHotBar, const MethodInfo* method);

void ItemJson___ctor(ItemJson_o *__this,int quantity,int inventorySlot,int hotbarSlot,
                    bool isOnHotBar,MethodInfo *method)

{
  __this->isOnHotBar = isOnHotBar;
  __this->hotbarSlot = hotbarSlot;
  __this->inventorySlot = inventorySlot;
  __this->quantity = quantity;
  return;
}

