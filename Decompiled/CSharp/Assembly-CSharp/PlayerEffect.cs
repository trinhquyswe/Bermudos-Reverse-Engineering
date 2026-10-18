// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class PlayerEffect : Effect
{
	// Fields
	private Player player;
	private Coroutine pushPlayerByEnemyCoroutine;
	public bool isDashing;
	private float dashEffectDuration;

	// Methods
	private void OnEnable()
	{
		// ---- decompiled from wasm (PlayerEffect_OnEnable) ----
		//   var this:int_ptr;
		//   if (eqz(6703843[0]:ubyte)) {
		//     f_hpa(5683504);
		//     f_hpa(5620984);
		//     f_hpa(5609548);
		//     6703843[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[13679]:int);
		//   f_yibd(methodInfo, this, d_p444444444444044P44p44444444[32168]:int, 0);
		//   this = d_p444444444444044P44p44444444[16538]:int;
		//   if (eqz(this[29])) { f_ahje(this) }
		//   UnityEngine_SceneManagement_SceneManager_add_sceneLoaded(methodInfo, 0);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (PlayerEffect_OnDisable) ----
		//   b = a[16];
		//   if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
	}

	private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
	{
		// ---- decompiled from wasm (PlayerEffect_OnSceneLoaded) ----
		//   if (eqz(6703844[0]:ubyte)) {
		//     f_hpa(5668592);
		//     f_hpa(5668632);
		//     6703844[0]:byte = 1;
		//   }
		//   a[15] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       a,
		//       d_p444444444444044P44p44444444[28440]:int);
		//   a[8] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       a,
		//       d_p444444444444044P44p44444444[28450]:int);
	}

	private void Awake()
	{
		// ---- decompiled from wasm (PlayerEffect_Awake) ----
		//   var this:ubyte_ptr;
		//   if (this[68]) { PlayerEffect_PushPlayerByEnemy(this, this) }
	}

	private void Update()
	{
		// ---- decompiled from wasm (PlayerEffect_Update) ----
		//   if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
		//     if (eqz(6703845[0]:ubyte)) {
		//       f_hpa(5629432);
		//       6703845[0]:byte = 1;
		//     }
		//     e = f_icke(d_p444444444444044P44p44444444[18650]:int);
		//     e[6] = a;
		//     e[2] = 0;
		//     e[7] = c;
		//     e[5] = b;
		//     e[4] = d;
		//     UnityEngine_MonoBehaviour_StartCoroutine_1(a, e, 0);
		//   }
	}

	public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
	{
		// <no wasm mapping>
	}

	private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers)
	{
		// ---- decompiled from wasm (PlayerEffect_DamageFlashCoroutine) ----
		//   var h:long_ptr = g_a - 16;
		//   g_a = h;
		//   c = a[16]:int;
		//   if (c) { UnityEngine_MonoBehaviour_StopCoroutine(a, c, 0) }
		//   if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
		//     UnityEngine_RaycastHit2D_op_Implicit(h + 8, a[8]:int, 0);
		//     var i:long = h[1];
		//     var g:float = a[11]:float;
		//     UnityEngine_RaycastHit2D_op_Implicit(h + 8, a[8]:int, 0);
		//     var j:long = h[1];
		//     var d:float = f32_reinterpret_i32(i32_wrap_i64(j >> 32L));
		//     var k:long = b[0];
		//     var e:float = f32_reinterpret_i32(i32_wrap_i64(k >> 32L));
		//     var f:float = f32_reinterpret_i32(i32_wrap_i64(j));
		//     if (eqz(6698157[0]:ubyte)) {
		//       f_hpa(5618360);
		//       6698157[0]:byte = 1;
		//     }
		//     d = d - e;
		//     e = f - f32_reinterpret_i32(i32_wrap_i64(k));
		//     c = d_p444444444444044P44p44444444[15882]:int;
		//     if (eqz(c[29]:int)) { f_ahje(c) }
		//     e = {
		//           f = sqrt(e * e + d * d);
		//           if (f > 0.00001f) {
		//             d = d / f;
		//             e / f;
		//             goto B_e;
		//           }
		//           if (eqz(6703146[0]:ubyte)) {
		//             f_hpa(5623844);
		//             6703146[0]:byte = 1;
		//           }
		//           c = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//           d = c[1]:float;
		//           c[0]:float;
		//           label B_e:
		//         }
		//     d = g * d + f32_reinterpret_i32(i32_wrap_i64(i >> 32L));
		//     e = g * e + f32_reinterpret_i32(i32_wrap_i64(i));
		//     if (eqz(6703846[0]:ubyte)) {
		//       f_hpa(5629436);
		//       6703846[0]:byte = 1;
		//     }
		//     c = f_icke(d_p444444444444044P44p44444444[18651]:int);
		//     c[7]:int = 0;
		//     c[6]:float = d;
		//     c[5]:float = e;
		//     c[4]:int = a;
		//     c[2]:int = 0;
		//     a[16]:int = UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
		//   }
		//   g_a = h + 16;
	}

	public void DamagePushEfect(Vector2 damageSource)
	{
		// <no wasm mapping>
	}

	private IEnumerator PushPlayerByEnemy(Vector3 targetPosition)
	{
		// ---- decompiled from wasm (PlayerEffect_PushPlayerByEnemy) ----
		//   var c:int;
		//   var d:ubyte_ptr;
		//   b = g_a + -64;
		//   g_a = b;
		//   if (eqz(6703847[0]:ubyte)) {
		//     f_hpa(5668840);
		//     f_hpa(5619712);
		//     f_hpa(5660004);
		//     6703847[0]:byte = 1;
		//   }
		//   var f:int = f_rrrc(a, d_p444444444444044P44p44444444[28502]:int);
		//   var j:float = a[18]:float;
		//   if (j > 0.0f) {
		//     a[18]:float = j - UnityEngine_Time_get_time(0);
		//     goto B_c;
		//   }
		//   c = (d_p444444444444044P44p44444444[26293]:int)[4]:int;
		//   c = 
		//     ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
		//   c = 
		//     ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int;
		//   d = UnityEngine_MonoBehaviour_InvokeRepeating(b)[10]:int;
		//   UnityEngine_Camera_get_farClipPlane(
		//     b + 48,
		//     System_Linq_Enumerable_Count(a[15]:int, 0),
		//     0);
		//   if (eqz(6685672[0]:ubyte)) {
		//     f_hpa(5620040);
		//     6685672[0]:byte = 1;
		//   }
		//   var e:int = (d_p444444444444044P44p44444444[16302]:int)[23]:int;
		//   var h:long = e[2]:long@4;
		//   var i:long = e[0]:long@4;
		//   b.d = b.h;
		//   b.b = h;
		//   b.f = h;
		//   b.e = i;
		//   b.a = i;
		//   b.c = b.g;
		//   c = PoolManager_CreatePool(c, d, b + 16, b, 0);
		//   if (c) {
		//     d = d_p444444444444044P44p44444444[16220]:int;
		//     var g:int = d[184];
		//     if (g > (e = c[0]:int)[184]:ubyte) goto B_b;
		//     if ((e[25]:int + (g << 2) - 4)[0]:int != d) goto B_b;
		//   }
		//   f_sbnb(f_canb(c, 0), 1, 0);
		//   PlayerShadow_DisablePlayerShadow(c, f, b);
		//   a[18]:int = 1024416809;
		//   label B_c:
		//   g_a = b - -64;
		//   return ;
		//   label B_b:
		//   f_ypa(c, d);
		//   unreachable;
	}

	private void DashShadowPlayerEffect()
	{
		// ---- decompiled from wasm (PlayerEffect_DashShadowPlayerEffect) ----
		//   var this:int_ptr;
		//   this[18] = 1028443341;
		//   if (eqz(6703834[0]:ubyte)) {
		//     f_hpa(5624112);
		//     6703834[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[17320]:int);
		//   this[12] = 1048576000;
		//   this[10] = methodInfo;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// PlayerEffect_PushPlayerByEnemy_d_12_System_Collections_IEnumerator_get_Current(a:int, b:int, c:int)
	//   f_sbnb(f_canb(a, 0), 1, 0);
	//   PlayerShadow_DisablePlayerShadow(a, b, a);

	// PlayerEffect_DamageFlashCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_get_Curr(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699348));
	//   unreachable;

	// PlayerEffect_PushPlayerByEnemy_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699352));
	//   unreachable;

}
