// AnimateEnemy.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AnimateEnemy.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class AnimateEnemy : MonoBehaviour
{
	// Fields
	private Enemy enemy; // 0x10
	private AimDirection aimDirection; // 0x14
	private Coroutine attackAnimationCoroutine; // 0x18

	// Methods

	// wasm func86856 -> ram:81a47cc2  [AnimateEnemy::Awake]
	private void Awake()
	{
			bool bVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			int iVar5;
			int iVar6;
			uint uVar7;

			if (cRam00664a73 == '\0') {
				unnamed_function_1099(0x5579fc);
				unnamed_function_1099(0x5579a8);
				unnamed_function_1099(0x557a1c);
				unnamed_function_1099(0x557aa8);
				unnamed_function_1099(0x566dc4);
				unnamed_function_1099(0x566dc8);
				unnamed_function_1099(0x566dcc);
				unnamed_function_1099(0x566dd0);
				cRam00664a73 = '\x01';
			}
			iVar6 = *(int *)(this.enemy + 0x10);
			uVar4 = unnamed_function_95402(uRam00557aa8);
			unnamed_function_60334(uVar4,this,uRam00566dc4,0);
			if (cRam00664a7c == '\0') {
				unnamed_function_1099(0x557aa8);
				cRam00664a7c = '\x01';
			}
			iVar2 = *(int *)(iVar6 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar5 = unnamed_function_85158(iVar2,uVar4,0);
				uVar7 = uRam00557aa8;
				if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557aa8), iVar3 == 0)) break;
				iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
				bVar1 = iVar2 == iVar3;
				iVar2 = iVar3;
				if (bVar1) {
					uVar7 = *(uint *)(this.enemy + 0x30);
					uVar4 = unnamed_function_95402(uRam005579fc);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dcc,0);
					Idle.ctor(uVar7,uVar4,0);
					uVar7 = *(uint *)(this.enemy + 0x34);
					uVar4 = unnamed_function_95402(uRam00557a1c);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dd0,0);
					IdleEvent.ctor(uVar7,uVar4,0);
					iVar6 = *(int *)(this.enemy + 0x38);
					uVar4 = unnamed_function_95402(uRam005579a8);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dc8,0);
					if (cRam00664a8d == '\0') {
						unnamed_function_1099(0x5579a8);
						cRam00664a8d = '\x01';
					}
					iVar2 = *(int *)(iVar6 + 0x10);
					while( true ) {
						iVar3 = 0;
						iVar5 = unnamed_function_85158(iVar2,uVar4,0);
						uVar7 = uRam005579a8;
						if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
						iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
						bVar1 = iVar2 == iVar3;
						iVar2 = iVar3;
						if (bVar1) {
							return;
						}
					}
					unnamed_function_1116(iVar5,uVar7);
					do {
						halt_trap();
					} while( true );
				}
			}
			unnamed_function_1116(iVar5,uVar7);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86859 -> ram:81a47fc3  [AnimateEnemy::Start]
	private void Start()
	{
			bool bVar1;
			int iVar2;
			int iVar3;
			uint uVar4;
			int iVar5;
			int iVar6;
			uint uVar7;

			if (cRam00664a74 == '\0') {
				unnamed_function_1099(0x5579fc);
				unnamed_function_1099(0x5579a8);
				unnamed_function_1099(0x557a1c);
				unnamed_function_1099(0x557aa8);
				unnamed_function_1099(0x566dc4);
				unnamed_function_1099(0x566dc8);
				unnamed_function_1099(0x566dcc);
				unnamed_function_1099(0x566dd0);
				cRam00664a74 = '\x01';
			}
			iVar6 = *(int *)(this.enemy + 0x10);
			uVar4 = unnamed_function_95402(uRam00557aa8);
			unnamed_function_60334(uVar4,this,uRam00566dc4,0);
			if (cRam00664a7d == '\0') {
				unnamed_function_1099(0x557aa8);
				cRam00664a7d = '\x01';
			}
			iVar2 = *(int *)(iVar6 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar5 = unnamed_function_85160(iVar2,uVar4,0);
				uVar7 = uRam00557aa8;
				if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam00557aa8), iVar3 == 0)) break;
				iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
				bVar1 = iVar2 == iVar3;
				iVar2 = iVar3;
				if (bVar1) {
					uVar7 = *(uint *)(this.enemy + 0x30);
					uVar4 = unnamed_function_95402(uRam005579fc);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dcc,0);
					IdleEvent.add_OnIdle(uVar7,uVar4,0);
					uVar7 = *(uint *)(this.enemy + 0x34);
					uVar4 = unnamed_function_95402(uRam00557a1c);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dd0,0);
					MoveByEnemyAIEvent.add_OnMoveByEnemyAI(uVar7,uVar4,0);
					iVar6 = *(int *)(this.enemy + 0x38);
					uVar4 = unnamed_function_95402(uRam005579a8);
					UnityEngine.UIElements.VisualElement.get_layout(uVar4,this,uRam00566dc8,0);
					if (cRam00664a8e == '\0') {
						unnamed_function_1099(0x5579a8);
						cRam00664a8e = '\x01';
					}
					iVar2 = *(int *)(iVar6 + 0x10);
					while( true ) {
						iVar3 = 0;
						iVar5 = unnamed_function_85160(iVar2,uVar4,0);
						uVar7 = uRam005579a8;
						if ((iVar5 != 0) && (iVar3 = unnamed_function_1112(iVar5,uRam005579a8), iVar3 == 0)) break;
						iVar3 = System.Net.WebOperation.ctor(iVar6 + 0x10,iVar3,iVar2);
						bVar1 = iVar2 == iVar3;
						iVar2 = iVar3;
						if (bVar1) {
							return;
						}
					}
					unnamed_function_1116(iVar5,uVar7);
					do {
						halt_trap();
					} while( true );
				}
			}
			unnamed_function_1116(iVar5,uVar7);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86862 -> ram:81a482c3  [AnimateEnemy::OnDisable]
	private void OnDisable()
	{
			uint uVar1;

			if (cRam00664a75 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a75 = '\x01';
			}
			if ((this.attackAnimationCoroutine == 0) && (*(int *)(this.enemy + 0x40) - 1U < 2)) {
				AnimateEnemy.PlayAttackAnimationCoroutine(this,this);
				uVar1 = *(uint *)(this.enemy + 0x1c);
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				UnityEngine.Animator.GetBool_1
									(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 4),1,0);
			}
			return;
	}

	// wasm func86864 -> ram:81a4841d  [AnimateEnemy::MoveByEnemyAIEvent_OnMoveByEnemyAI]
	private void MoveByEnemyAIEvent_OnMoveByEnemyAI(MoveByEnemyAIEvent moveByEnemyAIEvent)
	{
			uint uVar1;

			if (cRam00664a76 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a76 = '\x01';
			}
			if (*(int *)(this.enemy + 0x40) - 1U < 2) {
				AnimateEnemy.PlayAttackAnimationCoroutine(this,this);
				uVar1 = *(uint *)(this.enemy + 0x1c);
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				UnityEngine.Animator.GetBool_1(uVar1,**(uint **)(iRam0055c620 + 0x5c),1,0);
			}
			return;
	}

	// wasm func86865 -> ram:81a4848f  [AnimateEnemy::IdleEvent_OnIdle]
	private void IdleEvent_OnIdle(IdleEvent idleEvent)
	{
			int iVar1;
			uint uVar2;

			if (cRam00664a77 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a77 = '\x01';
			}
			if (*(int *)(this.enemy + 0x40) == 2) {
				if (this.attackAnimationCoroutine != 0) {
					UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
				}
				if (cRam00664a78 == '\0') {
					unnamed_function_1099(0x55d77c);
					cRam00664a78 = '\x01';
				}
				iVar1 = unnamed_function_95402(uRam0055d77c);
				*(int *)(iVar1 + 0x10) = this;
				*(uint *)(iVar1 + 8) = 0;
				uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
				this.attackAnimationCoroutine = uVar2;
				AnimateEnemy.PlayAttackAnimationCoroutine(this,this);
				uVar2 = *(uint *)(this.enemy + 0x1c);
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				UnityEngine.Animator.SetTrigger
									(uVar2,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 8),0);
			}
			return;
	}

	// wasm func86866 -> ram:81a48556  [AnimateEnemy::AttackEvent_OnAttack]
	private void AttackEvent_OnAttack(AttackEvent attackEvent)
	{
			int iVar1;
			uint uVar2;

			if (this.attackAnimationCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackAnimationCoroutine,0);
			}
			if (cRam00664a78 == '\0') {
				unnamed_function_1099(0x55d77c);
				cRam00664a78 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d77c);
			*(int *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			this.attackAnimationCoroutine = uVar2;
			return;
	}

	// wasm func86867 -> ram:81a485b4  [AnimateEnemy::PlayAttackAnimation]
	private void PlayAttackAnimation()
	{
			int iVar1;

			if (cRam00664a78 == '\0') {
				unnamed_function_1099(0x55d77c);
				cRam00664a78 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d77c);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86863 -> ram:81a4833e  [AnimateEnemy::PlayAttackAnimationCoroutine]
	private IEnumerator PlayAttackAnimationCoroutine()
	{
			uint uVar1;
			uint *puVar2;
			int iVar3;

			if (cRam00664a79 == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a79 = '\x01';
			}
			uVar1 = *(uint *)(this.enemy + 0x1c);
			if (*(int *)(this.enemy + 0x40) == 2) {
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				UnityEngine.Animator.GetBool_1(uVar1,**(uint **)(iRam0055c620 + 0x5c),0,0);
				puVar2 = (uint *)(*(int *)(iRam0055c620 + 0x5c) + 4);
				uVar1 = *(uint *)(this.enemy + 0x1c);
				iVar3 = 8;
			}
			else {
				if (*(int *)(iRam0055c620 + 0x74) == 0) {
					unnamed_function_94848(iRam0055c620);
				}
				puVar2 = *(uint **)(iRam0055c620 + 0x5c);
				iVar3 = 4;
			}
			UnityEngine.Animator.GetBool_1(uVar1,*puVar2,0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.enemy + 0x1c),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + iVar3),0,0);
			return;
	}

	// wasm func86868 -> ram:81a485f1  [AnimateEnemy::InitializeStateAnimationParameters]
	private void InitializeStateAnimationParameters()
	{
		int param_2 = 0; // IL2CPP hidden slot
			AnimateEnemy.AnimateEnemy_OnAnimate(this,this);
			AnimateEnemy.InitializeAnimationParameters(this,*(uint *)(param_2 + 8),this);
			this.aimDirection = *(uint *)(param_2 + 8);
			return;
	}

	// wasm func86869 -> ram:81a48614  [AnimateEnemy::AnimateEnemy_OnAnimate]
	private void AnimateEnemy_OnAnimate(AnimateEvent animateEvent, AnimateEventArgs animateEventArgs)
	{
			uint uVar1;

			if (cRam00664a7a == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a7a = '\x01';
			}
			uVar1 = *(uint *)(this.enemy + 0x1c);
			if (*(int *)(iRam0055c620 + 0x74) == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.GetBool_1
								(uVar1,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x18),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.enemy + 0x1c),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x10),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.enemy + 0x1c),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x24),0,0);
			UnityEngine.Animator.GetBool_1
								(*(uint *)(this.enemy + 0x1c),
								 *(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x28),0,0);
			return;
	}

	// wasm func86870 -> ram:81a486c7  [AnimateEnemy::InitializeAnimationParameters]
	private void InitializeAnimationParameters()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			int iVar3;

			if (cRam00664a7b == '\0') {
				unnamed_function_1099(0x55c620);
				cRam00664a7b = '\x01';
			}
			if (param_2 == 0) {
				uVar2 = *(uint *)(this.enemy + 0x1c);
				iVar1 = 0x10;
				iVar3 = *(int *)(iRam0055c620 + 0x74);
			}
			else {
				if (param_2 == 1) {
					return;
				}
				if (param_2 == 2) {
					return;
				}
				if (param_2 == 3) {
					uVar2 = *(uint *)(this.enemy + 0x1c);
					iVar1 = 0x24;
					iVar3 = *(int *)(iRam0055c620 + 0x74);
				}
				else if (param_2 == 4) {
					uVar2 = *(uint *)(this.enemy + 0x1c);
					iVar1 = 0x28;
					iVar3 = *(int *)(iRam0055c620 + 0x74);
				}
				else {
					if (param_2 != 5) {
						return;
					}
					uVar2 = *(uint *)(this.enemy + 0x1c);
					iVar1 = 0x18;
					iVar3 = *(int *)(iRam0055c620 + 0x74);
				}
			}
			if (iVar3 == 0) {
				unnamed_function_94848(iRam0055c620);
			}
			UnityEngine.Animator.GetBool_1
								(uVar2,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + iVar1),1,0);
			return;
	}

	// no recovered body in AnimateEnemy.c
	private void SetAimAnimationParameters(AimDirection aimDirection)
	{
		// <no recovered body>
	}

	// no recovered body in AnimateEnemy.c
	public AnimateEnemy()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86857 -> ram:81a47ec4  [AnimateEnemy+<PlayAttackAnimationCoroutine>d__10::System.Collections.IEnumerator.get_Current]
	void AnimateEnemy__PlayAttackAnimationCoroutine_d__10_System_Collections_IEnumerator_get_Current(int param_1, uint param_2)
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;

			if (cRam00664a7c == '\0') {
				unnamed_function_1099(0x557aa8);
				cRam00664a7c = '\x01';
			}
			iVar3 = *(int *)(param_1 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar3,param_2,0);
				uVar2 = uRam00557aa8;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557aa8), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(param_1 + 0x10,iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86871 -> ram:81a487ab  [AnimateEnemy+<PlayAttackAnimationCoroutine>d__10::System.IDisposable.Dispose]
	uint AnimateEnemy__PlayAttackAnimationCoroutine_d__10_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			int iVar2;
			byte[] auStack_50 = new byte[12];
			float fStack_44;

			uVar1 = 0;
			iVar2 = *(int *)(param_1 + 8);
			if (iVar2 == 0) {
				*(ulong *)(param_1 + 8) = 1;
				uVar1 = 1;
			}
			else if ((iVar2 == 1) || (iVar2 == 2)) {
				iVar2 = *(int *)(param_1 + 0x10);
				*(uint *)(param_1 + 8) = 0xffffffff;
				UnityEngine.Animator.GetAnimatorStateInfo
									(auStack_50,*(uint *)(*(int *)(iVar2 + 0x10) + 0x1c),0,0);
				if (1.0 <= fStack_44) {
					*(uint *)(iVar2 + 0x18) = 0;
				}
				else {
					*(ulong *)(param_1 + 8) = 2;
					uVar1 = 1;
				}
			}
			return uVar1;
	}

	// wasm func86872 -> ram:81a48860  [AnimateEnemy+<PlayAttackAnimationCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void AnimateEnemy__PlayAttackAnimationCoroutine_d__10_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56ea14);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

