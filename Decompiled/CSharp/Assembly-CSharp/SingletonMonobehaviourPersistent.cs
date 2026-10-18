// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class SingletonMonobehaviourPersistent<T> : MonoBehaviour
{
	// Fields
	private static T instance;
	public static T Instance { get; }

	// Methods
	public static T get_Instance()
	{
		// <no wasm mapping>
	}

	protected virtual void Awake()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (SingletonMonobehaviourPersistent_1_ctor) ----
		//   var methodInfo:int;
		//   var this:int;
		//   var e:int;
		//   if (eqz(6692838[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6692838[0]:byte = 1;
		//   }
		//   var c:int = ((methodInfo[4]:int)[24]:int)[2]:int;
		//   c = 
		//     ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[23]:int)[0]:int;
		//   var d:int = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(d[29]:int)) { f_ahje(d) }
		//   if (f_qcnb(c, 0, 0)) {
		//     c = 
		//       f_upa(
		//         this,
		//         if ((c = ((methodInfo[4]:int)[24]:int)[1]:int)[189]:ubyte & 1) {
		//           c
		//         } else {
		//           System_Threading_Monitor_Enter_1(c)
		//         });
		//     d = ((methodInfo[4]:int)[24]:int)[1]:int;
		//     if (eqz(d[189]:ubyte & 1)) { d = System_Threading_Monitor_Enter_1(d) }
		//     if (c) {
		//       e = f_upa(c, d);
		//       if (eqz(e)) goto B_e;
		//     }
		//     c = (methodInfo[4]:int)[24]:int;
		//     d = c[2]:int;
		//     if (eqz(d[189]:ubyte & 1)) {
		//       d = System_Threading_Monitor_Enter_1(d);
		//       c = (methodInfo[4]:int)[24]:int;
		//     }
		//     (d[23]:int)[0]:int = e;
		//     c = f_upa(this,
		//               if ((c = (if ((d = c[2]:int)[189]:ubyte & 1) {
		//                           c
		//                         } else {
		//                           System_Threading_Monitor_Enter_1(d);
		//                           (methodInfo[4]:int)[24]:int;
		//                         })[1]:int)[189]:ubyte &
		//                   1) {
		//                 c
		//               } else {
		//                 System_Threading_Monitor_Enter_1(c)
		//               });
		//     methodInfo = ((methodInfo[4]:int)[24]:int)[1]:int;
		//     if (eqz(methodInfo[189]:ubyte & 1)) {
		//       methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
		//     }
		//     if (c) { if (eqz(f_upa(c, methodInfo))) goto B_d }
		//     methodInfo = f_canb(this, 0);
		//     c = d_p444444444444044P44p44444444[16103]:int;
		//     if (eqz(c[29]:int)) { f_ahje(c) }
		//     UnityEngine_Object_FindObjectsOfType(methodInfo, 0);
		//     return ;
		//   }
		//   methodInfo = f_canb(this, 0);
		//   c = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(c[29]:int)) { f_ahje(c) }
		//   f_kfnb(methodInfo, 0);
		//   return ;
		//   label B_e:
		//   f_ypa(c, d);
		//   unreachable;
		//   label B_d:
		//   f_ypa(c, methodInfo);
		//   unreachable;
	}

}
