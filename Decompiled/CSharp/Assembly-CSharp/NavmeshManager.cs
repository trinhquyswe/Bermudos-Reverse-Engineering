// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class NavmeshManager : MonoBehaviour
{
	// Fields
	private NavMeshSurface navMeshSurface;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (NavmeshManager_Awake) ----
		//   var this:int;
		//   var c:int;
		//   if (eqz(6703411[0]:ubyte)) {
		//     f_hpa(5601808);
		//     f_hpa(5611444);
		//     f_hpa(5682188);
		//     f_hpa(5682192);
		//     6703411[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = 
		//     f_icke(d_p444444444444044P44p44444444[11744]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31839]:int,
		//     0);
		//   SoundEffectSO_ctor(methodInfo, this);
		//   var d:int = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(d, this, d_p444444444444044P44p44444444[31840]:int, 0);
		//   if (eqz(6703556[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703556[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[10]:int;
		//   loop L_d {
		//     methodInfo = f_iyud(this, d, 0);
		//     if (methodInfo) {
		//       c = d_p444444444444044P44p44444444[14153]:int;
		//       if (c != methodInfo[0]) goto B_c;
		//     }
		//     c = this !=
		//         (methodInfo = 
		//            System_Net_WebOperation_ctor(
		//              (d_p444444444444044P44p44444444[16769]:int)[23]:int + 40,
		//              methodInfo,
		//              this));
		//     this = methodInfo;
		//     if (c) continue L_d;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(methodInfo, c);
		//   unreachable;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (NavmeshManager_OnEnable) ----
		//   var this:int;
		//   var c:int;
		//   if (eqz(6703412[0]:ubyte)) {
		//     f_hpa(5601808);
		//     f_hpa(5611444);
		//     f_hpa(5682188);
		//     f_hpa(5682192);
		//     6703412[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = 
		//     f_icke(d_p444444444444044P44p44444444[11744]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31839]:int,
		//     0);
		//   StaticEventHandler_add_OnMapChanged(methodInfo, this);
		//   var d:int = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(d, this, d_p444444444444044P44p44444444[31840]:int, 0);
		//   if (eqz(6703557[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703557[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[10]:int;
		//   loop L_d {
		//     methodInfo = f_kyud(this, d, 0);
		//     if (methodInfo) {
		//       c = d_p444444444444044P44p44444444[14153]:int;
		//       if (c != methodInfo[0]) goto B_c;
		//     }
		//     c = this !=
		//         (methodInfo = 
		//            System_Net_WebOperation_ctor(
		//              (d_p444444444444044P44p44444444[16769]:int)[23]:int + 40,
		//              methodInfo,
		//              this));
		//     this = methodInfo;
		//     if (c) continue L_d;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(methodInfo, c);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (NavmeshManager_OnDisable) ----
		//   if (eqz(6703413[0]:ubyte)) {
		//     f_hpa(5629020);
		//     6703413[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[18547]:int);
		//   b[4] = a;
		//   b[2] = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
	}

	private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs)
	{
		// <no wasm mapping>
	}

	private IEnumerator BuildNavMeshWhenMapChangedCoroutine()
	{
		// ---- decompiled from wasm (NavmeshManager_BuildNavMeshWhenMapChangedCoroutine) ----
		//   var this:int;
		//   if (eqz(6703414[0]:ubyte)) {
		//     f_hpa(5629024);
		//     6703414[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = 
		//     f_icke(d_p444444444444044P44p44444444[18548]:int);
		//   methodInfo[4] = this;
		//   methodInfo[2] = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
	}

	private void StaticEventHandler_OnRestInBonfire()
	{
		// <no wasm mapping>
	}

	private IEnumerator BuildNavMeshWhenRestCoroutine()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// NavmeshManager_BuildNavMeshWhenMapChangedCoroutine_d_5_System_Collections_Generic_IEnumerator_System(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699168));
	//   unreachable;

	// NavmeshManager_BuildNavMeshWhenRestCoroutine_d_7_System_Collections_Generic_IEnumerator_System_Objec(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699172));
	//   unreachable;

	// NavmeshManager_BuildNavMeshWhenRestCoroutine_d_7_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703415[0]:ubyte)) {
	//     f_hpa(5668644);
	//     f_hpa(5610740);
	//     f_hpa(5728548);
	//     6703415[0]:byte = 1;
	//   }
	//   var methodInfo:int_ptr = Mono_Security_ASN1Convert_ToOid(
	//                              d_p444444444444044P44p44444444[13977]:int,
	//                              1);
	//   methodInfo[4] = d_p444444444444044P44p44444444[43429]:int;
	//   this[4] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
	//   this[5] =
	//     UnityEngine_GameObject_get_activeInHierarchy(
	//       this,
	//       d_p444444444444044P44p44444444[28453]:int);

}
