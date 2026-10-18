// AmmoAnimation.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AmmoAnimation.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class AmmoAnimation : MonoBehaviour
{
	// Fields
	private Animator animator; // 0x10
	private Ammo ammo; // 0x14

	// Methods

	// wasm func86830 -> ram:81a46672  [AmmoAnimation::Awake]
	private void Awake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664a6b == '\0') {
				unnamed_function_1099(0x55a074);
				unnamed_function_1099(0x575b90);
				cRam00664a6b = '\x01';
			}
			uVar1 = UnityEngine.Animator.StopRecording(this.animator,0);
			uVar2 = unnamed_function_95402(uRam0055a074);
			UnityEngine.Animator.MatchTarget_Injected(uVar2,uVar1,0);
			UnityEngine.AnimatorOverrideController.Internal_Create
								(uVar2,uRam00575b90,*(uint *)(*(int *)(this.ammo + 0x10) + 0x18),0)
			;
			UnityEngine.Animator.get_runtimeAnimatorController(this.animator,uVar2,0);
			return;
	}

	// no recovered body in AmmoAnimation.c
	public void InitializeAmmoAnimation()
	{
		// <no recovered body>
	}

	// no recovered body in AmmoAnimation.c
	public AmmoAnimation()
	{
		// <no recovered body>
	}
}

