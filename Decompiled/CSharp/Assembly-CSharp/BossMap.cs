// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public class BossMap : Map
{
	// Fields
	private GameObject NorthOfTheForestToTheForest;

	// Methods
	private void Start()
	{
		// ---- decompiled from wasm (BossMap_Start) ----
		//   var this:int;
		//   if (eqz(6703370[0]:ubyte)) {
		//     f_hpa(5601772);
		//     f_hpa(5666984);
		//     f_hpa(5660024);
		//     6703370[0]:byte = 1;
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
		//   f_eujc(c, this, d_p444444444444044P44p44444444[28038]:int, 0);
		//   methodInfo = f_iyud(methodInfo, c, 0);
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

	private void OnEnable()
	{
		// ---- decompiled from wasm (BossMap_OnEnable) ----
		//   var this:int;
		//   if (eqz(6703371[0]:ubyte)) {
		//     f_hpa(5601772);
		//     f_hpa(5666984);
		//     f_hpa(5660024);
		//     6703371[0]:byte = 1;
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
		//   f_eujc(c, this, d_p444444444444044P44p44444444[28038]:int, 0);
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

	private void OnDisable()
	{
		// ---- decompiled from wasm (BossMap_OnDisable) ----
		//   if (eqz(6703372[0]:ubyte)) {
		//     f_hpa(5619244);
		//     6703372[0]:byte = 1;
		//   }
		//   b = 
		//     {
		//       br_table[B_e, B_d, ..B_b](b - 4)
		//       label B_e:
		//       b = a[7];
		//       c = d_p444444444444044P44p44444444[16103]:int;
		//       if (eqz(c[29])) { f_ahje(c) }
		//       if (eqz(UnityEngine_Camera_get_targetTexture(b, 0, 0))) goto B_b;
		//       if (eqz(6703376[0]:ubyte)) {
		//         f_hpa(5750280);
		//         6703376[0]:byte = 1;
		//       }
		//       a = a + 28;
		//       if (UnityEngine_PlayerPrefs_GetString_1(
		//             d_p444444444444044P44p44444444[48862]:int,
		//             0)) {
		//         1;
		//         if (UnityEngine_PlayerPrefs_GetInt(
		//               d_p444444444444044P44p44444444[48862]:int,
		//               0) ==
		//             1) goto B_c;
		//       }
		//       0;
		//       goto B_c;
		//       label B_d:
		//       a = a + 28;
		//       1;
		//       label B_c:
		//     }
		//   f_sbnb(a[0], b, 0);
		//   label B_b:
	}

	private void OnGameStateChanged_Map(GameState gameState)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (BossMap_ctor) ----
		//   var this:int;
		//   var d:int_ptr;
		//   var c:int = g_a - 32;
		//   g_a = c;
		//   if (eqz(6703373[0]:ubyte)) {
		//     f_hpa(5640416);
		//     f_hpa(5640420);
		//     f_hpa(5640424);
		//     f_hpa(5648252);
		//     f_hpa(5660012);
		//     f_hpa(5728532);
		//     6703373[0]:byte = 1;
		//   }
		//   c[3]:long = 0L;
		//   c[2]:long = 0L;
		//   if (eqz(6703528[0]:ubyte)) {
		//     f_hpa(5618288);
		//     f_hpa(5621908);
		//     6703528[0]:byte = 1;
		//   }
		//   var methodInfo:int = 
		//     ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[0]:int;
		//   if (methodInfo) {
		//     d = f_icke(d_p444444444444044P44p44444444[15864]:int);
		//     StaticEventHandler_CallInstructionChangedEvent(d, 0);
		//     d[2] = this;
		//     call_indirect(methodInfo[8]:int, d, methodInfo[5]:int, methodInfo[3]:int);
		//   }
		//   UnityEngine_ComputeBuffer_Release(
		//     c + 16,
		//     this[6]:int,
		//     d_p444444444444044P44p44444444[23355]:int);
		//   c[2]:int = 0;
		//   c[3]:int = c + 16;
		//   methodInfo = 
		//     {
		//       loop L_n {
		//         6151988[0]:int = 0;
		//         d = 
		//           env_invoke_iii(7464, c + 16, d_p444444444444044P44p44444444[21397]:int);
		//         methodInfo = 6151988[0]:int;
		//         6151988[0]:int = 0;
		//         if (methodInfo == 1) goto B_j;
		//         if (d) {
		//           br_table[B_q, B_p, ..L_n](c[7]:int - 1)
		//           label B_q:
		//           var f:float = this[5]:float;
		//           6151988[0]:int = 0;
		//           env_invoke_viiffi(13921,
		//                             this,
		//                             d_p444444444444044P44p44444444[43425]:int,
		//                             0.0f,
		//                             f,
		//                             0);
		//           methodInfo = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (methodInfo != 1) continue L_n;
		//           env_cxa_find_matching_catch_3(4889068);
		//           goto B_i;
		//           label B_p:
		//           methodInfo = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//           if (eqz(methodInfo[189]:ubyte & 1)) {
		//             6151988[0]:int = 0;
		//             methodInfo = env_invoke_ii(256, methodInfo);
		//             d = 6151988[0]:int;
		//             6151988[0]:int = 0;
		//             if (d == 1) goto B_m;
		//           }
		//           methodInfo = (methodInfo[24]:int)[2]:int;
		//           if (eqz(methodInfo[189]:ubyte & 1)) {
		//             6151988[0]:int = 0;
		//             methodInfo = env_invoke_ii(256, methodInfo);
		//             d = 6151988[0]:int;
		//             6151988[0]:int = 0;
		//             if (d == 1) goto B_m;
		//           }
		//           d = (methodInfo[23]:int)[0]:int;
		//           6151988[0]:int = 0;
		//           var e:int_ptr = env_invoke_ii(13922, 0);
		//           methodInfo = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (methodInfo == 1) goto B_l;
		//           methodInfo = e[26];
		//           6151988[0]:int = 0;
		//           env_invoke_viiii(13923, d, methodInfo, 1, c);
		//           methodInfo = 6151988[0]:int;
		//           6151988[0]:int = 0;
		//           if (methodInfo == 1) goto B_k;
		//           continue L_n;
		//         }
		//       }
		//       d_p444444444444044P44p44444444[21396]:int;
		//       goto B_h;
		//       label B_m:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_i;
		//       label B_l:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_i;
		//       label B_k:
		//       env_cxa_find_matching_catch_3(4889068);
		//       goto B_i;
		//       label B_j:
		//       env_cxa_find_matching_catch_3(4889068);
		//       label B_i:
		//     }
		//   if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_f;
		//   methodInfo = env_cxa_begin_catch(methodInfo)[0]:int;
		//   6151988[0]:int = 0;
		//   c[2]:int = methodInfo;
		//   env_invoke_v(58);
		//   d = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (d == 1) goto B_g;
		//   d_p444444444444044P44p44444444[21396]:int;
		//   if (methodInfo) goto B_e;
		//   label B_h:
		//   g_a = c + 32;
		//   return ;
		//   label B_g:
		//   methodInfo = env_cxa_find_matching_catch();
		//   env_getTempRet0();
		//   label B_f:
		//   6151988[0]:int = 0;
		//   env_invoke_ii(13924, c + 8);
		//   c = 6151988[0]:int;
		//   6151988[0]:int = 0;
		//   if (c != 1) goto B_d;
		//   env_cxa_find_matching_catch_3(0);
		//   env_getTempRet0();
		//   f_sx();
		//   unreachable;
		//   label B_e:
		//   System_Net_CommandStream_ReceiveCommandResponseCallback(methodInfo);
		//   unreachable;
		//   label B_d:
		//   env_resumeException(methodInfo);
		//   unreachable;
	}

}
