// NavmeshManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in NavmeshManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class NavmeshManager : MonoBehaviour
{
	// Fields
	private NavMeshSurface navMeshSurface; // 0x10

	// Methods

	// wasm func86540 -> ram:81a3b600  [NavmeshManager::Awake]
	private void Awake()
	{
			bool bVar1;
			int iVar2;
			uint uVar3;
			int *piVar4;
			int iVar5;

			if (cRam00664933 == '\0') {
				unnamed_function_1099(0x557a10);
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x56b40c);
				unnamed_function_1099(0x56b410);
				cRam00664933 = '\x01';
			}
			uVar3 = unnamed_function_95402(uRam00557a10);
			UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam0056b40c,0);
			SoundEffectSO.ctor(uVar3,this);
			uVar3 = unnamed_function_95402(iRam00559fb4);
			unnamed_function_82700(uVar3,this,uRam0056b410,0);
			if (cRam006649c4 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x55c894);
				cRam006649c4 = '\x01';
			}
			iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x28);
			while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
						 (iRam00559fb4 == *piVar4))) {
				iVar5 = System.Net.WebOperation.ctor(*(int *)(iRam0055c894 + 0x5c) + 0x28,piVar4,iVar2);
				bVar1 = iVar2 == iVar5;
				iVar2 = iVar5;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(piVar4,iRam00559fb4);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86543 -> ram:81a3b82d  [NavmeshManager::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			int iVar2;
			uint uVar3;
			int *piVar4;
			int iVar5;

			if (cRam00664934 == '\0') {
				unnamed_function_1099(0x557a10);
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x56b40c);
				unnamed_function_1099(0x56b410);
				cRam00664934 = '\x01';
			}
			uVar3 = unnamed_function_95402(uRam00557a10);
			UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam0056b40c,0);
			StaticEventHandler.add_OnMapChanged(uVar3,this);
			uVar3 = unnamed_function_95402(iRam00559fb4);
			unnamed_function_82700(uVar3,this,uRam0056b410,0);
			if (cRam006649c5 == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x55c894);
				cRam006649c5 = '\x01';
			}
			iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x28);
			while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
						 (iRam00559fb4 == *piVar4))) {
				iVar5 = System.Net.WebOperation.ctor(*(int *)(iRam0055c894 + 0x5c) + 0x28,piVar4,iVar2);
				bVar1 = iVar2 == iVar5;
				iVar2 = iVar5;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(piVar4,iRam00559fb4);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86546 -> ram:81a3ba59  [NavmeshManager::OnDisable]
	private void OnDisable()
	{
			int iVar1;

			if (cRam00664935 == '\0') {
				unnamed_function_1099(0x55e45c);
				cRam00664935 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e45c);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			return;
	}

	// wasm func86547 -> ram:81a3ba9f  [NavmeshManager::StaticEventHandler_OnMapChanged]
	private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs)
	{
			int iVar1;

			if (cRam00664935 == '\0') {
				unnamed_function_1099(0x55e45c);
				cRam00664935 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e45c);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86548 -> ram:81a3badc  [NavmeshManager::BuildNavMeshWhenMapChangedCoroutine]
	private IEnumerator BuildNavMeshWhenMapChangedCoroutine()
	{
			int iVar1;

			if (cRam00664936 == '\0') {
				unnamed_function_1099(0x55e460);
				cRam00664936 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e460);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			return;
	}

	// wasm func86549 -> ram:81a3bb22  [NavmeshManager::StaticEventHandler_OnRestInBonfire]
	private void StaticEventHandler_OnRestInBonfire()
	{
			int iVar1;

			if (cRam00664936 == '\0') {
				unnamed_function_1099(0x55e460);
				cRam00664936 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e460);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// no recovered body in NavmeshManager.c
	private IEnumerator BuildNavMeshWhenRestCoroutine()
	{
		// <no recovered body>
	}

	// no recovered body in NavmeshManager.c
	public NavmeshManager()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86550 -> ram:81a3bb60  [NavmeshManager+<BuildNavMeshWhenMapChangedCoroutine>d__5::System.IDisposable.Dispose]
	uint NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5_System_IDisposable_Dispose(int param_1)
	{
			int iVar1;
			int iVar2;

			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					NavMeshPlus.Components.NavMeshSurface.RemoveData
										(*(uint *)(*(int *)(param_1 + 0x10) + 0x10),0);
					if (cRam006649b7 == '\0') {
						unnamed_function_1099(0x55be94);
						unnamed_function_1099(0x55c894);
						cRam006649b7 = '\x01';
					}
					iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x14);
					if (iVar2 != 0) {
						iVar1 = unnamed_function_95402(uRam0055be94);
						OnItemUIChangedEventArgs.ctor(iVar1,0);
						*(byte *)(iVar1 + 8) = 1;
						(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
											(*(uint *)(iVar2 + 0x20),iVar1,*(uint *)(iVar2 + 0x14));
					}
				}
				return 0;
			}
			*(ulong *)(param_1 + 8) = 1;
			return 1;
	}

	// wasm func86552 -> ram:81a3bc6c  [NavmeshManager+<BuildNavMeshWhenMapChangedCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f660);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86553 -> ram:81a3bc94  [NavmeshManager+<BuildNavMeshWhenRestCoroutine>d__7::System.IDisposable.Dispose]
	uint NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7_System_IDisposable_Dispose(int param_1)
	{
			int iVar1;
			int iVar2;

			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					NavMeshPlus.Components.NavMeshSurface.RemoveData
										(*(uint *)(*(int *)(param_1 + 0x10) + 0x10),0);
					if (cRam006649b7 == '\0') {
						unnamed_function_1099(0x55be94);
						unnamed_function_1099(0x55c894);
						cRam006649b7 = '\x01';
					}
					iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x14);
					if (iVar2 != 0) {
						iVar1 = unnamed_function_95402(uRam0055be94);
						OnItemUIChangedEventArgs.ctor(iVar1,0);
						*(byte *)(iVar1 + 8) = 0;
						(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
											(*(uint *)(iVar2 + 0x20),iVar1,*(uint *)(iVar2 + 0x14));
					}
				}
				return 0;
			}
			*(ulong *)(param_1 + 8) = 1;
			return 1;
	}

	// wasm func86554 -> ram:81a3bd33  [NavmeshManager+<BuildNavMeshWhenRestCoroutine>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f664);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86555 -> ram:81a3bd5a  [NavmeshManager+<BuildNavMeshWhenRestCoroutine>d__7::System.Collections.IEnumerator.get_Current]
	void NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7_System_Collections_IEnumerator_get_Current(int param_1)
	{
			int iVar1;
			uint uVar2;

			if (cRam00664937 == '\0') {
				unnamed_function_1099(0x567f24);
				unnamed_function_1099(0x559cf4);
				unnamed_function_1099(0x576924);
				cRam00664937 = '\x01';
			}
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar1 + 0x10) = uRam00576924;
			uVar2 = UnityEngine.LayerMask.NameToLayer(iVar1,0);
			*(uint *)(param_1 + 0x10) = uVar2;
			uVar2 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567f24);
			*(uint *)(param_1 + 0x14) = uVar2;
			return;
	}
}

