// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class MeleeSkills : MonoBehaviour
{
	// Fields
	private Boss boss;
	private Weapon weapon;
	public float minDistance;
	private LayerMask playerLayer;
	private MovementToPositionEvent movementToPositionEvent;
	private ContactFilter2D contactFilter2D;
	private Coroutine activeSkillCoroutine;
	private WaitForFixedUpdate waitForFixedUpdate;
	private SoundEffectSO slashSoundEffect;
	public bool isAttacking;
	public float speed;
	public float cooldown;
	private float previousDistance;
	private int count;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (MeleeSkills_Awake) ----
		//   var this:int;
		//   this[76]:byte = 0;
		//   UnityEngine_ContactFilter2D_CheckConsistency(this + 36, this[7]:int, 0);
		//   this[18]:short = 257;
	}

	private void Start()
	{
		// ---- decompiled from wasm (MeleeSkills_Start) ----
		//   var i:int;
		//   var k:long;
		//   c = g_a - 80;
		//   g_a = c;
		//   if (eqz(6703451[0]:ubyte)) {
		//     f_hpa(5609960);
		//     f_hpa(5668596);
		//     f_hpa(5668612);
		//     f_hpa(5668840);
		//     f_hpa(5619244);
		//     f_hpa(5619608);
		//     f_hpa(5660012);
		//     6703451[0]:byte = 1;
		//   }
		//   Weapon_Start(a[5]:int, 0);
		//   var d:int = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   d = 
		//     ((if (d[189]:ubyte & 1) { d } else { System_Threading_Monitor_Enter_1(d) })[24]:int)[2]:int;
		//   if (eqz(d[189]:ubyte & 1)) { d = System_Threading_Monitor_Enter_1(d) }
		//   SoundEffectManager_Start((d[23]:int)[0]:int, a[18]:int, d);
		//   var h:int = Mono_Security_ASN1Convert_ToOid(
		//                 d_p444444444444044P44p44444444[13782]:int,
		//                 1);
		//   d = (a[5]:int)[5]:int;
		//   var f:int_ptr = c + 72;
		//   f[0] = a[15]:int;
		//   var e:int = c - -64;
		//   e[0]:long = a[13]:long@4;
		//   c.h = a[11]:long@4;
		//   c.g = a[9]:long@4;
		//   var g:int_ptr = d_p444444444444044P44p44444444[16194]:int;
		//   if (eqz(g[29])) { f_ahje(g) }
		//   c.e = f[0];
		//   c.d = e[0]:long;
		//   c.c = c.h;
		//   c.b = c.g;
		//   var j:int = f_ndx(d, c + 8, h, 0);
		//   if (j > 0) {
		//     f = 0;
		//     g = 0;
		//     loop L_f {
		//       d = h[f + 4]:int;
		//       e = d_p444444444444044P44p44444444[16103]:int;
		//       if (eqz(e[29]:int)) { f_ahje(e) }
		//       if (eqz(UnityEngine_Camera_get_targetTexture(d, 0, 0))) goto B_h;
		//       e = UnityEngine_GameObject_get_activeInHierarchy(
		//             d,
		//             d_p444444444444044P44p44444444[28445]:int);
		//       g = select_if(e, g, e);
		//       if (e) { ReceiveDamage_Awake(g, b, 0) }
		//       e = UnityEngine_GameObject_get_activeInHierarchy(
		//             d,
		//             d_p444444444444044P44p44444444[28441]:int);
		//       i = select_if(e, i, e);
		//       if (e) {
		//         UnityEngine_Camera_get_farClipPlane(
		//           c + 48,
		//           System_Linq_Enumerable_Count(a, 0),
		//           0);
		//         c.f = (k = c.g);
		//         c.a = k;
		//         PlayerEffect_DamageFlashCoroutine(i, c, 0);
		//       }
		//       e = UnityEngine_GameObject_get_activeInHierarchy(
		//             d,
		//             d_p444444444444044P44p44444444[28441]:int);
		//       if (eqz(e)) goto B_h;
		//       PlayerEffect_Update(
		//         e,
		//         UnityEngine_MonoBehaviour_InvokeRepeating(0)[6]:int,
		//         UnityEngine_MonoBehaviour_InvokeRepeating(0)[7]:int,
		//         f_rrrc(d, d_p444444444444044P44p44444444[28502]:int),
		//         0);
		//       label B_h:
		//       f = f + 1;
		//       if (f != j) continue L_f;
		//     }
		//   }
		//   g_a = c + 80;
	}

	public void DealDamage(int damage)
	{
		// ---- decompiled from wasm (MeleeSkills_DealDamage) ----
		//   var this:int_ptr;
		//   var damage:int;
		//   var methodInfo:int_ptr = this[16];
		//   if (methodInfo) { UnityEngine_MonoBehaviour_StopCoroutine(this, methodInfo, 0) }
		//   if (eqz(6703452[0]:ubyte)) {
		//     f_hpa(5628728);
		//     6703452[0]:byte = 1;
		//   }
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[18474]:int);
		//   methodInfo[5] = damage;
		//   methodInfo[4] = this;
		//   methodInfo[2] = 0;
		//   this[16] =
		//     UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
	}

	public void PlayActiveSkill(int skill)
	{
		// ---- decompiled from wasm (MeleeSkills_ActiveSkill) ----
		//   b = a[16];
		//   if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
	}

	private IEnumerator ActiveSkill(int skill)
	{
		// ---- decompiled from wasm (MeleeSkills_ActiveSkill) ----
		//   b = a[16];
		//   if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
	}

	private void StopActiveSkillRoutine()
	{
		// ---- decompiled from wasm (MeleeSkills_StopActiveSkillRoutine) ----
		//   if (eqz(6703453[0]:ubyte)) {
		//     f_hpa(5728548);
		//     6703453[0]:byte = 1;
		//   }
		//   if (UnityEngine_Camera_get_cullingMask(
		//         UnityEngine_Collision2D_get_rigidbody(b, 0),
		//         0) !=
		//       UnityEngine_LayerMask_LayerToName(
		//         d_p444444444444044P44p44444444[43429]:int,
		//         0)) {
		//     b = a[16]:int;
		//     if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
		//     a[76]:byte = 1;
		//   }
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
		// ---- decompiled from wasm (MeleeSkills_OnCollisionEnter2D) ----
		//   if (eqz(6703454[0]:ubyte)) {
		//     f_hpa(5624112);
		//     6703454[0]:byte = 1;
		//   }
		//   a[6] = 1073741824;
		//   a[17] = f_icke(d_p444444444444044P44p44444444[17320]:int);
		//   multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// MeleeSkills_ActiveSkill_d_18_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5698956));
	//   unreachable;

	// MeleeSkills_ActiveSkill_d_18_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703456[0]:ubyte)) {
	//     f_hpa(5668376);
	//     6703456[0]:byte = 1;
	//   }
	//   this[4] =
	//     UnityEngine_GameObject_get_activeInHierarchy(
	//       this,
	//       d_p444444444444044P44p44444444[28386]:int);

}
