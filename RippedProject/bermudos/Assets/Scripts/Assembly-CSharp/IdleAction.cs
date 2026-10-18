// IdleAction.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in IdleAction.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class IdleAction : SkillsAction
{
	// Methods

	// wasm func86982 -> ram:81a4d97c  [IdleAction::OnAwake]
	public override void OnAwake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664ac5 == '\0') {
				unnamed_function_1099(0x55fd54);
				cRam00664ac5 = '\x01';
			}
			uVar2 = *(uint *)(this + 0x2c);
			uVar1 = unnamed_function_77425
												(*(uint *)(this + 0xa4),*(uint *)(this + 0x30),uRam0055fd54);
			UnityEngine.Animator.SetTrigger(uVar2,uVar1,0);
			return 2;
	}

	// no recovered body in IdleAction.c
	public override TaskStatus OnUpdate()
	{
		// <no recovered body>
	}

	// wasm func86985 -> ram:81a4dce7  [IdleAction::.ctor]
	public IdleAction()
	{
			uint uVar1;

			if (cRam00664ac6 == '\0') {
				unnamed_function_1099(0x56ced4);
				cRam00664ac6 = '\x01';
			}
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056ced4);
			*(uint *)(this + 0x2c) = uVar1;
			return;
	}
}

