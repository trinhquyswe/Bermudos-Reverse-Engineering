// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class Map : MonoBehaviour
{
	// Fields
	private string mapName;
	private float repeatInterval;
	private List<Enviroment> enviroments;

	// Methods
	private void Start()
	{
		// ---- decompiled from wasm (Map_Start) ----
		//   var this:int;
		//   if (eqz(6703374[0]:ubyte)) {
		//     f_hpa(5660012);
		//     f_hpa(5728532);
		//     6703374[0]:byte = 1;
		//   }
		//   multiple_UnityEngine_MonoBehaviour_Invoke(
		//     this,
		//     d_p444444444444044P44p44444444[43425]:int,
		//     0);
		//   this = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   this = 
		//     ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//   if (eqz(this[189]:ubyte & 1)) { this = System_Threading_Monitor_Enter_1(this) }
		//   SoundEffectManager_PlaySoundEffect(
		//     (this[23]:int)[0]:int,
		//     UnityEngine_MonoBehaviour_InvokeRepeating(0)[26]:int,
		//     this);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (Map_OnDisable) ----
		//   if (eqz(6703375[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703375[0]:byte = 1;
		//   }
		//   var this:int = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   this = 
		//     ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//   if (eqz(this[189]:ubyte & 1)) { this = System_Threading_Monitor_Enter_1(this) }
		//   SoundEffectManager_Start(
		//     (this[23]:int)[0]:int,
		//     UnityEngine_MonoBehaviour_InvokeRepeating(0)[25]:int,
		//     this);
	}

	private void PlayFlowingWaterSoundEffect()
	{
		// <no wasm mapping>
	}

	public int GetBossState()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Map_ctor) ----
		//   var this:int_ptr;
		//   var c:int;
		//   var methodInfo:int_ptr;
		//   if (eqz(6703377[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5668728);
		//     f_hpa(5668520);
		//     f_hpa(5680540);
		//     6703377[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28422]:int);
		//   this[5] = f_irrc(this, d_p444444444444044P44p44444444[28474]:int);
		//   var d:int = f_icke(d_p444444444444044P44p44444444[14153]:int);
		//   f_uhrd(d, this, d_p444444444444044P44p44444444[31427]:int, 0);
		//   if (eqz(6703529[0]:ubyte)) {
		//     f_hpa(5611444);
		//     f_hpa(5621908);
		//     6703529[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[1]:int;
		//   loop L_d {
		//     methodInfo = f_iyud(this, d, 0);
		//     if (methodInfo) {
		//       c = d_p444444444444044P44p44444444[14153]:int;
		//       if (c != methodInfo[0]) goto B_c;
		//     }
		//     c = this !=
		//         (methodInfo = 
		//            System_Net_WebOperation_ctor(
		//              (d_p444444444444044P44p44444444[16769]:int)[23]:int + 4,
		//              methodInfo,
		//              this));
		//     this = methodInfo;
		//     if (c) continue L_d;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(methodInfo, c);
		//   unreachable;
	}

}
