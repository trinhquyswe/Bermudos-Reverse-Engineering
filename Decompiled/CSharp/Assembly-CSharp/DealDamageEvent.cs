// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class DealDamageEvent : MonoBehaviour
{
	// Fields
	private Action<DealDamageEvent, DealDamageEventAgrs> OnDealDamage;

	// Methods
	public void add_OnDealDamage(Action<DealDamageEvent, DealDamageEventAgrs> value)
	{
		// ---- decompiled from wasm (DealDamageEvent_add_OnDealDamage) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703772[0]:ubyte)) {
		//     f_hpa(5601984);
		//     6703772[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11788]:int);
		//       if (eqz(methodInfo)) goto B_b;
		//     }
		//     d = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (d) continue L_c;
		//   }
		//   return ;
		//   label B_b:
		//   f_ypa(d, f);
		//   unreachable;
	}

	public void remove_OnDealDamage(Action<DealDamageEvent, DealDamageEventAgrs> value)
	{
		// ---- decompiled from wasm (DealDamageEvent_remove_OnDealDamage) ----
		//   var this:int_ptr;
		//   var value:int;
		//   if (eqz(6703773[0]:ubyte)) {
		//     f_hpa(5614008);
		//     6703773[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[4];
		//   if (methodInfo) {
		//     var d:int_ptr = f_icke(d_p444444444444044P44p44444444[14794]:int);
		//     if (eqz(6703774[0]:ubyte)) {
		//       f_hpa(5614872);
		//       6703774[0]:byte = 1;
		//     }
		//     var e:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//     if (eqz(e[29])) { f_ahje(e) }
		//     d[2] = value;
		//     call_indirect(methodInfo[8], this, d, methodInfo[5], methodInfo[3]);
		//   }
	}

	public void CallTakeDamageEvent(int damage)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (DealDamageEvent_ctor) ----
		//   if (eqz(6703774[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703774[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
	}

}
