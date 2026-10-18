// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class DropdownSample : MonoBehaviour
{
	// Fields
	private TextMeshProUGUI text;
	private TMP_Dropdown dropdownWithoutPlaceholder;
	private TMP_Dropdown dropdownWithPlaceholder;

	// Methods
	public void OnButtonClick()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (DropdownSample_ctor) ----
		//   var this:int_ptr;
		//   var methodInfo:int_ptr;
		//   if (eqz(6703172[0]:ubyte)) {
		//     f_hpa(5668668);
		//     6703172[0]:byte = 1;
		//   }
		//   this[7] =
		//     (methodInfo = UnityEngine_GameObject_get_activeInHierarchy(
		//                     this,
		//                     d_p444444444444044P44p44444444[28459]:int));
		//   this[8] =
		//     call_indirect(methodInfo, (this = methodInfo[0])[183], this[182]);
	}

}
