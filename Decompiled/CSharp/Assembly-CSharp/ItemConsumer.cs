// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class ItemConsumer : MonoBehaviour
{
	// Fields
	private InventoryManager inventoryManager;
	private DealDamage dealDamage;
	private Health health;
	private Rage rage;
	private Coroutine attackPotionCoroutine;
	private float attackPotionMultiplier;
	private int bigHealthPotionAmount;
	private int smallHealthPotionAmount;
	private int ragePotionAmount;
	private InventoryItem currentInventoryItem;
	private SoundEffectSO useItemSoundEffect;
	private int normalDamage;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (ItemConsumer_Awake) ----
		//   var this:int;
		//   if (eqz(6703316[0]:ubyte)) {
		//     f_hpa(5601848);
		//     f_hpa(5679044);
		//     6703316[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11754]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31053]:int,
		//     0);
		//   StaticEventHandler_CallItemUIClickChangedEvent(methodInfo, this);
	}

	private void OnEnable()
	{
		// ---- decompiled from wasm (ItemConsumer_OnEnable) ----
		//   var this:int;
		//   if (eqz(6703317[0]:ubyte)) {
		//     f_hpa(5601848);
		//     f_hpa(5679044);
		//     6703317[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     f_icke(d_p444444444444044P44p44444444[11754]:int);
		//   UnityEngine_UIElements_VisualElement_get_layout(
		//     methodInfo,
		//     this,
		//     d_p444444444444044P44p44444444[31053]:int,
		//     0);
		//   StaticEventHandler_add_OnHotBarScrollChanged(methodInfo, this);
	}

	private void OnDisable()
	{
		// ---- decompiled from wasm (ItemConsumer_OnDisable) ----
		//   var this:int_ptr;
		//   this[15] = (this[5])[13]:int;
	}

	private void Start()
	{
		// ---- decompiled from wasm (ItemConsumer_Start) ----
		//   a[13] = b[2]
	}

	private void StaticEventHandler_OnHotBarScrollChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
	{
		// ---- decompiled from wasm (ItemConsumer_StaticEventHandler_OnHotBarScrollChanged) ----
		//   var f:int_ptr;
		//   var e:int_ptr;
		//   var d:int_ptr;
		//   var c:int = g_a - 32;
		//   g_a = c;
		//   if (eqz(6703318[0]:ubyte)) {
		//     f_hpa(5640824);
		//     f_hpa(5640828);
		//     f_hpa(5640832);
		//     f_hpa(5649440);
		//     f_hpa(5649444);
		//     f_hpa(5649448);
		//     f_hpa(5649452);
		//     f_hpa(5619244);
		//     6703318[0]:byte = 1;
		//   }
		//   if (eqz(a[13])) {
		//     if (InventoryDescription_ctor(a[4], c)[3]:int <= 0) {
		//       b = a[13];
		//       goto B_d;
		//     }
		//     a[13] =
		//       (b = f_dqi(InventoryDescription_ctor(a[4], c),
		//                  0,
		//                  d_p444444444444044P44p44444444[23655]:int));
		//     label B_d:
		//     if (eqz(b)) goto B_b;
		//   }
		//   UnityEngine_ComputeBuffer_Release(
		//     c,
		//     (a[4])[4]:int,
		//     d_p444444444444044P44p44444444[23652]:int);
		//   c[3]:long = c[1]:long;
		//   c[2]:long = c[0]:long;
		//   c[0]:int = 0;
		//   c[1]:int = c + 16;
		//   b = 
		//     {
		//       loop L_m {
		//         6151988[0]:int = 0;
		//         d = 
		//           env_invoke_iii(1155, c + 16, d_p444444444444044P44p44444444[21499]:int);
		//         b = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (b == 1) goto B_g;
		//         if (eqz(d)) goto B_h;
		//         f = c[7]:int;
		//         b = f[2];
		//         d = (a[13])[2]:int;
		//         e = d_p444444444444044P44p44444444[16103]:int;
		//         if (eqz(e[29])) {
		//           6151988[0]:int = 0;
		//           env_invoke_vi(252, e);
		//           e = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (e == 1) goto B_l;
		//         }
		//         6151988[0]:int = 0;
		//         d = env_invoke_iiii(2135, b, d, 0);
		//         b = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (b == 1) goto B_k;
		//         if (eqz(d)) continue L_m;
		//       }
		//       f[3] = f[3] - 1;
		//       b = (f[2])[3]:int;
		//       6151988[0]:int = 0;
		//       env_invoke_viii(13918, a, b, c);
		//       b = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (b == 1) goto B_j;
		//       if (eqz(6703552[0]:ubyte)) {
		//         6151988[0]:int = 0;
		//         env_invoke_vi(250, 5619360);
		//         b = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (b == 1) goto B_i;
		//         6151988[0]:int = 0;
		//         env_invoke_vi(250, 5621908);
		//         b = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (b == 1) goto B_i;
		//         6703552[0]:byte = 1;
		//       }
		//       b = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[8]:int;
		//       if (b) {
		//         6151988[0]:int = 0;
		//         d = env_invoke_ii(268, d_p444444444444044P44p44444444[16132]:int);
		//         e = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (e == 1) goto B_i;
		//         6151988[0]:int = 0;
		//         env_invoke_vii(13919, d, 0);
		//         e = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (e == 1) goto B_i;
		//         d[2] = f;
		//         e = b[5];
		//         var g:int = b[8];
		//         b = b[3];
		//         6151988[0]:int = 0;
		//         env_invoke_viii(b, g, d, e);
		//         b = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (b == 1) goto B_i;
		//       }
		//       if (f[3]) goto B_h;
		//       b = (a[4])[4]:int;
		//       6151988[0]:int = 0;
		//       env_invoke_iiii(2150, b, f, d_p444444444444044P44p44444444[23653]:int);
		//       b = 6151988[0]:int;
		//       6151988[0]:int = 0;
		//       if (b != 1) goto B_h;
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_f;
		//       label B_l:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_f;
		//       label B_k:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_f;
		//       label B_j:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_f;
		//       label B_i:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_f;
		//       label B_h:
		//       d_p444444444444044P44p44444444[21498]:int;
		//       goto B_b;
		//       label B_g:
		//       env_cxa_find_matching_catch_3(4889068);
		//       label B_f:
		//     }
		//   if (env_getTempRet0() == env_llvm_eh_typeid_for(4889068)) {
		//     b = env_cxa_begin_catch(b)[0]:int;
		//     6151988[0]:int = 0;
		//     c[0]:int = b;
		//     env_invoke_v(58);
		//     d = 6151988[0]:int;
		//     6151988[0]:int = 0;
		//     if (d != 1) {
		//       d_p444444444444044P44p44444444[21498]:int;
		//       if (eqz(b)) goto B_b;
		//       System_Net_CommandStream_ReceiveCommandResponseCallback(b);
		//       unreachable;
		//     }
		//     b = env_cxa_find_matching_catch();
		//     env_getTempRet0();
		//   }
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13920, c);
		//   c = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (c != 1) {
		//     env_resumeException(b);
		//     unreachable;
		//   }
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_b:
		//   g_a = c + 32;
	}

	public void UseItemFromHotBar()
	{
		// ---- decompiled from wasm (ItemConsumer_UseItemFromHotBar) ----
		//   var this:int_ptr;
		//   var methodInfo:int_ptr = this[8];
		//   if (methodInfo) { UnityEngine_MonoBehaviour_StopCoroutine(this, methodInfo, 0) }
		//   (this[5])[13]:int = this[15];
		//   if (eqz(6703320[0]:ubyte)) {
		//     f_hpa(5628352);
		//     6703320[0]:byte = 1;
		//   }
		//   methodInfo = f_icke(d_p444444444444044P44p44444444[18380]:int);
		//   methodInfo[4] = this;
		//   methodInfo[2] = 0;
		//   this[8] =
		//     UnityEngine_MonoBehaviour_StartCoroutine_1(this, methodInfo, 0);
	}

	private void UsePotion(string potionName)
	{
		// ---- decompiled from wasm (ItemConsumer_UsePotion) ----
		//   if (eqz(6703155[0]:ubyte)) {
		//     f_hpa(5614872);
		//     6703155[0]:byte = 1;
		//   }
		//   b = d_p444444444444044P44p44444444[15010]:int;
		//   if (eqz(b[29])) { f_ahje(b) }
	}

	private void UseAttackPotion()
	{
		// <no wasm mapping>
	}

	private IEnumerator UseAttackPotionCoroutine()
	{
		// ---- decompiled from wasm (ItemConsumer_UseAttackPotionCoroutine) ----
		//   var this:int_ptr;
		//   Health_TakeDamage(this[6], this[10], 0);
	}

	private void UseBigHealthPotion()
	{
		// ---- decompiled from wasm (ItemConsumer_UseBigHealthPotion) ----
		//   var this:int_ptr;
		//   Health_TakeDamage(this[6], this[11], 0);
	}

	public void UseSmallHealthPotion()
	{
		// ---- decompiled from wasm (ItemConsumer_UseSmallHealthPotion) ----
		//   var this:int_ptr;
		//   PoiseEventArgs_ctor(this[7], f32_convert_i32_s(this[12]), 0);
	}

	public void UseRagePotion()
	{
		// ---- decompiled from wasm (ItemConsumer_UseRagePotion) ----
		//   var this:long_ptr@4;
		//   this[11] = 8589934612L;
		//   this[9] = 215815815168L;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

	// ---- Additional recovered functions (compiler-generated / synthetic) ----
	// ItemConsumer_UseAttackPotionCoroutine_d_20_System_Collections_Generic_IEnumerator_System_Object_get_(a:int, b:int)
	//   var this:int = f_icke(f_jlje(5619160));
	//   f_uzsd(this, 0);
	//   f_rpa(this, f_jlje(5698716));
	//   unreachable;

	// ItemConsumer_UseAttackPotionCoroutine_d_20_System_Collections_IEnumerator_get_Current(a:int, b:int)
	//   var this:int_ptr;
	//   if (eqz(6703322[0]:ubyte)) {
	//     f_hpa(5668464);
	//     6703322[0]:byte = 1;
	//   }
	//   this[5] =
	//     UnityEngine_GameObject_get_activeInHierarchy(
	//       this,
	//       d_p444444444444044P44p44444444[28408]:int);

}
