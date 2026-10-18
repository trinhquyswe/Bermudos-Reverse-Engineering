// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class Dash : MonoBehaviour
{
	// Fields
	private Player player;
	private Coroutine dashCoroutine;
	private WaitForFixedUpdate waitForFixedUpdate;
	private float dashCooldownTimer;
	private int dashCost;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Dash_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703487[0]:ubyte)) {
		//     f_hpa(5601980);
		//     f_hpa(5670112);
		//     6703487[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = (this[4])[14]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11787]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[28820]:int, 0);
		//   if (eqz(6703492[0]:ubyte)) {
		//     f_hpa(5601980);
		//     6703492[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11787]:int);
		//       if (eqz(methodInfo)) goto B_c;
		//     }
		//     c = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (c) continue L_d;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (Dash_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703488[0]:ubyte)) {
		//     f_hpa(5601980);
		//     f_hpa(5670112);
		//     6703488[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = (this[4])[14]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11787]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[28820]:int, 0);
		//   if (eqz(6703493[0]:ubyte)) {
		//     f_hpa(5601980);
		//     6703493[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_kyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11787]:int);
		//       if (eqz(methodInfo)) goto B_c;
		//     }
		//     c = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (c) continue L_d;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (Dash_OnDisable) ----
		//   if (eqz(6703489[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703489[0]:byte = 1;
		//   }
		//   if (
		//     eqz(
		//       UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
		//         0) >
		//       a[7]:float)) goto B_b;
		//   if (
		//     eqz(((a[4]:int)[16]:int)[5]:float > f32_convert_i32_s(a[8]:int))) goto B_b;
		//   b = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   b = 
		//     ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   SoundEffectManager_Start(
		//     ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int,
		//     (a[4]:int)[24]:int,
		//     a);
		//   var e:long = c[2]:long@4;
		//   c = a[5]:int;
		//   if (c) { UnityEngine_MonoBehaviour_StopCoroutine(a, c, 0) }
		//   if (eqz(6703490[0]:ubyte)) {
		//     f_hpa(5626748);
		//     6703490[0]:byte = 1;
		//   }
		//   c = f_icke(d_p444444444444044P44p44444444[17979]:int);
		//   c[5]:long@4 = e;
		//   c[4]:int = a;
		//   c[2]:int = 0;
		//   a[5]:int = UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
		//   ((a[4]:int)[18]:int)[68]:byte = 1;
		//   a[7]:float =
		//     UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
		//       0) +
		//     ((c = a[4]:int)[6]:int)[7]:float;
		//   Stamina_Update(c[16]:int, a[8]:int, 0);
		//   label B_b:
	}

	private void DashEvent_OnDashEvent(DashEvent dashEvent, DashEventArgs dashEventArgs)
	{
		// ---- decompiled from wasm (Dash_DashEvent_OnDashEvent) ----
		//   c = a[5];
		//   if (c) { UnityEngine_MonoBehaviour_StopCoroutine(a, c, 0) }
		//   var d:long = b[0]:long@4;
		//   if (eqz(6703490[0]:ubyte)) {
		//     f_hpa(5626748);
		//     6703490[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[17979]:int);
		//   b[5]:long@4 = d;
		//   b[4]:int = a;
		//   b[2]:int = 0;
		//   a[5] = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
		//   ((a[4])[18]:int)[68]:byte = 1;
	}

	public void PlayDash(Vector2 direction)
	{
		// <no wasm mapping>
	}

	private IEnumerator DashCoroutine(Vector2 direction)
	{
		// <no wasm mapping>
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
		// <no wasm mapping>
	}

	private void OnCollisionStay2D(Collision2D collision)
	{
		// <no wasm mapping>
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		// ---- decompiled from wasm (Dash_OnTriggerEnter2D) ----
		//   b = a[5];
		//   if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
	}

	private void StopPlayerDashRoutine()
	{
		// ---- decompiled from wasm (Dash_StopPlayerDashRoutine) ----
		//   var this:int_ptr;
		//   if (eqz(6703491[0]:ubyte)) {
		//     f_hpa(5624112);
		//     6703491[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[17320]:int);
		//   this[8] = 10;
		//   this[6] = methodInfo;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// Dash_DashCoroutine_d_10_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int)
	//   var f:int;
	//   var d:int;
	//   if (eqz(6703492[0]:ubyte)) {
	//     f_hpa(5601980);
	//     6703492[0]:byte = 1;
	//   }
	//   var e:int = a + 16;
	//   a = a[4];
	//   loop L_c {
	//     c = 0;
	//     d = f_iyud(a, b, 0);
	//     if (d) {
	//       c = f_upa(d, f = d_p444444444444044P44p44444444[11787]:int);
	//       if (eqz(c)) goto B_b;
	//     }
	//     d = a != (c = System_Net_WebOperation_ctor(e, c, a));
	//     a = c;
	//     if (d) continue L_c;
	//   }
	//   return ;
	//   label B_b:
	//   f_ypa(d, f);
	//   unreachable;

	// Dash_DashCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697260));
	//   unreachable;

}
