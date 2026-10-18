// BossMap.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in BossMap.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class BossMap : Map
{
	// Fields
	private GameObject NorthOfTheForestToTheForest; // 0x1C

	// Methods

	// wasm func86481 -> ram:81a38550  [BossMap::Start]
	private void Start()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam0066490a == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x5678a8);
				unnamed_function_1099(0x565d78);
				cRam0066490a = '\x01';
			}
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar4 = **(int **)(iVar3 + 0x5c);
			uVar5 = *(uint *)(iVar4 + 0x20);
			uVar1 = unnamed_function_95402(uRam005579ec);
			unnamed_function_60038(uVar1,this,uRam005678a8,0);
			iVar3 = unnamed_function_85158(uVar5,uVar1,0);
			uVar1 = uRam005579ec;
			if (iVar3 == 0) {
				*(uint *)(iVar4 + 0x20) = 0;
				return;
			}
			iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar2 == 0) {
				unnamed_function_1116(iVar3,uVar1);
				do {
					halt_trap();
				} while( true );
			}
			*(int *)(iVar4 + 0x20) = iVar2;
			uVar1 = uRam005579ec;
			iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar4 != 0) {
				return;
			}
			unnamed_function_1116(iVar3,uVar1);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86482 -> ram:81a38643  [BossMap::OnEnable]
	private void OnEnable()
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam0066490b == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x5678a8);
				unnamed_function_1099(0x565d78);
				cRam0066490b = '\x01';
			}
			iVar3 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar4 = **(int **)(iVar3 + 0x5c);
			uVar5 = *(uint *)(iVar4 + 0x20);
			uVar1 = unnamed_function_95402(uRam005579ec);
			unnamed_function_60038(uVar1,this,uRam005678a8,0);
			iVar3 = unnamed_function_85160(uVar5,uVar1,0);
			uVar1 = uRam005579ec;
			if (iVar3 == 0) {
				*(uint *)(iVar4 + 0x20) = 0;
				return;
			}
			iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar2 == 0) {
				unnamed_function_1116(iVar3,uVar1);
				do {
					halt_trap();
				} while( true );
			}
			*(int *)(iVar4 + 0x20) = iVar2;
			uVar1 = uRam005579ec;
			iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
			if (iVar4 != 0) {
				return;
			}
			unnamed_function_1116(iVar3,uVar1);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86483 -> ram:81a38736  [BossMap::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;

			if (cRam0066490c == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam0066490c = '\x01';
			}
			if (param_2 == 4) {
				uVar2 = this.NorthOfTheForestToTheForest;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				iVar1 = UnityEngine.Camera.get_targetTexture(uVar2,0,0);
				if (iVar1 == 0) {
					return;
				}
				if (cRam00664910 == '\0') {
					unnamed_function_1099(0x57be08);
					cRam00664910 = '\x01';
				}
				iVar1 = UnityEngine.PlayerPrefs.GetString_1(uRam0057be08,0);
				if ((iVar1 == 0) || (iVar1 = UnityEngine.PlayerPrefs.GetInt(uRam0057be08,0), iVar1 != 1)) {
					uVar2 = 0;
				}
				else {
					uVar2 = 1;
				}
			}
			else {
				if (param_2 != 5) {
					return;
				}
				uVar2 = 1;
			}
			unnamed_function_44686(this.NorthOfTheForestToTheForest,uVar2,0);
			return;
	}

	// no recovered body in BossMap.c
	private void OnGameStateChanged_Map(GameState gameState)
	{
		// <no recovered body>
	}

	// wasm func86486 -> ram:81a3885e  [BossMap::.ctor]
	public BossMap()
	{
			int iVar1;
			uint uVar2;
			int *piVar3;
			int iVar4;
			byte[] auStack_20 = new byte[8];
			int iStack_18;
			ulong *puStack_14;
			ulong uStack_10;
			ulong uStack_8;

			if (cRam0066490d == '\0') {
				unnamed_function_1099(0x5610e0);
				unnamed_function_1099(0x5610e4);
				unnamed_function_1099(0x5610e8);
				unnamed_function_1099(0x562f7c);
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x576914);
				cRam0066490d = '\x01';
			}
			uStack_8 = 0;
			uStack_10 = 0;
			if (cRam006649a8 == '\0') {
				unnamed_function_1099(0x55ba70);
				unnamed_function_1099(0x55c894);
				cRam006649a8 = '\x01';
			}
			iVar4 = **(int **)(iRam0055c894 + 0x5c);
			if (iVar4 != 0) {
				iVar1 = unnamed_function_95402(uRam0055ba70);
				StaticEventHandler.CallInstructionChangedEvent(iVar1,0);
				*(int *)(iVar1 + 8) = this;
				(**(code **)((ulong)*(uint *)(iVar4 + 0xc) * 4))
									(*(uint *)(iVar4 + 0x20),iVar1,*(uint *)(iVar4 + 0x14));
			}
			UnityEngine.ComputeBuffer.Release(&uStack_10,*(uint *)(this + 0x18),uRam00562f7c);
			iStack_18 = 0;
			puStack_14 = &uStack_10;
			do {
				do {
					while( true ) {
						iRam005ddf34 = 0;
						iVar1 = import.env.invoke_iii(0x1d28,&uStack_10,uRam005610e4);
						iVar4 = iRam005ddf34;
						iRam005ddf34 = 0;
						if (iVar4 == 1) {
							uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
							goto code_r0x81a38b34;
						}
						if (iVar1 == 0) {
							iRam005ddf34 = 0;
							return;
						}
						if (uStack_8._4_4_ != 1) break;
						iRam005ddf34 = 0;
						import.env.invoke_viiffi(0x3661,this,uRam00576914,0,*(uint *)(this + 0x14),0);
						iVar4 = iRam005ddf34;
						iRam005ddf34 = 0;
						if (iVar4 == 1) {
							uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
							goto code_r0x81a38b34;
						}
					}
				} while (uStack_8._4_4_ != 2);
				iVar4 = *(int *)(iRam00565d6c + 0x10);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iRam005ddf34 = 0;
					iVar4 = import.env.invoke_ii(0x100,iVar4);
					if (iRam005ddf34 != 1) goto code_r0x81a38a48;
		code_r0x81a38b0e:
					iRam005ddf34 = 0;
					uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a38b34;
				}
		code_r0x81a38a48:
				iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iRam005ddf34 = 0;
					iVar4 = import.env.invoke_ii(0x100,iVar4);
					if (iRam005ddf34 == 1) goto code_r0x81a38b0e;
				}
				uVar2 = **(uint **)(iVar4 + 0x5c);
				iRam005ddf34 = 0;
				iVar1 = import.env.invoke_ii(0x3662,0);
				iVar4 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar4 == 1) {
					uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
					goto code_r0x81a38b34;
				}
				iRam005ddf34 = 0;
				import.env.invoke_viiii(0x3663,uVar2,*(uint *)(iVar1 + 0x68),1,auStack_20);
				iVar4 = iRam005ddf34;
				iRam005ddf34 = 0;
			} while (iVar4 != 1);
			uVar2 = import.env.__cxa_find_matching_catch_3(0x4a99ec);
		code_r0x81a38b34:
			iVar4 = import.env.getTempRet0();
			iVar1 = import.env.llvm_eh_typeid_for(0x4a99ec);
			if (iVar4 == iVar1) {
				piVar3 = (int *)import.env.__cxa_begin_catch(uVar2);
				iVar1 = *piVar3;
				iRam005ddf34 = 0;
				iStack_18 = iVar1;
				import.env.invoke_v(0x3a);
				iVar4 = iRam005ddf34;
				iRam005ddf34 = 0;
				if (iVar4 != 1) {
					if (iVar1 == 0) {
						iRam005ddf34 = 0;
						return;
					}
					System.Net.CommandStream.ReceiveCommandResponseCallback(iVar1);
					do {
						halt_trap();
					} while( true );
				}
				uVar2 = import.env.__cxa_find_matching_catch_2();
				import.env.getTempRet0();
			}
			iRam005ddf34 = 0;
			import.env.invoke_ii(0x3664,&iStack_18);
			iVar4 = iRam005ddf34;
			iRam005ddf34 = 0;
			if (iVar4 != 1) {
				import.env.__resumeException(uVar2);
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
}

