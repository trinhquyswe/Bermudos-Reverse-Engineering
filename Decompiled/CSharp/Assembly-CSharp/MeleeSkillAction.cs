// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class MeleeSkillAction : SkillsAction
{
	// Fields
	private MeleeSkills meleeSkills;

	// Methods
	public override void OnAwake()
	{
		// ---- decompiled from wasm (MeleeSkillAction_OnAwake) ----
		//   var this:int;
		//   if (eqz(6703818[0]:ubyte)) {
		//     f_hpa(5635412);
		//     6703818[0]:byte = 1;
		//   }
		//   this[56]:byte = 1;
		//   MeleeSkills_DealDamage(
		//     this[42]:int,
		//     f_xmjd(this[41]:int,
		//            this[12]:int,
		//            d_p444444444444044P44p44444444[20145]:int),
		//     0);
	}

	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// ---- decompiled from wasm (MeleeSkillAction_OnUpdate) ----
		//   var this:int;
		//   this[56]:byte = 0;
		//   (this[42]:int)[76]:byte = 0;
	}

	public override void OnEnd()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (MeleeSkillAction_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703819[0]:ubyte)) {
		//     f_hpa(5689024);
		//     f_hpa(5689052);
		//     f_hpa(5689056);
		//     f_hpa(5689060);
		//     6703819[0]:byte = 1;
		//   }
		//   this[16] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33556]:int);
		//   this[11] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33548]:int);
		//   this[12] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33557]:int);
		//   this[13] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33555]:int);
	}

}
