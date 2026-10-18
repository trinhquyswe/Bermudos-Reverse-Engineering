// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class ChatController : MonoBehaviour
{
	// Fields
	public TMP_InputField ChatInputField;
	public TMP_Text ChatDisplayOutput;
	public Scrollbar ChatScrollbar;

	// Methods
	private void OnEnable()
	{
		// ---- decompiled from wasm (ChatController_OnEnable) ----
		//   var this:int_ptr;
		//   if (eqz(6703169[0]:ubyte)) {
		//     f_hpa(5667660);
		//     f_hpa(5609516);
		//     f_hpa(5662720);
		//     6703169[0]:byte = 1;
		//   }
		//   var methodInfo:int = (this[4])[75]:int;
		//   var c:int = f_icke(d_p444444444444044P44p44444444[13671]:int);
		//   f_oibd(c, this, d_p444444444444044P44p44444444[28207]:int, 0);
		//   multiple_3_UnityEngine_Events_UnityEvent_1_Invoke(
		//     methodInfo,
		//     c,
		//     d_p444444444444044P44p44444444[26972]:int);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (ChatController_OnDisable) ----
		//   var d:int = g_a - 16;
		//   g_a = d;
		//   if (eqz(6703170[0]:ubyte)) {
		//     f_hpa(5613956);
		//     f_hpa(5619244);
		//     f_hpa(5610740);
		//     f_hpa(5621976);
		//     f_hpa(5704420);
		//     f_hpa(5709128);
		//     f_hpa(5746416);
		//     f_hpa(5708892);
		//     f_hpa(5740232);
		//     6703170[0]:byte = 1;
		//   }
		//   TMPro_TMP_InputField_get_text(
		//     a[4],
		//     ((d_p444444444444044P44p44444444[16786]:int)[23]:int)[0]:int,
		//     0);
		//   c = d_p444444444444044P44p44444444[14781]:int;
		//   if (eqz(c[29])) { f_ahje(c) }
		//   d[1]:long = f_kpqd(0);
		//   c = Mono_Security_ASN1Convert_ToOid(
		//         d_p444444444444044P44p44444444[13977]:int,
		//         8);
		//   c[4] = d_p444444444444044P44p44444444[46350]:int;
		//   d[1]:int = System_DateTime_GetHashCode(d + 8, 0);
		//   c[5] =
		//     System_Int32_GetHashCode(d + 4,
		//                              d_p444444444444044P44p44444444[47896]:int,
		//                              0);
		//   c[6] = d_p444444444444044P44p44444444[38515]:int;
		//   d[1]:int = System_DateTime_get_Millisecond(d + 8, 0);
		//   c[7] =
		//     System_Int32_GetHashCode(d + 4,
		//                              d_p444444444444044P44p44444444[47896]:int,
		//                              0);
		//   c[8] = d_p444444444444044P44p44444444[38515]:int;
		//   d[1]:int = System_DateTime_get_Month(d + 8, 0);
		//   c[9] =
		//     System_Int32_GetHashCode(d + 4,
		//                              d_p444444444444044P44p44444444[47896]:int,
		//                              0);
		//   var e:int_ptr = d_p444444444444044P44p44444444[38574]:int;
		//   c[11] = b;
		//   c[10] = e;
		//   b = UnityEngine_Object_get_name(c, 0);
		//   c = a[5];
		//   e = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(e[29])) { f_ahje(e) }
		//   if (eqz(UnityEngine_Camera_get_targetTexture(c, 0, 0))) goto B_d;
		//   c = a[5];
		//   var f:int = 
		//     multiple_System_String_Equals(
		//       call_indirect(c, (c = c[0])[179], c[178]),
		//       ((d_p444444444444044P44p44444444[16786]:int)[23]:int)[0]:int,
		//       0);
		//   c = a[5];
		//   e = c[0];
		//   if (f) {
		//     call_indirect(c, b, e[181], e[180]);
		//     goto B_d;
		//   }
		//   call_indirect(c,
		//                 f_unpd(call_indirect(c, e[179], e[178]),
		//                        d_p444444444444044P44p44444444[37397]:int,
		//                        b,
		//                        0),
		//                 (b = c[0])[181],
		//                 b[180]);
		//   label B_d:
		//   TMPro_TMP_InputField_Validate(a[4], 0);
		//   UnityEngine_UI_Scrollbar_get_value(a[6], 0.0f, 0);
		//   g_a = d + 16;
	}

	private void AddToChatOutput(string newText)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (ChatController_ctor) ----
		//   var this:int_ptr;
		//   var c:int_ptr;
		//   var methodInfo:int_ptr = g_a - 16;
		//   g_a = methodInfo;
		//   if (eqz(6703171[0]:ubyte)) {
		//     f_hpa(5730804);
		//     f_hpa(5704728);
		//     f_hpa(5718884);
		//     6703171[0]:byte = 1;
		//   }
		//   methodInfo[3] = 0;
		//   var d:int_ptr = this[4];
		//   call_indirect(
		//     d,
		//     {
		//       if ((this[6])[51]:int < 0) {
		//         d_p444444444444044P44p44444444[41013]:int;
		//         goto B_b;
		//       }
		//       methodInfo[3] = (this[5])[51]:int;
		//       c = 
		//         UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(methodInfo + 12,
		//                                                               0);
		//       methodInfo[3] = (this[6])[51]:int;
		//       this = 
		//         UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(methodInfo + 12,
		//                                                               0);
		//       System_Int32_ToString_1(d_p444444444444044P44p44444444[43993]:int,
		//                               c,
		//                               d_p444444444444044P44p44444444[37474]:int,
		//                               this,
		//                               0);
		//       label B_b:
		//     },
		//     (c = d[0])[181],
		//     c[180]);
		//   g_a = methodInfo + 16;
	}

}
