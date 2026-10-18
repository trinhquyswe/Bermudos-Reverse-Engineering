// ReceiveDamageAction.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in ReceiveDamageAction.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class ReceiveDamageAction : Action
{
	// Fields
	private Animator animator; // 0x2C
	private RangedSkills rangedSkills; // 0x30
	private MeleeSkills meleeSkills; // 0x34
	private bool isFirstUpdate; // 0x38
	public SharedFloat stunTime; // 0x3C
	private Poise poise; // 0x40

	// Methods

	// wasm func87000 -> ram:81a4e010  [ReceiveDamageAction::OnAwake]
	public override void OnAwake()
	{
			if (cRam00664acc == '\0') {
				unnamed_function_1099(0x565d04);
				cRam00664acc = '\x01';
			}
			UnityEngine.MonoBehaviour.StopCoroutine_2(this.rangedSkills,0);
			UnityEngine.MonoBehaviour.StopCoroutine_2(this.meleeSkills,0);
			this.isFirstUpdate = 1;
			unnamed_function_61227
								(this.stunTime,*(uint *)(this.poise + 0x1c),
								 uRam00565d04);
			return;
	}

	// wasm func87001 -> ram:81a4e068  [ReceiveDamageAction::OnStart]
	public override void OnStart()
	{
			float fVar1;
			float fVar2;
			uint uVar3;
			byte[] auStack_50 = new byte[12];
			float fStack_44;

			if (cRam00664acd == '\0') {
				unnamed_function_1099(0x565d00);
				unnamed_function_1099(0x565d04);
				cRam00664acd = '\x01';
			}
			if ((*(float *)(this.poise + 0x18) <= 0.0) &&
				 (fVar1 = (float)unnamed_function_61226(this.stunTime,uRam00565d00),
				 0.0 < fVar1)) {
				uVar3 = this.stunTime;
				fVar1 = (float)unnamed_function_61226(uVar3,uRam00565d00);
				fVar2 = (float)UnityEngine.Time.get_time(0);
				unnamed_function_61227(uVar3,fVar1 - fVar2,uRam00565d04);
			}
			if (this.isFirstUpdate == '\0') {
				UnityEngine.Animator.GetAnimatorStateInfo(auStack_50,this.animator,0,0);
				uVar3 = 3;
				if (1.0 <= fStack_44) {
					uVar3 = 2;
				}
			}
			else {
				this.isFirstUpdate = 0;
				uVar3 = 3;
			}
			return uVar3;
	}

	// no recovered body in ReceiveDamageAction.c
	public override TaskStatus OnUpdate()
	{
		// <no recovered body>
	}

	// wasm func86981 -> ram:81a4d6ad  [ReceiveDamageAction::.ctor]
	public ReceiveDamageAction()
	{
			uint uVar1;

			if (cRam00664ace == '\0') {
				unnamed_function_1099(0x55fd50);
				unnamed_function_1099(0x56cec0);
				cRam00664ace = '\x01';
			}
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0xb,*(uint *)(this + 0x68),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0,this.stunTime,uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),1,this.poise,uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),2,*(uint *)(this + 0x44),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),3,*(uint *)(this + 0x48),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),4,*(uint *)(this + 0x4c),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),5,*(uint *)(this + 0x50),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),6,*(uint *)(this + 0x54),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),7,*(uint *)(this + 0x58),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),8,*(uint *)(this + 0x5c),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),9,*(uint *)(this + 0x60),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),10,*(uint *)(this + 100),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0xc,*(uint *)(this + 0x6c),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0xd,*(uint *)(this + 0x70),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0xe,*(uint *)(this + 0x74),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0xf,*(uint *)(this + 0x78),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x10,*(uint *)(this + 0x7c),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x11,*(uint *)(this + 0x80),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x12,*(uint *)(this + 0x84),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x13,*(uint *)(this + 0x88),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x14,*(uint *)(this + 0x8c),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x15,*(uint *)(this + 0x90),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x16,*(uint *)(this + 0x94),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x17,*(uint *)(this + 0x98),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x18,*(uint *)(this + 0x9c),uRam0055fd50);
			unnamed_function_77427
								(*(uint *)(this + 0xa4),0x19,*(uint *)(this + 0xa0),uRam0055fd50);
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cec0);
			this.animator = uVar1;
			return;
	}
}

