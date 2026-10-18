// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class DeadAction : Action
{
	// Fields
	public SharedMaterial deadMaterial;
	public Color fadeColor;
	public float fadeTime;
	private float fadeAmount;
	private float fadeTime2;
	private Color defaultColor;

	// Methods
	public override void OnStart()
	{
		// <no wasm mapping>
	}

	public override TaskStatus OnUpdate()
	{
		// ---- decompiled from wasm (DeadAction_OnUpdate) ----
		//   var this:int;
		//   var methodInfo:{ a:long, b:long } = g_a - 16;
		//   g_a = methodInfo;
		//   if (eqz(6703802[0]:ubyte)) {
		//     f_hpa(5659852);
		//     f_hpa(5741568);
		//     f_hpa(5741572);
		//     6703802[0]:byte = 1;
		//   }
		//   var c:int = 
		//     f_zmlc(this[11]:int, d_p444444444444044P44p44444444[26255]:int);
		//   methodInfo.b = this[21]:long@4;
		//   methodInfo.a = this[19]:long@4;
		//   UnityEngine_Material_SetFloat(
		//     c,
		//     d_p444444444444044P44p44444444[46685]:int,
		//     methodInfo,
		//     0);
		//   f_sbnb(this[2]:int, 0, 0);
		//   UnityEngine_Material_SetInt(
		//     f_zmlc(this[11]:int, d_p444444444444044P44p44444444[26255]:int),
		//     d_p444444444444044P44p44444444[46684]:int,
		//     0.0f,
		//     0);
		//   g_a = methodInfo + 16;
	}

	public override void OnEnd()
	{
		// ---- decompiled from wasm (DeadAction_OnEnd) ----
		//   var this:int_ptr;
		//   this[16] = 1077936128;
		//   multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (DeadAction_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703803[0]:ubyte)) {
		//     f_hpa(5689024);
		//     f_hpa(5689052);
		//     f_hpa(5689060);
		//     6703803[0]:byte = 1;
		//   }
		//   this[11] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33548]:int);
		//   this[16] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33557]:int);
		//   this[17] =
		//     TMPro_TMPro_ExtensionMethods_FindInstanceID(
		//       this,
		//       d_p444444444444044P44p44444444[33555]:int);
	}

}
