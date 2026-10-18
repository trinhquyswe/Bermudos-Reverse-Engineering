// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class EnemyEffect : Effect
{
	// Fields
	private PoiseEvent poiseEvent;
	private EnemyMovement enemyMovement;
	private Coroutine pushEnemyByAmmoCoroutine;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (EnemyEffect_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703836[0]:ubyte)) {
		//     f_hpa(5602056);
		//     f_hpa(5672632);
		//     6703836[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[15];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29450]:int, 0);
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
		// ---- decompiled from wasm (EnemyEffect_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703837[0]:ubyte)) {
		//     f_hpa(5602056);
		//     f_hpa(5672632);
		//     6703837[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[15];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29450]:int, 0);
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
		// ---- decompiled from wasm (EnemyEffect_PoiseEvent_onPoiseEvent) ----
		//   UnityEngine_ParticleSystem_Stop_1(a[14], 0);
		//   UnityEngine_ParticleSystem_Stop_1(a[13], 0);
	}

	private void Start()
	{
		// ---- decompiled from wasm (EnemyEffect_Start) ----
		//   if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
		//     if (eqz(6703838[0]:ubyte)) {
		//       f_hpa(5627340);
		//       6703838[0]:byte = 1;
		//     }
		//     e = f_icke(d_p444444444444044P44p44444444[18127]:int);
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
		// ---- decompiled from wasm (EnemyEffect_DamageFlashCoroutine) ----
		//   c = g_a - 16;
		//   g_a = c;
		//   if (UnityEngine_GameObject_set_layer(f_canb(a, 0), 0)) {
		//     UnityEngine_RaycastHit2D_op_Implicit(c + 8, a[8]:int, 0);
		//     var i:long = c[1];
		//     var g:float = a[11]:float;
		//     UnityEngine_RaycastHit2D_op_Implicit(c + 8, a[8]:int, 0);
		//     var e:float = b[0]:float;
		//     var j:long = c[1];
		//     var d:float = f32_reinterpret_i32(i32_wrap_i64(j));
		//     var f:float = f32_reinterpret_i32(i32_wrap_i64(j >> 32L));
		//     var h:float = b[1]:float;
		//     if (eqz(6698157[0]:ubyte)) {
		//       f_hpa(5618360);
		//       6698157[0]:byte = 1;
		//     }
		//     e = d - e;
		//     d = f - h;
		//     b = d_p444444444444044P44p44444444[15882]:int;
		//     if (eqz(b[29]:int)) { f_ahje(b) }
		//     e = {
		//           f = sqrt(e * e + d * d);
		//           if (f > 0.00001f) {
		//             d = d / f;
		//             e / f;
		//             goto B_d;
		//           }
		//           if (eqz(6703146[0]:ubyte)) {
		//             f_hpa(5623844);
		//             6703146[0]:byte = 1;
		//           }
		//           b = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//           d = b[1]:float;
		//           b[0]:float;
		//           label B_d:
		//         }
		//     d = g * d + f32_reinterpret_i32(i32_wrap_i64(i >> 32L));
		//     e = g * e + f32_reinterpret_i32(i32_wrap_i64(i));
		//     if (eqz(6703839[0]:ubyte)) {
		//       f_hpa(5627344);
		//       6703839[0]:byte = 1;
		//     }
		//     b = f_icke(d_p444444444444044P44p44444444[18128]:int);
		//     b[7]:int = 0;
		//     b[6]:float = d;
		//     b[5]:float = e;
		//     b[4]:int = a;
		//     b[2]:int = 0;
		//     a[17]:int = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
		//   }
		//   g_a = c + 16;
	}

	public void DamagePushEfect(Vector3 ammo)
	{
		// <no wasm mapping>
	}

	private IEnumerator PushEnemyByAmmo(Vector3 targetPosition)
	{
		// ---- decompiled from wasm (EnemyEffect_PushEnemyByAmmo) ----
		//   var this:float_ptr;
		//   var targetPosition:int;
		//   var methodInfo:{ a:float, b:float, c:float } = g_a - 16;
		//   g_a = methodInfo;
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   var i:float = methodInfo.c;
		//   var j:float = methodInfo.b;
		//   var k:float = methodInfo.a;
		//   var h:float = this[11];
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   var f:float = methodInfo.a;
		//   var d:float = methodInfo.b;
		//   var e:float = methodInfo.c;
		//   var g:float = targetPosition[2]:float;
		//   var l:float = targetPosition[1]:float;
		//   var m:float = targetPosition[0]:float;
		//   if (eqz(6703148[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6703148[0]:byte = 1;
		//   }
		//   e = e - g;
		//   d = d - l;
		//   f = f - m;
		//   targetPosition = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(targetPosition[29]:int)) { f_ahje(targetPosition) }
		//   f = 
		//     {
		//       g = sqrt(f * f + d * d + e * e);
		//       if (g > 0.00001f) {
		//         e = e / g;
		//         d = d / g;
		//         f / g;
		//         goto B_c;
		//       }
		//       if (eqz(6703145[0]:ubyte)) {
		//         f_hpa(5623880);
		//         6703145[0]:byte = 1;
		//       }
		//       targetPosition = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//       e = targetPosition[2]:float;
		//       d = targetPosition[1]:float;
		//       targetPosition[0]:float;
		//       label B_c:
		//     }
		//   if (eqz(6703840[0]:ubyte)) {
		//     f_hpa(5627348);
		//     6703840[0]:byte = 1;
		//   }
		//   targetPosition = f_icke(d_p444444444444044P44p44444444[18129]:int);
		//   targetPosition[7]:float = i + h * e;
		//   targetPosition[6]:float = j + h * d;
		//   targetPosition[5]:float = k + h * f;
		//   targetPosition[4]:int = this;
		//   targetPosition[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(this, targetPosition, 0);
		//   g_a = methodInfo + 16;
	}

	public void PushEnemyByWeapon(Vector3 playerPosition)
	{
		// <no wasm mapping>
	}

	private IEnumerator PushEnemyByWeaponCoroutine(Vector3 targetPosition)
	{
		// ---- decompiled from wasm (EnemyEffect_PushEnemyByWeaponCoroutine) ----
		//   UnityEngine_ParticleSystem_Play(a[14], 0)
	}

	public void BloodEffect()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// EnemyEffect_DamageFlashCoroutine_d_9_System_Collections_Generic_IEnumerator_System_Object_get_Curren(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697820));
	//   unreachable;

	// EnemyEffect_PushEnemyByAmmo_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697824));
	//   unreachable;

	// EnemyEffect_PushEnemyByWeaponCoroutine_d_13_System_Collections_Generic_IEnumerator_System_Object_get(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697828));
	//   unreachable;

	// EnemyEffect_PushEnemyByWeaponCoroutine_d_13_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703842[0]:ubyte)) {
	//     f_hpa(5683504);
	//     f_hpa(5620984);
	//     f_hpa(5609548);
	//     6703842[0]:byte = 1;
	//   }
	//   var methodInfo:int = 
	//     f_icke(d_p444444444444044P44p44444444[13679]:int);
	//   f_yibd(methodInfo, this, d_p444444444444044P44p44444444[32168]:int, 0);
	//   this = d_p444444444444044P44p44444444[16538]:int;
	//   if (eqz(this[29])) { f_ahje(this) }
	//   UnityEngine_SceneManagement_SceneManager_LoadFirstScene_Internal(
	//     methodInfo,
	//     0);

}
