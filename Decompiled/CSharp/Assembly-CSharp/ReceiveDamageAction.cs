// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class ReceiveDamageAction : Action
{
	// Fields
	private Animator animator;
	private RangedSkills rangedSkills;
	private MeleeSkills meleeSkills;
	private bool isFirstUpdate;
	public SharedFloat stunTime;
	private Poise poise;

	// Methods
	public override void OnAwake()
	{
		// ---- decompiled from wasm (ReceiveDamageAction_OnAwake) ----
		//   var this:int;
		//   if (eqz(6703820[0]:ubyte)) {
		//     f_hpa(5659908);
		//     6703820[0]:byte = 1;
		//   }
		//   UnityEngine_MonoBehaviour_StopCoroutine_2(this[12]:int, 0);
		//   UnityEngine_MonoBehaviour_StopCoroutine_2(this[13]:int, 0);
		//   this[56]:byte = 1;
		//   f_xnlc(this[15]:int,
		//          (this[16]:int)[7]:float,
		//          d_p444444444444044P44p44444444[26269]:int);
	}

	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (ReceiveDamageAction_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703822[0]:ubyte)) {
		//     f_hpa(5635408);
		//     f_hpa(5689024);
		//     6703822[0]:byte = 1;
		//   }
		//   f_zmjd(this[41], 11, this[26], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 0, this[15], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 1, this[16], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 2, this[17], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 3, this[18], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 4, this[19], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 5, this[20], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 6, this[21], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 7, this[22], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 8, this[23], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 9, this[24], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 10, this[25], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 12, this[27], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 13, this[28], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 14, this[29], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 15, this[30], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 16, this[31], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 17, this[32], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 18, this[33], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 19, this[34], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 20, this[35], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 21, this[36], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 22, this[37], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 23, this[38], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 24, this[39], d_p444444444444044P44p44444444[20144]:int);
		//   f_zmjd(this[41], 25, this[40], d_p444444444444044P44p44444444[20144]:int);
		//   this[11] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33548]:int);
	}

}
