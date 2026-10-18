// IntroSO.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in IntroSO.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[CreateAssetMenu(fileName = "IntroSO_", menuName = "ScriptableObjects/IntroSO", order = 1)]
public class IntroSO : ScriptableObject
{
	// Fields
	public Sprite introSprite; // 0xC
	public string introText; // 0x10

	// Methods

	// wasm func86452 -> ram:81a37112  [IntroSO::.ctor]
	public IntroSO()
	{
			uint uVar1;

			if (cRam006648f5 == '\0') {
				unnamed_function_1099(0x567f1c);
				cRam006648f5 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f1c);
			*(uint *)(this + 0x30) = uVar1;
			return;
	}
}

