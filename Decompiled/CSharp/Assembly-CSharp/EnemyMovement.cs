// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
[RequireComponent(typeof(NavMeshAgent))]
[RequireComponent(typeof(Enemy))]
public class EnemyMovement : MonoBehaviour
{
	// Fields
	private Vector2 startPosition;
	private Vector2 roamingPosition;
	public NavMeshAgent navMeshAgent;
	private bool hasInitializedRoamingPosition;
	private Enemy enemy;
	private float maxDistance;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (EnemyMovement_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703873[0]:ubyte)) {
		//     f_hpa(5602056);
		//     f_hpa(5672640);
		//     6703873[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = (this[10])[10]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29452]:int, 0);
		//   if (eqz(6703940[0]:ubyte)) {
		//     f_hpa(5602056);
		//     6703940[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
		//       if (eqz(methodInfo)) goto B_c;
		//     }
		//     c = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (c) continue L_d;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (EnemyMovement_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703874[0]:ubyte)) {
		//     f_hpa(5602056);
		//     f_hpa(5672640);
		//     6703874[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = (this[10])[10]:int;
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29452]:int, 0);
		//   if (eqz(6703941[0]:ubyte)) {
		//     f_hpa(5602056);
		//     6703941[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_kyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
		//       if (eqz(methodInfo)) goto B_c;
		//     }
		//     c = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (c) continue L_d;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (EnemyMovement_OnDisable) ----
		//   if (c[3]:float <= 0.0f) {
		//     var e:float = c[5]:float;
		//     multiple_8_AttackEvent_remove_OnAttack((a[10])[12]:int, 0);
		//     if (eqz(6703879[0]:ubyte)) {
		//       f_hpa(5627352);
		//       6703879[0]:byte = 1;
		//     }
		//     c = f_icke(d_p444444444444044P44p44444444[18130]:int);
		//     c[5]:float = e;
		//     c[4]:int = a;
		//     c[2]:int = 0;
		//     UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
		//   }
	}

	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
		// ---- decompiled from wasm (EnemyMovement_PoiseEvent_OnPoise) ----
		//   b = g_a - 16;
		//   g_a = b;
		//   UnityEngine_AI_NavMeshAgent_set_acceleration(a[8]:int, 0, 0);
		//   UnityEngine_AI_NavMeshAgent_set_updateRotation(a[8]:int, 0, 0);
		//   UnityEngine_AI_NavMeshAgent_get_speed(a[8]:int, 3.0f, 0);
		//   UnityEngine_Camera_get_farClipPlane(
		//     b,
		//     System_Linq_Enumerable_Count(a, 0),
		//     0);
		//   a[4]:long@4 = b[0];
		//   g_a = b + 16;
	}

	private void Start()
	{
		// ---- decompiled from wasm (EnemyMovement_Start) ----
		//   var this:int;
		//   var c:long;
		//   var methodInfo:int = g_a - 48;
		//   g_a = methodInfo;
		//   if (this[36]:ubyte) {
		//     c = this[6]:long@4;
		//     goto B_a;
		//   }
		//   EnemyMovement_GoBackToStartPosition(methodInfo + 16, this, methodInfo);
		//   c = methodInfo[2]:long;
		//   this[36]:byte = 1;
		//   this[6]:long@4 = c;
		//   label B_a:
		//   var d:int_ptr = this[8]:int;
		//   methodInfo[10]:int = 0;
		//   methodInfo[2]:int = 0;
		//   methodInfo[4]:long = c;
		//   methodInfo[0]:long = c;
		//   multiple_UnityEngine_AI_NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected(
		//     d,
		//     methodInfo,
		//     0);
		//   UnityEngine_AI_NavMeshAgent_get_destination(this[8]:int, 1.0f, 0);
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo + 16,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   var e:float = methodInfo[5]:float;
		//   var f:float = methodInfo[4]:float;
		//   c = this[6]:long@4;
		//   d = i32_wrap_i64(c >> 32L);
		//   if (eqz(6665195[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6665195[0]:byte = 1;
		//   }
		//   var g:float = f32_reinterpret_i32(d);
		//   d = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(d[29])) { f_ahje(d) }
		//   f = f - f32_reinterpret_i32(i32_wrap_i64(c));
		//   if (sqrt(f * f + (e = e - g) * e) <= 1.0f) {
		//     EnemyMovement_GoBackToStartPosition(methodInfo + 16, this, methodInfo);
		//     this[6]:long@4 = methodInfo[2]:long;
		//   }
		//   g_a = methodInfo + 48;
	}

	public void MoveRoamingPosition()
	{
		// ---- decompiled from wasm (EnemyMovement_MoveRoamingPosition) ----
		//   var methodInfo:int;
		//   var this:int_ptr;
		//   var c:{ a:float, b:float } = g_a - 16;
		//   g_a = c;
		//   if (eqz(6703875[0]:ubyte)) {
		//     f_hpa(5660024);
		//     6703875[0]:byte = 1;
		//   }
		//   UnityEngine_Camera_get_farClipPlane(
		//     c,
		//     System_Linq_Enumerable_Count(
		//       (((if ((methodInfo = 
		//                 ((if ((methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
		//                       1) {
		//                     methodInfo
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(methodInfo)
		//                   })[24]:int)[2]:int)[189]:ubyte &
		//              1) {
		//            methodInfo
		//          } else {
		//            System_Threading_Monitor_Enter_1(methodInfo)
		//          })[23]:int)[0]:int)[4]:int,
		//       0),
		//     0);
		//   var d:float = c.b;
		//   var e:float = c.a;
		//   UnityEngine_Camera_get_farClipPlane(
		//     c,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   var f:float = c.b;
		//   var g:float = c.a;
		//   if (eqz(6665195[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6665195[0]:byte = 1;
		//   }
		//   methodInfo = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
		//   e = e - g;
		//   if (sqrt(e * e + (d = d - f) * d) < 5.0f) {
		//     EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(
		//       (this[10])[6]:int,
		//       1,
		//       c)
		//   }
		//   g_a = c + 16;
	}

	public void FindPlayer()
	{
		// ---- decompiled from wasm (EnemyMovement_FindPlayer) ----
		//   var this:int_ptr;
		//   var c:{ a:long, b:int, c:long, d:int } = g_a - 32;
		//   g_a = c;
		//   if (eqz(6703876[0]:ubyte)) {
		//     f_hpa(5619244);
		//     f_hpa(5660024);
		//     6703876[0]:byte = 1;
		//   }
		//   var methodInfo:ubyte_ptr = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189] & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   methodInfo = (((if (methodInfo[189] & 1) {
		//                     methodInfo
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(methodInfo)
		//                   })[23]:int)[0]:int)[4]:int;
		//   var d:int_ptr = d_p444444444444044P44p44444444[16103]:int;
		//   if (eqz(d[29])) { f_ahje(d) }
		//   if (
		//     eqz(UnityEngine_Camera_get_targetTexture(methodInfo, 0, 0))) goto B_e;
		//   if (
		//     eqz(UnityEngine_AI_NavMeshAgent_set_updateUpAxis(this[8], 0))) goto B_e;
		//   UnityEngine_AI_NavMeshAgent_get_destination(this[8], 2.0f, 0);
		//   this = this[8];
		//   UnityEngine_Camera_get_farClipPlane(
		//     c + 16,
		//     System_Linq_Enumerable_Count(
		//       (((if ((methodInfo = 
		//                 ((if ((methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189] &
		//                       1) {
		//                     methodInfo
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(methodInfo)
		//                   })[24]:int)[2]:int)[189] &
		//              1) {
		//            methodInfo
		//          } else {
		//            System_Threading_Monitor_Enter_1(methodInfo)
		//          })[23]:int)[0]:int)[4]:int,
		//       0),
		//     0);
		//   c.b = c.d;
		//   c.a = c.c;
		//   multiple_UnityEngine_AI_NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected(
		//     this,
		//     c,
		//     0);
		//   label B_e:
		//   g_a = c + 32;
	}

	public void MoveToPlayer()
	{
		// ---- decompiled from wasm (EnemyMovement_MoveToPlayer) ----
		//   var this:int;
		//   var methodInfo:{ a:float, b:float } = g_a - 16;
		//   g_a = methodInfo;
		//   this[11]:int = 1097859072;
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   var c:float = methodInfo.b;
		//   var d:float = methodInfo.a;
		//   var g:long = this[4]:long@4;
		//   var f:int_ptr = i32_wrap_i64(g >> 32L);
		//   if (eqz(6665195[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6665195[0]:byte = 1;
		//   }
		//   var e:float = f32_reinterpret_i32(f);
		//   f = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(f[29])) { f_ahje(f) }
		//   if (this[11]:float <
		//       sqrt(
		//         (d = d - f32_reinterpret_i32(i32_wrap_i64(g))) * d + (c = c - e) * c)) {
		//     EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(
		//       (this[10]:int)[6]:int,
		//       4,
		//       this)
		//   }
		//   g_a = methodInfo + 16;
	}

	public void GetDistanceToStartPosition()
	{
		// ---- decompiled from wasm (EnemyMovement_GetDistanceToStartPosition) ----
		//   var this:int;
		//   var methodInfo:int = g_a - 48;
		//   g_a = methodInfo;
		//   if (eqz(6703877[0]:ubyte)) {
		//     f_hpa(5660024);
		//     6703877[0]:byte = 1;
		//   }
		//   if (
		//     eqz(UnityEngine_AI_NavMeshAgent_set_updateUpAxis(this[8]:int, 0))) goto B_b;
		//   UnityEngine_AI_NavMeshAgent_get_destination(this[8]:int, 2.0f, 0);
		//   var c:int = this[8]:int;
		//   var i:long = this[4]:long@4;
		//   var d:int_ptr = methodInfo + 40;
		//   d[0] = 0;
		//   methodInfo[2]:int = d[0];
		//   methodInfo[4]:long = i;
		//   methodInfo[0]:long = i;
		//   multiple_UnityEngine_AI_NavMeshBuilder_UpdateNavMeshDataAsyncListInternal_Injected(
		//     c,
		//     methodInfo,
		//     0);
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo + 16,
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
		//   var e:float = methodInfo[5]:float;
		//   var f:float = methodInfo[4]:float;
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo + 16,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   var g:float = methodInfo[5]:float;
		//   var h:float = methodInfo[4]:float;
		//   if (eqz(6665195[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6665195[0]:byte = 1;
		//   }
		//   c = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(c[29]:int)) { f_ahje(c) }
		//   f = f - h;
		//   if (eqz(sqrt(f * f + (e = e - g) * e) <= 5.0f)) goto B_g;
		//   i = this[4]:long@4;
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo + 16,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   c = i32_wrap_i64(i >> 32L);
		//   e = methodInfo[5]:float;
		//   f = methodInfo[4]:float;
		//   d = i32_wrap_i64(i);
		//   if (eqz(6665195[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6665195[0]:byte = 1;
		//   }
		//   g = f32_reinterpret_i32(c);
		//   h = f32_reinterpret_i32(d);
		//   c = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(c[29]:int)) { f_ahje(c) }
		//   f = h - f;
		//   if (
		//     eqz(sqrt(f * f + (e = g - e) * e) <= this[11]:float + -5.0f)) goto B_g;
		//   EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(
		//     (this[10]:int)[6]:int,
		//     1,
		//     methodInfo);
		//   label B_g:
		//   UnityEngine_Camera_get_farClipPlane(
		//     methodInfo + 16,
		//     System_Linq_Enumerable_Count(this, 0),
		//     0);
		//   e = methodInfo[5]:float;
		//   f = methodInfo[4]:float;
		//   i = this[4]:long@4;
		//   c = i32_wrap_i64(i >> 32L);
		//   d = i32_wrap_i64(i);
		//   if (eqz(6665195[0]:ubyte)) {
		//     f_hpa(5618360);
		//     6665195[0]:byte = 1;
		//   }
		//   g = f32_reinterpret_i32(c);
		//   h = f32_reinterpret_i32(d);
		//   c = d_p444444444444044P44p44444444[15882]:int;
		//   if (eqz(c[29]:int)) { f_ahje(c) }
		//   f = f - h;
		//   if (eqz(sqrt(f * f + (e = e - g) * e) < 2.0f)) goto B_b;
		//   EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(
		//     (this[10]:int)[6]:int,
		//     0,
		//     methodInfo);
		//   label B_b:
		//   g_a = methodInfo + 48;
	}

	public void GoBackToStartPosition()
	{
		// ---- decompiled from wasm (EnemyMovement_GoBackToStartPosition) ----
		//   var d:float;
		//   var e:float;
		//   c = g_a - 96;
		//   g_a = c;
		//   c[22]:int = 0;
		//   c[10]:long = 0L;
		//   c[9]:long = 0L;
		//   (c - -64)[0]:long = 0L;
		//   c[7]:long = 0L;
		//   if (UnityEngine_AI_NavMeshAgent_set_updateUpAxis(b[8]:int, 0)) {
		//     var f:long = b[4]:long@4;
		//     HelperUtilities_GetAngleFromVector(c + 24, 0);
		//     var g:long = c[3]:long;
		//     b[6]:long@4 =
		//       i64_extend_i32_u(
		//         i32_reinterpret_f32(
		//           e = (d = UnityEngine_Random_InitState(1.0f, 5.0f, 0)) *
		//               f32_reinterpret_i32(i32_wrap_i64(g >> 32L)) +
		//               f32_reinterpret_i32(i32_wrap_i64(f >> 32L)))) <<
		//       32L |
		//       i64_extend_i32_u(
		//         i32_reinterpret_f32(d = d * f32_reinterpret_i32(i32_wrap_i64(g)) +
		//                                 f32_reinterpret_i32(i32_wrap_i64(f))));
		//     c[12]:int = 0;
		//     c[4]:int = 0;
		//     c[11]:float = e;
		//     c[10]:float = d;
		//     c[1]:long = c[5]:long;
		//     multiple_UnityEngine_AI_NavMesh_Internal_CallOnNavMeshPreUpdate(
		//       c + 8,
		//       c + 56,
		//       10.0f,
		//       1,
		//       0);
		//     multiple_19_System_Runtime_InteropServices_MemoryMarshal_AsMemory(
		//       c + 24,
		//       c + 56,
		//       0);
		//     a[0] = c[3]:long;
		//     goto B_a;
		//   }
		//   a[0] = b[6]:long@4;
		//   label B_a:
		//   g_a = c + 96;
	}

	public Vector2 GetRoamingPosition()
	{
		// <no wasm mapping>
	}

	public void GetAimDirection(bool isPlayerDir)
	{
		// ---- decompiled from wasm (EnemyMovement_GetAimDirection) ----
		//   var this:int_ptr;
		//   var isPlayerDir:float;
		//   multiple_8_AttackEvent_remove_OnAttack((this[10])[12]:int, 0);
		//   if (eqz(6703879[0]:ubyte)) {
		//     f_hpa(5627352);
		//     6703879[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[18130]:int);
		//   methodInfo[5]:float = isPlayerDir;
		//   methodInfo[4]:int = this;
		//   methodInfo[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
	}

	private void StopEnemy(float stunTime)
	{
		// <no wasm mapping>
	}

	private IEnumerator StopEnemyCoroutine(float stunTime)
	{
		// ---- decompiled from wasm (EnemyMovement_StopEnemyCoroutine) ----
		//   a[11] = 1097859072;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int_ptr)
	//   if (eqz(6703881[0]:ubyte)) {
	//     f_hpa(5614760);
	//     6703881[0]:byte = 1;
	//   }
	//   c = a[4];
	//   if (c) {
	//     var d:int_ptr = f_icke(d_p444444444444044P44p44444444[14982]:int);
	//     if (eqz(6703882[0]:ubyte)) {
	//       f_hpa(5614872);
	//       6703882[0]:byte = 1;
	//     }
	//     var e:int_ptr = d_p444444444444044P44p44444444[15010]:int;
	//     if (eqz(e[29])) { f_ahje(e) }
	//     d[2] = b;
	//     call_indirect(c[8], a, d, c[5], c[3]);
	//   }

	// EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_Generic_IEnumerator_System_Object_get_Curre(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697832));
	//   unreachable;

}
