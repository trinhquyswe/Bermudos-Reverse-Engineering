// PlayerShadow.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in PlayerShadow.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class PlayerShadow : MonoBehaviour
{
	// Methods

	// wasm func87050 -> ram:81a4fe8a  [PlayerShadow::InitialisePlayerShadow]
	public void InitialisePlayerShadow(SpriteRenderer[] playerSpriteRenderers)
	{
			uint uVar1;

			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,1,0);
			return;
	}

	// no recovered body in PlayerShadow.c
	private void EnablePlayerShadow()
	{
		// <no recovered body>
	}

	// wasm func87041 -> ram:81a4f988  [PlayerShadow::DisablePlayerShadow]
	private void DisablePlayerShadow()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;
			int iVar5;
			uint uVar6;
			uint uVar7;
			int iVar8;

			iVar8 = 0;
			if (cRam00664ae9 == '\0') {
				unnamed_function_1099(0x567fe8);
				cRam00664ae9 = '\x01';
			}
			iVar1 = unnamed_function_65381(this,uRam00567fe8);
			iVar4 = *(int *)(iVar1 + 0xc);
			if ((0 < iVar4) && (iVar5 = *(int *)(param_2 + 0xc), 0 < iVar5)) {
				do {
					if (0 < iVar5) {
						uVar6 = *(uint *)(iVar1 + iVar8 * 4 + 0x10);
						iVar4 = 0;
						do {
							uVar7 = *(uint *)(param_2 + iVar4 * 4 + 0x10);
							uVar2 = UnityEngine.TextCore.Text.FontAsset.LoadFontFace(uVar6,0);
							uVar3 = UnityEngine.TextCore.Text.FontAsset.LoadFontFace(uVar7,0);
							iVar5 = System.String.Equals(uVar2,uVar3,0);
							if (iVar5 != 0) {
								uVar2 = UnityEngine.U2D.Animation.SpriteSkin.GetSpriteBonesTransforms(uVar7,0);
								UnityEngine.SpriteRenderer.InvokeSpriteChanged(uVar6,uVar2,0);
							}
							iVar4 = iVar4 + 1;
							iVar5 = *(int *)(param_2 + 0xc);
						} while (iVar4 < iVar5);
						iVar4 = *(int *)(iVar1 + 0xc);
					}
					iVar8 = iVar8 + 1;
				} while (iVar8 < iVar4);
			}
			return;
	}

	// no recovered body in PlayerShadow.c
	public void InitialiseSprite(SpriteRenderer[] playerSpriteRenderers)
	{
		// <no recovered body>
	}

	// wasm func87051 -> ram:81a4fe9e  [PlayerShadow::.ctor]
	public PlayerShadow()
	{
			uint uVar1;
			int iVar2;
			uint[] auStack_8 = new uint[2];

			if (cRam00664aea == '\0') {
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x575bac);
				cRam00664aea = '\x01';
			}
			auStack_8[0] = 0;
			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,0,0);
			iVar2 = UnityEngine.PropertyName.ToString(0,3,0);
			*(int *)(this + 0x10) = iVar2;
			if (iVar2 != 0) {
				if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				auStack_8[0] = UnityEngine.SceneManagement.SceneManager.GetSceneByName(0,0);
				uVar1 = UnityEngine.SceneManagement.Scene.IsValid(auStack_8,0);
				iVar2 = System.String.Equals(uVar1,uRam00575bac,0);
				if (iVar2 == 0) {
					return;
				}
			}
			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,1,0);
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			GameResources.get_Instance(**(uint **)(iVar2 + 0x5c),*(uint *)(this + 0x14),1,0);
			return;
	}
}

