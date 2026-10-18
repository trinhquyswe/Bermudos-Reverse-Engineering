// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class RangedSkills : MonoBehaviour
{
	// Fields
	private Animator animator;
	public Transform shootPosition;
	public AmmoDetailsSO ammo;
	public AmmoDetailsSO ammoPhase2;
	public GameObject Beam;
	public float[] offsetArr;

	// Methods
	private void Awake()
	{
		// <no wasm mapping>
	}

	public void Shoot(AmmoDetailsSO ammoDetailsSO, Vector3 shootPosition, Vector3 target)
	{
		// ---- decompiled from wasm (RangedSkills_BaseShoot) ----
		//   var c:int;
		//   var this:int_ptr;
		//   var methodInfo:int = g_a - 96;
		//   g_a = methodInfo;
		//   if (eqz(6703459[0]:ubyte)) {
		//     f_hpa(5675608);
		//     f_hpa(5682504);
		//     f_hpa(5619244);
		//     f_hpa(5660024);
		//     6703459[0]:byte = 1;
		//   }
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo - -64,
		//     System_Linq_Enumerable_Count(
		//       (((if ((c = 
		//                 ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
		//                       1) {
		//                     c
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(c)
		//                   })[24]:int)[2]:int)[189]:ubyte &
		//              1) {
		//            c
		//          } else {
		//            System_Threading_Monitor_Enter_1(c)
		//          })[23]:int)[0]:int)[4]:int,
		//       0),
		//     0);
		//   var e:float = methodInfo[17]:float;
		//   var f:float = methodInfo[16]:float;
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo - -64,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   c = methodInfo + 88;
		//   c[0]:float =
		//     (f_nvq(e - methodInfo[17]:float, f - methodInfo[16]:float) * 57.29578f +
		//      90.0f) *
		//     0.017453f;
		//   methodInfo[10]:int = c[0]:int;
		//   methodInfo[4]:long = 0L;
		//   methodInfo[10]:long = 0L;
		//   f_gul(methodInfo + 48, methodInfo + 32, 0);
		//   methodInfo[9]:long = methodInfo[7]:long;
		//   methodInfo[8]:long = methodInfo[6]:long;
		//   c = this[8];
		//   UnityEngine_Camera_get_farClipPlane(methodInfo + 80, this[5], 0);
		//   var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(d[29])) { f_ahje(d) }
		//   methodInfo[6]:int = methodInfo[22]:int;
		//   methodInfo[1]:long = methodInfo[9]:long;
		//   methodInfo[2]:long = methodInfo[10]:long;
		//   methodInfo[0]:long = methodInfo[8]:long;
		//   c = f_uuwd(c,
		//              methodInfo + 16,
		//              methodInfo,
		//              d_p444444444444044P44p44444444[31918]:int);
		//   UnityEngine_Object_set_name(c,
		//                               d_p444444444444044P44p44444444[30194]:int)[11]:int =
		//     1080033280;
		//   UnityEngine_Transform_get_parent(
		//     UnityEngine_GameObject_AddComponent(c, 0),
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   g_a = methodInfo + 96;
	}

	private Vector2[] Get15ShootDirections()
	{
		// ---- decompiled from wasm (RangedSkills_Get15ShootDirections) ----
		//   var this:int_ptr;
		//   var c:int;
		//   var methodInfo:int = g_a + -64;
		//   g_a = methodInfo;
		//   var d:int_ptr = RangedSkills_Awake(methodInfo, methodInfo);
		//   if (d[3] > 0) {
		//     loop L_b {
		//       UnityEngine_Camera_get_farClipPlane(
		//         methodInfo + 48,
		//         System_Linq_Enumerable_Count(this, 0),
		//         0);
		//       var h:float = methodInfo[13]:float;
		//       var i:float = methodInfo[12]:float;
		//       var j:float = methodInfo[14]:float;
		//       var g:long = d[c + 2]:long;
		//       var e:int = this[6];
		//       UnityEngine_Camera_get_farClipPlane(
		//         methodInfo + 48,
		//         System_Linq_Enumerable_Count(this, 0),
		//         0);
		//       var f:int = methodInfo + 40;
		//       f[0]:float = j + 0.0f;
		//       methodInfo[6]:int = methodInfo[14]:int;
		//       methodInfo[2]:int = f[0]:int;
		//       methodInfo[8]:float = i + f32_reinterpret_i32(i32_wrap_i64(g));
		//       methodInfo[9]:float = h + f32_reinterpret_i32(i32_wrap_i64(g >> 32L));
		//       methodInfo[2]:long = methodInfo[6]:long;
		//       methodInfo[0]:long = methodInfo[4]:long;
		//       f_ucxd(methodInfo, e, methodInfo + 16, methodInfo, methodInfo);
		//       c = c + 1;
		//       if (c < d[3]) continue L_b;
		//     }
		//   }
		//   g_a = methodInfo - -64;
	}

	public void BaseShoot()
	{
		// ---- decompiled from wasm (RangedSkills_BaseShoot) ----
		//   var c:int;
		//   var this:int_ptr;
		//   var methodInfo:int = g_a - 96;
		//   g_a = methodInfo;
		//   if (eqz(6703459[0]:ubyte)) {
		//     f_hpa(5675608);
		//     f_hpa(5682504);
		//     f_hpa(5619244);
		//     f_hpa(5660024);
		//     6703459[0]:byte = 1;
		//   }
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo - -64,
		//     System_Linq_Enumerable_Count(
		//       (((if ((c = 
		//                 ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
		//                       1) {
		//                     c
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(c)
		//                   })[24]:int)[2]:int)[189]:ubyte &
		//              1) {
		//            c
		//          } else {
		//            System_Threading_Monitor_Enter_1(c)
		//          })[23]:int)[0]:int)[4]:int,
		//       0),
		//     0);
		//   var e:float = methodInfo[17]:float;
		//   var f:float = methodInfo[16]:float;
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo - -64,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   c = methodInfo + 88;
		//   c[0]:float =
		//     (f_nvq(e - methodInfo[17]:float, f - methodInfo[16]:float) * 57.29578f +
		//      90.0f) *
		//     0.017453f;
		//   methodInfo[10]:int = c[0]:int;
		//   methodInfo[4]:long = 0L;
		//   methodInfo[10]:long = 0L;
		//   f_gul(methodInfo + 48, methodInfo + 32, 0);
		//   methodInfo[9]:long = methodInfo[7]:long;
		//   methodInfo[8]:long = methodInfo[6]:long;
		//   c = this[8];
		//   UnityEngine_Camera_get_farClipPlane(methodInfo + 80, this[5], 0);
		//   var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(d[29])) { f_ahje(d) }
		//   methodInfo[6]:int = methodInfo[22]:int;
		//   methodInfo[1]:long = methodInfo[9]:long;
		//   methodInfo[2]:long = methodInfo[10]:long;
		//   methodInfo[0]:long = methodInfo[8]:long;
		//   c = f_uuwd(c,
		//              methodInfo + 16,
		//              methodInfo,
		//              d_p444444444444044P44p44444444[31918]:int);
		//   UnityEngine_Object_set_name(c,
		//                               d_p444444444444044P44p44444444[30194]:int)[11]:int =
		//     1080033280;
		//   UnityEngine_Transform_get_parent(
		//     UnityEngine_GameObject_AddComponent(c, 0),
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   g_a = methodInfo + 96;
	}

	public void EyeAttack()
	{
		// ---- decompiled from wasm (RangedSkills_EyeAttack) ----
		//   if (eqz(6703460[0]:ubyte)) {
		//     f_hpa(5629620);
		//     6703460[0]:byte = 1;
		//   }
		//   d = f_icke(d_p444444444444044P44p44444444[18697]:int);
		//   d[6]:float = c;
		//   d[5]:float = b;
		//   d[4]:int = a;
		//   d[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, d, 0);
	}

	public void StartEyeLoop(float eyeLoopDuration, float eyeLoopRate)
	{
		// ---- decompiled from wasm (RangedSkills_EyeLoop) ----
		//   var g:long;
		//   var c:int;
		//   b = g_a - 112;
		//   g_a = b;
		//   if (eqz(6703461[0]:ubyte)) {
		//     f_hpa(5641676);
		//     f_hpa(5641680);
		//     f_hpa(5641684);
		//     f_hpa(5652788);
		//     6703461[0]:byte = 1;
		//   }
		//   b[13]:long = 0L;
		//   b[12]:long = 0L;
		//   b[11]:long = 0L;
		//   f_xsg(b + 88,
		//         RangedSkills_OpenMouth(a, b),
		//         d_p444444444444044P44p44444444[24489]:int);
		//   b[16]:int = 0;
		//   b[17]:int = b + 88;
		//   var e:int = b + 100;
		//   a = 
		//     {
		//       loop L_k {
		//         6151988[0]:int = 0;
		//         var d:int_ptr = 
		//           env_invoke_iii(13926, b + 88, d_p444444444444044P44p44444444[21712]:int);
		//         c = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (c == 1) goto B_h;
		//         if (d) {
		//           d = b + 80;
		//           d[0] = e[2]:int;
		//           b[9]:long = e[0]:long@4;
		//           var f:int = a[6];
		//           c = a[5];
		//           6151988[0]:int = 0;
		//           env_invoke_viii(2279, b + 48, c, 0);
		//           c = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (c == 1) goto B_j;
		//           b[10]:int = (c = b[14]:int);
		//           b[6]:int = c;
		//           b[2]:int = d[0];
		//           b[4]:long = (g = b[6]:long);
		//           6151988[0]:int = 0;
		//           b[2]:long = g;
		//           b[0]:long = b[9]:long;
		//           env_invoke_viiiii(13927, b, f, b + 16, b, b);
		//           c = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (c == 1) goto B_i;
		//           continue L_k;
		//         }
		//       }
		//       d_p444444444444044P44p44444444[21711]:int;
		//       goto B_f;
		//       label B_j:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_i:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_h:
		//       env_cxa_find_matching_catch_3(4889068);
		//       label B_g:
		//     }
		//   if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
		//   a = env_cxa_begin_catch(a)[0]:int;
		//   6151988[0]:int = 0;
		//   b[16]:int = a;
		//   env_invoke_v(58);
		//   c = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (c == 1) goto B_e;
		//   d_p444444444444044P44p44444444[21711]:int;
		//   if (a) goto B_c;
		//   label B_f:
		//   g_a = b + 112;
		//   return ;
		//   label B_e:
		//   a = env_cxa_find_matching_catch();
		//   env_getTempRet0();
		//   label B_d:
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13928, b - -64);
		//   b = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (b != 1) goto B_b;
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_c:
		//   System_Net_CommandStream_ReceiveCommandResponseCallback(a);
		//   unreachable;
		//   label B_b:
		//   env_resumeException(a);
		//   unreachable;
	}

	public IEnumerator EyeLoop(float eyeLoopDuration, float eyeLoopRate)
	{
		// ---- decompiled from wasm (RangedSkills_EyeLoop) ----
		//   var g:long;
		//   var c:int;
		//   b = g_a - 112;
		//   g_a = b;
		//   if (eqz(6703461[0]:ubyte)) {
		//     f_hpa(5641676);
		//     f_hpa(5641680);
		//     f_hpa(5641684);
		//     f_hpa(5652788);
		//     6703461[0]:byte = 1;
		//   }
		//   b[13]:long = 0L;
		//   b[12]:long = 0L;
		//   b[11]:long = 0L;
		//   f_xsg(b + 88,
		//         RangedSkills_OpenMouth(a, b),
		//         d_p444444444444044P44p44444444[24489]:int);
		//   b[16]:int = 0;
		//   b[17]:int = b + 88;
		//   var e:int = b + 100;
		//   a = 
		//     {
		//       loop L_k {
		//         6151988[0]:int = 0;
		//         var d:int_ptr = 
		//           env_invoke_iii(13926, b + 88, d_p444444444444044P44p44444444[21712]:int);
		//         c = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (c == 1) goto B_h;
		//         if (d) {
		//           d = b + 80;
		//           d[0] = e[2]:int;
		//           b[9]:long = e[0]:long@4;
		//           var f:int = a[6];
		//           c = a[5];
		//           6151988[0]:int = 0;
		//           env_invoke_viii(2279, b + 48, c, 0);
		//           c = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (c == 1) goto B_j;
		//           b[10]:int = (c = b[14]:int);
		//           b[6]:int = c;
		//           b[2]:int = d[0];
		//           b[4]:long = (g = b[6]:long);
		//           6151988[0]:int = 0;
		//           b[2]:long = g;
		//           b[0]:long = b[9]:long;
		//           env_invoke_viiiii(13927, b, f, b + 16, b, b);
		//           c = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (c == 1) goto B_i;
		//           continue L_k;
		//         }
		//       }
		//       d_p444444444444044P44p44444444[21711]:int;
		//       goto B_f;
		//       label B_j:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_i:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_g;
		//       label B_h:
		//       env_cxa_find_matching_catch_3(4889068);
		//       label B_g:
		//     }
		//   if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
		//   a = env_cxa_begin_catch(a)[0]:int;
		//   6151988[0]:int = 0;
		//   b[16]:int = a;
		//   env_invoke_v(58);
		//   c = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (c == 1) goto B_e;
		//   d_p444444444444044P44p44444444[21711]:int;
		//   if (a) goto B_c;
		//   label B_f:
		//   g_a = b + 112;
		//   return ;
		//   label B_e:
		//   a = env_cxa_find_matching_catch();
		//   env_getTempRet0();
		//   label B_d:
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13928, b - -64);
		//   b = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (b != 1) goto B_b;
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_c:
		//   System_Net_CommandStream_ReceiveCommandResponseCallback(a);
		//   unreachable;
		//   label B_b:
		//   env_resumeException(a);
		//   unreachable;
	}

	public void OpenMouth()
	{
		// <no wasm mapping>
	}

	public List<Vector3> GetTargetPositionList()
	{
		// ---- decompiled from wasm (RangedSkills_GetTargetPositionList) ----
		//   if (eqz(6703463[0]:ubyte)) {
		//     f_hpa(5629624);
		//     6703463[0]:byte = 1;
		//   }
		//   d = f_icke(d_p444444444444044P44p44444444[18698]:int);
		//   d[6]:float = b;
		//   d[4]:int = a;
		//   d[2]:int = 0;
		//   d[5]:float = c;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, d, 0);
	}

	public void StartMouthOpenLoopMouth(float mouthOpenLoopRate, float mouthOpenLoopDuration)
	{
		// <no wasm mapping>
	}

	public IEnumerator MouthOpenLoop(float mouthOpenLoopRate, float mouthOpenLoopDuration)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// RangedSkills_EyeLoop_d_11_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699708));
	//   unreachable;

	// RangedSkills_MouthOpenLoop_d_16_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5699712));
	//   unreachable;

	// RangedSkills_MouthOpenLoop_d_16_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703466[0]:ubyte)) {
	//     f_hpa(5668552);
	//     6703466[0]:byte = 1;
	//   }
	//   this[4] =
	//     UnityEngine_GameObject_get_activeInHierarchy(
	//       this,
	//       d_p444444444444044P44p44444444[28430]:int);

}
