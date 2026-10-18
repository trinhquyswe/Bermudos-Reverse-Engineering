// AmmoVisual.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AmmoVisual.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class AmmoVisual : MonoBehaviour
{
	// Fields
	private Ammo ammo; // 0x10
	private Vector2 target; // 0x14

	// Methods

	// no recovered body in AmmoVisual.c
	private void Awake()
	{
		// <no recovered body>
	}

	// no recovered body in AmmoVisual.c
	private void Start()
	{
		// <no recovered body>
	}

	// no recovered body in AmmoVisual.c
	private void Update()
	{
		// <no recovered body>
	}

	// wasm func12080 -> ram:804e1e9e  [AmmoVisual::UpdateAmmoRotation]
	private void UpdateAmmoRotation()
	{
		ulong * param_2 = 0; // IL2CPP hidden slot
			this.target = *param_2;
			return;
	}

	// no recovered body in AmmoVisual.c
	public void SetTarget(Vector2 target)
	{
		// <no recovered body>
	}

	// wasm func86851 -> ram:81a47905  [AmmoVisual::.ctor]
	public AmmoVisual()
	{
			uint uVar1;

			if (cRam00664a6e == '\0') {
				unnamed_function_1099(0x567e30);
				cRam00664a6e = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e30);
			this.ammo = uVar1;
			return;
	}
}

