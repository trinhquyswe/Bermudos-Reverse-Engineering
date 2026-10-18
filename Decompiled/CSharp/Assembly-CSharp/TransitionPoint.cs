// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class TransitionPoint : MonoBehaviour
{
	// Fields
	private TransitionPointDetailsSO TransitionPointDetailsSO;
	private bool isCollider;
	private WaitForSeconds waitForSeconds;

	// Methods
	private void OnTriggerEnter2D(Collider2D collision)
	{
		// <no wasm mapping>
	}

	private IEnumerator MapTransitionCoroutine(Collider2D collision)
	{
		// ---- decompiled from wasm (TransitionPoint_MapTransitionCoroutine) ----
		//   if (eqz(6703382[0]:ubyte)) {
		//     f_hpa(5620984);
		//     f_hpa(5660024);
		//     f_hpa(5690092);
		//     f_hpa(5609548);
		//     f_hpa(5726944);
		//     6703382[0]:byte = 1;
		//   }
		//   if (multiple_System_String_Equals(
		//         (a[4])[4]:int,
		//         d_p444444444444044P44p44444444[43028]:int,
		//         0)) {
		//     b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//     b = 
		//       ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//     GameManager_TransitionToGame(
		//       ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
		//       4,
		//       0);
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[13679]:int);
		//   f_yibd(b, a, d_p444444444444044P44p44444444[33815]:int, 0);
		//   a = d_p444444444444044P44p44444444[16538]:int;
		//   if (eqz(a[29])) { f_ahje(a) }
		//   UnityEngine_SceneManagement_SceneManager_add_sceneLoaded(b, 0);
	}

	private void SceneManager_sceneLoaded(Scene arg0, LoadSceneMode arg1)
	{
		// ---- decompiled from wasm (TransitionPoint_SceneManager_sceneLoaded) ----
		//   if (eqz(6703383[0]:ubyte)) {
		//     f_hpa(5624116);
		//     6703383[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[17321]:int);
		//   multiple_15_UnityEngine_InputSystem_UI_PointerModel_ButtonState_get_pressTime(
		//     b,
		//     0.1f,
		//     0);
		//   a[6] = b;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// TransitionPoint_MapTransitionCoroutine_d_4_System_Collections_Generic_IEnumerator_System_Object_get_(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5701596));
	//   unreachable;

}
