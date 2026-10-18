// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class InventoryDescription : MonoBehaviour
{
	// Fields
	private ItemUI itemUI;
	private Image image;
	private TextMeshProUGUI titleText;
	private TextMeshProUGUI descriptionText;

	// Methods
	private void OnEnable()
	{
		// ---- decompiled from wasm (InventoryDescription_OnEnable) ----
		//   var this:int;
		//   if (eqz(6703295[0]:ubyte)) {
		//     f_hpa(5601852);
		//     f_hpa(5678964);
		//     6703295[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11755]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31033]:int,
		//     0);
		//   StaticEventHandler_add_OnItemUIClickChanged(methodInfo, this);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (InventoryDescription_OnDisable) ----
		//   if (eqz(6703296[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703296[0]:byte = 1;
		//   }
		//   a[4] = (b = b[2]);
		//   c = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(c[29])) { f_ahje(c) }
		//   if (UnityEngine_Camera_get_targetTexture(b, 0, 0)) {
		//     f_sbnb(f_canb(a[5], 0), 1, 0);
		//     f_kkx(a[5], (((a[4])[8]:int)[2]:int)[5]:int, 0);
		//     b = a[6];
		//     call_indirect(b, (((a[4])[8]:int)[2]:int)[3]:int, (b = b[0])[181], b[180]);
		//     b = a[7];
		//     call_indirect(b, (((a[4])[8]:int)[2]:int)[6]:int, (a = b[0])[181], a[180]);
		//   }
	}

	private void StaticEventHandler_OnItemUIClickChanged(OnItemUIChangedEventArgs onItemUIChangedEventArgs)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
