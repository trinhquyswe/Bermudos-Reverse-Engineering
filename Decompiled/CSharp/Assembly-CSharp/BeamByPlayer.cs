// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class BeamByPlayer : MonoBehaviour
{
	// Fields
	public GameObject beamPrefab;
	public Material beamMaterial;
	private Rage rage;
	private AnimateEvent animateEvent;
	private Vector3 direction;
	private float ragePercent;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (BeamByPlayer_Awake) ----
		//   var this:int_ptr;
		//   if (eqz(6703483[0]:ubyte)) {
		//     f_hpa(5601868);
		//     f_hpa(5601960);
		//     f_hpa(5666464);
		//     f_hpa(5666468);
		//     6703483[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11759]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[27909]:int,
		//     0);
		//   Rage_ctor(methodInfo, 0);
		//   methodInfo = this[7];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
		//   f_ofkc(c, this, d_p444444444444044P44p44444444[27908]:int, 0);
		//   AnimateEnemy_PlayAttackAnimationCoroutine_d_10_System_Collections_IEnumerator_get_Current(
		//     methodInfo,
		//     c,
		//     0);
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (BeamByPlayer_OnEnable) ----
		//   var this:int_ptr;
		//   if (eqz(6703484[0]:ubyte)) {
		//     f_hpa(5601868);
		//     f_hpa(5601960);
		//     f_hpa(5666464);
		//     f_hpa(5666468);
		//     6703484[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11759]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[27909]:int,
		//     0);
		//   RageEvent_add_OnRageChanged(methodInfo, 0);
		//   methodInfo = this[7];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
		//   f_ofkc(c, this, d_p444444444444044P44p44444444[27908]:int, 0);
		//   AnimateEvent_add_OnAnimate(methodInfo, c, 0);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (BeamByPlayer_OnDisable) ----
		//   var e:long;
		//   var f:float;
		//   var g:float;
		//   var j:float;
		//   var h:float;
		//   var i:float;
		//   br_table[B_i, B_d, B_e, B_f, B_g, B_h, B_b, B_c, ..B_a](c[2]:int)
		//   label B_i:
		//   if (eqz(6703147[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6703147[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   e = c[6]:long@4;
		//   a[10]:int = c[8]:int;
		//   a[8]:long@4 = e;
		//   return ;
		//   label B_h:
		//   if (eqz(6696685[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696685[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   e = c[9]:long@4;
		//   a[10]:int = c[11]:int;
		//   a[8]:long@4 = e;
		//   return ;
		//   label B_g:
		//   if (eqz(6696688[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696688[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   e = c[12]:long@4;
		//   a[10]:int = c[14]:int;
		//   a[8]:long@4 = e;
		//   return ;
		//   label B_f:
		//   if (eqz(6696689[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696689[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   e = c[15]:long@4;
		//   a[10]:int = c[17]:int;
		//   a[8]:long@4 = e;
		//   return ;
		//   label B_e:
		//   if (eqz(6703147[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6703147[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   f = c[8]:float;
		//   g = c[7]:float;
		//   h = c[6]:float;
		//   if (eqz(6696688[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696688[0]:byte = 1;
		//     c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   }
		//   i = c[12]:float;
		//   j = c[13]:float;
		//   a[10]:float = f + c[14]:float;
		//   a[9]:float = g + j;
		//   a[8]:float = h + i;
		//   return ;
		//   label B_d:
		//   if (eqz(6703147[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6703147[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   f = c[8]:float;
		//   g = c[7]:float;
		//   h = c[6]:float;
		//   if (eqz(6696689[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696689[0]:byte = 1;
		//     c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   }
		//   i = c[15]:float;
		//   j = c[16]:float;
		//   a[10]:float = f + c[17]:float;
		//   a[9]:float = g + j;
		//   a[8]:float = h + i;
		//   return ;
		//   label B_c:
		//   if (eqz(6696685[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696685[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   f = c[11]:float;
		//   g = c[10]:float;
		//   h = c[9]:float;
		//   if (eqz(6696688[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696688[0]:byte = 1;
		//     c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   }
		//   i = c[12]:float;
		//   j = c[13]:float;
		//   a[10]:float = f + c[14]:float;
		//   a[9]:float = g + j;
		//   a[8]:float = h + i;
		//   return ;
		//   label B_b:
		//   if (eqz(6696685[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696685[0]:byte = 1;
		//   }
		//   c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   f = c[11]:float;
		//   g = c[10]:float;
		//   h = c[9]:float;
		//   if (eqz(6696689[0]:ubyte)) {
		//     f_hpa(5623880);
		//     6696689[0]:byte = 1;
		//     c = (d_p444444444444044P44p44444444[17262]:int)[23]:int;
		//   }
		//   i = c[15]:float;
		//   j = c[16]:float;
		//   a[10]:float = f + c[17]:float;
		//   a[9]:float = g + j;
		//   a[8]:float = h + i;
		//   label B_a:
	}

	private void AnimateEvent_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
	{
		// ---- decompiled from wasm (BeamByPlayer_AnimateEvent_OnAnimate) ----
		//   a[11] = b[2]
	}

	private void RageEvent_OnRageChanged(RageEventArgs rageEventArgs)
	{
		// ---- decompiled from wasm (BeamByPlayer_RageEvent_OnRageChanged) ----
		//   b = g_a - 96;
		//   g_a = b;
		//   if (eqz(6703485[0]:ubyte)) {
		//     f_hpa(5675608);
		//     f_hpa(5675784);
		//     f_hpa(5682504);
		//     f_hpa(5619244);
		//     f_hpa(5712196);
		//     6703485[0]:byte = 1;
		//   }
		//   if (eqz(a[11]:float < 1.0f)) {
		//     var c:int = b + 88;
		//     c[0]:float =
		//       (f_nvq(a[9]:float, a[8]:float) * 57.29578f + 90.0f) * 0.017453f;
		//     b[10]:int = c[0]:int;
		//     b[4]:long = 0L;
		//     b[10]:long = 0L;
		//     f_gul(b + 48, b + 32, 0);
		//     var d:long_ptr = b + 72;
		//     d[0] = b[7]:long;
		//     b[8]:long = b[6]:long;
		//     var e:int = a[4]:int;
		//     UnityEngine_Camera_get_farClipPlane(
		//       b + 80,
		//       System_Linq_Enumerable_Count(a, 0),
		//       0);
		//     var f:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//     if (eqz(f[29])) { f_ahje(f) }
		//     b[6]:int = c[0]:int;
		//     b[1]:long = d[0];
		//     b[2]:long = b[10]:long;
		//     b[0]:long = b[8]:long;
		//     c = f_uuwd(e, b + 16, b, d_p444444444444044P44p44444444[31918]:int);
		//     UnityEngine_GameObject_get_transform(
		//       c,
		//       UnityEngine_LayerMask_LayerToName(
		//         d_p444444444444044P44p44444444[39341]:int,
		//         0),
		//       0);
		//     UnityEngine_Object_set_name(c,
		//                                 d_p444444444444044P44p44444444[30194]:int)[11]:int =
		//       1092616192;
		//     multiple_UnityEngine_Renderer_GetSharedMaterial(
		//       UnityEngine_Object_set_name(c,
		//                                   d_p444444444444044P44p44444444[30238]:int),
		//       a[5]:int,
		//       0);
		//     a = a[6]:int;
		//     a[5]:int = 0;
		//     RageEvent_remove_OnRageChanged(0.0f, 0.0f, a[4]:float, 0);
		//   }
		//   g_a = b + 96;
	}

	public void Beam()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (BeamByPlayer_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703486[0]:ubyte)) {
		//     f_hpa(5668592);
		//     6703486[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28440]:int);
	}

}
