// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class DealDamage : MonoBehaviour
{
	// Fields
	private LayerMask enemyLayer;
	private ContactFilter2D contactFilter2D;
	private Weapon weapon;
	public int damage;
	private int attackCost;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (DealDamage_Awake) ----
		//   var this:int;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703767[0]:ubyte)) {
		//     f_hpa(5601984);
		//     f_hpa(5671172);
		//     f_hpa(5660024);
		//     6703767[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   methodInfo = ((((if (methodInfo[189]:ubyte & 1) {
		//                      methodInfo
		//                    } else {
		//                      System_Threading_Monitor_Enter_1(methodInfo)
		//                    })[23]:int)[0]:int)[4]:int)[10]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11788]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29085]:int, 0);
		//   if (eqz(6703771[0]:ubyte)) {
		//     f_hpa(5601984);
		//     6703771[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   methodInfo = methodInfo[4]:int;
		//   loop L_f {
		//     this = 0;
		//     c = f_iyud(methodInfo, d, 0);
		//     if (c) {
		//       this = f_upa(c, f = d_p444444444444044P44p44444444[11788]:int);
		//       if (eqz(this)) goto B_e;
		//     }
		//     c = methodInfo !=
		//         (this = System_Net_WebOperation_ctor(e, this, methodInfo));
		//     methodInfo = this;
		//     if (c) continue L_f;
		//   }
		//   return ;
		//   label B_e:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (DealDamage_OnEnable) ----
		//   var this:int;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703768[0]:ubyte)) {
		//     f_hpa(5601984);
		//     f_hpa(5671172);
		//     f_hpa(5660024);
		//     6703768[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   methodInfo = ((((if (methodInfo[189]:ubyte & 1) {
		//                      methodInfo
		//                    } else {
		//                      System_Threading_Monitor_Enter_1(methodInfo)
		//                    })[23]:int)[0]:int)[4]:int)[10]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11788]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29085]:int, 0);
		//   if (eqz(6703772[0]:ubyte)) {
		//     f_hpa(5601984);
		//     6703772[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   methodInfo = methodInfo[4]:int;
		//   loop L_f {
		//     this = 0;
		//     c = f_kyud(methodInfo, d, 0);
		//     if (c) {
		//       this = f_upa(c, f = d_p444444444444044P44p44444444[11788]:int);
		//       if (eqz(this)) goto B_e;
		//     }
		//     c = methodInfo !=
		//         (this = System_Net_WebOperation_ctor(e, this, methodInfo));
		//     methodInfo = this;
		//     if (c) continue L_f;
		//   }
		//   return ;
		//   label B_e:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (DealDamage_OnDisable) ----
		//   var f:float;
		//   d = g_a + -64;
		//   g_a = d;
		//   if (eqz(6703769[0]:ubyte)) {
		//     f_hpa(5609960);
		//     f_hpa(5668440);
		//     f_hpa(5619244);
		//     f_hpa(5619608);
		//     f_hpa(5660012);
		//     f_hpa(5660024);
		//     6703769[0]:byte = 1;
		//   }
		//   Weapon_Start(a[12]:int, 0);
		//   b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   b = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   b = 
		//     ((((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[4]:int)[16]:int;
		//   var e:float = b[5]:float;
		//   if (e > 0.0f) {
		//     b[5]:float = (e = e - (f = f32_convert_i32_s(a[14]:int)));
		//     StaminaEvent_remove_OnStaminaChanged((b[6]:int)[15]:int,
		//                                          e / f32_convert_i32_s(b[4]:int),
		//                                          e,
		//                                          f,
		//                                          b);
		//   }
		//   b = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   b = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   c = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
		//   b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   var g:int = 
		//     ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//   if (eqz(g[189]:ubyte & 1)) { g = System_Threading_Monitor_Enter_1(g) }
		//   b = 0;
		//   SoundEffectManager_Start(c, (((g[23]:int)[0]:int)[4]:int)[25]:int, 0);
		//   var j:int = Mono_Security_ASN1Convert_ToOid(
		//                 d_p444444444444044P44p44444444[13782]:int,
		//                 1);
		//   g = UnityEngine_GameObject_get_activeInHierarchy(
		//         a,
		//         d_p444444444444044P44p44444444[28402]:int);
		//   c = d + 56;
		//   c[0]:int = a[11]:int;
		//   var h:int = d + 48;
		//   h[0]:long = a[9]:long@4;
		//   d.f = a[7]:long@4;
		//   d.e = a[5]:long@4;
		//   var i:int_ptr = d_p444444444444044P44p44444444[16194]:int;
		//   if (eqz(i[29])) { f_ahje(i) }
		//   d.d = c[0]:int;
		//   d.c = h[0]:long;
		//   d.b = d.f;
		//   d.a = d.e;
		//   i = f_ndx(g, d, j, 0);
		//   if (i > 0) {
		//     loop L_k {
		//       g = j[b + 4]:int;
		//       c = d_p444444444444044P44p44444444[16103]:int;
		//       if (eqz(c[29]:int)) { f_ahje(c) }
		//       if (UnityEngine_Camera_get_targetTexture(g, 0, 0)) {
		//         c = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//         c = 
		//           ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
		//         c = 
		//           ((((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int)[4]:int)[19]:int;
		//         c[5]:float = (f = c[5]:float + 1.0f);
		//         e = c[4]:float;
		//         if (e < f) {
		//           c[5]:float = e;
		//           f = e;
		//         }
		//         if (eqz(6703945[0]:ubyte)) {
		//           f_hpa(5620156);
		//           f_hpa(5620152);
		//           6703945[0]:byte = 1;
		//         }
		//         h = ((d_p444444444444044P44p44444444[16330]:int)[23]:int)[0]:int;
		//         if (h) {
		//           c = f_icke(d_p444444444444044P44p44444444[16331]:int);
		//           c[4]:float = e;
		//           c[3]:float = e;
		//           c[2]:float = f / e;
		//           call_indirect(h[8]:int, c, h[5]:int, h[3]:int);
		//         }
		//         DealDamage_DealDamageEvent_OnDealDamage(a, g, b);
		//       }
		//       b = b + 1;
		//       if (b != i) continue L_k;
		//     }
		//   }
		//   g_a = d - -64;
	}

	private void DealDamageEvent_OnDealDamage(DealDamageEvent dealDamageEvent, DealDamageEventAgrs dealDamageEventAgrs)
	{
		// ---- decompiled from wasm (DealDamage_DealDamageEvent_OnDealDamage) ----
		//   var d:{ a:long, b:int, c:long, d:int, e:long, f:int } = g_a - 48;
		//   g_a = d;
		//   if (eqz(6703770[0]:ubyte)) {
		//     f_hpa(5668404);
		//     f_hpa(5668400);
		//     f_hpa(5668472);
		//     f_hpa(5668612);
		//     f_hpa(5668788);
		//     f_hpa(5619244);
		//     f_hpa(5660024);
		//     6703770[0]:byte = 1;
		//   }
		//   c = UnityEngine_GameObject_get_activeInHierarchy(
		//         b,
		//         d_p444444444444044P44p44444444[28410]:int);
		//   var e:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(e[29])) { f_ahje(e) }
		//   if (UnityEngine_Camera_get_targetTexture(c, 0, 0)) {
		//     c = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28410]:int);
		//     if (c) {
		//       e = c[9]:int;
		//       UnityEngine_Camera_get_farClipPlane(
		//         d + 32,
		//         System_Linq_Enumerable_Count(
		//           (((if ((c = 
		//                     ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
		//                           1) {
		//                         c
		//                       } else {
		//                         System_Threading_Monitor_Enter_1(c)
		//                       })[24]:int)[2]:int)[189]:ubyte &
		//                  1) {
		//                c
		//              } else {
		//                System_Threading_Monitor_Enter_1(c)
		//              })[23]:int)[0]:int)[4]:int,
		//           0),
		//         0);
		//       d.b = d.f;
		//       d.a = d.e;
		//       EnemyEffect_PushEnemyByAmmo(e, d, b);
		//     }
		//     c = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28445]:int);
		//     if (eqz(c[24]:ubyte)) {
		//       Health_Start(c[5]:int, select_if(a[13], c = c[4]:int, c <= 0), b)
		//     }
		//     e = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28410]:int)[9]:int;
		//     a = UnityEngine_MonoBehaviour_InvokeRepeating(b)[6]:int;
		//     var f:int = UnityEngine_MonoBehaviour_InvokeRepeating(b)[7]:int;
		//     var g:int = f_orrc(b, d_p444444444444044P44p44444444[28489]:int);
		//     if (UnityEngine_GameObject_set_layer(f_canb(e, 0), 0)) {
		//       if (eqz(6703838[0]:ubyte)) {
		//         f_hpa(5627340);
		//         6703838[0]:byte = 1;
		//       }
		//       c = f_icke(d_p444444444444044P44p44444444[18127]:int);
		//       c[6]:int = e;
		//       c[2]:int = 0;
		//       c[7]:int = f;
		//       c[5]:int = a;
		//       c[4]:int = g;
		//       UnityEngine_MonoBehaviour_StartCoroutine_1(e, c, 0);
		//     }
		//     UnityEngine_ParticleSystem_Play(
		//       (UnityEngine_GameObject_get_activeInHierarchy(
		//          b,
		//          d_p444444444444044P44p44444444[28410]:int)[9]:int)[14]:int,
		//       0);
		//     goto B_c;
		//   }
		//   c = UnityEngine_GameObject_get_activeInHierarchy(
		//         b,
		//         d_p444444444444044P44p44444444[28392]:int);
		//   e = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(e[29])) { f_ahje(e) }
		//   if (eqz(UnityEngine_Camera_get_targetTexture(c, 0, 0))) goto B_c;
		//   e = UnityEngine_GameObject_get_activeInHierarchy(
		//         b,
		//         d_p444444444444044P44p44444444[28393]:int);
		//   UnityEngine_Camera_get_farClipPlane(
		//     d + 32,
		//     System_Linq_Enumerable_Count(
		//       (((if ((c = 
		//                 ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
		//                       1) {
		//                     c
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(c)
		//                   })[24]:int)[2]:int)[189]:ubyte &
		//              1) {
		//            c
		//          } else {
		//            System_Threading_Monitor_Enter_1(c)
		//          })[23]:int)[0]:int)[4]:int,
		//       0),
		//     0);
		//   d.d = d.f;
		//   d.c = d.e;
		//   BossEffect_PoiseEvent_onPoiseEvent(e, d + 16, b);
		//   c = UnityEngine_GameObject_get_activeInHierarchy(
		//         b,
		//         d_p444444444444044P44p44444444[28445]:int);
		//   if (eqz(c[24]:ubyte)) {
		//     Health_Start(c[5]:int, select_if(a[13], c = c[4]:int, c <= 0), b)
		//   }
		//   b = UnityEngine_GameObject_get_activeInHierarchy(
		//         b,
		//         d_p444444444444044P44p44444444[28393]:int);
		//   if (eqz(6703833[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703833[0]:byte = 1;
		//   }
		//   c = b[60]:ubyte;
		//   multiple_UnityEngine_Animator_SetTrigger(
		//     b[16]:int,
		//     ((if ((b = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
		//         b
		//       } else {
		//         f_ahje(b);
		//         d_p444444444444044P44p44444444[16612]:int;
		//       })[23]:int +
		//      select_if(108, 56, c & 255))[0]:int,
		//     0);
		//   label B_c:
		//   g_a = d + 48;
	}

	private void DealDamageHandle(Collider2D collision)
	{
		// ---- decompiled from wasm (DealDamage_DealDamageHandle) ----
		//   a[13] = 42949672970L;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (DealDamage_ctor) ----
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703771[0]:ubyte)) {
		//     f_hpa(5601984);
		//     6703771[0]:byte = 1;
		//   }
		//   var e:int = a + 16;
		//   a = a[4];
		//   loop L_c {
		//     c = 0;
		//     d = f_iyud(a, b, 0);
		//     if (d) {
		//       c = f_upa(d, f = d_p444444444444044P44p44444444[11788]:int);
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
	}

}
