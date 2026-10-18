// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class SkillsAction : Action
{
	// Fields
	public Animator animator;
	public BossAnimationState bossAnimationState;
	public float normalizedTime;
	public bool isFirstUpdate;
	private int Idle;
	private int ouch;
	private int OpenMouth;
	private int eyeAttack;
	private int eyeLoop;
	private int Hop;
	private int EyeLoopDeath;
	private int Base;
	private int Walk;
	private int swipe;
	private int mouthOpenLoop;
	private int spearAtk;
	private int spinny;
	private int Idle2;
	private int ouch2;
	private int OpenMouth2;
	private int eyeAttack2;
	private int eyeLoop2;
	private int Hop2;
	private int EyeLoopDeath2;
	private int Base2;
	private int Walk2;
	private int swipe2;
	private int mouthOpenLoop2;
	private int spearAtk2;
	private int spinny2;
	protected Dictionary<BossAnimationState, int> bossAnimationStateDic;

	// Methods
	public override void OnAwake()
	{
		// ---- decompiled from wasm (SkillsAction_OnAwake) ----
		//   var this:int;
		//   if (eqz(6703823[0]:ubyte)) {
		//     f_hpa(5635412);
		//     6703823[0]:byte = 1;
		//   }
		//   multiple_UnityEngine_Animator_SetTrigger(
		//     this[11]:int,
		//     f_xmjd(this[41]:int,
		//            this[12]:int,
		//            d_p444444444444044P44p44444444[20145]:int),
		//     0);
		//   this[56]:byte = 1;
	}

	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public virtual TaskStatus HandleTimeOfHits(float time)
	{
		// <no wasm mapping>
	}

	public override void OnEnd()
	{
		// ---- decompiled from wasm (SkillsAction_OnEnd) ----
		//   var this:int_ptr;
		//   if (eqz(6703824[0]:ubyte)) {
		//     f_hpa(5635404);
		//     f_hpa(5602864);
		//     f_hpa(5752332);
		//     f_hpa(5721248);
		//     f_hpa(5739368);
		//     f_hpa(5748196);
		//     f_hpa(5719416);
		//     f_hpa(5712140);
		//     f_hpa(5748188);
		//     f_hpa(5753368);
		//     f_hpa(5755504);
		//     f_hpa(5721704);
		//     f_hpa(5755508);
		//     f_hpa(5727836);
		//     f_hpa(5752336);
		//     f_hpa(5753364);
		//     f_hpa(5748192);
		//     f_hpa(5727832);
		//     f_hpa(5719412);
		//     f_hpa(5755532);
		//     f_hpa(5748200);
		//     f_hpa(5721244);
		//     f_hpa(5739364);
		//     f_hpa(5756016);
		//     f_hpa(5721700);
		//     f_hpa(5712144);
		//     f_hpa(5755528);
		//     f_hpa(5756020);
		//     6703824[0]:byte = 1;
		//   }
		//   this[15] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[41717]:int,
		//       0);
		//   this[16] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[49633]:int,
		//       0);
		//   this[17] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[43250]:int,
		//       0);
		//   this[18] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[48339]:int,
		//       0);
		//   this[19] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[48341]:int,
		//       0);
		//   this[20] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[41603]:int,
		//       0);
		//   this[21] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[41145]:int,
		//       0);
		//   this[22] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[39327]:int,
		//       0);
		//   this[23] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[46133]:int,
		//       0);
		//   this[24] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[50296]:int,
		//       0);
		//   this[25] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[49375]:int,
		//       0);
		//   this[26] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[50168]:int,
		//       0);
		//   this[27] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[50174]:int,
		//       0);
		//   this[28] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[41718]:int,
		//       0);
		//   this[29] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[49634]:int,
		//       0);
		//   this[30] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[43251]:int,
		//       0);
		//   this[31] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[48340]:int,
		//       0);
		//   this[32] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[48342]:int,
		//       0);
		//   this[33] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[41604]:int,
		//       0);
		//   this[34] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[41146]:int,
		//       0);
		//   this[35] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[39328]:int,
		//       0);
		//   this[36] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[46134]:int,
		//       0);
		//   this[37] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[50297]:int,
		//       0);
		//   this[38] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[49376]:int,
		//       0);
		//   this[39] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[50169]:int,
		//       0);
		//   this[40] =
		//     UnityEngine_Animator_HasState(
		//       d_p444444444444044P44p44444444[50175]:int,
		//       0);
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[12008]:int);
		//   f_eljd(methodInfo, d_p444444444444044P44p44444444[20143]:int);
		//   this[41] = methodInfo;
		//   multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (SkillsAction_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703825[0]:ubyte)) {
		//     f_hpa(5689024);
		//     f_hpa(5689036);
		//     f_hpa(5689040);
		//     f_hpa(5689052);
		//     f_hpa(5689064);
		//     f_hpa(5689068);
		//     6703825[0]:byte = 1;
		//   }
		//   this[11] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33548]:int);
		//   this[16] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33558]:int);
		//   this[20] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33555]:int);
		//   this[14] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33559]:int);
		//   this[15] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33552]:int);
		//   this[21] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33551]:int);
	}

}
