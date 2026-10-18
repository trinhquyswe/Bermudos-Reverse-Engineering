// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class AnimateEnemy : MonoBehaviour
{
	// Fields
	private Enemy enemy;
	private AimDirection aimDirection;
	private Coroutine attackAnimationCoroutine;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (AnimateEnemy_Awake) ----
		//   var this:int_ptr;
		//   var g:int;
		//   var c:int;
		//   var d:int;
		//   if (eqz(6703731[0]:ubyte)) {
		//     f_hpa(5601788);
		//     f_hpa(5601704);
		//     f_hpa(5601820);
		//     f_hpa(5601960);
		//     f_hpa(5664196);
		//     f_hpa(5664200);
		//     f_hpa(5664204);
		//     f_hpa(5664208);
		//     6703731[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = (this[4])[4]:int;
		//   var e:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
		//   f_ofkc(e, this, d_p444444444444044P44p44444444[27341]:int, 0);
		//   if (eqz(6703740[0]:ubyte)) {
		//     f_hpa(5601960);
		//     6703740[0]:byte = 1;
		//   }
		//   var f:int = methodInfo + 16;
		//   methodInfo = methodInfo[4];
		//   loop L_e {
		//     c = 0;
		//     d = f_iyud(methodInfo, e, 0);
		//     if (d) {
		//       c = f_upa(d, g = d_p444444444444044P44p44444444[11782]:int);
		//       if (eqz(c)) goto B_d;
		//     }
		//     d = 
		//       methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
		//     methodInfo = c;
		//     if (d) continue L_e;
		//   }
		//   methodInfo = (this[4])[12]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[11739]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[27343]:int,
		//     0);
		//   Idle_ctor(methodInfo, c, 0);
		//   methodInfo = (this[4])[13]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[11747]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[27344]:int,
		//     0);
		//   IdleEvent_ctor(methodInfo, c, 0);
		//   methodInfo = (this[4])[14]:int;
		//   e = f_icke(d_p444444444444044P44p44444444[11718]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     e,
		//     this,
		//     d_p444444444444044P44p44444444[27342]:int,
		//     0);
		//   if (eqz(6703757[0]:ubyte)) {
		//     f_hpa(5601704);
		//     6703757[0]:byte = 1;
		//   }
		//   f = methodInfo + 16;
		//   methodInfo = methodInfo[4];
		//   loop L_h {
		//     c = 0;
		//     d = f_iyud(methodInfo, e, 0);
		//     if (d) {
		//       c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
		//       if (eqz(c)) goto B_c;
		//     }
		//     d = 
		//       methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
		//     methodInfo = c;
		//     if (d) continue L_h;
		//   }
		//   return ;
		//   label B_d:
		//   f_ypa(d, g);
		//   unreachable;
		//   label B_c:
		//   f_ypa(d, g);
		//   unreachable;
	}

	private void Start()
	{
		// ---- decompiled from wasm (AnimateEnemy_Start) ----
		//   var this:int_ptr;
		//   var g:int;
		//   var c:int;
		//   var d:int;
		//   if (eqz(6703732[0]:ubyte)) {
		//     f_hpa(5601788);
		//     f_hpa(5601704);
		//     f_hpa(5601820);
		//     f_hpa(5601960);
		//     f_hpa(5664196);
		//     f_hpa(5664200);
		//     f_hpa(5664204);
		//     f_hpa(5664208);
		//     6703732[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = (this[4])[4]:int;
		//   var e:int = f_icke(d_p444444444444044P44p44444444[11782]:int);
		//   f_ofkc(e, this, d_p444444444444044P44p44444444[27341]:int, 0);
		//   if (eqz(6703741[0]:ubyte)) {
		//     f_hpa(5601960);
		//     6703741[0]:byte = 1;
		//   }
		//   var f:int = methodInfo + 16;
		//   methodInfo = methodInfo[4];
		//   loop L_e {
		//     c = 0;
		//     d = f_kyud(methodInfo, e, 0);
		//     if (d) {
		//       c = f_upa(d, g = d_p444444444444044P44p44444444[11782]:int);
		//       if (eqz(c)) goto B_d;
		//     }
		//     d = 
		//       methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
		//     methodInfo = c;
		//     if (d) continue L_e;
		//   }
		//   methodInfo = (this[4])[12]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[11739]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[27343]:int,
		//     0);
		//   IdleEvent_add_OnIdle(methodInfo, c, 0);
		//   methodInfo = (this[4])[13]:int;
		//   c = f_icke(d_p444444444444044P44p44444444[11747]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     c,
		//     this,
		//     d_p444444444444044P44p44444444[27344]:int,
		//     0);
		//   MoveByEnemyAIEvent_add_OnMoveByEnemyAI(methodInfo, c, 0);
		//   methodInfo = (this[4])[14]:int;
		//   e = f_icke(d_p444444444444044P44p44444444[11718]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     e,
		//     this,
		//     d_p444444444444044P44p44444444[27342]:int,
		//     0);
		//   if (eqz(6703758[0]:ubyte)) {
		//     f_hpa(5601704);
		//     6703758[0]:byte = 1;
		//   }
		//   f = methodInfo + 16;
		//   methodInfo = methodInfo[4];
		//   loop L_h {
		//     c = 0;
		//     d = f_kyud(methodInfo, e, 0);
		//     if (d) {
		//       c = f_upa(d, g = d_p444444444444044P44p44444444[11718]:int);
		//       if (eqz(c)) goto B_c;
		//     }
		//     d = 
		//       methodInfo != (c = System_Net_WebOperation_ctor(f, c, methodInfo));
		//     methodInfo = c;
		//     if (d) continue L_h;
		//   }
		//   return ;
		//   label B_d:
		//   f_ypa(d, g);
		//   unreachable;
		//   label B_c:
		//   f_ypa(d, g);
		//   unreachable;
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (AnimateEnemy_OnDisable) ----
		//   if (eqz(6703733[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703733[0]:byte = 1;
		//   }
		//   if (a[6]) goto B_b;
		//   if ((a[4])[16]:int - 1 > 1) goto B_b;
		//   AnimateEnemy_PlayAttackAnimationCoroutine(a, a);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (a[4])[7]:int,
		//     ((if ((a = d_p444444444444044P44p44444444[16612]:int)[29]) {
		//         a
		//       } else {
		//         f_ahje(a);
		//         d_p444444444444044P44p44444444[16612]:int;
		//       })[23]:int)[1]:int,
		//     1,
		//     0);
		//   label B_b:
	}

	private void MoveByEnemyAIEvent_OnMoveByEnemyAI(MoveByEnemyAIEvent moveByEnemyAIEvent)
	{
		// ---- decompiled from wasm (AnimateEnemy_MoveByEnemyAIEvent_OnMoveByEnemyAI) ----
		//   var this:int_ptr;
		//   if (eqz(6703734[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703734[0]:byte = 1;
		//   }
		//   if ((this[4])[16]:int - 1 <= 1) {
		//     AnimateEnemy_PlayAttackAnimationCoroutine(this, this);
		//     multiple_UnityEngine_Animator_GetBool_1(
		//       (this[4])[7]:int,
		//       ((if ((this = d_p444444444444044P44p44444444[16612]:int)[29]) {
		//           this
		//         } else {
		//           f_ahje(this);
		//           d_p444444444444044P44p44444444[16612]:int;
		//         })[23]:int)[0]:int,
		//       1,
		//       0);
		//   }
	}

	private void IdleEvent_OnIdle(IdleEvent idleEvent)
	{
		// ---- decompiled from wasm (AnimateEnemy_IdleEvent_OnIdle) ----
		//   var this:int_ptr;
		//   if (eqz(6703735[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703735[0]:byte = 1;
		//   }
		//   if ((this[4])[16]:int == 2) {
		//     var idleEvent:int_ptr = this[6];
		//     if (idleEvent) { UnityEngine_MonoBehaviour_StopCoroutine(this, idleEvent, 0) }
		//     if (eqz(6703736[0]:ubyte)) {
		//       f_hpa(5625724);
		//       6703736[0]:byte = 1;
		//     }
		//     idleEvent = f_icke(d_p444444444444044P44p44444444[17723]:int);
		//     idleEvent[4] = this;
		//     idleEvent[2] = 0;
		//     this[6] =
		//       UnityEngine_MonoBehaviour_StartCoroutine_1(this, idleEvent, 0);
		//     AnimateEnemy_PlayAttackAnimationCoroutine(this, this);
		//     multiple_UnityEngine_Animator_SetTrigger(
		//       (this[4])[7]:int,
		//       ((if ((this = d_p444444444444044P44p44444444[16612]:int)[29]) {
		//           this
		//         } else {
		//           f_ahje(this);
		//           d_p444444444444044P44p44444444[16612]:int;
		//         })[23]:int)[2]:int,
		//       0);
		//   }
	}

	private void AttackEvent_OnAttack(AttackEvent attackEvent)
	{
		// ---- decompiled from wasm (AnimateEnemy_AttackEvent_OnAttack) ----
		//   b = a[6];
		//   if (b) { UnityEngine_MonoBehaviour_StopCoroutine(a, b, 0) }
		//   if (eqz(6703736[0]:ubyte)) {
		//     f_hpa(5625724);
		//     6703736[0]:byte = 1;
		//   }
		//   b = f_icke(d_p444444444444044P44p44444444[17723]:int);
		//   b[4] = a;
		//   b[2] = 0;
		//   a[6] = UnityEngine_MonoBehaviour_StartCoroutine_1(a, b, 0);
	}

	private void PlayAttackAnimation()
	{
		// <no wasm mapping>
	}

	private IEnumerator PlayAttackAnimationCoroutine()
	{
		// ---- decompiled from wasm (AnimateEnemy_PlayAttackAnimationCoroutine) ----
		//   var this:int_ptr;
		//   if (eqz(6703737[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703737[0]:byte = 1;
		//   }
		//   var methodInfo:int_ptr = d_p444444444444044P44p44444444[16612]:int;
		//   var c:int = methodInfo[29];
		//   var e:int_ptr = this[4];
		//   var d:int = e[7];
		//   c = 
		//     {
		//       if (e[16] == 2) {
		//         multiple_UnityEngine_Animator_GetBool_1(
		//           d,
		//           ((if (c) {
		//               methodInfo
		//             } else {
		//               f_ahje(methodInfo);
		//               d_p444444444444044P44p44444444[16612]:int;
		//             })[23]:int)[0]:int,
		//           0,
		//           0);
		//         methodInfo = (d_p444444444444044P44p44444444[16612]:int)[23]:int + 4;
		//         d = (this[4])[7]:int;
		//         8;
		//         goto B_b;
		//       }
		//       methodInfo = (if (c) {
		//                       methodInfo
		//                     } else {
		//                       f_ahje(methodInfo);
		//                       d_p444444444444044P44p44444444[16612]:int;
		//                     })[23]:int;
		//       4;
		//       label B_b:
		//     }
		//   multiple_UnityEngine_Animator_GetBool_1(d, methodInfo[0], 0, 0);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (this[4])[7]:int,
		//     ((d_p444444444444044P44p44444444[16612]:int)[23]:int + c)[0]:int,
		//     0,
		//     0);
	}

	private void InitializeStateAnimationParameters()
	{
		// ---- decompiled from wasm (AnimateEnemy_InitializeStateAnimationParameters) ----
		//   AnimateEnemy_AnimateEnemy_OnAnimate(a, a);
		//   AnimateEnemy_InitializeAnimationParameters(a, c[2], a);
		//   a[5] = c[2];
	}

	private void AnimateEnemy_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
	{
		// ---- decompiled from wasm (AnimateEnemy_AnimateEnemy_OnAnimate) ----
		//   if (eqz(6703738[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703738[0]:byte = 1;
		//   }
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (a[4])[7]:int,
		//     ((if ((b = d_p444444444444044P44p44444444[16612]:int)[29]) {
		//         b
		//       } else {
		//         f_ahje(b);
		//         d_p444444444444044P44p44444444[16612]:int;
		//       })[23]:int)[6]:int,
		//     0,
		//     0);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (a[4])[7]:int,
		//     ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[4]:int,
		//     0,
		//     0);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (a[4])[7]:int,
		//     ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[9]:int,
		//     0,
		//     0);
		//   multiple_UnityEngine_Animator_GetBool_1(
		//     (a[4])[7]:int,
		//     ((d_p444444444444044P44p44444444[16612]:int)[23]:int)[10]:int,
		//     0,
		//     0);
	}

	private void InitializeAnimationParameters()
	{
		// ---- decompiled from wasm (AnimateEnemy_InitializeAnimationParameters) ----
		//   if (eqz(6703739[0]:ubyte)) {
		//     f_hpa(5621280);
		//     6703739[0]:byte = 1;
		//   }
		//   br_table[B_g, B_b, B_b, B_f, B_e, B_h, ..B_b](b)
		//   label B_h:
		//   a = (a[4])[7]:int;
		//   c = 24;
		//   b = d_p444444444444044P44p44444444[16612]:int;
		//   if (eqz(b[29])) goto B_d;
		//   goto B_c;
		//   label B_g:
		//   a = (a[4])[7]:int;
		//   c = 16;
		//   b = d_p444444444444044P44p44444444[16612]:int;
		//   if (eqz(b[29])) goto B_d;
		//   goto B_c;
		//   label B_f:
		//   a = (a[4])[7]:int;
		//   c = 36;
		//   b = d_p444444444444044P44p44444444[16612]:int;
		//   if (eqz(b[29])) goto B_d;
		//   goto B_c;
		//   label B_e:
		//   a = (a[4])[7]:int;
		//   c = 40;
		//   b = d_p444444444444044P44p44444444[16612]:int;
		//   if (b[29]) goto B_c;
		//   label B_d:
		//   f_ahje(b);
		//   b = d_p444444444444044P44p44444444[16612]:int;
		//   label B_c:
		//   multiple_UnityEngine_Animator_GetBool_1(a, (b[23] + c)[0]:int, 1, 0);
		//   label B_b:
	}

	private void SetAimAnimationParameters(AimDirection aimDirection)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// AnimateEnemy_PlayAttackAnimationCoroutine_d_10_System_Collections_IEnumerator_get_Current(a:int_ptr, b:int, c:int)
	//   var f:int;
	//   var d:int;
	//   if (eqz(6703740[0]:ubyte)) {
	//     f_hpa(5601960);
	//     6703740[0]:byte = 1;
	//   }
	//   var e:int = a + 16;
	//   a = a[4];
	//   loop L_c {
	//     c = 0;
	//     d = f_iyud(a, b, 0);
	//     if (d) {
	//       c = f_upa(d, f = d_p444444444444044P44p44444444[11782]:int);
	//       if (eqz(c)) goto B_b;
	//     }
	//     d = a != (c = System_Net_WebOperation_ctor(e, c, a));
	//     a = c;
	//     if (d) continue L_c;
	//   }
	//   return ;
	//   label B_b:
	//   f_ypa(d, f);
	//   unreachable;

	// AnimateEnemy_PlayAttackAnimationCoroutine_d_10_System_Collections_Generic_IEnumerator_System_Object_(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5696020));
	//   unreachable;

}
