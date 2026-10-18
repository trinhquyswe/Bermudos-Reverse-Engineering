// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class BossEffect : Effect
{
	// Fields
	public bool isPhase2;
	private Animator animator;
	private PoiseEvent poiseEvent;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (BossEffect_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703830[0]:ubyte)) {
		//     f_hpa(5602056);
		//     f_hpa(5666960);
		//     6703830[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[17];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[28032]:int, 0);
		//   if (eqz(6703940[0]:ubyte)) {
		//     f_hpa(5602056);
		//     6703940[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
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
		// ---- decompiled from wasm (BossEffect_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703831[0]:ubyte)) {
		//     f_hpa(5602056);
		//     f_hpa(5666960);
		//     6703831[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[17];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[28032]:int, 0);
		//   if (eqz(6703941[0]:ubyte)) {
		//     f_hpa(5602056);
		//     6703941[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_kyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
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
		// <no wasm mapping>
	}

	private void PoiseEvent_onPoiseEvent(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
		// ---- decompiled from wasm (BossEffect_PoiseEvent_onPoiseEvent) ----
		//   c = g_a - 16;
		//   g_a = c;
		//   UnityEngine_Camera_get_farClipPlane(
		//     c,
		//     System_Linq_Enumerable_Count(a, 0),
		//     0);
		//   var i:float = c.c;
		//   var j:float = c.b;
		//   var k:float = c.a;
		//   var h:float = a[11];
		//   UnityEngine_Camera_get_farClipPlane(
		//     c,
		//     System_Linq_Enumerable_Count(a, 0),
		//     0);
		//   var f:float = c.a;
		//   var d:float = c.b;
		//   var e:float = c.c;
		//   var g:float = b[2]:float;
		//   var l:float = b[1]:float;
		//   var m:float = b[0]:float;
		//   if (eqz(6703148[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6703148[0]:byte = 1;
		//   }
		//   e = e - g;
		//   d = d - l;
		//   f = f - m;
		//   b = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(b[29]:int)) { f_ahje(b) }
		//   f = {
		//         g = sqrt(f * f + d * d + e * e);
		//         if (g > 0.00001f) {
		//           e = e / g;
		//           d = d / g;
		//           f / g;
		//           goto B_c;
		//         }
		//         if (eqz(6703145[0]:ubyte)) {
		//           f_hpa(5623880);
		//           6703145[0]:byte = 1;
		//         }
		//         b = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//         e = b[2]:float;
		//         d = b[1]:float;
		//         b[0]:float;
		//         label B_c:
		//       }
		//   if (eqz(6703832[0]:ubyte)) {
		//     f_hpa(5625952);
		//     6703832[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[17780]:int);
		//   b[7]:float = i + h * e;
		//   b[6]:float = j + h * d;
		//   b[5]:float = k + h * f;
		//   b[4]:int = a;
		//   b[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
		//   g_a = c + 16;
	}

	public void PushBossByWeapon(Vector3 playerPosition)
	{
		// <no wasm mapping>
	}

	private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition)
	{
		// ---- decompiled from wasm (BossEffect_PushEnemyByWeaponCoroutine) ----
		//   if (eqz(6703833[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703833[0]:byte = 1;
		//   }
		//   b = a[60]:ubyte;
		//   multiple_UnityEngine_Animator_SetTrigger(
		//     a[16]:int,
		//     ((if ((a = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
		//         a
		//       } else {
		//         f_ahje(a);
		//         d_p444444444444044P44p44444444[16612]:int;
		//       })[23]:int +
		//      select_if(108, 56, b))[0]:int,
		//     0);
	}

	public void OuchEffect()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// BossEffect_PushEnemyByWeaponCoroutine_d_8_System_Collections_IEnumerator_get_Current(a:int_ptr, b:float, c:int_ptr)
	//   c = g_a - 16;
	//   g_a = c;
	//   c[2] = a[13];
	//   multiple_UnityEngine_ParticleSystem_MainModule_set_startLifetime(
	//     c + 8,
	//     b,
	//     0);
	//   UnityEngine_ParticleSystem_Play(a[13], 0);
	//   g_a = c + 16;

	// BossEffect_PushEnemyByWeaponCoroutine_d_8_System_Collections_Generic_IEnumerator_System_Object_get_C(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5696312));
	//   unreachable;

}
