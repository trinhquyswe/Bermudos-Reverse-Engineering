// EndPhase1.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EndPhase1.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class EndPhase1 : Action
{
	// Fields
	private Animator animator; // 0x2C
	public SharedMaterial material; // 0x30
	public float transitionTime; // 0x34
	private float fadeAmount; // 0x38
	private float transitionTime2; // 0x3C
	private RangedSkills rangedSkills; // 0x40
	private MeleeSkills meleeSkills; // 0x44
	private bool isEyeLoopDeath; // 0x48
	private SoundEffectSO transitionSoundEffect; // 0x4C

	// Methods

	// wasm func86965 -> ram:81a4d0d4  [EndPhase1::OnAwake]
	public override void OnAwake()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;

			if (cRam00664abc == '\0') {
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x573ce0);
				cRam00664abc = '\x01';
			}
			iVar2 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			SoundEffectManager.Start(**(uint **)(iVar2 + 0x5c),this.transitionSoundEffect,0);
			UnityEngine.MonoBehaviour.StopCoroutine_2(this.rangedSkills,0);
			UnityEngine.MonoBehaviour.StopCoroutine_2(this.meleeSkills,0);
			this.transitionTime2 = this.transitionTime;
			if (cRam00664abe == '\0') {
				unnamed_function_1099(0x55ddc4);
				cRam00664abe = '\x01';
			}
			iVar2 = unnamed_function_95402(uRam0055ddc4);
			*(int *)(iVar2 + 0x10) = this;
			*(uint *)(iVar2 + 8) = 0;
			BehaviorDesigner.Runtime.Tasks.Task.StartCoroutine(this,iVar2,0);
			uVar3 = *(uint *)(this + 8);
			uVar1 = UnityEngine.LayerMask.LayerToName(uRam00573ce0,0);
			UnityEngine.GameObject.get_transform(uVar3,uVar1,0);
			return;
	}

	// wasm func86967 -> ram:81a4d203  [EndPhase1::OnStart]
	public override void OnStart()
	{
			float fVar1;
			uint uVar2;
			float fVar3;

			if (cRam00664abd == '\0') {
				unnamed_function_1099(0x565ccc);
				unnamed_function_1099(0x579c00);
				cRam00664abd = '\x01';
			}
			if (this.transitionTime <= 0.0) {
				uVar2 = 2;
				if (this.isEyeLoopDeath == '\0') {
					uVar2 = 3;
				}
				return uVar2;
			}
			if (this.isEyeLoopDeath != '\0') {
				fVar3 = this.fadeAmount;
				fVar1 = (float)UnityEngine.Time.get_time(0);
				this.fadeAmount = fVar3 + fVar1 / this.transitionTime2;
				fVar3 = this.transitionTime;
				fVar1 = (float)UnityEngine.Time.get_time(0);
				this.transitionTime = fVar3 - fVar1;
				uVar2 = unnamed_function_61203(this.material,uRam00565ccc);
				UnityEngine.Material.SetInt(uVar2,uRam00579c00,this.fadeAmount,0);
			}
			return 3;
	}

	// wasm func86966 -> ram:81a4d1c5  [EndPhase1::OnUpdate]
	public override TaskStatus OnUpdate()
	{
			int iVar1;

			if (cRam00664abe == '\0') {
				unnamed_function_1099(0x55ddc4);
				cRam00664abe = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddc4);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86968 -> ram:81a4d29d  [EndPhase1::EndPhase1Coroutine]
	public IEnumerator EndPhase1Coroutine()
	{
			this.transitionTime = 0x3f800000;
			BehaviorDesigner.Runtime.ObjectPool.cctor(this,0);
			return;
	}

	// no recovered body in EndPhase1.c
	public EndPhase1()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86969 -> ram:81a4d2b4  [EndPhase1+<EndPhase1Coroutine>d__12::System.IDisposable.Dispose]
	uint EndPhase1__EndPhase1Coroutine_d__12_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			int iVar2;

			if (cRam00664abf == '\0') {
				unnamed_function_1099(0x55c620);
				unnamed_function_1099(0x55d134);
				cRam00664abf = '\x01';
			}
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					iVar2 = *(int *)(param_1 + 0x10);
					*(uint *)(param_1 + 8) = 0xffffffff;
					uVar1 = *(uint *)(iVar2 + 0x2c);
					if (*(int *)(iRam0055c620 + 0x74) == 0) {
						unnamed_function_94848(iRam0055c620);
					}
					UnityEngine.Animator.SetTrigger
										(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x4c),0);
					*(byte *)(iVar2 + 0x48) = 1;
				}
				return 0;
			}
			*(uint *)(param_1 + 8) = 0xffffffff;
			uVar1 = unnamed_function_95402(uRam0055d134);
			UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,0x3f000000,0)
			;
			*(uint *)(param_1 + 8) = 1;
			*(uint *)(param_1 + 0xc) = uVar1;
			return 1;
	}

	// wasm func86970 -> ram:81a4d369  [EndPhase1+<EndPhase1Coroutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void EndPhase1__EndPhase1Coroutine_d__12_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f114);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86971 -> ram:81a4d391  [EndPhase1+<EndPhase1Coroutine>d__12::System.Collections.IEnumerator.get_Current]
	void EndPhase1__EndPhase1Coroutine_d__12_System_Collections_IEnumerator_get_Current(int param_1)
	{
			uint uVar1;

			if (cRam00664ac0 == '\0') {
				unnamed_function_1099(0x56cec0);
				unnamed_function_1099(0x56cec8);
				unnamed_function_1099(0x56cec4);
				unnamed_function_1099(0x56ced0);
				unnamed_function_1099(0x56cee0);
				unnamed_function_1099(0x56cee4);
				unnamed_function_1099(0x56cee8);
				cRam00664ac0 = '\x01';
			}
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(param_1,uRam0056cec0);
			*(uint *)(param_1 + 0x2c) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(param_1,uRam0056ced0);
			*(uint *)(param_1 + 0x30) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(param_1,uRam0056cee8);
			*(uint *)(param_1 + 0x44) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(param_1,uRam0056cee4);
			*(uint *)(param_1 + 0x48) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(param_1,uRam0056cec8);
			*(uint *)(param_1 + 0x4c) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(param_1,uRam0056cee0);
			*(uint *)(param_1 + 0x50) = uVar1;
			uVar1 = TMPro.TMPro.ExtensionMethods.FindInstanceID(param_1,uRam0056cec4);
			*(uint *)(param_1 + 0x54) = uVar1;
			return;
	}
}

