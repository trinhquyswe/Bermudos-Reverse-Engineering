// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class MoveByEnemyAIEvent : MonoBehaviour
{
	// Fields
	private Action<MoveByEnemyAIEvent> OnMoveByEnemyAI;

	// Methods
	public void add_OnMoveByEnemyAI(Action<MoveByEnemyAIEvent> value)
	{
		// ---- decompiled from wasm (MoveByEnemyAIEvent_add_OnMoveByEnemyAI) ----
		//   var this:int_ptr;
		//   var value:int;
		//   var f:int;
		//   var d:int;
		//   if (eqz(6703393[0]:ubyte)) {
		//     f_hpa(5601820);
		//     6703393[0]:byte = 1;
		//   }
		//   var e:int = this + 16;
		//   this = this[4];
		//   loop L_c {
		//     var methodInfo:int = 0;
		//     d = f_kyud(this, value, 0);
		//     if (d) {
		//       methodInfo = f_upa(d, f = d_p444444444444044P44p44444444[11747]:int);
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

	public void remove_OnMoveByEnemyAI(Action<MoveByEnemyAIEvent> value)
	{
		// <no wasm mapping>
	}

	public void CallMoveByEnemyAIEvent()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (MoveByEnemyAIEvent_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703394[0]:ubyte)) {
		//     f_hpa(5668464);
		//     f_hpa(5668468);
		//     f_hpa(5668564);
		//     f_hpa(5668632);
		//     6703394[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28450]:int);
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28433]:int);
		//   this[6] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28408]:int);
		//   this[7] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28409]:int);
	}

}
