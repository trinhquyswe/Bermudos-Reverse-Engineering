// ItemConsumer.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in ItemConsumer.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class ItemConsumer : MonoBehaviour
{
	// Fields
	private InventoryManager inventoryManager; // 0x10
	private DealDamage dealDamage; // 0x14
	private Health health; // 0x18
	private Rage rage; // 0x1C
	private Coroutine attackPotionCoroutine; // 0x20
	private float attackPotionMultiplier; // 0x24
	private int bigHealthPotionAmount; // 0x28
	private int smallHealthPotionAmount; // 0x2C
	private int ragePotionAmount; // 0x30
	private InventoryItem currentInventoryItem; // 0x34
	private SoundEffectSO useItemSoundEffect; // 0x38
	private int normalDamage; // 0x3C

	// Methods

	// wasm func86396 -> ram:81a34ed0  [ItemConsumer::Awake]
	private void Awake()
	{
			uint uVar1;

			if (cRam006648d4 == '\0') {
				unnamed_function_1099(0x557a38);
				unnamed_function_1099(0x56a7c4);
				cRam006648d4 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a38);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a7c4,0);
			StaticEventHandler.CallItemUIClickChangedEvent(uVar1,this);
			return;
	}

	// wasm func86398 -> ram:81a34fb5  [ItemConsumer::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam006648d5 == '\0') {
				unnamed_function_1099(0x557a38);
				unnamed_function_1099(0x56a7c4);
				cRam006648d5 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a38);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam0056a7c4,0);
			StaticEventHandler.add_OnHotBarScrollChanged(uVar1,this);
			return;
	}

	// wasm func86400 -> ram:81a3509a  [ItemConsumer::OnDisable]
	private void OnDisable()
	{
			this.normalDamage = *(uint *)(this.dealDamage + 0x34);
			return;
	}

	// wasm func86401 -> ram:81a350aa  [ItemConsumer::Start]
	private void Start()
	{
		int param_2 = 0; // IL2CPP hidden slot
			this.currentInventoryItem = *(uint *)(param_2 + 8);
			return;
	}

	// wasm func86402 -> ram:81a350b8  [ItemConsumer::StaticEventHandler_OnHotBarScrollChanged]
	private void StaticEventHandler_OnHotBarScrollChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
	{
			int iVar1;
			int iVar2;
			uint uVar3;
			int iVar4;
			int *piVar5;
			uint uVar6;
			int iStack_20;
			byte *puStack_1c;
			ulong uStack_18;
			byte[] auStack_10 = new byte[8];
			ulong uStack_8;

			if (cRam006648d6 == '\0') {
				unnamed_function_1099(0x561278);
				unnamed_function_1099(0x56127c);
				unnamed_function_1099(0x561280);
				unnamed_function_1099(0x563420);
				unnamed_function_1099(0x563424);
				unnamed_function_1099(0x563428);
				unnamed_function_1099(0x56342c);
				unnamed_function_1099(0x55be2c);
				cRam006648d6 = '\x01';
			}
			if (this.currentInventoryItem == 0) {
				iVar4 = InventoryDescription.ctor(this.inventoryManager,&iStack_20);
				if (*(int *)(iVar4 + 0xc) < 1) {
					iVar4 = this.currentInventoryItem;
				}
				else {
					uVar3 = InventoryDescription.ctor(this.inventoryManager,&iStack_20);
					iVar4 = unnamed_function_6529(uVar3,0,uRam0056342c);
					this.currentInventoryItem = iVar4;
				}
				if (iVar4 == 0) {
					return;
				}
			}
			UnityEngine.ComputeBuffer.Release
								(&iStack_20,*(uint *)(this.inventoryManager + 0x10),uRam00563420);
			uStack_8 = uStack_18;
			iStack_20 = 0;
			puStack_1c = auStack_10;
			do {
				iRam005ddf34 = 0;
				iVar1 = import.env.invoke_iii(0x483,auStack_10,uRam0056127c);
				iVar4 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar4 == 1) {
					uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a35487;
				}
				if (iVar1 == 0) {
					iRam005ddf34 = 0;
					return;
				}
				iVar4 = uStack_8._4_4_;
				uVar3 = *(uint *)(uStack_8._4_4_ + 8);
				uVar6 = *(uint *)(this.currentInventoryItem + 8);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					iRam005ddf34 = 0;
					import.env.invoke_vi(0xfc,iRam0055be2c);
					iVar1 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar1 == 1) {
						uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a35487;
					}
				}
				iRam005ddf34 = 0;
				iVar2 = import.env.invoke_iiii(0x857,uVar3,uVar6,0);
				iVar1 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar1 == 1) {
					uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a35487;
				}
			} while (iVar2 == 0);
			*(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
			iRam005ddf34 = 0;
			import.env.invoke_viii(0x365e,this,*(uint *)(*(int *)(iVar4 + 8) + 0xc),&iStack_20);
			iVar1 = iRam005ddf34;
			iRam005ddf34 = 0;
			if (iVar1 == 1) {
				uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
				goto code_r0x81a35487;
			}
			if (cRam006649c0 == '\0') {
				iRam005ddf34 = 0;
				import.env.invoke_vi(0xfa,0x55bea0);
				if (iRam005ddf34 != 1) {
					iRam005ddf34 = 0;
					import.env.invoke_vi(0xfa,0x55c894);
					if (iRam005ddf34 != 1) {
						cRam006649c0 = '\x01';
						goto code_r0x81a35338;
					}
				}
			}
			else {
		code_r0x81a35338:
				iVar1 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x20);
				if (iVar1 == 0) {
		code_r0x81a353f9:
					if (*(int *)(iVar4 + 0xc) != 0) {
						iRam005ddf34 = 0;
						return;
					}
					iRam005ddf34 = 0;
					import.env.invoke_iiii
										(0x866,*(uint *)(this.inventoryManager + 0x10),iVar4,uRam00563424);
					iVar4 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar4 != 1) {
						iRam005ddf34 = 0;
						return;
					}
					uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a35487;
				}
				iRam005ddf34 = 0;
				iVar2 = import.env.invoke_ii(0x10c,uRam0055bea0);
				if (iRam005ddf34 != 1) {
					iRam005ddf34 = 0;
					import.env.invoke_vii(0x365f,iVar2,0);
					if (iRam005ddf34 != 1) {
						*(int *)(iVar2 + 8) = iVar4;
						iRam005ddf34 = 0;
						import.env.invoke_viii
											(*(uint *)(iVar1 + 0xc),*(uint *)(iVar1 + 0x20),iVar2,
											 *(uint *)(iVar1 + 0x14));
						if (iRam005ddf34 != 1) goto code_r0x81a353f9;
					}
				}
			}
			iRam005ddf34 = 0;
			uVar3 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a35487:
			iVar4 = import.env.getTempRet0();
			iVar1 = import.env.llvm_eh_typeid_for(0x4a99ec);
			if (iVar4 == iVar1) {
				piVar5 = (int *)import.env.__cxa_begin_catch(uVar3);
				iVar1 = *piVar5;
				iRam005ddf34 = 0;
				iStack_20 = iVar1;
				import.env.invoke_v(0x3a);
				iVar4 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar4 != 1) {
					if (iVar1 != 0) {
						System.Net.CommandStream.ReceiveCommandResponseCallback(iVar1);
						do {
							halt_trap();
						} while( true );
					}
					iRam005ddf34 = 0;
					return;
				}
				uVar3 = import.env.__cxa_find_matching_catch_2();
				import.env.getTempRet0();
			}
			iRam005ddf34 = 0;
			import.env.invoke_ii(0x3660,&iStack_20);
			iVar4 = iRam005ddf34;
			iRam005ddf34 = 0;
			if (iVar4 != 1) {
				import.env.__resumeException(uVar3);
				do {
					halt_trap();
				} while( true );
			}
			import.env.__cxa_find_matching_catch_3(0);
			import.env.getTempRet0();
			unnamed_function_642();
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86405 -> ram:81a356d9  [ItemConsumer::UseItemFromHotBar]
	public void UseItemFromHotBar()
	{
			int iVar1;
			uint uVar2;

			if (this.attackPotionCoroutine != 0) {
				UnityEngine.MonoBehaviour.StopCoroutine(this,this.attackPotionCoroutine,0);
			}
			*(uint *)(this.dealDamage + 0x34) = this.normalDamage;
			if (cRam006648d8 == '\0') {
				unnamed_function_1099(0x55e1c0);
				cRam006648d8 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e1c0);
			*(int *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			uVar2 = UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			this.attackPotionCoroutine = uVar2;
			return;
	}

	// wasm func86153 -> ram:81a2240c  [ItemConsumer::UsePotion]
	private void UsePotion(string potionName)
	{
			if (cRam00664833 == '\0') {
				unnamed_function_1099(0x55ad18);
				cRam00664833 = '\x01';
			}
			if (*(int *)(iRam0055ad18 + 0x74) == 0) {
				unnamed_function_94848(iRam0055ad18);
			}
			return;
	}

	// wasm func86409 -> ram:81a3577e  [ItemConsumer::UseAttackPotion]
	private void UseAttackPotion()
	{
			int iVar1;

			if (cRam006648d8 == '\0') {
				unnamed_function_1099(0x55e1c0);
				cRam006648d8 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055e1c0);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// wasm func86406 -> ram:81a35744  [ItemConsumer::UseAttackPotionCoroutine]
	private IEnumerator UseAttackPotionCoroutine()
	{
			Health.TakeDamage(this.health,this.bigHealthPotionAmount,0);
			return;
	}

	// wasm func86407 -> ram:81a35757  [ItemConsumer::UseBigHealthPotion]
	private void UseBigHealthPotion()
	{
			Health.TakeDamage(this.health,this.smallHealthPotionAmount,0);
			return;
	}

	// wasm func86408 -> ram:81a3576a  [ItemConsumer::UseSmallHealthPotion]
	public void UseSmallHealthPotion()
	{
			PoiseEventArgs.ctor(this.rage,(float)this.ragePotionAmount,0);
			return;
	}

	// wasm func86410 -> ram:81a357bb  [ItemConsumer::UseRagePotion]
	public void UseRagePotion()
	{
			this.smallHealthPotionAmount = 0x200000014;
			this.attackPotionMultiplier = 0x323fa00000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// no recovered body in ItemConsumer.c
	public ItemConsumer()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86411 -> ram:81a357de  [ItemConsumer+<UseAttackPotionCoroutine>d__20::System.IDisposable.Dispose]
	uint ItemConsumer__UseAttackPotionCoroutine_d__20_System_IDisposable_Dispose(int param_1)
	{
			uint uVar1;
			int iVar2;
			float fVar3;
			int iVar4;

			if (cRam006648d9 == '\0') {
				unnamed_function_1099(0x55d134);
				cRam006648d9 = '\x01';
			}
			iVar2 = *(int *)(param_1 + 0x10);
			if (*(int *)(param_1 + 8) != 0) {
				if (*(int *)(param_1 + 8) == 1) {
					*(uint *)(param_1 + 8) = 0xffffffff;
					*(uint *)(*(int *)(iVar2 + 0x14) + 0x34) = *(uint *)(iVar2 + 0x3c);
				}
				return 0;
			}
			*(uint *)(param_1 + 8) = 0xffffffff;
			fVar3 = *(float *)(iVar2 + 0x24) * (float)*(int *)(*(int *)(iVar2 + 0x14) + 0x34);
			if (ABS(fVar3) < 2.1474836e+09) {
				iVar4 = (int)fVar3;
			}
			else {
				iVar4 = -0x80000000;
			}
			*(int *)(*(int *)(iVar2 + 0x14) + 0x34) = iVar4;
			uVar1 = unnamed_function_95402(uRam0055d134);
			UnityEngine.InputSystem.UI.PointerModel.ButtonState.get_pressTime(uVar1,0x41a00000,0)
			;
			*(uint *)(param_1 + 8) = 1;
			*(uint *)(param_1 + 0xc) = uVar1;
			return 1;
	}

	// wasm func86412 -> ram:81a35897  [ItemConsumer+<UseAttackPotionCoroutine>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void ItemConsumer__UseAttackPotionCoroutine_d__20_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f49c);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86413 -> ram:81a358be  [ItemConsumer+<UseAttackPotionCoroutine>d__20::System.Collections.IEnumerator.get_Current]
	void ItemConsumer__UseAttackPotionCoroutine_d__20_System_Collections_IEnumerator_get_Current(int param_1)
	{
			uint uVar1;

			if (cRam006648da == '\0') {
				unnamed_function_1099(0x567e70);
				cRam006648da = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(param_1,uRam00567e70);
			*(uint *)(param_1 + 0x14) = uVar1;
			return;
	}
}

