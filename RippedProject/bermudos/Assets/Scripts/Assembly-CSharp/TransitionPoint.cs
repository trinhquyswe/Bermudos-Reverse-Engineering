// TransitionPoint.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in TransitionPoint.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class TransitionPoint : MonoBehaviour
{
	// Fields
	private TransitionPointDetailsSO TransitionPointDetailsSO; // 0x10
	private bool isCollider; // 0x14
	private WaitForSeconds waitForSeconds; // 0x18

	// Methods

	// wasm func86501 -> ram:81a39875  [TransitionPoint::OnTriggerEnter2D]
	private void OnTriggerEnter2D(Collider2D collision)
	{
			int iVar1;

			if (cRam00664915 == '\0') {
				unnamed_function_1099(0x55ece8);
				cRam00664915 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ece8);
			*(uint *)(iVar1 + 0x14) = collision;
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86502 -> ram:81a398ba  [TransitionPoint::MapTransitionCoroutine]
	private IEnumerator MapTransitionCoroutine(Collider2D collision)
	{
			int iVar1;
			uint uVar2;

			if (cRam00664916 == '\0') {
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x56d2ec);
				unnamed_function_1099(0x55984c);
				unnamed_function_1099(0x5762e0);
				cRam00664916 = '\x01';
			}
			iVar1 = System.String.Equals
												(*(uint *)(this.TransitionPointDetailsSO + 0x10),uRam005762e0,0);
			if (iVar1 != 0) {
				iVar1 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
					iVar1 = System.Threading.Monitor.Enter_1(iVar1);
				}
				iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
				if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
					iVar1 = System.Threading.Monitor.Enter_1(iVar1);
				}
				GameManager.TransitionToGame(**(uint **)(iVar1 + 0x5c),4,0);
			}
			uVar2 = unnamed_function_95402(uRam0055984c);
			unnamed_function_71914(uVar2,this,uRam0056d2ec,0);
			if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c4f8);
			}
			UnityEngine.SceneManagement.SceneManager.add_sceneLoaded(uVar2,0);
			return;
	}

	// wasm func86503 -> ram:81a3999a  [TransitionPoint::SceneManager_sceneLoaded]
	private void SceneManager_sceneLoaded(Scene arg0, LoadSceneMode arg1)
	{
			uint uVar1;

			if (cRam00664917 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam00664917 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam0055d134);
			UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,0x3dcccccd,0)
			;
			this.waitForSeconds = uVar1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in TransitionPoint.c
	public TransitionPoint()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86504 -> ram:81a399e3  [TransitionPoint+<MapTransitionCoroutine>d__4::System.IDisposable.Dispose]
	uint TransitionPoint__MapTransitionCoroutine_d__4_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			ulong uStack_28;
			uint uStack_20;
			ulong uStack_18;
			uint uStack_10;
			uint[] auStack_8 = new uint[2];

			uVar1 = 0;
			if (cRam00664918 == '\0') {
				unnamed_function_1099(0x567ef0);
				unnamed_function_1099(0x55c4f8);
				unnamed_function_1099(0x56d2ec);
				unnamed_function_1099(0x55984c);
				cRam00664918 = '\x01';
			}
			iVar2 = *(int *)(param_1 + 0x10);
			if (*(int *)(param_1 + 8) == 0) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				if (cRam006649ab == '\0') {
					unnamed_function_1099(0x55c894);
					cRam006649ab = '\x01';
				}
				iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 4);
				if (iVar3 != 0) {
					(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
										(*(uint *)(iVar3 + 0x20),*(uint *)(iVar3 + 0x14));
				}
				uVar4 = *(uint *)(iVar2 + 0x18);
				uVar1 = 1;
				*(uint *)(param_1 + 8) = 1;
				*(uint *)(param_1 + 0xc) = uVar4;
			}
			else if (*(int *)(param_1 + 8) == 1) {
				*(uint *)(param_1 + 8) = 0xffffffff;
				uVar1 = *(uint *)(*(int *)(iVar2 + 0x10) + 0xc);
				if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				auStack_8[0] = UnityEngine.SceneManagement.SceneManager.GetActiveScene(uVar1,0);
				iVar3 = UnityEngine.SceneManagement.Scene.get_name(auStack_8,0);
				if (iVar3 != 0) {
					uVar1 = *(uint *)(*(int *)(iVar2 + 0x10) + 0xc);
					if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
						unnamed_function_94848(iRam0055c4f8);
					}
					UnityEngine.SceneManagement.SceneManager.LoadScene_4(uVar1,0);
				}
				uVar4 = *(uint *)(*(int *)(iVar2 + 0x10) + 0x10);
				uVar1 = 0;
				if (*(int *)(iRam0055c4f8 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c4f8);
				}
				UnityEngine.SceneManagement.SceneManager.remove_sceneUnloaded(uVar4,1,0);
				uVar4 = unnamed_function_95402(uRam0055984c);
				unnamed_function_71914(uVar4,iVar2,uRam0056d2ec,0);
				UnityEngine.SceneManagement.SceneManager.LoadFirstScene_Internal(uVar4,0);
				uVar4 = UnityEngine.GameObject.get_activeInHierarchy
													(*(uint *)(param_1 + 0x14),uRam00567ef0);
				uVar4 = System.Linq.Enumerable.Count(uVar4,0);
				uStack_28 = *(ulong *)(*(int *)(iVar2 + 0x10) + 0x14);
				uStack_10 = 0;
				uStack_20 = 0;
				uStack_18 = uStack_28;
				UnityEngine.Transform.ctor(uVar4,&uStack_28,0);
			}
			return uVar1;
	}

	// wasm func86505 -> ram:81a39bcb  [TransitionPoint+<MapTransitionCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void TransitionPoint__MapTransitionCoroutine_d__4_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56ffdc);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

