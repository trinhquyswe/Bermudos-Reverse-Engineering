// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
[RequireComponent(typeof(EnemyMovement))]
[RequireComponent(typeof(EnemyStateEvent))]
[RequireComponent(typeof(EnemyAttack))]
public class EnemyAI : MonoBehaviour
{
	// Fields
	private EnemyMovement enemyMovement;
	private EnemyAttack enemyAttack;
	private EnemyStateEvent enemyStateEvent;
	private Enemy enemy;
	public EnemyState enemyState;
	private Coroutine attackCoroutine;
	private bool isAttack;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (EnemyAI_Awake) ----
		//   var this:int_ptr;
		//   var e:int;
		//   var f:int;
		//   if (eqz(6703857[0]:ubyte)) {
		//     f_hpa(5601992);
		//     f_hpa(5602056);
		//     f_hpa(5672624);
		//     f_hpa(5672628);
		//     6703857[0]:byte = 1;
		//   }
		//   var d:int_ptr = this[6];
		//   var methodInfo:int_ptr = d[4];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11790]:int);
		//   f_ofkc(c, this, d_p444444444444044P44p44444444[29448]:int, 0);
		//   methodInfo = f_iyud(methodInfo, c, 0);
		//   if (eqz(methodInfo)) {
		//     d[4] = 0;
		//     goto B_e;
		//   }
		//   c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11790]:int);
		//   if (eqz(c)) goto B_d;
		//   d[4] = c;
		//   if (
		//     eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11790]:int))) goto B_c;
		//   label B_e:
		//   methodInfo = (this[7])[10]:int;
		//   d = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29449]:int, 0);
		//   if (eqz(6703940[0]:ubyte)) {
		//     f_hpa(5602056);
		//     6703940[0]:byte = 1;
		//   }
		//   e = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_h {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
		//       if (eqz(methodInfo)) goto B_b;
		//     }
		//     c = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (c) continue L_h;
		//   }
		//   return ;
		//   label B_d:
		//   f_ypa(methodInfo, e);
		//   unreachable;
		//   label B_c:
		//   f_ypa(methodInfo, c);
		//   unreachable;
		//   label B_b:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (EnemyAI_OnEnable) ----
		//   var this:int_ptr;
		//   var e:int;
		//   var f:int;
		//   if (eqz(6703858[0]:ubyte)) {
		//     f_hpa(5601992);
		//     f_hpa(5602056);
		//     f_hpa(5672624);
		//     f_hpa(5672628);
		//     6703858[0]:byte = 1;
		//   }
		//   var d:int_ptr = this[6];
		//   var methodInfo:int_ptr = d[4];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11790]:int);
		//   f_ofkc(c, this, d_p444444444444044P44p44444444[29448]:int, 0);
		//   methodInfo = f_kyud(methodInfo, c, 0);
		//   if (eqz(methodInfo)) {
		//     d[4] = 0;
		//     goto B_e;
		//   }
		//   c = f_upa(methodInfo, e = d_p444444444444044P44p44444444[11790]:int);
		//   if (eqz(c)) goto B_d;
		//   d[4] = c;
		//   if (
		//     eqz(f_upa(methodInfo, c = d_p444444444444044P44p44444444[11790]:int))) goto B_c;
		//   label B_e:
		//   methodInfo = (this[7])[10]:int;
		//   d = f_icke(d_p444444444444044P44p44444444[11806]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29449]:int, 0);
		//   if (eqz(6703940[0]:ubyte)) {
		//     f_hpa(5602056);
		//     6703940[0]:byte = 1;
		//   }
		//   e = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_h {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11806]:int);
		//       if (eqz(methodInfo)) goto B_b;
		//     }
		//     c = this !=
		//         (methodInfo = System_Net_WebOperation_ctor(e, methodInfo, this));
		//     this = methodInfo;
		//     if (c) continue L_h;
		//   }
		//   return ;
		//   label B_d:
		//   f_ypa(methodInfo, e);
		//   unreachable;
		//   label B_c:
		//   f_ypa(methodInfo, c);
		//   unreachable;
		//   label B_b:
		//   f_ypa(c, f);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (EnemyAI_OnDisable) ----
		//   if (c[3]:float <= 0.0f) {
		//     var e:float = c[5]:float;
		//     if (eqz(6703859[0]:ubyte)) {
		//       f_hpa(5627336);
		//       6703859[0]:byte = 1;
		//     }
		//     c = f_icke(d_p444444444444044P44p44444444[18126]:int);
		//     c[5]:float = e;
		//     c[4]:int = a;
		//     c[2]:int = 0;
		//     UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
		//   }
	}

	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs)
	{
		// <no wasm mapping>
	}

	private void OnEnemyState(EnemyStateEvent enemyStateEvent, EnemyStateEventArgs enemyStateEventArgs)
	{
		// ---- decompiled from wasm (EnemyAI_OnEnemyState) ----
		//   br_table[B_d, B_b, B_e, B_c, B_a, ..B_e](a[8]:int - 1)
		//   label B_e:
		//   multiple_8_AttackEvent_remove_OnAttack((a[7]:int)[13]:int, 0);
		//   EnemyMovement_Start(a[4]:int, a);
		//   EnemyMovement_MoveRoamingPosition(a[4]:int, a);
		//   f_ttxd(a[4]:int, 0, a);
		//   return ;
		//   label B_d:
		//   multiple_8_AttackEvent_remove_OnAttack((a[7]:int)[13]:int, 0);
		//   EnemyMovement_FindPlayer(a[4]:int, a);
		//   EnemyMovement_MoveToPlayer(a[4]:int, a);
		//   f_ttxd(a[4]:int, 1, a);
		//   return ;
		//   label B_c:
		//   multiple_8_AttackEvent_remove_OnAttack((a[7]:int)[13]:int, 0);
		//   EnemyMovement_GetDistanceToStartPosition(a[4]:int, a);
		//   f_ttxd(a[4]:int, 0, a);
		//   return ;
		//   label B_b:
		//   if (eqz(a[40]:ubyte)) goto B_a;
		//   var c:int_ptr = (a[7]:int)[14]:int;
		//   b = c[4];
		//   if (b) { call_indirect(b[8], c, b[5], b[3]) }
		//   EnemyAttack_Start(a[5]:int, a);
		//   EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(
		//     a[6]:int,
		//     1,
		//     a);
		//   label B_a:
	}

	private void Update()
	{
		// ---- decompiled from wasm (EnemyAI_Update) ----
		//   if (eqz(6703859[0]:ubyte)) {
		//     f_hpa(5627336);
		//     6703859[0]:byte = 1;
		//   }
		//   c = f_icke(d_p444444444444044P44p44444444[18126]:int);
		//   c[5]:float = b;
		//   c[4]:int = a;
		//   c[2]:int = 0;
		//   UnityEngine_MonoBehaviour_StartCoroutine_1(a, c, 0);
	}

	private void StopAttack(float stunTime)
	{
		// <no wasm mapping>
	}

	private IEnumerator StopAttackCoroutine(float stunTime)
	{
		// ---- decompiled from wasm (EnemyAI_StopAttackCoroutine) ----
		//   a[40] = 1;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// EnemyAI_StopAttackCoroutine_d_14_System_Collections_Generic_IEnumerator_System_Object_get_Current(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5697816));
	//   unreachable;

	// EnemyAI_StopAttackCoroutine_d_14_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703861[0]:ubyte)) {
	//     f_hpa(5668472);
	//     6703861[0]:byte = 1;
	//   }
	//   this[4] =
	//     UnityEngine_GameObject_get_activeInHierarchy(
	//       this,
	//       d_p444444444444044P44p44444444[28410]:int);

}
