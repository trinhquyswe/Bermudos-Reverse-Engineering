// MeleeSkillAction.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in MeleeSkillAction.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class MeleeSkillAction : SkillsAction
{
	// Fields
	private MeleeSkills meleeSkills; // 0xA8

	// Methods

	// wasm func86996 -> ram:81a4defc  [MeleeSkillAction::OnAwake]
	public override void OnAwake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664aca == '\0') {
				unnamed_function_1099(0x55fd54);
				cRam00664aca = '\x01';
			}
			*(byte *)(this + 0x38) = 1;
			uVar2 = this.meleeSkills;
			uVar1 = unnamed_function_77425
												(*(uint *)(this + 0xa4),*(uint *)(this + 0x30),uRam0055fd54);
			MeleeSkills.DealDamage(uVar2,uVar1,0);
			return;
	}

	// wasm func86997 -> ram:81a4df47  [MeleeSkillAction::OnStart]
	public override void OnStart()
	{
			uint uVar1;

			if (*(byte *)(this[0x2a] + 0x4c) != '\0') {
				uVar1 = (**(code **)((ulong)*(uint *)(*this + 0x1b8) * 4))
													(this,this[0xd],*(uint *)(*this + 0x1bc));
				return uVar1;
			}
			return 3;
	}

	// wasm func86998 -> ram:81a4df75  [MeleeSkillAction::OnUpdate]
	public override TaskStatus OnUpdate()
	{
			*(byte *)(this + 0x38) = 0;
			*(byte *)(this.meleeSkills + 0x4c) = 0;
			return;
	}

	// no recovered body in MeleeSkillAction.c
	public override void OnEnd()
	{
		// <no recovered body>
	}

	// wasm func86999 -> ram:81a4df8b  [MeleeSkillAction::.ctor]
	public MeleeSkillAction()
	{
			uint uVar1;

			if (cRam00664acb == '\0') {
				unnamed_function_1099(0x56cec0);
				unnamed_function_1099(0x56cedc);
				unnamed_function_1099(0x56cee0);
				unnamed_function_1099(0x56cee4);
				cRam00664acb = '\x01';
			}
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cee0);
			*(uint *)(this + 0x40) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cec0);
			*(uint *)(this + 0x2c) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cee4);
			*(uint *)(this + 0x30) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cedc);
			*(uint *)(this + 0x34) = uVar1;
			return;
	}
}

