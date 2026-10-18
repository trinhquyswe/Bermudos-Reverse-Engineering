// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class Beam : MonoBehaviour
{
	// Fields
	private bool isColliding;
	private int damageBeam;
	private Animator animator;
	private LayerMask enemyLayerMask;
	private LayerMask bossLayerMask;
	private LayerMask playerLayerMask;
	private LayerMask bashAmmoLayerMask;
	public float amountScaleY;
	private SoundEffectSO beamSoundEffect;
	private SoundEffectSO beamPlayerSoundEffect;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Beam_Awake) ----
		//   var this:int;
		//   var methodInfo:int = g_a - 128;
		//   g_a = methodInfo;
		//   UnityEngine_Animator_GetAnimatorStateInfo(methodInfo + 48,
		//                                             this[6]:int,
		//                                             0,
		//                                             0);
		//   methodInfo[30]:int = methodInfo[20]:int;
		//   methodInfo[14]:long = methodInfo[9]:long;
		//   methodInfo[13]:long = (methodInfo - -64)[0]:long;
		//   methodInfo[12]:long = methodInfo[7]:long;
		//   methodInfo[11]:long = methodInfo[6]:long;
		//   var c:float = (methodInfo + 88)[3]:float;
		//   var f:int = System_Linq_Enumerable_Count(this, 0);
		//   UnityEngine_Transform_set_localRotation(
		//     methodInfo + 32,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   var d:float = methodInfo[8]:float;
		//   var e:float = this[11]:float;
		//   UnityEngine_Transform_set_localRotation(
		//     methodInfo + 32,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   this = methodInfo + 24;
		//   this[0]:float = methodInfo[10]:float;
		//   methodInfo[2]:int = this[0]:int;
		//   methodInfo[5]:float =
		//     e * select_if(0.0f, ((c = c / 1.5f) min 1.0f) + 0.0f, c < 0.0f);
		//   methodInfo[4]:float = d;
		//   methodInfo[0]:long = methodInfo[2]:long;
		//   multiple_UnityEngine_Transform_get_localScale(f, methodInfo, 0);
		//   g_a = methodInfo + 128;
	}

	private void LateUpdate()
	{
		// ---- decompiled from wasm (Beam_LateUpdate) ----
		//   var this:int_ptr;
		//   if (eqz(6703447[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703447[0]:byte = 1;
		//   }
		//   var d:int = (this + 40)[0]:int;
		//   var e:int = UnityEngine_Camera_get_cullingMask(f_canb(this, 0), 0);
		//   var methodInfo:int = 
		//     (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   var c:int = methodInfo[189]:ushort@1 & 1;
		//   this = 
		//     {
		//       if ((d & 1 << e) > 0) {
		//         methodInfo = 
		//           ((if (c) { methodInfo } else { System_Threading_Monitor_Enter_1(methodInfo) })[24]:int)[2]:int;
		//         if (eqz(methodInfo[189]:ubyte & 1)) {
		//           methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
		//         }
		//         this + 52;
		//         goto B_b;
		//       }
		//       methodInfo = 
		//         ((if (c) { methodInfo } else { System_Threading_Monitor_Enter_1(methodInfo) })[24]:int)[2]:int;
		//       if (eqz(methodInfo[189]:ubyte & 1)) {
		//         methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
		//       }
		//       this + 48;
		//       label B_b:
		//     }
		//   SoundEffectManager_Start((methodInfo[23]:int)[0]:int, this[0], this);
	}

	private void Start()
	{
		// ---- decompiled from wasm (Beam_Start) ----
		//   var this:int;
		//   if (eqz(6703448[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703448[0]:byte = 1;
		//   }
		//   this = f_canb(this, 0);
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
		//   f_kfnb(this, 0);
	}

	public void EyeAttackEnd()
	{
		// ---- decompiled from wasm (Beam_EyeAttackEnd) ----
		//   var e:long;
		//   var d:int;
		//   c = g_a + -64;
		//   g_a = c;
		//   if (eqz(6703449[0]:ubyte)) {
		//     f_hpa(5668404);
		//     f_hpa(5668484);
		//     f_hpa(5668596);
		//     f_hpa(5668612);
		//     f_hpa(5668840);
		//     6703449[0]:byte = 1;
		//   }
		//   if (eqz(a[16]:ubyte)) {
		//     if (((a + 36)[0]:int &
		//          1 << UnityEngine_Camera_get_cullingMask(f_canb(b, 0), 0)) >
		//         0) {
		//       d = UnityEngine_GameObject_get_activeInHierarchy(
		//             b,
		//             d_p444444444444044P44p44444444[28441]:int);
		//       UnityEngine_Camera_get_farClipPlane(
		//         c + 48,
		//         System_Linq_Enumerable_Count(a, 0),
		//         0);
		//       c.f = (e = c.g);
		//       c.e = e;
		//       PlayerEffect_DamageFlashCoroutine(d, c + 32, 0);
		//       PlayerEffect_Update(
		//         UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28441]:int),
		//         UnityEngine_MonoBehaviour_InvokeRepeating(0)[6]:int,
		//         UnityEngine_MonoBehaviour_InvokeRepeating(0)[7]:int,
		//         f_rrrc(b, d_p444444444444044P44p44444444[28502]:int),
		//         0);
		//     }
		//     d = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28445]:int);
		//     if (d) { ReceiveDamage_Awake(d, a[5]:int, 0) }
		//     if (
		//       ((a + 28)[0]:int &
		//        1 << UnityEngine_Camera_get_cullingMask(f_canb(b, 0), 0)) <=
		//       0) goto B_e;
		//     d = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28413]:int);
		//     if (d) {
		//       UnityEngine_Camera_get_farClipPlane(
		//         c + 48,
		//         System_Linq_Enumerable_Count(a, 0),
		//         0);
		//       c.d = c.h;
		//       c.c = c.g;
		//       EnemyEffect_DamageFlashCoroutine(d, c + 16, 0);
		//     }
		//     d = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28413]:int);
		//     if (eqz(d)) goto B_e;
		//     EnemyEffect_Start(
		//       d,
		//       UnityEngine_MonoBehaviour_InvokeRepeating(0)[6]:int,
		//       UnityEngine_MonoBehaviour_InvokeRepeating(0)[7]:int,
		//       f_rrrc(b, d_p444444444444044P44p44444444[28502]:int),
		//       0);
		//     label B_e:
		//     if (
		//       ((a + 32)[0]:int &
		//        1 << UnityEngine_Camera_get_cullingMask(f_canb(b, 0), 0)) <=
		//       0) goto B_g;
		//     d = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28393]:int);
		//     if (d) {
		//       UnityEngine_Camera_get_farClipPlane(
		//         c + 48,
		//         System_Linq_Enumerable_Count(a, 0),
		//         0);
		//       c.b = c.h;
		//       c.a = c.g;
		//       BossEffect_PoiseEvent_onPoiseEvent(d, c, 0);
		//     }
		//     b = UnityEngine_GameObject_get_activeInHierarchy(
		//           b,
		//           d_p444444444444044P44p44444444[28393]:int);
		//     if (eqz(b)) goto B_g;
		//     BossEffect_PushEnemyByWeaponCoroutine(b, 0);
		//     label B_g:
		//     a[16]:byte = 1;
		//   }
		//   g_a = c - -64;
	}

	private void OnTriggerEnter2D(Collider2D collision)
	{
		// ---- decompiled from wasm (Beam_OnTriggerEnter2D) ----
		//   a[5] = 20;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Beam_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703450[0]:ubyte)) {
		//     f_hpa(5668400);
		//     f_hpa(5668568);
		//     f_hpa(5668704);
		//     6703450[0]:byte = 1;
		//   }
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28392]:int);
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28468]:int);
		//   this[8] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28434]:int);
	}

}
