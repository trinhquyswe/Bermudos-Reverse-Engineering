// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class Weapon : MonoBehaviour
{
	// Fields
	private SpriteRenderer spriteRenderer;
	public PolygonCollider2D polygonCollider2D;
	private List<Vector2> spritePhysicsShapePointsList;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Weapon_Awake) ----
		//   var this:int_ptr;
		//   UnityEngine_BoxCollider2D_set_size_Injected(this[5], 1, 0);
		//   UnityEngine_Rigidbody2D_AddForceAtPosition_Injected(this[5], 1, 0);
	}

	private void Start()
	{
		// ---- decompiled from wasm (Weapon_Start) ----
		//   var this:int_ptr;
		//   if (eqz(6703166[0]:ubyte)) {
		//     f_hpa(5652756);
		//     6703166[0]:byte = 1;
		//   }
		//   if (UnityEngine_Sprite_GetPhysicsShapeCount(
		//         UnityEngine_U2D_Animation_SpriteSkin_GetSpriteBonesTransforms(this[4],
		//                                                                       0),
		//         0,
		//         this[6],
		//         0) >
		//       0) {
		//     UnityEngine_PolygonCollider2D_GetTotalPointCount(
		//       this[5],
		//       multiple_3_System_Collections_Generic_List_1_System_Collections_IList_set_Item(
		//         this[6],
		//         d_p444444444444044P44p44444444[24481]:int),
		//       0)
		//   }
	}

	public void GetWeaponCollider()
	{
		// ---- decompiled from wasm (Weapon_GetWeaponCollider) ----
		//   var this:int_ptr;
		//   if (eqz(6703167[0]:ubyte)) {
		//     f_hpa(5652748);
		//     f_hpa(5607900);
		//     6703167[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[13267]:int);
		//   multiple_System_Collections_Generic_List_1_cctor(
		//     methodInfo,
		//     d_p444444444444044P44p44444444[24479]:int);
		//   this[6] = methodInfo;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Weapon_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703168[0]:ubyte)) {
		//     f_hpa(5667660);
		//     f_hpa(5609516);
		//     f_hpa(5662712);
		//     6703168[0]:byte = 1;
		//   }
		//   var methodInfo:int = (this[4])[75]:int;
		//   var c:int = f_icke(d_p444444444444044P44p44444444[13671]:int);
		//   f_oibd(c, this, d_p444444444444044P44p44444444[28207]:int, 0);
		//   UnityEngine_Events_UnityEvent_1_ctor(
		//     methodInfo,
		//     c,
		//     d_p444444444444044P44p44444444[26970]:int);
	}

}
