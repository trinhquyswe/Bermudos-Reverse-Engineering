// SingletonMonobehaviourPersistent.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in SingletonMonobehaviourPersistent.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class SingletonMonobehaviourPersistent<T> : MonoBehaviour
{
	// Fields
	private static T instance; // 0x0

	// Properties
	public static T Instance
	{
		get
		{
			// <no body recovered in SingletonMonobehaviourPersistent.c>
		}
	}

	// Methods

	// no recovered body in SingletonMonobehaviourPersistent.c
	protected virtual void Awake()
	{
		// <no recovered body>
	}

	// wasm func61265 -> ram:81334a3c  [SingletonMonobehaviourPersistent`1::.ctor]
	public SingletonMonobehaviourPersistent()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			int iVar2;
			uint uVar3;
			int iVar4;

			iVar4 = 0;
			if (cRam00661fe6 == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam00661fe6 = '\x01';
			}
			iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			uVar3 = **(uint **)(iVar2 + 0x5c);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar2 = unnamed_function_44710(uVar3,0,0);
			if (iVar2 == 0) {
				uVar3 = unnamed_function_44644(this,0);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				unnamed_function_44782(uVar3,0);
				return;
			}
			iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar1 = unnamed_function_1112(this,iVar2);
			iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			if ((iVar1 != 0) && (iVar4 = unnamed_function_1112(iVar1,iVar2), iVar4 == 0)) {
				unnamed_function_1116(iVar1,iVar2);
				do {
					halt_trap();
				} while( true );
			}
			iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
			iVar1 = *(int *)(iVar2 + 8);
			if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
				iVar1 = System.Threading.Monitor.Enter_1(iVar1);
				iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
			}
			**(int **)(iVar1 + 0x5c) = iVar4;
			if ((*(byte *)(*(int *)(iVar2 + 8) + 0xbd) & 1) == 0) {
				System.Threading.Monitor.Enter_1(*(int *)(iVar2 + 8));
				iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
			}
			iVar4 = *(int *)(iVar2 + 4);
			if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
				iVar4 = System.Threading.Monitor.Enter_1(iVar4);
			}
			iVar2 = unnamed_function_1112(this,iVar4);
			iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4);
			if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
				iVar4 = System.Threading.Monitor.Enter_1(iVar4);
			}
			if ((iVar2 != 0) && (iVar1 = unnamed_function_1112(iVar2,iVar4), iVar1 == 0)) {
				unnamed_function_1116(iVar2,iVar4);
				do {
					halt_trap();
				} while( true );
			}
			uVar3 = unnamed_function_44644(this,0);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			UnityEngine.Object.FindObjectsOfType(uVar3,0);
			return;
	}
}

