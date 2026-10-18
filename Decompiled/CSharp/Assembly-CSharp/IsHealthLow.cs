// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class IsHealthLow : Conditional
{
	// Fields
	public float healthThreshold;
	private Health health;
	private bool isFirstEnd;

	// Methods
	public override void OnAwake()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// ---- decompiled from wasm (IsHealthLow_OnUpdate) ----
		//   var this:int;
		//   if (eqz(this[52]:ubyte)) { this[11]:int = -1082130432 }
		//   this[52]:byte = 0;
	}

	public override void OnEnd()
	{
		// ---- decompiled from wasm (IsHealthLow_OnEnd) ----
		//   var this:int;
		//   this[52]:byte = 1;
		//   this[11]:int = 1056964608;
		//   multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (IsHealthLow_ctor) ----
		//   var this:int_ptr;
		//   var methodInfo:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703816[0]:ubyte)) {
		//     f_hpa(5601996);
		//     f_hpa(5679028);
		//     f_hpa(5689048);
		//     6703816[0]:byte = 1;
		//   }
		//   this[11] =
		//     (methodInfo = TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//                     this,
		//                     d_p444444444444044P44p44444444[33554]:int));
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[31049]:int, 0);
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

}
