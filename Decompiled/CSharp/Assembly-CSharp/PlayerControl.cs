// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[RequireComponent(typeof(MovementByVelocityEvent))]
[DisallowMultipleComponent]
[RequireComponent(typeof(Player))]
public class PlayerControl : MonoBehaviour
{
	// Fields
	private Player player;
	private InputSystem_Actions inputSystem_Actions;
	private InputAction move;
	private InputAction fire;
	private InputAction rightClick;
	private InputAction spaceClick;
	private InputAction beam;
	private InputAction openInventory;
	private InputAction useItemAction;
	private InputAction restAction;
	private BeamByPlayer beamByPlayer;
	private InventoryManager inventoryManager;
	private ItemConsumer useItem;
	private Vector2 direction;
	private Vector2 lastMoveDirection;
	private Vector2 previousLastDirection;
	private float dashCooldownTimer;
	private float bashCooldownTimer;
	private bool isRunningSoundPlaying;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (PlayerControl_Awake) ----
		//   var this:int_ptr;
		//   var methodInfo:int_ptr = g_a - 16;
		//   g_a = methodInfo;
		//   if (eqz(6703433[0]:ubyte)) {
		//     f_hpa(5601936);
		//     f_hpa(5683488);
		//     f_hpa(5683496);
		//     f_hpa(5683500);
		//     f_hpa(5683472);
		//     f_hpa(5683476);
		//     f_hpa(5683480);
		//     f_hpa(5683484);
		//     f_hpa(5699332);
		//     f_hpa(5629404);
		//     6703433[0]:byte = 1;
		//   }
		//   methodInfo[2] = this[5];
		//   this[6] =
		//     multiple_UnityEngine_InputSystem_DefaultInputActions_PlayerActions_ctor(
		//       methodInfo + 8,
		//       0);
		//   methodInfo[2] = this[5];
		//   this[7] =
		//     multiple_3_UnityEngine_InputSystem_DefaultInputActions_PlayerActions_get_Look(
		//       methodInfo + 8,
		//       0);
		//   methodInfo[2] = this[5];
		//   this[10] =
		//     multiple_3_UnityEngine_InputSystem_DefaultInputActions_UIActions_ctor(
		//       methodInfo + 8,
		//       0);
		//   methodInfo[2] = this[5];
		//   this[8] =
		//     multiple_UnityEngine_InputSystem_DefaultInputActions_UIActions_get_TrackedDeviceOrientation(
		//       methodInfo + 8,
		//       0);
		//   methodInfo[2] = this[5];
		//   this[9] =
		//     InputSystem_Actions_PlayerActions_get_RightClick(methodInfo + 8, 0);
		//   methodInfo[0] = this[5];
		//   this[11] =
		//     InputSystem_Actions_UIActions_get_TrackedDeviceOrientation(methodInfo,
		//                                                                0);
		//   methodInfo[0] = this[5];
		//   this[12] =
		//     InputSystem_Actions_UIActions_get_OpenInventory(methodInfo, 0);
		//   methodInfo[2] = this[5];
		//   this[13] =
		//     multiple_UnityEngine_InputSystem_DefaultInputActions_UIActions_get_Navigate(
		//       methodInfo + 8,
		//       0);
		//   f_iitb(this[6], 0);
		//   f_iitb(this[7], 0);
		//   f_iitb(this[10], 0);
		//   f_iitb(this[8], 0);
		//   f_iitb(this[9], 0);
		//   f_iitb(this[12], 0);
		//   f_iitb(this[13], 0);
		//   var c:int = this[7];
		//   var d:int = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(d, this, d_p444444444444044P44p44444444[32164]:int, 0);
		//   UnityEngine_InputSystem_InputAction_remove_canceled(c, d, 0);
		//   c = this[10];
		//   d = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(d, this, d_p444444444444044P44p44444444[32160]:int, 0);
		//   UnityEngine_InputSystem_InputAction_remove_canceled(c, d, 0);
		//   c = this[8];
		//   d = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(d, this, d_p444444444444044P44p44444444[32166]:int, 0);
		//   UnityEngine_InputSystem_InputAction_remove_canceled(c, d, 0);
		//   c = this[8];
		//   d = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(d, this, d_p444444444444044P44p44444444[32161]:int, 0);
		//   UnityEngine_InputSystem_InputAction_remove_started(c, d, 0);
		//   c = this[9];
		//   d = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(d, this, d_p444444444444044P44p44444444[32167]:int, 0);
		//   UnityEngine_InputSystem_InputAction_remove_canceled(c, d, 0);
		//   c = this[11];
		//   d = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(d, this, d_p444444444444044P44p44444444[32162]:int, 0);
		//   UnityEngine_InputSystem_InputAction_remove_canceled(c, d, 0);
		//   c = this[12];
		//   d = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(d, this, d_p444444444444044P44p44444444[32163]:int, 0);
		//   UnityEngine_InputSystem_InputAction_remove_canceled(c, d, 0);
		//   d = this[13];
		//   this = d_p444444444444044P44p44444444[18643]:int;
		//   if (eqz(this[29])) {
		//     f_ahje(this);
		//     this = d_p444444444444044P44p44444444[18643]:int;
		//   }
		//   c = (this[23])[1]:int;
		//   if (eqz(c)) {
		//     this = ((if (this[29]) {
		//                this
		//              } else {
		//                f_ahje(this);
		//                d_p444444444444044P44p44444444[18643]:int;
		//              })[23]:int)[0]:int;
		//     c = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//     f_wyjc(c, this, d_p444444444444044P44p44444444[36125]:int, 0);
		//     ((d_p444444444444044P44p44444444[18643]:int)[23]:int)[1]:int = c;
		//   }
		//   UnityEngine_InputSystem_InputAction_remove_canceled(d, c, 0);
		//   g_a = methodInfo + 16;
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (PlayerControl_OnEnable) ----
		//   var this:int_ptr;
		//   if (eqz(6703434[0]:ubyte)) {
		//     f_hpa(5601936);
		//     f_hpa(5683488);
		//     f_hpa(5683496);
		//     f_hpa(5683500);
		//     f_hpa(5683456);
		//     f_hpa(5683460);
		//     f_hpa(5683464);
		//     f_hpa(5683468);
		//     f_hpa(5699328);
		//     f_hpa(5629404);
		//     6703434[0]:byte = 1;
		//   }
		//   UnityEngine_InputSystem_InputAction_ToString(this[6], 0);
		//   UnityEngine_InputSystem_InputAction_ToString(this[7], 0);
		//   UnityEngine_InputSystem_InputAction_ToString(this[10], 0);
		//   UnityEngine_InputSystem_InputAction_ToString(this[8], 0);
		//   UnityEngine_InputSystem_InputAction_ToString(this[9], 0);
		//   UnityEngine_InputSystem_InputAction_ToString(this[11], 0);
		//   UnityEngine_InputSystem_InputAction_ToString(this[12], 0);
		//   UnityEngine_InputSystem_InputAction_ToString(this[13], 0);
		//   var methodInfo:int = this[7];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(c, this, d_p444444444444044P44p44444444[32164]:int, 0);
		//   UnityEngine_InputSystem_InputAction_add_performed(methodInfo, c, 0);
		//   methodInfo = this[10];
		//   c = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(c, this, d_p444444444444044P44p44444444[32156]:int, 0);
		//   UnityEngine_InputSystem_InputAction_add_performed(methodInfo, c, 0);
		//   methodInfo = this[8];
		//   c = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(c, this, d_p444444444444044P44p44444444[32166]:int, 0);
		//   UnityEngine_InputSystem_InputAction_add_performed(methodInfo, c, 0);
		//   methodInfo = this[8];
		//   c = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(c, this, d_p444444444444044P44p44444444[32157]:int, 0);
		//   UnityEngine_InputSystem_InputAction_add_canceled(methodInfo, c, 0);
		//   methodInfo = this[9];
		//   c = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(c, this, d_p444444444444044P44p44444444[32167]:int, 0);
		//   UnityEngine_InputSystem_InputAction_add_performed(methodInfo, c, 0);
		//   methodInfo = this[11];
		//   c = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(c, this, d_p444444444444044P44p44444444[32158]:int, 0);
		//   UnityEngine_InputSystem_InputAction_add_performed(methodInfo, c, 0);
		//   methodInfo = this[12];
		//   c = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//   f_wyjc(c, this, d_p444444444444044P44p44444444[32159]:int, 0);
		//   UnityEngine_InputSystem_InputAction_add_performed(methodInfo, c, 0);
		//   c = this[13];
		//   this = d_p444444444444044P44p44444444[18643]:int;
		//   if (eqz(this[29])) {
		//     f_ahje(this);
		//     this = d_p444444444444044P44p44444444[18643]:int;
		//   }
		//   methodInfo = (this[23])[2]:int;
		//   if (eqz(methodInfo)) {
		//     this = ((if (this[29]) {
		//                this
		//              } else {
		//                f_ahje(this);
		//                d_p444444444444044P44p44444444[18643]:int;
		//              })[23]:int)[0]:int;
		//     methodInfo = f_icke(d_p444444444444044P44p44444444[11776]:int);
		//     f_wyjc(methodInfo, this, d_p444444444444044P44p44444444[36124]:int, 0);
		//     ((d_p444444444444044P44p44444444[18643]:int)[23]:int)[2]:int =
		//       methodInfo;
		//   }
		//   UnityEngine_InputSystem_InputAction_add_performed(c, methodInfo, 0);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (PlayerControl_OnDisable) ----
		//   var this:int;
		//   if (eqz(6703435[0]:ubyte)) {
		//     f_hpa(5601772);
		//     f_hpa(5683492);
		//     f_hpa(5660024);
		//     6703435[0]:byte = 1;
		//   }
		//   var methodInfo:ubyte_ptr = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189] & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   var d:int_ptr = ((if (methodInfo[189] & 1) {
		//                       methodInfo
		//                     } else {
		//                       System_Threading_Monitor_Enter_1(methodInfo)
		//                     })[23]:int)[0]:int;
		//   methodInfo = d[8];
		//   var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//   f_eujc(c, this, d_p444444444444044P44p44444444[32165]:int, 0);
		//   methodInfo = f_kyud(methodInfo, c, 0);
		//   if (eqz(methodInfo)) {
		//     d[8] = 0;
		//     return ;
		//   }
		//   this = 
		//     f_upa(methodInfo, c = d_p444444444444044P44p44444444[11735]:int);
		//   if (this) {
		//     d[8] = this;
		//     if (
		//       eqz(
		//         f_upa(methodInfo, this = d_p444444444444044P44p44444444[11735]:int))) goto B_e;
		//     return ;
		//   }
		//   f_ypa(methodInfo, c);
		//   unreachable;
		//   label B_e:
		//   f_ypa(methodInfo, this);
		//   unreachable;
	}

	private void OnDestroy()
	{
		// ---- decompiled from wasm (PlayerControl_OnDestroy) ----
		//   if (eqz(6703436[0]:ubyte)) {
		//     f_hpa(5601772);
		//     f_hpa(5683492);
		//     f_hpa(5660024);
		//     6703436[0]:byte = 1;
		//   }
		//   if ((b & -2) == 2) {
		//     f_iitb(a[11], 0);
		//     b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//     b = 
		//       ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
		//     var d:int_ptr = 
		//       ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
		//     b = d[8];
		//     c = f_icke(d_p444444444444044P44p44444444[11735]:int);
		//     f_eujc(c, a, d_p444444444444044P44p44444444[32165]:int, 0);
		//     a = f_kyud(b, c, 0);
		//     if (eqz(a)) {
		//       d[8] = 0;
		//       return ;
		//     }
		//     b = f_upa(a, c = d_p444444444444044P44p44444444[11735]:int);
		//     if (eqz(b)) goto B_c;
		//     d[8] = b;
		//     if (
		//       eqz(f_upa(a, b = d_p444444444444044P44p44444444[11735]:int))) goto B_b;
		//   }
		//   return ;
		//   label B_c:
		//   f_ypa(a, c);
		//   unreachable;
		//   label B_b:
		//   f_ypa(a, b);
		//   unreachable;
	}

	private void OnGameStateChange(GameState gameState)
	{
		// ---- decompiled from wasm (PlayerControl_OnGameStateChange) ----
		//   var this:int;
		//   if (
		//     eqz(
		//       TMPEffects_Components_TMPWriter_HideAllCharacters(0) > this[24]:float)) goto B_a;
		//   this[24]:float =
		//     TMPEffects_Components_TMPWriter_HideAllCharacters(0) + 0.5f;
		//   BashEvent_remove_OnBash((this[4]:int)[13]:int, 0, this);
		//   if (eqz(6703546[0]:ubyte)) {
		//     f_hpa(5621908);
		//     6703546[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[6]:int;
		//   if (eqz(this)) goto B_a;
		//   call_indirect(this[8]:int, this[5]:int, this[3]:int);
		//   label B_a:
	}

	private void OnRightMouseClick(InputAction.CallbackContext ctx)
	{
		// ---- decompiled from wasm (PlayerControl_OnRightMouseClick) ----
		//   var this:int;
		//   var e:long;
		//   if (eqz(6703437[0]:ubyte)) {
		//     f_hpa(5660012);
		//     6703437[0]:byte = 1;
		//   }
		//   var d:long = this[17]:long@4;
		//   if (eqz(6703146[0]:ubyte)) {
		//     f_hpa(5623844);
		//     6703146[0]:byte = 1;
		//   }
		//   var f:float = 
		//     f32_reinterpret_i32(i32_wrap_i64(d)) -
		//     f32_reinterpret_i32(
		//       i32_wrap_i64(
		//         e = ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[0]:long@4));
		//   if (f * f +
		//       (f = f32_reinterpret_i32(i32_wrap_i64(d >> 32L)) -
		//            f32_reinterpret_i32(i32_wrap_i64(e >> 32L))) *
		//       f <
		//       0.0f) goto B_c;
		//   if (
		//     eqz(
		//       UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
		//         0) >
		//       this[23]:float)) goto B_c;
		//   var ctx:int = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   ctx = 
		//     ((if (ctx[189]:ubyte & 1) { ctx } else { System_Threading_Monitor_Enter_1(ctx) })[24]:int)[2]:int;
		//   SoundEffectManager_Start(
		//     ((if (ctx[189]:ubyte & 1) { ctx } else { System_Threading_Monitor_Enter_1(ctx) })[23]:int)[0]:int,
		//     (this[4]:int)[24]:int,
		//     this);
		//   this[23]:float =
		//     UnityEngine_Rendering_Universal_ScriptableRenderer_InternalStartRendering(
		//       0) +
		//     1.0f;
		//   d = this[17]:long@4;
		//   ctx = (this[4]:int)[14]:int;
		//   if (eqz(6703494[0]:ubyte)) {
		//     f_hpa(5613568);
		//     6703494[0]:byte = 1;
		//   }
		//   this = ctx[4]:int;
		//   if (this) {
		//     var methodInfo:long_ptr@4 = 
		//       f_icke(d_p444444444444044P44p44444444[14684]:int);
		//     if (eqz(6703495[0]:ubyte)) {
		//       f_hpa(5614872);
		//       6703495[0]:byte = 1;
		//     }
		//     var g:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//     if (eqz(g[29])) { f_ahje(g) }
		//     methodInfo[2] = d;
		//     call_indirect(this[8]:int, ctx, methodInfo, this[5]:int, this[3]:int);
		//   }
		//   if (eqz(6703549[0]:ubyte)) {
		//     f_hpa(5621908);
		//     6703549[0]:byte = 1;
		//   }
		//   this = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[7]:int;
		//   if (eqz(this)) goto B_c;
		//   call_indirect(this[8]:int, this[5]:int, this[3]:int);
		//   label B_c:
	}

	private void OnSpaceClick(InputAction.CallbackContext ctx)
	{
		// ---- decompiled from wasm (PlayerControl_OnSpaceClick) ----
		//   var this:int_ptr;
		//   this = this[4];
		//   if ((this[16])[5]:float > 10.0f) {
		//     multiple_8_AttackEvent_remove_OnAttack(this[9], 0)
		//   }
	}

	private void OnFireClick(InputAction.CallbackContext ctx)
	{
		// ---- decompiled from wasm (PlayerControl_OnFireClick) ----
		//   if (eqz(6703438[0]:ubyte)) {
		//     f_hpa(5677072);
		//     6703438[0]:byte = 1;
		//   }
		//   PlayerControl_Update(a, a);
		//   if (f_aked(a[8], d_p444444444444044P44p44444444[30560]:int) > 0.0f) {
		//     BashEvent_remove_OnBash((a[4])[13]:int, 1, a)
		//   }
	}

	private void Update()
	{
		// ---- decompiled from wasm (PlayerControl_Update) ----
		//   var this:int;
		//   var i:float;
		//   var c:long;
		//   var d:long;
		//   var f:int;
		//   var e:int;
		//   var j:float;
		//   var methodInfo:int = g_a - 272;
		//   g_a = methodInfo;
		//   if (eqz(6703439[0]:ubyte)) {
		//     f_hpa(5677072);
		//     f_hpa(5677076);
		//     f_hpa(5660012);
		//     6703439[0]:byte = 1;
		//   }
		//   f_dked(methodInfo + 264,
		//          this[6]:int,
		//          d_p444444444444044P44p44444444[30561]:int);
		//   j = methodInfo[66]:float;
		//   if (eqz(j == 0.0f & (i = methodInfo[67]:float) != 0.0f)) {
		//     if (j == 0.0f) goto B_b;
		//     if (i != 0.0f) goto B_b;
		//   }
		//   if (this[17]:float == 0.0f) goto B_b;
		//   if (this[18]:float == 0.0f) goto B_b;
		//   this[19]:long@4 = this[17]:long@4;
		//   label B_b:
		//   f_dked(methodInfo + 264,
		//          this[6]:int,
		//          d_p444444444444044P44p44444444[30561]:int);
		//   this[17]:long@4 = (c = methodInfo[33]:long);
		//   if (eqz(6703146[0]:ubyte)) {
		//     f_hpa(5623844);
		//     6703146[0]:byte = 1;
		//   }
		//   i = 
		//     f32_reinterpret_i32(i32_wrap_i64(c)) -
		//     f32_reinterpret_i32(
		//       i32_wrap_i64(
		//         d = ((d_p444444444444044P44p44444444[17253]:int)[23]:int)[0]:long@4));
		//   if (eqz(i * i +
		//           (i = f32_reinterpret_i32(i32_wrap_i64(c >> 32L)) -
		//                f32_reinterpret_i32(i32_wrap_i64(d >> 32L))) *
		//           i <
		//           0.0f)) {
		//     if (
		//       f_aked(this[7]:int, d_p444444444444044P44p44444444[30560]:int) !=
		//       0.0f) goto B_e;
		//     c = this[17]:long@4;
		//     if (eqz(6698358[0]:ubyte)) {
		//       f_hpa(5623844);
		//       6698358[0]:byte = 1;
		//     }
		//     i = 
		//       f32_reinterpret_i32(i32_wrap_i64(c)) -
		//       f32_reinterpret_i32(
		//         i32_wrap_i64(
		//           d = 
		//             (f = (d_p444444444444044P44p44444444[17253]:int)[23]:int)[4]:long@4));
		//     if (i * i +
		//         (i = f32_reinterpret_i32(i32_wrap_i64(c >> 32L)) -
		//              f32_reinterpret_i32(i32_wrap_i64(d >> 32L))) *
		//         i <
		//         0.0f) goto B_i;
		//     e = 5;
		//     c = this[17]:long@4;
		//     i = f32_reinterpret_i32(i32_wrap_i64(c)) -
		//         {
		//           if (eqz(6691345[0]:ubyte)) {
		//             f_hpa(5623844);
		//             6691345[0]:byte = 1;
		//             f = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//           }
		//           f32_reinterpret_i32(i32_wrap_i64(d = f[6]:long@4));
		//           label B_j:
		//         }
		//     if (i * i +
		//         (i = f32_reinterpret_i32(i32_wrap_i64(c >> 32L)) -
		//              f32_reinterpret_i32(i32_wrap_i64(d >> 32L))) *
		//         i <
		//         0.0f) goto B_i;
		//     e = 4;
		//     c = this[17]:long@4;
		//     i = f32_reinterpret_i32(i32_wrap_i64(c)) -
		//         {
		//           if (eqz(6691347[0]:ubyte)) {
		//             f_hpa(5623844);
		//             6691347[0]:byte = 1;
		//             f = (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//           }
		//           f32_reinterpret_i32(i32_wrap_i64(d = f[8]:long@4));
		//           label B_l:
		//         }
		//     if (i * i +
		//         (i = f32_reinterpret_i32(i32_wrap_i64(c >> 32L)) -
		//              f32_reinterpret_i32(i32_wrap_i64(d >> 32L))) *
		//         i <
		//         0.0f) goto B_i;
		//     e = 3;
		//     c = this[17]:long@4;
		//     i = f32_reinterpret_i32(i32_wrap_i64(c)) -
		//         f32_reinterpret_i32(
		//           i32_wrap_i64(
		//             d = (if (6691348[0]:ubyte) {
		//                    f
		//                  } else {
		//                    f_hpa(5623844);
		//                    6691348[0]:byte = 1;
		//                    (d_p444444444444044P44p44444444[17253]:int)[23]:int;
		//                  })[10]:long@4));
		//     if (i * i +
		//         (i = f32_reinterpret_i32(i32_wrap_i64(c >> 32L)) -
		//              f32_reinterpret_i32(i32_wrap_i64(d >> 32L))) *
		//         i <
		//         0.0f) goto B_i;
		//     methodInfo[32]:long = (c = this[17]:long@4);
		//     methodInfo[31]:long = -4668611516055567729L;
		//     methodInfo[8]:long = c;
		//     methodInfo[7]:long = -4668611516055567729L;
		//     e = 7;
		//     if (
		//       HelperUtilities_ValidateCheckEnumerableValues(methodInfo - -64,
		//                                                     methodInfo + 56,
		//                                                     0.01f,
		//                                                     0)) goto B_i;
		//     methodInfo[30]:long = (c = this[17]:long@4);
		//     methodInfo[29]:long = -4668611518203051377L;
		//     methodInfo[6]:long = c;
		//     methodInfo[5]:long = -4668611518203051377L;
		//     e = 6;
		//     if (
		//       HelperUtilities_ValidateCheckEnumerableValues(methodInfo + 48,
		//                                                     methodInfo + 40,
		//                                                     0.01f,
		//                                                     0)) goto B_i;
		//     methodInfo[28]:long = (c = this[17]:long@4);
		//     methodInfo[27]:long = 4554760520799208079L;
		//     methodInfo[4]:long = c;
		//     methodInfo[3]:long = 4554760520799208079L;
		//     e = 2;
		//     if (
		//       HelperUtilities_ValidateCheckEnumerableValues(methodInfo + 32,
		//                                                     methodInfo + 24,
		//                                                     0.01f,
		//                                                     0)) goto B_i;
		//     methodInfo[26]:long = (c = this[17]:long@4);
		//     methodInfo[25]:long = 4554760518651724431L;
		//     methodInfo[2]:long = c;
		//     methodInfo[1]:long = 4554760518651724431L;
		//     e = 1;
		//     if (
		//       eqz(HelperUtilities_ValidateCheckEnumerableValues(methodInfo + 16,
		//                                                         methodInfo + 8,
		//                                                         0.01f,
		//                                                         0))) goto B_h;
		//     label B_i:
		//     AnimateEvent_remove_OnAnimate((this[4]:int)[8]:int, e, 0);
		//     label B_h:
		//     c = this[17]:long@4;
		//     e = this[4]:int;
		//     var g:int_ptr = e[4]:int;
		//     e = e[6]:int;
		//     i = e[3]:float;
		//     if (i != (j = e[4]:float)) { i = UnityEngine_Random_InitState(i, j, 0) }
		//     if (eqz(6703401[0]:ubyte)) {
		//       f_hpa(5618812);
		//       6703401[0]:byte = 1;
		//     }
		//     f = g[4];
		//     if (f) {
		//       e = f_icke(d_p444444444444044P44p44444444[15995]:int);
		//       if (eqz(6703402[0]:ubyte)) {
		//         f_hpa(5614872);
		//         6703402[0]:byte = 1;
		//       }
		//       var h:int_ptr = d_p444444444444044P44p44444444[15010]:int;
		//       if (eqz(h[29])) { f_ahje(h) }
		//       e[4]:float = i;
		//       e[2]:long@4 = c;
		//       call_indirect(f[8]:int, g, e, f[5]:int, f[3]:int);
		//     }
		//     if (this[100]:ubyte) goto B_e;
		//     e = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//     e = 
		//       ((if (e[189]:ubyte & 1) { e } else { System_Threading_Monitor_Enter_1(e) })[24]:int)[2]:int;
		//     GameResources_get_Instance(
		//       ((if (e[189]:ubyte & 1) { e } else { System_Threading_Monitor_Enter_1(e) })[23]:int)[0]:int,
		//       (this[4]:int)[23]:int,
		//       1,
		//       this);
		//     this[100]:byte = 1;
		//     goto B_e;
		//   }
		//   if (this[100]:ubyte) {
		//     e = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//     e = 
		//       ((if (e[189]:ubyte & 1) { e } else { System_Threading_Monitor_Enter_1(e) })[24]:int)[2]:int;
		//     SoundEffectManager_PlaySoundEffect(
		//       ((if (e[189]:ubyte & 1) { e } else { System_Threading_Monitor_Enter_1(e) })[23]:int)[0]:int,
		//       (this[4]:int)[23]:int,
		//       this);
		//     this[100]:byte = 0;
		//   }
		//   f = (this[4]:int)[7]:int;
		//   e = f[4]:int;
		//   if (e) { call_indirect(e[8]:int, f, e[5]:int, e[3]:int) }
		//   d = this[21]:long@4;
		//   i = f32_reinterpret_i32(i32_wrap_i64(d)) -
		//       f32_reinterpret_i32(i32_wrap_i64(c = this[19]:long@4));
		//   if (i * i +
		//       (i = f32_reinterpret_i32(i32_wrap_i64(d >> 32L)) -
		//            f32_reinterpret_i32(i32_wrap_i64(c >> 32L))) *
		//       i <
		//       0.0f) goto B_e;
		//   this[21]:long@4 = c;
		//   methodInfo[24]:long = c;
		//   methodInfo[23]:long = -4668611516055567729L;
		//   methodInfo[16]:long = c;
		//   methodInfo[15]:long = -4668611516055567729L;
		//   if (HelperUtilities_ValidateCheckEnumerableValues(methodInfo + 128,
		//                                                     methodInfo + 120,
		//                                                     0.01f,
		//                                                     0)) {
		//     AnimateEvent_remove_OnAnimate((this[4]:int)[8]:int, 7, 0);
		//     goto B_e;
		//   }
		//   methodInfo[22]:long = (c = this[19]:long@4);
		//   methodInfo[21]:long = -4668611518203051377L;
		//   methodInfo[14]:long = c;
		//   methodInfo[13]:long = -4668611518203051377L;
		//   if (HelperUtilities_ValidateCheckEnumerableValues(methodInfo + 112,
		//                                                     methodInfo + 104,
		//                                                     0.01f,
		//                                                     0)) {
		//     AnimateEvent_remove_OnAnimate((this[4]:int)[8]:int, 6, 0);
		//     goto B_e;
		//   }
		//   methodInfo[20]:long = (c = this[19]:long@4);
		//   methodInfo[19]:long = 4554760520799208079L;
		//   methodInfo[12]:long = c;
		//   methodInfo[11]:long = 4554760520799208079L;
		//   if (HelperUtilities_ValidateCheckEnumerableValues(methodInfo + 96,
		//                                                     methodInfo + 88,
		//                                                     0.01f,
		//                                                     0)) {
		//     AnimateEvent_remove_OnAnimate((this[4]:int)[8]:int, 2, 0);
		//     goto B_e;
		//   }
		//   methodInfo[18]:long = (c = this[19]:long@4);
		//   methodInfo[17]:long = 4554760518651724431L;
		//   methodInfo[10]:long = c;
		//   methodInfo[9]:long = 4554760518651724431L;
		//   if (
		//     eqz(HelperUtilities_ValidateCheckEnumerableValues(methodInfo + 80,
		//                                                       methodInfo + 72,
		//                                                       0.01f,
		//                                                       0))) goto B_e;
		//   AnimateEvent_remove_OnAnimate((this[4]:int)[8]:int, 1, 0);
		//   label B_e:
		//   g_a = methodInfo + 272;
	}

	private void MovementInput()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	private void <OnEnable>b__20_0(InputAction.CallbackContext ctx)
	{
		// <no wasm mapping>
	}

	private void <OnEnable>b__20_1(InputAction.CallbackContext ctx)
	{
		// <no wasm mapping>
	}

	private void <OnEnable>b__20_2(InputAction.CallbackContext ctx)
	{
		// <no wasm mapping>
	}

	private void <OnEnable>b__20_3(InputAction.CallbackContext ctx)
	{
		// <no wasm mapping>
	}

	private void <OnDisable>b__21_0(InputAction.CallbackContext ctx)
	{
		// <no wasm mapping>
	}

	private void <OnDisable>b__21_1(InputAction.CallbackContext ctx)
	{
		// <no wasm mapping>
	}

	private void <OnDisable>b__21_2(InputAction.CallbackContext ctx)
	{
		// <no wasm mapping>
	}

	private void <OnDisable>b__21_3(InputAction.CallbackContext ctx)
	{
		// ---- decompiled from wasm (PlayerControl_OnDisable_b_21_3) ----
		//   if (eqz(6703440[0]:ubyte)) {
		//     f_hpa(5629404);
		//     6703440[0]:byte = 1;
		//   }
		//   a = f_icke(d_p444444444444044P44p44444444[18643]:int);
		//   ((d_p444444444444044P44p44444444[18643]:int)[23]:int)[0]:int = a;
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// PlayerControl_c_OnDisable_b_21_4(a:int_ptr, b:int_ptr)
	//   var c:int;
	//   if (eqz(6703441[0]:ubyte)) {
	//     f_hpa(5660000);
	//     6703441[0]:byte = 1;
	//   }
	//   SingletonMonobehaviourPersistent_1_ctor(
	//     a,
	//     d_p444444444444044P44p44444444[26292]:int);
	//   a[5] = UnityEngine_GameObject_AddComponent(f_canb(a, 0), 0);
	//   b = a[4];
	//   if (b[3] > 0) {
	//     loop L_c {
	//       PoolManager_Awake(a, (b = b + c * 12)[5], b[4], b[6], c);
	//       c = c + 1;
	//       if (c < (b = a[4])[3]) continue L_c;
	//     }
	//   }

}
