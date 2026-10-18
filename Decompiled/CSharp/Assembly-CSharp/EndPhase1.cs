// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class EndPhase1 : Action
{
	// Fields
	private Animator animator;
	public SharedMaterial material;
	public float transitionTime;
	private float fadeAmount;
	private float transitionTime2;
	private RangedSkills rangedSkills;
	private MeleeSkills meleeSkills;
	private bool isEyeLoopDeath;
	private SoundEffectSO transitionSoundEffect;

	// Methods
	public override void OnAwake()
	{
		// ---- decompiled from wasm (EndPhase1_OnAwake) ----
		//   var this:int;
		//   if (eqz(6703804[0]:ubyte)) {
		//     f_hpa(5660012);
		//     f_hpa(5717216);
		//     6703804[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   SoundEffectManager_Start(
		//     ((if (methodInfo[189]:ubyte & 1) {
		//         methodInfo
		//       } else {
		//         System_Threading_Monitor_Enter_1(methodInfo)
		//       })[23]:int)[0]:int,
		//     this[19]:int,
		//     0);
		//   UnityEngine_MonoBehaviour_StopCoroutine_2(this[16]:int, 0);
		//   UnityEngine_MonoBehaviour_StopCoroutine_2(this[17]:int, 0);
		//   this[15]:float = this[13]:float;
		//   if (eqz(6703806[0]:ubyte)) {
		//     f_hpa(5627332);
		//     6703806[0]:byte = 1;
		//   }
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[18125]:int);
		//   methodInfo[4]:int = this;
		//   methodInfo[2]:int = 0;
		//   BehaviorDesigner_Runtime_Tasks_Task_StartCoroutine(this, methodInfo, 0);
		//   UnityEngine_GameObject_get_transform(
		//     this[2]:int,
		//     UnityEngine_LayerMask_LayerToName(
		//       d_p444444444444044P44p44444444[40596]:int,
		//       0),
		//     0);
	}

	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public IEnumerator EndPhase1Coroutine()
	{
		// ---- decompiled from wasm (EndPhase1_EndPhase1Coroutine) ----
		//   var this:int_ptr;
		//   this[13] = 1065353216;
		//   multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// EndPhase1_EndPhase1Coroutine_d_12_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697812));
	//   unreachable;

	// EndPhase1_EndPhase1Coroutine_d_12_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703808[0]:ubyte)) {
	//     f_hpa(5689024);
	//     f_hpa(5689032);
	//     f_hpa(5689028);
	//     f_hpa(5689040);
	//     f_hpa(5689056);
	//     f_hpa(5689060);
	//     f_hpa(5689064);
	//     6703808[0]:byte = 1;
	//   }
	//   this[11] =
	//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
	//       this,
	//       d_p444444444444044P44p44444444[33548]:int);
	//   this[12] =
	//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
	//       this,
	//       d_p444444444444044P44p44444444[33552]:int);
	//   this[17] =
	//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
	//       this,
	//       d_p444444444444044P44p44444444[33558]:int);
	//   this[18] =
	//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
	//       this,
	//       d_p444444444444044P44p44444444[33557]:int);
	//   this[19] =
	//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
	//       this,
	//       d_p444444444444044P44p44444444[33550]:int);
	//   this[20] =
	//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
	//       this,
	//       d_p444444444444044P44p44444444[33556]:int);
	//   this[21] =
	//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
	//       this,
	//       d_p444444444444044P44p44444444[33549]:int);

}
