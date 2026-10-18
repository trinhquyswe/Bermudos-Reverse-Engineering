// DropdownSample.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in DropdownSample.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class DropdownSample : MonoBehaviour
{
	// Fields
	private TextMeshProUGUI text; // 0x10
	private TMP_Dropdown dropdownWithoutPlaceholder; // 0x14
	private TMP_Dropdown dropdownWithPlaceholder; // 0x18

	// Methods

	// no recovered body in DropdownSample.c
	public void OnButtonClick()
	{
		// <no recovered body>
	}

	// wasm func86176 -> ram:81a23792  [DropdownSample::.ctor]
	public DropdownSample()
	{
			int *piVar1;
			uint uVar2;

			if (cRam00664844 == '\0') {
				unnamed_function_1099(0x567f3c);
				cRam00664844 = '\x01';
			}
			piVar1 = (int *)UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f3c);
			*(int **)(this + 0x1c) = piVar1;
			uVar2 = (**(code **)((ulong)*(uint *)(*piVar1 + 0x2d8) * 4))
												(piVar1,*(uint *)(*piVar1 + 0x2dc));
			*(uint *)(this + 0x20) = uVar2;
			return;
	}
}

