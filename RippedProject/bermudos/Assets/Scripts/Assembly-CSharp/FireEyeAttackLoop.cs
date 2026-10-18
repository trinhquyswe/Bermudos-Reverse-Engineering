// FireEyeAttackLoop.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in FireEyeAttackLoop.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class FireEyeAttackLoop : Action
{
	// Fields
	private RangedSkills rangedSkills; // 0x2C
	public float eyeLoopRate; // 0x30
	public float eyeLoopDuration; // 0x34

	// Methods

	// wasm func86976 -> ram:81a4d62e  [FireEyeAttackLoop::OnAwake]
	public override void OnAwake()
	{
			RangedSkills.EyeAttack
								(this.rangedSkills,this.eyeLoopDuration,
								 this.eyeLoopRate,0);
			return 2;
	}

	// no recovered body in FireEyeAttackLoop.c
	public override TaskStatus OnUpdate()
	{
		// <no recovered body>
	}

	// wasm func86978 -> ram:81a4d653  [FireEyeAttackLoop::.ctor]
	public FireEyeAttackLoop()
	{
			uint uVar1;

			if (cRam00664ac4 == '\0') {
				unnamed_function_1099(0x56cee4);
				cRam00664ac4 = '\x01';
			}
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cee4);
			this.rangedSkills = uVar1;
			return;
	}
}

