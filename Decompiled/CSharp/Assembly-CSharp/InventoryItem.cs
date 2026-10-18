// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[Serializable]
public class InventoryItem
{
	// Fields
	public ItemSO itemSO;
	public int quantity;
	public int inventorySlot;
	public int hotbarSlot;
	public bool isOnHotBar;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (InventoryItem_ctor) ----
		//   var this:int;
		//   if (eqz(6703309[0]:ubyte)) {
		//     f_hpa(5610740);
		//     f_hpa(5728548);
		//     6703309[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = Mono_Security_ASN1Convert_ToOid(
		//                              d_p444444444444044P44p44444444[13977]:int,
		//                              1);
		//   methodInfo[4] = d_p444444444444044P44p44444444[43429]:int;
		//   multiple_89_Mono_Runtime_cctor(
		//     this + 20,
		//     UnityEngine_LayerMask_NameToLayer(methodInfo, 0),
		//     0);
		//   Item_OnTriggerEnter2D(this, this);
	}

}
