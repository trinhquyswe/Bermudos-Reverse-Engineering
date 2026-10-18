// EnterPhase2.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnterPhase2.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class EnterPhase2 : Action
{
	// Fields
	private Animator animator; // 0x2C
	private DealContactDamage dealContactDamage; // 0x30
	public SharedMaterial material; // 0x34
	public float fadeInTime; // 0x38
	private float fadeInTime2; // 0x3C
	private float fadeInAmount; // 0x40
	private Rigidbody2D rb; // 0x44
	private RangedSkills rangedSkills; // 0x48
	private BossEffect bossEffect; // 0x4C
	public Poise poise; // 0x50
	private Boss boss; // 0x54

	// Methods

	// wasm func86972 -> ram:81a4d468  [EnterPhase2::OnAwake]
	public override void OnAwake()
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664ac1 == '\0') {
				unnamed_function_1099(0x55c620);
				unnamed_function_1099(0x572aa0);
				cRam00664ac1 = '\x01';
			}
			uVar2 = *(uint *)(this + 8);
			uVar1 = UnityEngine.LayerMask.LayerToName(uRam00572aa0,0);
			UnityEngine.GameObject.get_transform(uVar2,uVar1,0);
			*(uint *)(this.poise + 0x18) =
					 *(uint *)(this.poise + 0x14);
			*(uint *)(this.rangedSkills + 0x18) =
					 *(uint *)(this.rangedSkills + 0x1c);
			uVar1 = this.animator;
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.SetTrigger
								(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x68),0);
			this.fadeInTime2 = this.fadeInTime;
			*(byte *)(this.dealContactDamage + 0x24) = 1;
			UnityEngine.Rigidbody2D.set_isKinematic(this.rb,4,0);
			*(byte *)(this.bossEffect + 0x3c) = 1;
			*(byte *)(this.boss + 0x28) = 1;
			return;
	}

	// wasm func86973 -> ram:81a4d530  [EnterPhase2::OnStart]
	public override void OnStart()
	{
			float fVar1;
			uint uVar2;
			uint uVar3;
			float fVar4;

			if (cRam00664ac2 == '\0') {
				unnamed_function_1099(0x565ccc);
				unnamed_function_1099(0x579c00);
				unnamed_function_1099(0x572aa0);
				cRam00664ac2 = '\x01';
			}
			if (0.0 < this.fadeInTime) {
				fVar4 = this.fadeInAmount;
				fVar1 = (float)UnityEngine.Time.get_time(0);
				this.fadeInAmount = fVar4 - fVar1 / this.fadeInTime2;
				uVar2 = unnamed_function_61203(this.material,uRam00565ccc);
				UnityEngine.Material.SetInt(uVar2,uRam00579c00,this.fadeInAmount,0);
				fVar4 = this.fadeInTime;
				fVar1 = (float)UnityEngine.Time.get_time(0);
				this.fadeInTime = fVar4 - fVar1;
				return 3;
			}
			uVar3 = *(uint *)(this + 8);
			uVar2 = UnityEngine.LayerMask.LayerToName(uRam00572aa0,0);
			UnityEngine.GameObject.get_transform(uVar3,uVar2,0);
			return 2;
	}

	// wasm func86974 -> ram:81a4d5d9  [EnterPhase2::OnUpdate]
	public override TaskStatus OnUpdate()
	{
			this.fadeInAmount = 0x3f800000;
			this.fadeInTime = 0x3f800000;
			BehaviorDesigner.Runtime.ObjectPool.cctor(this,0);
			return;
	}

	// wasm func86975 -> ram:81a4d5fa  [EnterPhase2::.ctor]
	public EnterPhase2()
	{
			uint uVar1;

			if (cRam00664ac3 == '\0') {
				unnamed_function_1099(0x56cee4);
				cRam00664ac3 = '\x01';
			}
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(this,uRam0056cee4);
			this.animator = uVar1;
			return;
	}
}

