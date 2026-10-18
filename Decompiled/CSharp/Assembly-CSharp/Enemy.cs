// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[RequireComponent(typeof(EnemyStateEvent))]
[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(Health))]
[RequireComponent(typeof(EnemyEffect))]
[RequireComponent(typeof(AnimateEvent))]
[RequireComponent(typeof(HealthEvent))]
[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(SpriteRenderer))]
[RequireComponent(typeof(PoiseEvent))]
[DisallowMultipleComponent]
[RequireComponent(typeof(AttackEvent))]
[RequireComponent(typeof(MoveByEnemyAIEvent))]
[RequireComponent(typeof(IdleEvent))]
public class Enemy : MonoBehaviour
{
	// Fields
	public AnimateEvent animateEvent;
	public HealthEvent healthEvent;
	public EnemyStateEvent enemyStateEvent;
	public Animator animator;
	public Health health;
	public EnemyEffect enemyEffect;
	public PoiseEvent poiseEvent;
	private SpriteRenderer spriteRenderer;
	public IdleEvent idleEvent;
	public MoveByEnemyAIEvent moveByEnemyAIEvent;
	public AttackEvent attackEvent;
	public EnemyAI enemyAI;
	public AnimationEnemyType animationEnemyType;
	public string mapKey;
	public int enemyID;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (Enemy_Awake) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703853[0]:ubyte)) {
		//     f_hpa(5601996);
		//     f_hpa(5672620);
		//     6703853[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[5];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29447]:int, 0);
		//   if (eqz(6703935[0]:ubyte)) {
		//     f_hpa(5601996);
		//     6703935[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_iyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
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
		// ---- decompiled from wasm (Enemy_OnEnable) ----
		//   var this:int_ptr;
		//   var f:int;
		//   var c:int;
		//   if (eqz(6703854[0]:ubyte)) {
		//     f_hpa(5601996);
		//     f_hpa(5672620);
		//     6703854[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = this[5];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11791]:int);
		//   f_ofkc(d, this, d_p444444444444044P44p44444444[29447]:int, 0);
		//   if (eqz(6703936[0]:ubyte)) {
		//     f_hpa(5601996);
		//     6703936[0]:byte = 1;
		//   }
		//   var e:int = methodInfo + 16;
		//   this = methodInfo[4];
		//   loop L_d {
		//     methodInfo = 0;
		//     c = f_kyud(this, d, 0);
		//     if (c) {
		//       methodInfo = f_upa(c, f = d_p444444444444044P44p44444444[11791]:int);
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
		// ---- decompiled from wasm (Enemy_OnDisable) ----
		//   a[18] = c;
		//   a[17] = b;
	}

	public void InitializeEnemy(string mapName, int enemyID)
	{
		// ---- decompiled from wasm (Enemy_InitializeEnemy) ----
		//   var enemyID:int_ptr;
		//   var this:int;
		//   if (enemyID[3] <= 0) { Enemy_HealthEvent_OnHealthLost(this, enemyID) }
	}

	private void HealthEvent_OnHealthLost(HealthEvent healthEvent, HealthEventArgs healthEventArgs)
	{
		// ---- decompiled from wasm (Enemy_HealthEvent_OnHealthLost) ----
		//   if (eqz(6703855[0]:ubyte)) {
		//     f_hpa(5668464);
		//     f_hpa(5614436);
		//     6703855[0]:byte = 1;
		//   }
		//   var c:int_ptr = UnityEngine_GameObject_get_activeInHierarchy(
		//                     a,
		//                     d_p444444444444044P44p44444444[28408]:int);
		//   a = f_icke(d_p444444444444044P44p44444444[14901]:int);
		//   if (eqz(6703926[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703926[0]:byte = 1;
		//   }
		//   b = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(b[29])) { f_ahje(b) }
		//   a[8] = 0;
		//   b = c[4];
		//   if (b) { call_indirect(b[8], c, a, b[5], b[3]) }
	}

	private void EnemyDestroyed()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (Enemy_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703856[0]:ubyte)) {
		//     f_hpa(5668480);
		//     f_hpa(5668488);
		//     f_hpa(5668492);
		//     f_hpa(5668472);
		//     6703856[0]:byte = 1;
		//   }
		//   this[7] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28410]:int);
		//   this[6] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28415]:int);
		//   this[5] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28412]:int);
		//   this[4] =
		//     UnityEngine_GameObject_get_activeInHierarchy(
		//       this,
		//       d_p444444444444044P44p44444444[28414]:int);
	}

}
