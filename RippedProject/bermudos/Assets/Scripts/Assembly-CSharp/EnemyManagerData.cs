// EnemyManagerData.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnemyManagerData.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[Serializable]
public class EnemyManagerData
{
	// Fields
	public string enemyName; // 0x8
	public int enemyCount; // 0xC
	public List<bool> enemieStateList; // 0x10

	// Methods

	// wasm func87089 -> ram:81a527ee  [EnemyManagerData::.ctor]
	public EnemyManagerData(string enemyName, int enemyCount, int count)
	{
			int iVar1;
			int iVar2;
			uint uVar3;
			int iVar4;
			int iVar5;

			iVar5 = 0;
			if (cRam00664aff == '\0') {
				unnamed_function_1099(0x562b4c);
				cRam00664aff = '\x01';
			}
			if (0 < this.enemyCount) {
				do {
					iVar1 = iRam00562b4c;
					iVar2 = this.enemieStateList;
					*(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
					uVar3 = *(uint *)(iVar2 + 0xc);
					iVar4 = *(int *)(iVar2 + 8);
					if (enemyName == iVar5) {
						if (uVar3 < *(uint *)(iVar4 + 0xc)) {
							*(uint *)(iVar2 + 0xc) = uVar3 + 1;
							*(byte *)(uVar3 + iVar4 + 0x10) = 0;
						}
						else {
							unnamed_function_9759
												(iVar2,0,*(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
						}
					}
					else if (uVar3 < *(uint *)(iVar4 + 0xc)) {
						*(uint *)(iVar2 + 0xc) = uVar3 + 1;
						*(byte *)(uVar3 + iVar4 + 0x10) = 1;
					}
					else {
						unnamed_function_9759
											(iVar2,1,*(uint *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
					}
					iVar5 = iVar5 + 1;
				} while (iVar5 < this.enemyCount);
			}
			return;
	}

	// no recovered body in EnemyManagerData.c
	public void GetEnemyList(int count)
	{
		// <no recovered body>
	}
}

