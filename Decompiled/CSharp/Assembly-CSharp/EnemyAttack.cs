// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class EnemyAttack : MonoBehaviour
{
	// Fields
	private Enemy enemy;
	private Transform shootPosition;
	private AmmoDetailsSO ammoDetailsSO;
	private float attackDistance;

	// Methods
	private void Awake()
	{
		// ---- decompiled from wasm (EnemyAttack_Awake) ----
		//   var this:int;
		//   if (eqz(6703862[0]:ubyte)) {
		//     f_hpa(5713040);
		//     6703862[0]:byte = 1;
		//   }
		//   var c:float = UnityEngine_Random_InitState(2.0f, 3.0f, 0);
		//   f_xcnb(this, d_p444444444444044P44p44444444[39552]:int, 3.0f, c, 0);
	}

	private void Start()
	{
		// ---- decompiled from wasm (EnemyAttack_Start) ----
		//   var this:int;
		//   var methodInfo:{ a:long, b:int, c:long, d:long, e:long, f:int, g:long, h:int, i:long, j:long, k:long, l:int } = 
		//     g_a - 96;
		//   g_a = methodInfo;
		//   if (eqz(6703863[0]:ubyte)) {
		//     f_hpa(5616256);
		//     f_hpa(5660004);
		//     f_hpa(5660024);
		//     6703863[0]:byte = 1;
		//   }
		//   var c:int = (d_p444444444444044P44p44444444[26293]:int)[4]:int;
		//   c = 
		//     ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
		//   if (eqz(c[189]:ubyte & 1)) { c = System_Threading_Monitor_Enter_1(c) }
		//   var d:int = (this[6]:int)[11]:int;
		//   c = (c[23]:int)[0]:int;
		//   UnityEngine_Camera_get_farClipPlane(methodInfo + 80, this[5]:int, 0);
		//   if (eqz(6685672[0]:ubyte)) {
		//     f_hpa(5620040);
		//     6685672[0]:byte = 1;
		//   }
		//   var e:long_ptr@4 = 
		//     (d_p444444444444044P44p44444444[16302]:int)[23]:int;
		//   var i:long = e[2];
		//   var j:long = e[0];
		//   methodInfo.f = methodInfo.l;
		//   methodInfo.d = i;
		//   methodInfo.j = i;
		//   methodInfo.i = j;
		//   methodInfo.c = j;
		//   methodInfo.e = methodInfo.k;
		//   c = PoolManager_CreatePool(c, d, methodInfo + 32, methodInfo + 16, 0);
		//   if (c) {
		//     var f:int_ptr = 
		//       f_upa(c, d = d_p444444444444044P44p44444444[15356]:int);
		//     if (eqz(f)) goto B_e;
		//     var h:int = this[6]:int;
		//     this = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//     c = 
		//       ((if (this[189]:ubyte & 1) { this } else { System_Threading_Monitor_Enter_1(this) })[24]:int)[2]:int;
		//     if (eqz(c[189]:ubyte & 1)) { c = System_Threading_Monitor_Enter_1(c) }
		//     this = 0;
		//     UnityEngine_Camera_get_farClipPlane(
		//       methodInfo + 48,
		//       System_Linq_Enumerable_Count(((c[23]:int)[0]:int)[4]:int, 0),
		//       0);
		//     c = d_p444444444444044P44p44444444[15356]:int;
		//     methodInfo.l = methodInfo.h;
		//     methodInfo.k = methodInfo.g;
		//     this = {
		//              var g:int = f[0];
		//              e = g[91]:ushort;
		//              if (eqz(e)) goto B_j;
		//              d = g[22]:int;
		//              loop L_k {
		//                if (c != (d + (this << 3))[0]:int) {
		//                  if (e != (this = this + 1)) continue L_k;
		//                  goto B_j;
		//                }
		//              }
		//              g + ((d + (this << 3))[1]:int << 3) + 192;
		//              goto B_i;
		//              label B_j:
		//              f_jqje(f, c, 0);
		//              label B_i:
		//            }
		//     c = this[1]:int;
		//     this = this[0]:int;
		//     methodInfo.b = methodInfo.l;
		//     methodInfo.a = methodInfo.k;
		//     call_indirect(f, h, methodInfo, c, this);
		//   }
		//   g_a = methodInfo + 96;
		//   return ;
		//   label B_e:
		//   f_ypa(c, d);
		//   unreachable;
	}

	public void Shoot()
	{
		// ---- decompiled from wasm (EnemyAttack_Shoot) ----
		//   var methodInfo:int;
		//   var this:int;
		//   var c:{ a:float, b:float } = g_a - 16;
		//   g_a = c;
		//   if (eqz(6703864[0]:ubyte)) {
		//     f_hpa(5660024);
		//     6703864[0]:byte = 1;
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
		//   if (this[7]:float > sqrt((e = e - g) * e + (d = d - f) * d)) {
		//     EnemyMovement_StopEnemyCoroutine_d_19_System_Collections_IEnumerator_get_Current(
		//       (this[4]:int)[6]:int,
		//       2,
		//       c)
		//   }
		//   g_a = c + 16;
	}

	private void CallEnemyAttackState()
	{
		// ---- decompiled from wasm (EnemyAttack_CallEnemyAttackState) ----
		//   var this:int_ptr;
		//   this[7] = 1090519040;
		//   multiple_4_UnityEngine_Behaviour_set_enabled(this, 0);
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (EnemyAttack_ctor) ----
		//   var this:int_ptr;
		//   if (eqz(6703865[0]:ubyte)) {
		//     f_hpa(5685692);
		//     f_hpa(5660024);
		//     6703865[0]:byte = 1;
		//   }
		//   var methodInfo:ubyte_ptr = 
		//     (d_p444444444444044P44p44444444[26298]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189] & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   if (f_wukc(Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//                (((if (methodInfo[189] & 1) {
		//                     methodInfo
		//                   } else {
		//                     System_Threading_Monitor_Enter_1(methodInfo)
		//                   })[23]:int)[0]:int)[6]:int,
		//                0),
		//              (this[5])[6]:int,
		//              0)) {
		//     this[6] =
		//       Esper_ESave_SaveFile_HasData(
		//         Esper_ESave_SaveFileSetup_GenerateAESTokens(
		//           (((if ((methodInfo = 
		//                     ((if ((methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189] &
		//                           1) {
		//                         methodInfo
		//                       } else {
		//                         System_Threading_Monitor_Enter_1(methodInfo)
		//                       })[24]:int)[2]:int)[189] &
		//                  1) {
		//                methodInfo
		//              } else {
		//                System_Threading_Monitor_Enter_1(methodInfo)
		//              })[23]:int)[0]:int)[6]:int,
		//           0),
		//         (this[5])[6]:int,
		//         0,
		//         d_p444444444444044P44p44444444[32715]:int)
		//   }
	}

}
