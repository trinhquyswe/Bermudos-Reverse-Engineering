// EnemyManagerDetailsSO.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnemyManagerDetailsSO.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[CreateAssetMenu(fileName = "EnemyManagerDetailsSO_", menuName = "ScriptableObjects/Enemy/EnemyManagerDetailsSO", order = 1)]
public class EnemyManagerDetailsSO : ScriptableObject
{
	// Fields
	public GameObject enemyPrefab; // 0xC
	public string enemyName; // 0x10
	public List<Vector2> enemyPostionList; // 0x14
	public string enemyManagerDataKey; // 0x18

	// Methods

	// wasm func87090 -> ram:81a528ca  [EnemyManagerDetailsSO::.ctor]
	public EnemyManagerDetailsSO()
	{
			uint uVar1;

			if (cRam00664b00 == '\0') {
				unnamed_function_1099(0x567e78);
				unnamed_function_1099(0x567edc);
				cRam00664b00 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e78);
			*(uint *)(this + 0x28) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567edc);
			*(uint *)(this + 0x20) = uVar1;
			return;
	}
}

