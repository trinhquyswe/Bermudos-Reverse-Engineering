// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class AnimateBoss : MonoBehaviour
{
	// Fields
	private Boss boss;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (AnimateBoss_Awake) ----
		//   var c:int;
		//   var this:int;
		//   var methodInfo:int = g_a - 48;
		//   g_a = methodInfo;
		//   if (eqz(6703727[0]:ubyte)) {
		//     f_hpa(5660024);
		//     6703727[0]:byte = 1;
		//   }
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo + 32,
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
		//   var d:float = methodInfo[8]:float;
		//   var e:float = methodInfo[9]:float;
		//   var f:float = methodInfo[10]:float;
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo + 32,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   c = methodInfo + 24;
		//   c[0]:float = f - methodInfo[10]:float;
		//   methodInfo[2]:int = c[0]:int;
		//   methodInfo[5]:float = e - methodInfo[9]:float;
		//   methodInfo[4]:float = d - methodInfo[8]:float;
		//   methodInfo[0]:long = methodInfo[2]:long;
		//   AnimateBoss_InitializeAimDirection(this, methodInfo, methodInfo);
		//   g_a = methodInfo + 48;
	}

	public void Update()
	{
		// ---- decompiled from wasm (AnimateBoss_Update) ----
		//   var this:int_ptr;
		//   var methodInfo:int_ptr;
		//   if (eqz(6703728[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703728[0]:byte = 1;
		//   }
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (this[4])[9]:int,
		//     ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]) {
		//         methodInfo
		//       } else {
		//         f_ahje(methodInfo);
		//         d_p444444444444044P44p44444444[16612]:int;
		//       })[23]:int)[4]:int,
		//     0,
		//     0);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (this[4])[9]:int,
		//     ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[6]:int,
		//     0,
		//     0);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (this[4])[9]:int,
		//     ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[10]:int,
		//     0,
		//     0);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (this[4])[9]:int,
		//     ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[9]:int,
		//     0,
		//     0);
	}

	public void InitializeAimDirection()
	{
		// <no wasm mapping>
	}

	public AimDirection SetAimDirection(Vector3 direction)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (AnimateBoss_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703730[0]:ubyte)) {
		//     f_hpa(5668472);
		//     6703730[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28410]:int);
	}

}
