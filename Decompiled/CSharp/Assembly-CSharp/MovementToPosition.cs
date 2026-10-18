// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[RequireComponent(typeof(Rigidbody2D))]
[DisallowMultipleComponent]
[RequireComponent(typeof(MovementToPositionEvent))]
public class MovementToPosition : MonoBehaviour
{
	// Fields
	private Rigidbody2D rigidBody2D;
	private MovementToPositionEvent movementToPositionEvent;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (MovementToPosition_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703404[0]:ubyte)) {
		//     f_hpa(5602040);
		//     f_hpa(5681548);
		//     6703404[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[5];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11802]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[31679]:int, 0);
		//   if (eqz(6703406[0]:ubyte)) {
		//     f_hpa(5602040);
		//     6703406[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11802]:int);
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
		// ---- decompiled from wasm (MovementToPosition_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703405[0]:ubyte)) {
		//     f_hpa(5602040);
		//     f_hpa(5681548);
		//     6703405[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[5];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11802]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[31679]:int, 0);
		//   if (eqz(6703407[0]:ubyte)) {
		//     f_hpa(5602040);
		//     6703407[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_kyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11802]:int);
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
		// ---- decompiled from wasm (MovementToPosition_OnDisable) ----
		//   b = g_a - 32;
		//   g_a = b;
		//   var e:float = c[8]:float;
		//   b.d = c[4]:int;
		//   b.c = c[2]:long@4;
		//   b.b = c[7]:int;
		//   b.a = c[5]:long@4;
		//   MovementToPosition_MovementToPositionEvent_OnMovementToPosition(
		//     a,
		//     b + 16,
		//     b,
		//     e,
		//     b);
		//   g_a = b + 32;
	}

	private void MovementToPositionEvent_OnMovementToPosition(MovementToPositionEvent movementToPositionEvent, MovementToPositionArgs movementToPositionArgs)
	{
		// ---- decompiled from wasm (MovementToPosition_MovementToPositionEvent_OnMovementToPosition) ----
		//   e = g_a - 32;
		//   g_a = e;
		//   var f:float = c.c;
		//   var g:float = b[2]:float;
		//   var i:float = c.b;
		//   var j:float = b[1]:float;
		//   var k:float = c.a;
		//   var l:float = b[0]:float;
		//   if (eqz(6703148[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6703148[0]:byte = 1;
		//   }
		//   var h:float = g - f;
		//   f = j - i;
		//   g = l - k;
		//   b = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(b[29]:int)) { f_ahje(b) }
		//   g = {
		//         h = sqrt(g * g + f * f + h * h);
		//         if (h > 0.00001f) {
		//           f = f / h;
		//           g / h;
		//           goto B_c;
		//         }
		//         if (eqz(6703145[0]:ubyte)) {
		//           f_hpa(5623880);
		//           6703145[0]:byte = 1;
		//         }
		//         b = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//         f = b[1]:float;
		//         b[0]:float;
		//         label B_c:
		//       }
		//   UnityEngine_RaycastHit2D_op_Implicit(e + 24, b = a[4], 0);
		//   var m:long = e[3];
		//   e[1] =
		//     (m = 
		//        i64_extend_i32_u(
		//          i32_reinterpret_f32(
		//            f * d * (f = UnityEngine_Time_get_fixedUnscaledDeltaTime(0)) +
		//            f32_reinterpret_i32(i32_wrap_i64(m >> 32L)))) <<
		//        32L |
		//        i64_extend_i32_u(
		//          i32_reinterpret_f32(g * d * f + f32_reinterpret_i32(i32_wrap_i64(m)))));
		//   e[2] = m;
		//   multiple_UnityEngine_Rigidbody2D_get_rotation(b, e + 8, 0);
		//   g_a = e + 32;
	}

	private void MoveRigidBody(Vector3 movePosition, Vector3 currentPosition, float moveSpeed)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (MovementToPosition_ctor) ----
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703406[0]:ubyte)) {
		//     f_hpa(5602040);
		//     6703406[0]:byte = 1;
		//   }
		//   var e:int = a + 16;
		//   a = a[4];
		//   loop L_c {
		//     c = 0;
		//     d = f_iyud(a, b, 0);
		//     if (d) {
		//       c = f_upa(d, f = d_p444444444444044P44p44444444[11802]:int);
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
