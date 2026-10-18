// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class Boss : MonoBehaviour
{
	// Fields
	public HealthEvent healthEvent;
	public DestroyedEvent destroyedEvent;
	public PoiseEvent poiseEvent;
	public Rigidbody2D rb;
	public BossEffect bossEffect;
	public Animator animator;
	public bool isPhaseTwo;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Boss_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703787[0]:ubyte)) {
		//     f_hpa(5601996);
		//     f_hpa(5666956);
		//     6703787[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[28031]:int, 0);
		//   if (eqz(6703935[0]:ubyte)) {
		//     f_hpa(5601996);
		//     6703935[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
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
		// ---- decompiled from wasm (Boss_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703788[0]:ubyte)) {
		//     f_hpa(5601996);
		//     f_hpa(5666956);
		//     6703788[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[28031]:int, 0);
		//   if (eqz(6703936[0]:ubyte)) {
		//     f_hpa(5601996);
		//     6703936[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_kyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
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
		// ---- decompiled from wasm (Boss_OnDisable) ----
		//   var this:int;
		//   if (eqz(6703789[0]:ubyte)) {
		//     f_hpa(5741568);
		//     6703789[0]:byte = 1;
		//   }
		//   StaticEventHandler_remove_OnBossChanged(this, 0);
		//   UnityEngine_Material_SetInt(
		//     UnityEngine_MonoBehaviour_InvokeRepeating(this)[12]:int,
		//     d_p444444444444044P44p44444444[46684]:int,
		//     0.0f,
		//     0);
	}

	private void Start()
	{
		// <no wasm mapping>
	}

	public IEnumerator BossAttack()
	{
		// ---- decompiled from wasm (Boss_BossAttack) ----
		//   var f:int;
		//   if (eqz(6703791[0]:ubyte)) {
		//     f_hpa(5601996);
		//     f_hpa(5666956);
		//     6703791[0]:byte = 1;
		//   }
		//   if (c[3] <= 0) {
		//     Boss_HealthEvent_OnHealthLost(a, c);
		//     d = f_icke(d_p444444444444044P44p44444444[11791]:int);
		//     f_ofkc(d, a, d_p444444444444044P44p44444444[28031]:int, 0);
		//     if (eqz(6703936[0]:ubyte)) {
		//       f_hpa(5601996);
		//       6703936[0]:byte = 1;
		//     }
		//     var e:int = b + 16;
		//     c = b[4];
		//     loop L_e {
		//       a = 0;
		//       b = f_kyud(c, d, 0);
		//       if (b) {
		//         a = f_upa(b, f = d_p444444444444044P44p44444444[11791]:int);
		//         if (eqz(a)) goto B_b;
		//       }
		//       b = c != (a = System_Net_WebOperation_ctor(e, a, c));
		//       c = a;
		//       if (b) continue L_e;
		//     }
		//   }
		//   return ;
		//   label B_b:
		//   f_ypa(b, f);
		//   unreachable;
	}

	private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
		// ---- decompiled from wasm (Boss_HealthEvent_OnHealthLost) ----
		//   if (eqz(6703792[0]:ubyte)) {
		//     f_hpa(5668464);
		//     f_hpa(5614436);
		//     6703792[0]:byte = 1;
		//   }
		//   var c:int_ptr = UnityEngine_GameObject_get_activeInHierarchy(
		//                     a,
		//                     d_p444444444444044P44p44444444[28408]:int);
		//   a = f_icke(d_p444444444444044P44p44444444[14901]:int);
		//   if (eqz(6703926[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703926[0]:byte = 1;
		//   }
		//   b = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(b[29])) { f_ahje(b) }
		//   a[9] = 1;
		//   b = c[4];
		//   if (b) { call_indirect(b[8], c, a, b[5], b[3]) }
	}

	private void EnemyDestroyed()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// Boss_BossAttack_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5696308));
	//   unreachable;

	// Boss_BossAttack_d_11_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   var methodInfo:int;
	//   var c:{ a:long, b:long } = g_a - 16;
	//   g_a = c;
	//   if (eqz(6703794[0]:ubyte)) {
	//     f_hpa(5666972);
	//     f_hpa(5660024);
	//     f_hpa(5623156);
	//     f_hpa(5690176);
	//     f_hpa(5690236);
	//     6703794[0]:byte = 1;
	//   }
	//   if (eqz(6703796[0]:ubyte)) {
	//     f_hpa(5750280);
	//     6703796[0]:byte = 1;
	//   }
	//   if (eqz(UnityEngine_PlayerPrefs_GetString_1(
	//             d_p444444444444044P44p44444444[48862]:int,
	//             0))) goto B_d;
	//   if (UnityEngine_PlayerPrefs_GetInt(
	//         d_p444444444444044P44p44444444[48862]:int,
	//         0) !=
	//       1) goto B_d;
	//   f_sbnb(this[8], 0, 0);
	//   methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
	//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
	//                    methodInfo
	//                  } else {
	//                    System_Threading_Monitor_Enter_1(methodInfo)
	//                  })[24]:int)[2]:int;
	//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
	//                    methodInfo
	//                  } else {
	//                    System_Threading_Monitor_Enter_1(methodInfo)
	//                  })[23]:int)[0]:int;
	//   if (eqz(6703899[0]:ubyte)) {
	//     f_hpa(5659992);
	//     6703899[0]:byte = 1;
	//   }
	//   methodInfo[7]:int = 3;
	//   if (eqz(6703903[0]:ubyte)) {
	//     f_hpa(5668632);
	//     6703903[0]:byte = 1;
	//   }
	//   UnityEngine_Rigidbody2D_get_mass(
	//     UnityEngine_GameObject_get_activeInHierarchy(
	//       methodInfo[4]:int,
	//       d_p444444444444044P44p44444444[28450]:int),
	//     0.5f,
	//     0);
	//   methodInfo = methodInfo[8]:int;
	//   if (methodInfo) {
	//     call_indirect(methodInfo[8]:int, 3, methodInfo[5]:int, methodInfo[3]:int)
	//   }
	//   f_sbnb(f_canb(this, 0), 0, 0);
	//   goto B_c;
	//   label B_d:
	//   methodInfo = this[4];
	//   c.b = 4906108845224984576L;
	//   c.a = 4906108845224984576L;
	//   methodInfo = 
	//     DG_Tweening_TweenSettingsExtensions_SetEase(
	//       DG_Tweening_DOTweenModuleUI_DOPivotY(methodInfo, c, 1.0f, 0, 0),
	//       27,
	//       d_p444444444444044P44p44444444[33851]:int);
	//   var d:int = f_icke(d_p444444444444044P44p44444444[17081]:int);
	//   DG_Tweening_Color2_op_Multiply(
	//     d,
	//     this,
	//     d_p444444444444044P44p44444444[28035]:int,
	//     0);
	//   DG_Tweening_TweenSettingsExtensions_From_6(
	//     methodInfo,
	//     d,
	//     d_p444444444444044P44p44444444[33836]:int);
	//   label B_c:
	//   g_a = c + 16;

}
