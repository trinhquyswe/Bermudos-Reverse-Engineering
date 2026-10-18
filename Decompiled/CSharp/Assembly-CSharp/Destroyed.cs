// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
[RequireComponent(typeof(DestroyedEvent))]
public class Destroyed : MonoBehaviour
{
	// Fields
	private DestroyedEvent destroyedEvent;
	private Player player;
	private DieEvent dieEvent;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Destroyed_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703918[0]:ubyte)) {
		//     f_hpa(5601988);
		//     f_hpa(5672116);
		//     6703918[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11789]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29321]:int, 0);
		//   if (eqz(6703924[0]:ubyte)) {
		//     f_hpa(5601988);
		//     6703924[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11789]:int);
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
		// ---- decompiled from wasm (Destroyed_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703919[0]:ubyte)) {
		//     f_hpa(5601988);
		//     f_hpa(5672116);
		//     6703919[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11789]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29321]:int, 0);
		//   if (eqz(6703925[0]:ubyte)) {
		//     f_hpa(5601988);
		//     6703925[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_kyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11789]:int);
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
		// ---- decompiled from wasm (Destroyed_OnDisable) ----
		//   if (eqz(6703920[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703920[0]:byte = 1;
		//   }
		//   if (c[8]:ubyte) {
		//     if (eqz(6703921[0]:ubyte)) {
		//       f_hpa(5627168);
		//       6703921[0]:byte = 1;
		//     }
		//     c = f_icke(d_p444444444444044P44p44444444[18084]:int);
		//     c[4]:int = a;
		//     c[2]:int = 0;
		//     UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
		//     return ;
		//   }
		//   if (eqz(c[9]:ubyte)) {
		//     Destroyed_Die(a, a);
		//     a = f_canb(a, 0);
		//     c = d_p444444444444044P44p44444444[16103]:int;
		//     if (eqz(c[29]:int)) { f_ahje(c) }
		//     f_kfnb(a, 0);
		//   }
	}

	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
	{
		// <no wasm mapping>
	}

	private IEnumerator Die()
	{
		// ---- decompiled from wasm (Destroyed_Die) ----
		//   var this:ubyte_ptr;
		//   var c:int;
		//   if (eqz(6703922[0]:ubyte)) {
		//     f_hpa(5668472);
		//     f_hpa(5614012);
		//     f_hpa(5647208);
		//     f_hpa(5685664);
		//     f_hpa(5685692);
		//     f_hpa(5660024);
		//     f_hpa(5718408);
		//     6703922[0]:byte = 1;
		//   }
		//   var d:int_ptr = UnityEngine_GameObject_get_activeInHierarchy(
		//                     this,
		//                     d_p444444444444044P44p44444444[28410]:int);
		//   this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   this = 
		//     ((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//   var e:int_ptr = 
		//     (((if (this[189] & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[23]:int)[0]:int)[5]:int;
		//   if (e[3] > 0) {
		//     var f:int_ptr = d + 72;
		//     this = 0;
		//     loop L_e {
		//       if (
		//         eqz(
		//           multiple_System_String_Equals(d[17], (c = e[this + 4]:int)[6]:int, 0))) goto B_f;
		//       var methodInfo:int = 
		//         (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//       methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                        methodInfo
		//                      } else {
		//                        System_Threading_Monitor_Enter_1(methodInfo)
		//                      })[24]:int)[2]:int;
		//       if (
		//         eqz(f_wukc(Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//                      (((if (methodInfo[189]:ubyte & 1) {
		//                           methodInfo
		//                         } else {
		//                           System_Threading_Monitor_Enter_1(methodInfo)
		//                         })[23]:int)[0]:int)[6]:int,
		//                      0),
		//                    c[6]:int,
		//                    0))) goto B_f;
		//       methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//       methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                        methodInfo
		//                      } else {
		//                        System_Threading_Monitor_Enter_1(methodInfo)
		//                      })[24]:int)[2]:int;
		//       var g:int_ptr = Esper_ESave_SaveFile_HasData(
		//                         Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//                           (((if (methodInfo[189]:ubyte & 1) {
		//                                methodInfo
		//                              } else {
		//                                System_Threading_Monitor_Enter_1(methodInfo)
		//                              })[23]:int)[0]:int)[6]:int,
		//                           0),
		//                         c[6]:int,
		//                         0,
		//                         d_p444444444444044P44p44444444[32715]:int);
		//       f_fkn(g[4], f[0], 0, d_p444444444444044P44p44444444[23094]:int);
		//       methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//       methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                        methodInfo
		//                      } else {
		//                        System_Threading_Monitor_Enter_1(methodInfo)
		//                      })[24]:int)[2]:int;
		//       Esper_ESave_SaveFile_AddOrUpdateData_5(
		//         Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//           (((if (methodInfo[189]:ubyte & 1) {
		//                methodInfo
		//              } else {
		//                System_Threading_Monitor_Enter_1(methodInfo)
		//              })[23]:int)[0]:int)[6]:int,
		//           0),
		//         c[6]:int,
		//         g,
		//         d_p444444444444044P44p44444444[32708]:int);
		//       c = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//       c = 
		//         ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
		//       Esper_ESave_SaveFile_SetSetupData(
		//         Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//           (((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int)[6]:int,
		//           0),
		//         0,
		//         0);
		//       c = UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(f, 0);
		//       c = Mono_Security_X509_X509Crl_X509CrlEntry_ctor(
		//             d_p444444444444044P44p44444444[40894]:int,
		//             c,
		//             0);
		//       methodInfo = d_p444444444444044P44p44444444[14795]:int;
		//       if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
		//       UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayout(
		//         c,
		//         0);
		//       label B_f:
		//       this = this + 1;
		//       if (this < e[3]) continue L_e;
		//     }
		//   }
	}

	private void MarkEnemyAsDead()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// Destroyed_Die_d_7_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int)
	//   var f:int;
	//   var d:int;
	//   if (eqz(6703924[0]:ubyte)) {
	//     f_hpa(5601988);
	//     6703924[0]:byte = 1;
	//   }
	//   var e:int = a + 16;
	//   a = a[4];
	//   loop L_c {
	//     c = 0;
	//     d = f_iyud(a, b, 0);
	//     if (d) {
	//       c = f_upa(d, f = d_p444444444444044P44p44444444[11789]:int);
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

	// Destroyed_Die_d_7_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697576));
	//   unreachable;

}
