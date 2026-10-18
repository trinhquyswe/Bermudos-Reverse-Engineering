// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: BehaviorDesigner.Runtime.Tasks
[TaskIcon("{SkinColor}IdleIcon.png")]
[TaskDescription("Returns a TaskStatus of running. Will only stop when interrupted or a conditional abort is triggered.")]
public class Idle : Action
{
	// Methods
	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Idle_ctor) ----
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703390[0]:ubyte)) {
		//     f_hpa(5601788);
		//     6703390[0]:byte = 1;
		//   }
		//   var e:int = a + 16;
		//   a = a[4];
		//   loop L_c {
		//     c = 0;
		//     d = f_iyud(a, b, 0);
		//     if (d) {
		//       c = f_upa(d, f = d_p444444444444044P44p44444444[11739]:int);
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

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// Idle_Awake(a:int, b:int)
	//   var this:int_ptr;
	//   var g:int;
	//   var d:int_ptr;
	//   var c:int;
	//   if (eqz(6703387[0]:ubyte)) {
	//     f_hpa(5601788);
	//     f_hpa(5601772);
	//     f_hpa(5676916);
	//     f_hpa(5676920);
	//     f_hpa(5660024);
	//     6703387[0]:byte = 1;
	//   }
	//   var methodInfo:int = this[5];
	//   var e:int = f_icke(d_p444444444444044P44p44444444[11739]:int);
	//   UnityEngine_UIElements_VisualElement_get_layout(
	//     e,
	//     this,
	//     d_p444444444444044P44p44444444[30522]:int,
	//     0);
	//   if (eqz(6703390[0]:ubyte)) {
	//     f_hpa(5601788);
	//     6703390[0]:byte = 1;
	//   }
	//   var f:int = methodInfo + 16;
	//   methodInfo = methodInfo[4]:int;
	//   loop L_f {
	//     c = 0;
	//     d = f_iyud(methodInfo, e, 0);
	//     if (d) {
	//       c = f_upa(d, g = d_p444444444444044P44p44444444[11739]:int);
	//       if (eqz(c)) goto B_e;
	//     }
	//     d = 
	//       methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
	//     methodInfo = c;
	//     if (d) continue L_f;
	//   }
	//   methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
	//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
	//                    methodInfo
	//                  } else {
	//                    System_Threading_Monitor_Enter_1(methodInfo)
	//                  })[24]:int)[2]:int;
	//   d = ((if (methodInfo[189]:ubyte & 1) {
	//           methodInfo
	//         } else {
	//           System_Threading_Monitor_Enter_1(methodInfo)
	//         })[23]:int)[0]:int;
	//   methodInfo = d[8];
	//   c = f_icke(d_p444444444444044P44p44444444[11735]:int);
	//   f_eujc(c, this, d_p444444444444044P44p44444444[30521]:int, 0);
	//   methodInfo = f_iyud(methodInfo, c, 0);
	//   if (eqz(methodInfo)) {
	//     d[8] = 0;
	//     return ;
	//   }
	//   c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11735]:int);
	//   if (eqz(c)) goto B_d;
	//   d[8] = c;
	//   if (
	//     eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11735]:int))) goto B_c;
	//   return ;
	//   label B_e:
	//   f_ypa(d, g);
	//   unreachable;
	//   label B_d:
	//   f_ypa(methodInfo, e);
	//   unreachable;
	//   label B_c:
	//   f_ypa(methodInfo, c);
	//   unreachable;

	// Idle_OnEnable(a:int, b:int)
	//   var this:int_ptr;
	//   var f:int;
	//   var c:int;
	//   if (eqz(6703388[0]:ubyte)) {
	//     f_hpa(5601788);
	//     f_hpa(5676920);
	//     6703388[0]:byte = 1;
	//   }
	//   var methodInfo:int_ptr = this[5];
	//   var d:int = f_icke(d_p444444444444044P44p44444444[11739]:int);
	//   UnityEngine_UIElements_VisualElement_get_layout(
	//     d,
	//     this,
	//     d_p444444444444044P44p44444444[30522]:int,
	//     0);
	//   if (eqz(6703391[0]:ubyte)) {
	//     f_hpa(5601788);
	//     6703391[0]:byte = 1;
	//   }
	//   var e:int = methodInfo + 16;
	//   this = methodInfo[4];
	//   loop L_d {
	//     methodInfo = 0;
	//     c = f_kyud(this, d, 0);
	//     if (c) {
	//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11739]:int);
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

	// Idle_OnDisable(a:int_ptr, b:ubyte_ptr, c:int)
	//   if (eqz(6703389[0]:ubyte)) {
	//     f_hpa(5601772);
	//     f_hpa(5676916);
	//     f_hpa(5660024);
	//     6703389[0]:byte = 1;
	//   }
	//   br_table[B_d, B_c, B_e, ..B_c](b)
	//   label B_e:
	//   UnityEngine_Rigidbody2D_set_isKinematic(a[4], 4, 0);
	//   b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
	//   b = 
	//     ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
	//   var d:int_ptr = 
	//     ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
	//   b = d[8];
	//   c = f_icke(d_p444444444444044P44p44444444[11735]:int);
	//   f_eujc(c, a, d_p444444444444044P44p44444444[30521]:int, 0);
	//   a = f_kyud(b, c, 0);
	//   if (eqz(a)) {
	//     d[8] = 0;
	//     return ;
	//   }
	//   b = f_upa(a, c = d_p444444444444044P44p44444444[11735]:int);
	//   if (eqz(b)) goto B_b;
	//   d[8] = b;
	//   if (f_upa(a, b = d_p444444444444044P44p44444444[11735]:int)) goto B_c;
	//   f_ypa(a, b);
	//   unreachable;
	//   label B_d:
	//   UnityEngine_Rigidbody2D_set_isKinematic(a[4], 7, 0);
	//   label B_c:
	//   return ;
	//   label B_b:
	//   f_ypa(a, c);
	//   unreachable;

	// Idle_GameStateChanged_OnIdle(a:int, b:int, c:int)
	//   var this:int_ptr;
	//   var d:long;
	//   var gameState:{ a:long, b:long } = g_a - 16;
	//   g_a = gameState;
	//   this = this[4];
	//   if (eqz(6703146[0]:ubyte)) {
	//     f_hpa(5623844);
	//     6703146[0]:byte = 1;
	//   }
	//   gameState.b =
	//     (d = ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[0]:long@4);
	//   gameState.a = d;
	//   UnityEngine_Rigidbody2D_get_velocity_Injected(this, gameState, 0);
	//   g_a = gameState + 16;

	// Idle_IdleEvent_OnIdle(a:int_ptr, b:{ a:long, b:long })
	//   var c:long;
	//   b = g_a - 16;
	//   g_a = b;
	//   a = a[4];
	//   if (eqz(6703146[0]:ubyte)) {
	//     f_hpa(5623844);
	//     6703146[0]:byte = 1;
	//   }
	//   b.b =
	//     (c = ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[0]:long@4);
	//   b.a = c;
	//   UnityEngine_Rigidbody2D_get_velocity_Injected(a, b, 0);
	//   g_a = b + 16;

}
