// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class ItemDropper : MonoBehaviour
{
	// Fields
	private List<ItemSO> itemSOList;
	private DestroyedEvent destroyedEvent;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (ItemDropper_Awake) ----
		//   var this:int_ptr;
		//   if (eqz(6703323[0]:ubyte)) {
		//     f_hpa(5601988);
		//     f_hpa(5679048);
		//     6703323[0]:byte = 1;
		//   }
		//   var methodInfo:int = this[5];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11789]:int);
		//   f_ofkc(c, this, d_p444444444444044P44p44444444[31054]:int, 0);
		//   Destroyed_Die_d_7_System_Collections_IEnumerator_get_Current(
		//     methodInfo,
		//     c,
		//     0);
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (ItemDropper_OnEnable) ----
		//   var this:int_ptr;
		//   if (eqz(6703324[0]:ubyte)) {
		//     f_hpa(5601988);
		//     f_hpa(5679048);
		//     6703324[0]:byte = 1;
		//   }
		//   var methodInfo:int = this[5];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11789]:int);
		//   f_ofkc(c, this, d_p444444444444044P44p44444444[31054]:int, 0);
		//   DestroyedEvent_add_OnDestroyed(methodInfo, c, 0);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (ItemDropper_OnDisable) ----
		//   if (eqz(c[8])) { ItemDropper_DestroyedEvent_OnDestroyed(a, c) }
	}

	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
	{
		// ---- decompiled from wasm (ItemDropper_DestroyedEvent_OnDestroyed) ----
		//   var e:int;
		//   b = g_a + -64;
		//   g_a = b;
		//   if (eqz(6703325[0]:ubyte)) {
		//     f_hpa(5675708);
		//     f_hpa(5649464);
		//     f_hpa(5649468);
		//     f_hpa(5682504);
		//     f_hpa(5619244);
		//     6703325[0]:byte = 1;
		//   }
		//   var c:int = 
		//     multiple_UnityEngine_PropertyName_ToString(0, (a[4]:int)[3]:int, 0);
		//   c = f_dqi(a[4]:int, c, d_p444444444444044P44p44444444[23659]:int);
		//   var d:int = multiple_UnityEngine_PropertyName_ToString(0, 100, 0);
		//   if (c[7]:float > f32_convert_i32_s(d)) {
		//     d = c[4]:int;
		//     UnityEngine_Camera_get_farClipPlane(
		//       b + 48,
		//       System_Linq_Enumerable_Count(a, 0),
		//       0);
		//     if (eqz(6685672[0]:ubyte)) {
		//       f_hpa(5620040);
		//       6685672[0]:byte = 1;
		//     }
		//     a = b + 40;
		//     a[0]:long =
		//       (e = (d_p444444444444044P44p44444444[16302]:int)[23]:int)[2]:long@4;
		//     b[4]:long = e[0]:long@4;
		//     e = d_p444444444444044P44p44444444[16103]:int;
		//     if (eqz(e[29]:int)) { f_ahje(e) }
		//     b[6]:int = b[14]:int;
		//     b[1]:long = a[0]:long;
		//     b[2]:long = b[6]:long;
		//     b[0]:long = b[4]:long;
		//     UnityEngine_Object_set_name(
		//       f_uuwd(d, b + 16, b, d_p444444444444044P44p44444444[31918]:int),
		//       d_p444444444444044P44p44444444[30219]:int)[6]:int =
		//       c;
		//   }
		//   g_a = b - -64;
	}

	private void DropItemOnDeath()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
