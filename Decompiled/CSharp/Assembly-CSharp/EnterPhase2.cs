// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class EnterPhase2 : Action
{
	// Fields
	private Animator animator;
	private DealContactDamage dealContactDamage;
	public SharedMaterial material;
	public float fadeInTime;
	private float fadeInTime2;
	private float fadeInAmount;
	private Rigidbody2D rb;
	private RangedSkills rangedSkills;
	private BossEffect bossEffect;
	public Poise poise;
	private Boss boss;

	// Methods
	public override void OnAwake()
	{
		// ---- decompiled from wasm (EnterPhase2_OnAwake) ----
		//   var this:int;
		//   if (eqz(6703809[0]:ubyte)) {
		//     f_hpa(5621280);
		//     f_hpa(5712544);
		//     6703809[0]:byte = 1;
		//   }
		//   UnityEngine_GameObject_get_transform(
		//     this[2]:int,
		//     UnityEngine_LayerMask_LayerToName(
		//       d_p444444444444044P44p44444444[39428]:int,
		//       0),
		//     0);
		//   var methodInfo:int = this[20]:int;
		//   methodInfo[6]:float = methodInfo[5]:float;
		//   methodInfo = this[18]:int;
		//   methodInfo[6]:int = methodInfo[7]:int;
		//   multiple_UnityEngine_Animator_SetTrigger(
		//     this[11]:int,
		//     ((if ((methodInfo = d_p444444444444044P44p44444444[16612]:int)[29]:int) {
		//         methodInfo
		//       } else {
		//         f_ahje(methodInfo);
		//         d_p444444444444044P44p44444444[16612]:int;
		//       })[23]:int)[26]:int,
		//     0);
		//   this[15]:float = this[14]:float;
		//   (this[12]:int)[36]:byte = 1;
		//   UnityEngine_Rigidbody2D_set_isKinematic(this[17]:int, 4, 0);
		//   (this[19]:int)[60]:byte = 1;
		//   (this[21]:int)[40]:byte = 1;
	}

	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// ---- decompiled from wasm (EnterPhase2_OnUpdate) ----
		//   var this:int_ptr;
		//   this[16] = 1065353216;
		//   this[14] = 1065353216;
		//   multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (EnterPhase2_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703811[0]:ubyte)) {
		//     f_hpa(5689060);
		//     6703811[0]:byte = 1;
		//   }
		//   this[11] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33557]:int);
	}

}
