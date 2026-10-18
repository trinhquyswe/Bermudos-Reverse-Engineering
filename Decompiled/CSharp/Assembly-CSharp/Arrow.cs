// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class Arrow : MonoBehaviour
{
	// Fields
	private LineRenderer lineRenderer;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Arrow_Awake) ----
		//   var l:float;
		//   var n:float;
		//   d = g_a - 160;
		//   g_a = d;
		//   var p:long = b[0]:long@4;
		//   b = i32_wrap_i64(p >> 32L);
		//   var g:float = f32_reinterpret_i32(b);
		//   var q:long = c[0]:long@4;
		//   var j:float = f32_reinterpret_i32(i32_wrap_i64(q >> 32L));
		//   c = i32_wrap_i64(p);
		//   var i:float = f32_reinterpret_i32(c);
		//   var k:float = f32_reinterpret_i32(i32_wrap_i64(q));
		//   if (eqz(6698157[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6698157[0]:byte = 1;
		//   }
		//   var h:float = j - g;
		//   i = k - i;
		//   var e:int = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(e[29]:int)) { f_ahje(e) }
		//   var m:float = 
		//     {
		//       g = sqrt(i * i + h * h);
		//       if (g > 0.00001f) {
		//         l = i / g;
		//         -(h) / g;
		//         goto B_c;
		//       }
		//       if (eqz(6703146[0]:ubyte)) {
		//         f_hpa(5623844);
		//         6703146[0]:byte = 1;
		//       }
		//       e = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//       l = e[1]:float;
		//       e[0]:float;
		//       label B_c:
		//     }
		//   if (eqz(6698157[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6698157[0]:byte = 1;
		//   }
		//   e = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(e[29]:int)) { f_ahje(e) }
		//   var o:float = 
		//     {
		//       if (g > 0.00001f) {
		//         n = h / g;
		//         i / g;
		//         goto B_h;
		//       }
		//       if (eqz(6703146[0]:ubyte)) {
		//         f_hpa(5623844);
		//         6703146[0]:byte = 1;
		//       }
		//       e = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//       n = e[1]:float;
		//       e[0]:float;
		//       label B_h:
		//     }
		//   if (eqz(6698157[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6698157[0]:byte = 1;
		//   }
		//   e = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(e[29]:int)) { f_ahje(e) }
		//   j = h + j;
		//   k = i + k;
		//   g = {
		//         if (g > 0.00001f) {
		//           h = h / g;
		//           i / g;
		//           goto B_m;
		//         }
		//         if (eqz(6703146[0]:ubyte)) {
		//           f_hpa(5623844);
		//           6703146[0]:byte = 1;
		//         }
		//         e = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//         h = e[1]:float;
		//         e[0]:float;
		//         label B_m:
		//       }
		//   UnityEngine_LineRenderer_set_endColor(a[4], 5, 0);
		//   e = a[4];
		//   var f:int_ptr = d + 152;
		//   f[0] = 0;
		//   d[18]:int = f[0];
		//   d[37]:int = b;
		//   d[36]:int = c;
		//   d[8]:long = d[18]:long;
		//   multiple_UnityEngine_LineRenderer_set_positionCount(e, 0, d - -64, 0);
		//   c = a[4];
		//   b = d + 136;
		//   b[0]:int = 0;
		//   d[14]:int = b[0]:int;
		//   d[33]:float = j;
		//   d[32]:float = k;
		//   d[6]:long = d[16]:long;
		//   multiple_UnityEngine_LineRenderer_set_positionCount(c, 1, d + 48, 0);
		//   c = a[4];
		//   b = d + 120;
		//   b[0]:int = 0;
		//   d[10]:int = b[0]:int;
		//   d[29]:float = l + j - n;
		//   d[28]:float = m + k - o;
		//   d[4]:long = d[14]:long;
		//   multiple_UnityEngine_LineRenderer_set_positionCount(c, 2, d + 32, 0);
		//   c = a[4];
		//   b = d + 104;
		//   b[0]:int = 0;
		//   d[6]:int = b[0]:int;
		//   d[25]:float = j;
		//   d[24]:float = k;
		//   d[2]:long = d[12]:long;
		//   multiple_UnityEngine_LineRenderer_set_positionCount(c, 3, d + 16, 0);
		//   a = a[4];
		//   c = d + 88;
		//   c[0]:int = 0;
		//   d[2]:int = c[0]:int;
		//   d[21]:float = j - h - l;
		//   d[20]:float = k - g - m;
		//   d[0]:long = d[10]:long;
		//   multiple_UnityEngine_LineRenderer_set_positionCount(a, 4, d, 0);
		//   g_a = d + 160;
	}

	public void MakeArrow(Vector2 startPosition, Vector2 endPosition)
	{
		// ---- decompiled from wasm (Arrow_MakeArrow) ----
		//   UnityEngine_LineRenderer_set_endColor(a[4], 0, 0)
	}

	public void ClearArrow()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Arrow_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703467[0]:ubyte)) {
		//     f_hpa(5668380);
		//     f_hpa(5668592);
		//     6703467[0]:byte = 1;
		//   }
		//   this[6] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28440]:int);
		//   var methodInfo:int = UnityEngine_GameObject_get_activeInHierarchy(
		//                          this,
		//                          d_p444444444444044P44p44444444[28387]:int);
		//   this[8] = 3;
		//   this[7] = methodInfo;
	}

}
