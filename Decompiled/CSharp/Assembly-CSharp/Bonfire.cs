// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class Bonfire : MonoBehaviour
{
	// Fields
	private LayerMask playerLayer;
	private SpriteRenderer icon;
	private SoundEffectSO restSoundEffect;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Bonfire_Awake) ----
		//   var this:int;
		//   if (eqz(6703778[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5666912);
		//     6703778[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[28020]:int, 0);
		//   StaticEventHandler_CallItemChangedEvent(methodInfo, 0);
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (Bonfire_OnEnable) ----
		//   var this:int;
		//   if (eqz(6703779[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5666912);
		//     6703779[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(methodInfo, this, d_p444444444444044P44p44444444[28020]:int, 0);
		//   StaticEventHandler_add_OnPressRestEvent(methodInfo, 0);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (Bonfire_OnDisable) ----
		//   if (((a + 16)[0]:int &
		//        1 <<
		//        UnityEngine_Camera_get_cullingMask(
		//          UnityEngine_Collision2D_get_rigidbody(b, 0),
		//          0)) >
		//       0) {
		//     f_sbnb(f_canb(a[5], 0), 1, 0)
		//   }
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
		// ---- decompiled from wasm (Bonfire_OnCollisionEnter2D) ----
		//   var this:int_ptr;
		//   f_sbnb(f_canb(this[5], 0), 0, 0);
	}

	private void OnCollisionExit2D(Collision2D collision)
	{
		// ---- decompiled from wasm (Bonfire_OnCollisionExit2D) ----
		//   if (eqz(6703780[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703780[0]:byte = 1;
		//   }
		//   if (UnityEngine_GameObject_set_layer(f_canb(a[5], 0), 0)) {
		//     StaticEventHandler_remove_OnRestInBonfire(0);
		//     Bonfire_RestInBonfire(a, a);
		//     b = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//     b = 
		//       ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//     SoundEffectManager_Start(
		//       ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
		//       a[6],
		//       0);
		//   }
	}

	public void RestInBonfire()
	{
		// ---- decompiled from wasm (Bonfire_RestInBonfire) ----
		//   if (eqz(6703781[0]:ubyte)) {
		//     f_hpa(5685680);
		//     f_hpa(5660024);
		//     f_hpa(5733492);
		//     f_hpa(5714812);
		//     6703781[0]:byte = 1;
		//   }
		//   var this:ubyte_ptr = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   this = 
		//     ((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//   Esper_ESave_SaveFile_AddOrUpdateData_5(
		//     Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//       (((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int)[6]:int,
		//       0),
		//     d_p444444444444044P44p44444444[39995]:int,
		//     d_p444444444444044P44p44444444[44665]:int,
		//     d_p444444444444044P44p44444444[32712]:int);
		//   this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   this = 
		//     ((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//   Esper_ESave_SaveFile_SetSetupData(
		//     Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//       (((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int)[6]:int,
		//       0),
		//     0,
		//     0);
		//   this = f_dzjb(d_p444444444444044P44p44444444[44665]:int, 0);
		//   UnityEngine_PlayerPrefs_GetFloat_1(
		//     d_p444444444444044P44p44444444[39995]:int,
		//     this,
		//     0);
		//   UnityEngine_PlayerPrefs_DeleteAll(0);
	}

	private void SaveCheckPointAtBonfire()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Bonfire_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703782[0]:ubyte)) {
		//     f_hpa(5668728);
		//     f_hpa(5668520);
		//     6703782[0]:byte = 1;
		//   }
		//   this[5] = f_irrc(this, d_p444444444444044P44p44444444[28474]:int);
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28422]:int);
	}

}
