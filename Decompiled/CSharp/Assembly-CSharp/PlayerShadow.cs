// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
[DisallowMultipleComponent]
public class PlayerShadow : MonoBehaviour
{
	// Methods
	public void InitialisePlayerShadow(SpriteRenderer[] playerSpriteRenderers)
	{
		// ---- decompiled from wasm (PlayerShadow_InitialisePlayerShadow) ----
		//   f_sbnb(f_canb(a, 0), 1, 0)
	}

	private void EnablePlayerShadow()
	{
		// <no wasm mapping>
	}

	private void DisablePlayerShadow()
	{
		// ---- decompiled from wasm (PlayerShadow_DisablePlayerShadow) ----
		//   var d:int;
		//   if (eqz(6703849[0]:ubyte)) {
		//     f_hpa(5668840);
		//     6703849[0]:byte = 1;
		//   }
		//   var e:int_ptr = f_rrrc(a, d_p444444444444044P44p44444444[28502]:int);
		//   a = e[3];
		//   if (a <= 0) goto B_b;
		//   c = b[3];
		//   if (c <= 0) goto B_b;
		//   loop L_c {
		//     if (c > 0) {
		//       var f:int = e[d + 4]:int;
		//       a = 0;
		//       loop L_e {
		//         c = b[a + 4]:int;
		//         if (multiple_System_String_Equals(
		//               UnityEngine_TextCore_Text_FontAsset_LoadFontFace(f, 0),
		//               UnityEngine_TextCore_Text_FontAsset_LoadFontFace(c, 0),
		//               0)) {
		//           UnityEngine_SpriteRenderer_InvokeSpriteChanged(
		//             f,
		//             UnityEngine_U2D_Animation_SpriteSkin_GetSpriteBonesTransforms(c, 0),
		//             0)
		//         }
		//         a = a + 1;
		//         if (a < (c = b[3])) continue L_e;
		//       }
		//       a = e[3];
		//     }
		//     d = d + 1;
		//     if (d < a) continue L_c;
		//   }
		//   label B_b:
	}

	public void InitialiseSprite(SpriteRenderer[] playerSpriteRenderers)
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// ---- decompiled from wasm (PlayerShadow_ctor) ----
		//   var this:int_ptr;
		//   var methodInfo:int;
		//   var c:int_ptr = g_a - 16;
		//   g_a = c;
		//   if (eqz(6703850[0]:ubyte)) {
		//     f_hpa(5620984);
		//     f_hpa(5660012);
		//     f_hpa(5725100);
		//     6703850[0]:byte = 1;
		//   }
		//   c[2] = 0;
		//   f_sbnb(f_canb(this, 0), 0, 0);
		//   this[4] =
		//     (methodInfo = multiple_UnityEngine_PropertyName_ToString(0, 3, 0));
		//   if (methodInfo) {
		//     methodInfo = d_p444444444444044P44p44444444[16538]:int;
		//     if (eqz(methodInfo[29]:int)) { f_ahje(methodInfo) }
		//     c[2] = UnityEngine_SceneManagement_SceneManager_GetSceneByName(0, 0);
		//     if (
		//       eqz(multiple_System_String_Equals(
		//             UnityEngine_SceneManagement_Scene_IsValid(c + 8, 0),
		//             d_p444444444444044P44p44444444[42567]:int,
		//             0))) goto B_b;
		//   }
		//   f_sbnb(f_canb(this, 0), 1, 0);
		//   methodInfo = (d_p444444444444044P44p44444444[26295]:int)[4]:int;
		//   methodInfo = ((if (methodInfo[189]:ubyte & 1) {
		//                    methodInfo
		//                  } else {
		//                    System_Threading_Monitor_Enter_1(methodInfo)
		//                  })[24]:int)[2]:int;
		//   GameResources_get_Instance(
		//     ((if (methodInfo[189]:ubyte & 1) {
		//         methodInfo
		//       } else {
		//         System_Threading_Monitor_Enter_1(methodInfo)
		//       })[23]:int)[0]:int,
		//     this[5],
		//     1,
		//     0);
		//   label B_b:
		//   g_a = c + 16;
	}

}
