// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class PoolManager : SingletonMonobehaviourPersistent<PoolManager>
{
	// Fields
	private PoolManager.Pool[] poolArray;
	private Transform objectPoolTransform;
	private Dictionary<int, Queue<Component>> poolDictionary;

	// Methods
	protected override void Awake()
	{
		// ---- decompiled from wasm (PoolManager_Awake) ----
		//   if (eqz(6703442[0]:ubyte)) {
		//     f_hpa(5636112);
		//     f_hpa(5636116);
		//     f_hpa(5636120);
		//     f_hpa(5615440);
		//     f_hpa(5682492);
		//     f_hpa(5619244);
		//     f_hpa(5683644);
		//     f_hpa(5658576);
		//     f_hpa(5658568);
		//     f_hpa(5608860);
		//     f_hpa(5690444);
		//     f_hpa(5623180);
		//     f_hpa(5704808);
		//     6703442[0]:byte = 1;
		//   }
		//   var g:int = 
		//     UnityEngine_U2D_Animation_BufferManager_get_instance(b, 0);
		//   e = Mono_Security_X509_X509Crl_X509CrlEntry_ctor(
		//         UnityEngine_TextCore_Text_FontAsset_LoadFontFace(b, 0),
		//         d_p444444444444044P44p44444444[37494]:int,
		//         0);
		//   var i:int = f_icke(d_p444444444444044P44p44444444[15152]:int);
		//   UnityEngine_GameObject_SendMessage_2(i, e, 0);
		//   multiple_UnityEngine_Transform_get_parentInternal(
		//     UnityEngine_GameObject_AddComponent(i, 0),
		//     a[5],
		//     0);
		//   if (
		//     f_swy(a[6], g, d_p444444444444044P44p44444444[20321]:int)) goto B_b;
		//   e = a[6];
		//   var f:int = f_icke(d_p444444444444044P44p44444444[13507]:int);
		//   multiple_3_System_IO_Enumeration_FileSystemEntry_get_Attributes(
		//     f,
		//     d_p444444444444044P44p44444444[25934]:int);
		//   f_gbld(e, g, f, d_p444444444444044P44p44444444[20320]:int);
		//   if (c <= 0) goto B_b;
		//   e = 0;
		//   loop L_c {
		//     f = UnityEngine_GameObject_AddComponent(i, 0);
		//     var h:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//     if (eqz(h[29])) { f_ahje(h) }
		//     f = UnityEngine_Object_FindObjectsOfType_1(
		//           b,
		//           f,
		//           d_p444444444444044P44p44444444[31915]:int);
		//     f_sbnb(f, 0, 0);
		//     h = f_bzkd(a[6], g, d_p444444444444044P44p44444444[20322]:int);
		//     var j:int_ptr = d_p444444444444044P44p44444444[17087]:int;
		//     if (eqz(j[29])) { f_ahje(j) }
		//     System_IO_Path_Join(
		//       h,
		//       UnityEngine_ExtensionOfNativeClassAttribute_ctor(
		//         f,
		//         f_nqa(d,
		//               d_p444444444444044P44p44444444[33903]:int,
		//               d_p444444444444044P44p44444444[32203]:int),
		//         0),
		//       d_p444444444444044P44p44444444[25936]:int);
		//     e = e + 1;
		//     if (e != c) continue L_c;
		//   }
		//   label B_b:
	}

	private void CreatePool(GameObject prefab, int poolSize, string componentType)
	{
		// <no wasm mapping>
	}

	public Component ReuseComponent(GameObject prefab, Vector3 position, Quaternion rotation)
	{
		// <no wasm mapping>
	}

	private Component GetComponentFromPool(int poolKey)
	{
		// ---- decompiled from wasm (PoolManager_GetComponentFromPool) ----
		//   a = g_a + -64;
		//   g_a = a;
		//   f = System_Linq_Enumerable_Count(d, 0);
		//   a.f = b[2]:int;
		//   a.e = b[0]:long@4;
		//   multiple_UnityEngine_Transform_ctor(f, a + 32, 0);
		//   b = System_Linq_Enumerable_Count(d, 0);
		//   a.d = c[2];
		//   a.c = c[0];
		//   multiple_UnityEngine_Transform_set_forward(b, a + 16, 0);
		//   d = UnityEngine_GameObject_AddComponent(f_canb(d, 0), 0);
		//   UnityEngine_Transform_set_localRotation(
		//     a + 48,
		//     UnityEngine_GameObject_AddComponent(e, 0),
		//     0);
		//   a.b = a.h;
		//   a.a = a.g;
		//   multiple_UnityEngine_Transform_get_localScale(d, a, 0);
		//   g_a = a - -64;
	}

	private void ResetObject(Vector3 position, Quaternion rotation, Component componentToReuse, GameObject prefab)
	{
		// ---- decompiled from wasm (PoolManager_ResetObject) ----
		//   if (eqz(6703445[0]:ubyte)) {
		//     f_hpa(5636108);
		//     f_hpa(5603032);
		//     f_hpa(5659996);
		//     6703445[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[12050]:int);
		//   f_zvy(b, d_p444444444444044P44p44444444[20319]:int);
		//   a[6] = b;
		//   multiple_127_System_Collections_Generic_ShortEnumEqualityComparer_1_GetHashCode(
		//     a,
		//     d_p444444444444044P44p44444444[26291]:int);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (PoolManager_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703446[0]:ubyte)) {
		//     f_hpa(5668376);
		//     f_hpa(5610740);
		//     f_hpa(5718404);
		//     f_hpa(5712544);
		//     f_hpa(5712196);
		//     f_hpa(5728548);
		//     6703446[0]:byte = 1;
		//   }
		//   this[6] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28386]:int);
		//   var methodInfo:int_ptr = Mono_Security_ASN1Convert_ToOid(
		//                              d_p444444444444044P44p44444444[13977]:int,
		//                              1);
		//   methodInfo[4] = d_p444444444444044P44p44444444[40893]:int;
		//   this[7] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
		//   methodInfo = Mono_Security_ASN1Convert_ToOid(
		//                  d_p444444444444044P44p44444444[13977]:int,
		//                  1);
		//   methodInfo[4] = d_p444444444444044P44p44444444[39428]:int;
		//   this[8] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
		//   methodInfo = Mono_Security_ASN1Convert_ToOid(
		//                  d_p444444444444044P44p44444444[13977]:int,
		//                  1);
		//   methodInfo[4] = d_p444444444444044P44p44444444[43429]:int;
		//   this[9] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
		//   methodInfo = Mono_Security_ASN1Convert_ToOid(
		//                  d_p444444444444044P44p44444444[13977]:int,
		//                  1);
		//   methodInfo[4] = d_p444444444444044P44p44444444[39341]:int;
		//   this[10] = UnityEngine_LayerMask_NameToLayer(methodInfo, 0);
	}

}
