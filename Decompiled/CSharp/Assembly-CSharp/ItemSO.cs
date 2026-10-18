// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[CreateAssetMenu(fileName = "Item_", menuName = "ScriptableObjects/Item")]
public class ItemSO : ScriptableObject
{
	// Fields
	public string itemName;
	public GameObject itemPrefabs;
	public Sprite itemIcon;
	public string itemDescription;
	public float dropRate;
	public ItemType itemType;

	// Methods
	public void .ctor()
	{
		// ---- decompiled from wasm (ItemSO_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703326[0]:ubyte)) {
		//     f_hpa(5668620);
		//     6703326[0]:byte = 1;
		//   }
		//   this[13] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28447]:int);
	}

}
