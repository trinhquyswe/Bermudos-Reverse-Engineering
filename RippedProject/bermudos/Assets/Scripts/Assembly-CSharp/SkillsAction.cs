// SkillsAction.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in SkillsAction.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class SkillsAction : Action
{
	// Fields
	public Animator animator; // 0x2C
	public BossAnimationState bossAnimationState; // 0x30
	public float normalizedTime; // 0x34
	public bool isFirstUpdate; // 0x38
	private int Idle; // 0x3C
	private int ouch; // 0x40
	private int OpenMouth; // 0x44
	private int eyeAttack; // 0x48
	private int eyeLoop; // 0x4C
	private int Hop; // 0x50
	private int EyeLoopDeath; // 0x54
	private int Base; // 0x58
	private int Walk; // 0x5C
	private int swipe; // 0x60
	private int mouthOpenLoop; // 0x64
	private int spearAtk; // 0x68
	private int spinny; // 0x6C
	private int Idle2; // 0x70
	private int ouch2; // 0x74
	private int OpenMouth2; // 0x78
	private int eyeAttack2; // 0x7C
	private int eyeLoop2; // 0x80
	private int Hop2; // 0x84
	private int EyeLoopDeath2; // 0x88
	private int Base2; // 0x8C
	private int Walk2; // 0x90
	private int swipe2; // 0x94
	private int mouthOpenLoop2; // 0x98
	private int spearAtk2; // 0x9C
	private int spinny2; // 0xA0
	protected Dictionary<BossAnimationState, int> bossAnimationStateDic; // 0xA4

	// Methods

	// wasm func87002 -> ram:81a4e16c  [SkillsAction::OnAwake]
	public override void OnAwake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664acf == '\0') {
				unnamed_function_1099(0x55fd54);
				cRam00664acf = '\x01';
			}
			uVar2 = this.animator;
			uVar1 = unnamed_function_77425
												(this.bossAnimationStateDic,this.bossAnimationState,uRam0055fd54);
			UnityEngine.Animator.SetTrigger(uVar2,uVar1,0);
			this.isFirstUpdate = 1;
			return;
	}

	// wasm func87003 -> ram:81a4e1b6  [SkillsAction::OnStart]
	public override void OnStart()
	{
			uint uVar1;

			uVar1 = (**(code **)((ulong)*(uint *)(*this + 0x1b8) * 4))
												(this,this[0xd],*(uint *)(*this + 0x1bc));
			return uVar1;
	}

	// wasm func87004 -> ram:81a4e1d5  [SkillsAction::OnUpdate]
	public override TaskStatus OnUpdate()
	{
		float param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			byte[] auStack_50 = new byte[12];
			float fStack_44;

			if (this.isFirstUpdate == '\0') {
				UnityEngine.Animator.GetAnimatorStateInfo(auStack_50,this.animator,0,0);
				uVar1 = 3;
				if (param_2 < fStack_44) {
					uVar1 = 2;
				}
			}
			else {
				this.isFirstUpdate = 0;
				uVar1 = 3;
			}
			return uVar1;
	}

	// no recovered body in SkillsAction.c
	public virtual TaskStatus HandleTimeOfHits(float time)
	{
		// <no recovered body>
	}

	// wasm func86984 -> ram:81a4d9cd  [SkillsAction::OnEnd]
	public override void OnEnd()
	{
			uint uVar1;

			if (cRam00664ad0 == '\0') {
				unnamed_function_1099(0x55fd4c);
				unnamed_function_1099(0x557e30);
				unnamed_function_1099(0x57c60c);
				unnamed_function_1099(0x574ca0);
				unnamed_function_1099(0x579368);
				unnamed_function_1099(0x57b5e4);
				unnamed_function_1099(0x574578);
				unnamed_function_1099(0x57290c);
				unnamed_function_1099(0x57b5dc);
				unnamed_function_1099(0x57ca18);
				unnamed_function_1099(0x57d270);
				unnamed_function_1099(0x574e68);
				unnamed_function_1099(0x57d274);
				unnamed_function_1099(0x57665c);
				unnamed_function_1099(0x57c610);
				unnamed_function_1099(0x57ca14);
				unnamed_function_1099(0x57b5e0);
				unnamed_function_1099(0x576658);
				unnamed_function_1099(0x574574);
				unnamed_function_1099(0x57d28c);
				unnamed_function_1099(0x57b5e8);
				unnamed_function_1099(0x574c9c);
				unnamed_function_1099(0x579364);
				unnamed_function_1099(0x57d470);
				unnamed_function_1099(0x574e64);
				unnamed_function_1099(0x572910);
				unnamed_function_1099(0x57d288);
				unnamed_function_1099(0x57d474);
				cRam00664ad0 = '\x01';
			}
			uVar1 = UnityEngine.Animator.HasState(uRam00574e64,0);
			this.Idle = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057ca14,0);
			this.ouch = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00576658,0);
			this.OpenMouth = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5dc,0);
			this.eyeAttack = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5e4,0);
			this.eyeLoop = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574c9c,0);
			this.Hop = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574574,0);
			this.EyeLoopDeath = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057290c,0);
			this.Base = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00579364,0);
			this.Walk = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d470,0);
			this.swipe = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057c60c,0);
			*(uint *)(this + 100) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d270,0);
			this.spearAtk = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d288,0);
			this.spinny = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574e68,0);
			this.Idle2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057ca18,0);
			this.ouch2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057665c,0);
			this.OpenMouth2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5e0,0);
			this.eyeAttack2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5e8,0);
			this.eyeLoop2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574ca0,0);
			this.Hop2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574578,0);
			this.EyeLoopDeath2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00572910,0);
			this.Base2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00579368,0);
			this.Walk2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d474,0);
			this.swipe2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057c610,0);
			this.mouthOpenLoop2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d274,0);
			this.spearAtk2 = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d28c,0);
			this.spinny2 = uVar1;
			uVar1 = unnamed_function_95402(uRam00557e30);
			unnamed_function_77380(uVar1,uRam0055fd4c);
			this.bossAnimationStateDic = uVar1;
			BehaviorDesigner.Runtime.ObjectPool.cctor(this,0);
			return;
	}

	// wasm func87005 -> ram:81a4e259  [SkillsAction::.ctor]
	public SkillsAction()
	{
			uint uVar1;

			if (cRam00664ad1 == '\0') {
				unnamed_function_1099(0x56cec0);
				unnamed_function_1099(0x56cecc);
				unnamed_function_1099(0x56ced0);
				unnamed_function_1099(0x56cedc);
				unnamed_function_1099(0x56cee8);
				unnamed_function_1099(0x56ceec);
				cRam00664ad1 = '\x01';
			}
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cec0);
			this.animator = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cee8);
			this.ouch = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cedc);
			this.Hop = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056ceec);
			this.isFirstUpdate = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056ced0);
			this.Idle = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cecc);
			this.EyeLoopDeath = uVar1;
			return;
	}
}

