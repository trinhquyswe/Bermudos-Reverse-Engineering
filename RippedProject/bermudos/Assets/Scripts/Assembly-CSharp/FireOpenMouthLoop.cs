// FireOpenMouthLoop.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in FireOpenMouthLoop.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class FireOpenMouthLoop : Action
{
	// Fields
	private RangedSkills rangedSkills; // 0x2C
	public float mouthOpenLoopRate; // 0x30
	public float mouthOpenLoopDuration; // 0x34

	// Methods

	// wasm func86979 -> ram:81a4d687  [FireOpenMouthLoop::OnAwake]
	public override void OnAwake()
	{
			RangedSkills.GetTargetPositionList
								(this.rangedSkills,this.mouthOpenLoopRate,
								 this.mouthOpenLoopDuration,0);
			return 2;
	}

	// no recovered body in FireOpenMouthLoop.c
	public override TaskStatus OnUpdate()
	{
		// <no recovered body>
	}

	// wasm func86980 -> ram:81a4d6a1  [FireOpenMouthLoop::.ctor]
	public FireOpenMouthLoop()
	{
			ReceiveDamageAction.ctor(this,this);
			return;
	}
}

