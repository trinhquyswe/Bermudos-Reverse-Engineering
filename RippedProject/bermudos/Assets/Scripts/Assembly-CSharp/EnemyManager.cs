// EnemyManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnemyManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class EnemyManager : MonoBehaviour
{
	// Fields
	private GameObject enemy; // 0x10
	private EnemyManagerDetailsSO enemyManagerDetailsSO; // 0x14
	private EnemyManagerData enemyManagerData; // 0x18
	public List<GameObject> enemyList; // 0x1C

	// Methods

	// wasm func87083 -> ram:81a51940  [EnemyManager::Start]
	private void Start()
	{
			uint uVar1;

			if (cRam00664afa == '\0') {
				unnamed_function_1099(0x557a30);
				unnamed_function_1099(0x568ebc);
				cRam00664afa = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a30);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00568ebc,0);
			StaticEventHandler.CallBossChangedEvent(uVar1,0);
			return;
	}

	// wasm func87084 -> ram:81a5198f  [EnemyManager::OnEnable]
	private void OnEnable()
	{
			uint uVar1;

			if (cRam00664afb == '\0') {
				unnamed_function_1099(0x557a30);
				unnamed_function_1099(0x568ebc);
				cRam00664afb = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557a30);
			UnityEngine.UIElements.VisualElement.get_layout(uVar1,this,uRam00568ebc,0);
			StaticEventHandler.add_OnBuildNavMesh(uVar1,0);
			return;
	}

	// wasm func87085 -> ram:81a519df  [EnemyManager::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			bool bVar1;
			long lVar2;
			int iVar3;
			uint uVar4;
			uint uVar5;
			int iVar6;
			int *piVar7;
			uint uVar8;
			uint uVar9;
			long lStack_e8;
			ulong uStack_e0;
			long lStack_d8;
			uint uStack_d0;
			ulong uStack_c8;
			uint uStack_c0;
			long lStack_b8;
			ulong uStack_b0;
			long lStack_a8;
			uint uStack_a0;
			ulong uStack_98;
			uint uStack_90;
			long lStack_88;
			ulong uStack_80;
			int iStack_78;
			long *plStack_74;
			long lStack_70;
			ulong uStack_68;
			int iStack_5c;
			long lStack_58;
			ulong uStack_50;
			int iStack_44;
			ulong uStack_40;
			uint uStack_38;
			uint uStack_30;
			uint uStack_2c;
			uint uStack_28;
			uint uStack_24;
			ulong uStack_20;
			uint uStack_18;
			long lStack_10;
			ulong uStack_8;

			if (cRam00664afc == '\0') {
				unnamed_function_1099(0x561104);
				unnamed_function_1099(0x560ff0);
				unnamed_function_1099(0x560ff4);
				unnamed_function_1099(0x561108);
				unnamed_function_1099(0x56110c);
				unnamed_function_1099(0x560ff8);
				unnamed_function_1099(0x569aa8);
				unnamed_function_1099(0x563078);
				unnamed_function_1099(0x563080);
				unnamed_function_1099(0x562b54);
				unnamed_function_1099(0x563088);
				unnamed_function_1099(0x563094);
				unnamed_function_1099(0x56411c);
				unnamed_function_1099(0x56b554);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x570ba8);
				cRam00664afc = '\x01';
			}
			iStack_44 = 0;
			uStack_50 = 0;
			lStack_58 = 0;
			iStack_5c = 0;
			uStack_68 = 0;
			lStack_70 = 0;
			if (*(byte *)(param_2 + 8) != '\0') {
				iStack_44 = 0;
				unnamed_function_9774(&lStack_10,*(uint *)(this.enemyManagerData + 0x10),uRam00562b54);
				uStack_50 = uStack_8;
				lStack_58 = lStack_10;
				lStack_88 = ZEXT48(&lStack_58) << 0x20;
		code_r0x81a51b45:
				iRam005ddf34 = 0;
				iVar3 = import.env.invoke_iii(0x3669,&lStack_58,uRam00560ff4);
				iVar6 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar6 == 1) goto code_r0x81a51f47;
				if (iVar3 == 0) {
					bVar1 = false;
					iVar6 = (int)lStack_88;
					goto code_r0x81a51f9b;
				}
				if (uStack_50._4_1_ != '\0') {
					uVar5 = this.enemy;
					iRam005ddf34 = 0;
					import.env.invoke_viiii
										(0x366a,&lStack_10,*(uint *)(this.enemyManagerDetailsSO + 0x14),iStack_44,
										 uRam0056411c);
					lVar2 = lStack_10;
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a51f4f;
					}
					uStack_90 = 0;
					uStack_38 = 0;
					iRam005ddf34 = 0;
					uStack_98 = 0;
					uStack_40 = 0;
					import.env.invoke_viii(0x366b,&uStack_30,&uStack_98,0);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a51f4f;
					}
					uStack_8 = CONCAT44(uStack_24,uStack_28);
					lStack_10 = CONCAT44(uStack_2c,uStack_30);
					iRam005ddf34 = 0;
					uVar4 = import.env.invoke_iii(0x88d,this,0);
					if (iRam005ddf34 == 1) {
		code_r0x81a51f0b:
						iRam005ddf34 = 0;
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a51f4f;
					}
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						iRam005ddf34 = 0;
						import.env.invoke_vi(0xfc,iRam0055be2c);
						if (iRam005ddf34 == 1) goto code_r0x81a51f0b;
					}
					uStack_a0 = 0;
					uStack_28 = 0;
					uStack_b0 = uStack_8;
					uStack_2c = (uint)((ulong)lVar2 >> 0x20);
					uStack_30 = (uint)lVar2;
					iRam005ddf34 = 0;
					lStack_b8 = lStack_10;
					lStack_a8 = lVar2;
					uVar5 = import.env.invoke_iiiiii(0x366c,uVar5,&lStack_a8,&lStack_b8,uVar4,uRam0056b554);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a51f4f;
					}
					iRam005ddf34 = 0;
					iVar3 = import.env.invoke_iii(0x890,uVar5,uRam00569aa8);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a51f4f;
					}
					iVar6 = this.enemyManagerDetailsSO;
					uVar4 = *(uint *)(iVar6 + 0x18);
					*(int *)(iVar3 + 0x48) = iStack_44;
					*(uint *)(iVar3 + 0x44) = uVar4;
					uVar8 = *(uint *)(iVar6 + 0x10);
					iRam005ddf34 = 0;
					uVar4 = import.env.invoke_iii(0x91b,&iStack_44,0);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a51f4f;
					}
					iRam005ddf34 = 0;
					uVar4 = import.env.invoke_iiiii(0x65e,uVar8,uRam00570ba8,uVar4,0);
					if (iRam005ddf34 != 1) {
						iRam005ddf34 = 0;
						import.env.invoke_viii(0x88f,uVar5,uVar4,0);
						iVar6 = iRam00563078;
						if (iRam005ddf34 != 1) {
							iVar3 = this.enemyList;
							*(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
							uVar9 = *(uint *)(iVar3 + 0xc);
							if (uVar9 < *(uint *)(*(int *)(iVar3 + 8) + 0xc)) {
								*(uint *)(iVar3 + 0xc) = uVar9 + 1;
								*(uint *)(*(int *)(iVar3 + 8) + uVar9 * 4 + 0x10) = uVar5;
								goto code_r0x81a51ed6;
							}
							iRam005ddf34 = 0;
							import.env.invoke_viii
												(0x481,iVar3,uVar5,
												 *(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
							iVar6 = iRam005ddf34;
							iRam005ddf34 = 0;
							if (iVar6 == 1) {
								uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
								goto code_r0x81a51f4f;
							}
							goto code_r0x81a51ed6;
						}
					}
					iRam005ddf34 = 0;
					uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a51f4f;
				}
		code_r0x81a51ed6:
				iStack_44 = iStack_44 + 1;
				goto code_r0x81a51b45;
			}
		code_r0x81a51fb4:
			if (*(int *)(this.enemyList + 0xc) < 1) {
		code_r0x81a521ad:
				iStack_5c = 0;
				unnamed_function_9774(&lStack_10,*(uint *)(this.enemyManagerData + 0x10),uRam00562b54);
				uStack_50 = uStack_8;
				lStack_58 = lStack_10;
				iStack_78 = 0;
				plStack_74 = &lStack_58;
				while( true ) {
					iRam005ddf34 = 0;
					iVar3 = import.env.invoke_iii(0x3669,&lStack_58,uRam00560ff4);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) break;
					iVar6 = iStack_78;
					if (iVar3 == 0) goto code_r0x81a52693;
					uVar5 = this.enemy;
					iRam005ddf34 = 0;
					import.env.invoke_viiii
										(0x366a,&lStack_10,*(uint *)(this.enemyManagerDetailsSO + 0x14),iStack_5c,
										 uRam0056411c);
					lVar2 = lStack_10;
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a5264b;
					}
					uStack_c0 = 0;
					uStack_18 = 0;
					iRam005ddf34 = 0;
					uStack_c8 = 0;
					uStack_20 = 0;
					import.env.invoke_viii(0x366b,&lStack_10,&uStack_c8,0);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a5264b;
					}
					uStack_80 = uStack_8;
					lStack_88 = lStack_10;
					iRam005ddf34 = 0;
					uVar4 = import.env.invoke_iii(0x88d,this,0);
					if (iRam005ddf34 == 1) {
		code_r0x81a52607:
						iRam005ddf34 = 0;
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a5264b;
					}
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						iRam005ddf34 = 0;
						import.env.invoke_vi(0xfc,iRam0055be2c);
						if (iRam005ddf34 == 1) goto code_r0x81a52607;
					}
					uStack_d0 = 0;
					uStack_8 = uStack_8 & 0xffffffff00000000;
					uStack_e0 = uStack_80;
					lStack_d8 = lVar2;
					iRam005ddf34 = 0;
					lStack_e8 = lStack_88;
					lStack_10 = lVar2;
					uVar5 = import.env.invoke_iiiiii(0x366c,uVar5,&lStack_d8,&lStack_e8,uVar4,uRam0056b554);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a5264b;
					}
					iRam005ddf34 = 0;
					iVar3 = import.env.invoke_iii(0x890,uVar5,uRam00569aa8);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a5264b;
					}
					iVar6 = this.enemyManagerDetailsSO;
					uVar4 = *(uint *)(iVar6 + 0x18);
					*(int *)(iVar3 + 0x48) = iStack_5c;
					*(uint *)(iVar3 + 0x44) = uVar4;
					uVar8 = *(uint *)(iVar6 + 0x10);
					iRam005ddf34 = 0;
					uVar4 = import.env.invoke_iii(0x91b,&iStack_5c,0);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a5264b;
					}
					iRam005ddf34 = 0;
					uVar4 = import.env.invoke_iiiii(0x65e,uVar8,uRam00570ba8,uVar4,0);
					if (iRam005ddf34 == 1) {
		code_r0x81a5262f:
						iRam005ddf34 = 0;
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a5264b;
					}
					iRam005ddf34 = 0;
					import.env.invoke_viii(0x88f,uVar5,uVar4,0);
					iVar6 = iRam00563078;
					if (iRam005ddf34 == 1) goto code_r0x81a5262f;
					iVar3 = this.enemyList;
					*(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
					uVar9 = *(uint *)(iVar3 + 0xc);
					if (uVar9 < *(uint *)(*(int *)(iVar3 + 8) + 0xc)) {
						*(uint *)(iVar3 + 0xc) = uVar9 + 1;
						*(uint *)(*(int *)(iVar3 + 8) + uVar9 * 4 + 0x10) = uVar5;
					}
					else {
						iRam005ddf34 = 0;
						import.env.invoke_viii
											(0x481,iVar3,uVar5,*(uint *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38)
											);
						iVar6 = iRam005ddf34;
						iRam005ddf34 = 0;
						if (iVar6 == 1) {
							uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
							goto code_r0x81a5264b;
						}
					}
					iStack_5c = iStack_5c + 1;
				}
				uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a5264b:
				iVar6 = import.env.getTempRet0();
				iVar3 = import.env.llvm_eh_typeid_for(0x4a99ec);
				if (iVar6 == iVar3) {
					piVar7 = (int *)import.env.__cxa_begin_catch(uVar5);
					iVar6 = *piVar7;
					iRam005ddf34 = 0;
					iStack_78 = iVar6;
					import.env.invoke_v(0x3a);
					iVar3 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar3 != 1) {
		code_r0x81a52693:
						iRam005ddf34 = 0;
						if (iVar6 == 0) {
							iRam005ddf34 = 0;
							return;
						}
						System.Net.CommandStream.ReceiveCommandResponseCallback(iVar6);
						do {
							halt_trap();
						} while( true );
					}
					uVar5 = import.env.__cxa_find_matching_catch_2();
					import.env.getTempRet0();
				}
				iRam005ddf34 = 0;
				import.env.invoke_ii(0x366f,&iStack_78);
			}
			else {
				UnityEngine.ComputeBuffer.Release(&lStack_10,this.enemyList,uRam00563088);
				uStack_68 = uStack_8;
				lStack_70 = lStack_10;
				lStack_10 = ZEXT48(&lStack_70) << 0x20;
				do {
					iRam005ddf34 = 0;
					iVar3 = import.env.invoke_iii(0x483,&lStack_70,uRam00561108);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 == 1) {
						uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
						goto code_r0x81a52120;
					}
					if (iVar3 == 0) goto code_r0x81a52176;
					uVar5 = uStack_68._4_4_;
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						iRam005ddf34 = 0;
						import.env.invoke_vi(0xfc,iRam0055be2c);
						if (iRam005ddf34 == 1) break;
					}
					iRam005ddf34 = 0;
					import.env.invoke_vii(0x2093,uVar5,0);
				} while (iRam005ddf34 != 1);
				iRam005ddf34 = 0;
				uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a52120:
				iVar6 = import.env.getTempRet0();
				iVar3 = import.env.llvm_eh_typeid_for(0x4a99ec);
				if (iVar6 == iVar3) {
					piVar7 = (int *)import.env.__cxa_begin_catch(uVar5);
					iVar3 = *piVar7;
					iRam005ddf34 = 0;
					lStack_10 = CONCAT44(lStack_10._4_4_,iVar3);
					import.env.invoke_v(0x3a);
					iVar6 = iRam005ddf34;
					iRam005ddf34 = 0;
					if (iVar6 != 1) {
						if (iVar3 != 0) {
							System.Net.CommandStream.ReceiveCommandResponseCallback(iVar3);
							do {
								halt_trap();
							} while( true );
						}
		code_r0x81a52176:
						iRam005ddf34 = 0;
						iVar6 = this.enemyList;
						iVar3 = *(int *)(iVar6 + 0xc);
						*(uint *)(iVar6 + 0xc) = 0;
						*(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
						if (0 < iVar3) {
							unnamed_function_84588(*(uint *)(iVar6 + 8),0,iVar3,0);
						}
						goto code_r0x81a521ad;
					}
					uVar5 = import.env.__cxa_find_matching_catch_2();
					import.env.getTempRet0();
				}
				iRam005ddf34 = 0;
				import.env.invoke_ii(0x366e,&lStack_10);
			}
		joined_r0x81a52238:
			if (iRam005ddf34 != 1) {
				iRam005ddf34 = 0;
				import.env.__resumeException(uVar5);
				do {
					halt_trap();
				} while( true );
			}
			iRam005ddf34 = 0;
			import.env.__cxa_find_matching_catch_3(0);
			import.env.getTempRet0();
			unnamed_function_642();
			do {
				halt_trap();
			} while( true );
		code_r0x81a51f47:
			uVar5 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a51f4f:
			iVar6 = import.env.getTempRet0();
			iVar3 = import.env.llvm_eh_typeid_for(0x4a99ec);
			if (iVar6 == iVar3) {
				piVar7 = (int *)import.env.__cxa_begin_catch(uVar5);
				iVar6 = *piVar7;
				iRam005ddf34 = 0;
				lStack_88 = CONCAT44(lStack_88._4_4_,iVar6);
				import.env.invoke_v(0x3a);
				iVar3 = iRam005ddf34;
				iRam005ddf34 = 0;
				bVar1 = true;
				if (iVar3 != 1) {
		code_r0x81a51f9b:
					iRam005ddf34 = 0;
					if (iVar6 != 0) {
						System.Net.CommandStream.ReceiveCommandResponseCallback(iVar6);
						do {
							halt_trap();
						} while( true );
					}
					if (!bVar1) {
						iRam005ddf34 = 0;
						return;
					}
					goto code_r0x81a51fb4;
				}
				uVar5 = import.env.__cxa_find_matching_catch_2();
				import.env.getTempRet0();
			}
			iRam005ddf34 = 0;
			import.env.invoke_ii(0x366d,&lStack_88);
			goto joined_r0x81a52238;
	}

	// wasm func87087 -> ram:81a5273b  [EnemyManager::StaticEventHandler_OnBuildNavMesh]
	private void StaticEventHandler_OnBuildNavMesh(OnBuildNavMeshEventArgs onBuildNavMeshEventArgs)
	{
			uint uVar1;

			if (cRam00664afd == '\0') {
				unnamed_function_1099(0x563074);
				unnamed_function_1099(0x558ee4);
				cRam00664afd = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00558ee4);
			System.Collections.Generic.List.cctor(uVar1,uRam00563074);
			this.enemyList = uVar1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func87088 -> ram:81a5278c  [EnemyManager::.ctor]
	public EnemyManager()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		uint param_3 = 0; // IL2CPP hidden slot
		uint param_4 = 0; // IL2CPP hidden slot
			uint uVar1;

			if (cRam00664afe == '\0') {
				unnamed_function_1099(0x562b48);
				unnamed_function_1099(0x558dfc);
				cRam00664afe = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00558dfc);
			System.Collections.Generic.List.cctor(uVar1,uRam00562b48);
			this.enemy = uVar1;
			*(uint *)(this + 0xc) = param_3;
			*(uint *)(this + 8) = param_2;
			EnemyManagerData.ctor(this,param_4,this);
			return;
	}
}

