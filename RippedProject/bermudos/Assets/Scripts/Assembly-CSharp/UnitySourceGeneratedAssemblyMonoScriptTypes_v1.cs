// UnitySourceGeneratedAssemblyMonoScriptTypes_v1.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in UnitySourceGeneratedAssemblyMonoScriptTypes_v1.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[GeneratedCode("Unity.MonoScriptGenerator.MonoScriptInfoGenerator", null)]
[CompilerGenerated]
[EditorBrowsable(1)]
internal class UnitySourceGeneratedAssemblyMonoScriptTypes_v1
{
	// Methods

	// no recovered body in UnitySourceGeneratedAssemblyMonoScriptTypes_v1.c
	private static UnitySourceGeneratedAssemblyMonoScriptTypes_v1.MonoScriptData Get()
	{
		// <no recovered body>
	}

	// wasm func23273 -> ram:80846513  [UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor]
	public UnitySourceGeneratedAssemblyMonoScriptTypes_v1()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			int iVar1;
			uint uVar2;
			uint uVar3;

			if (cRam0065c7fe == '\0') {
				unnamed_function_1099(0x55fd14);
				unnamed_function_1099(0x55fd20);
				unnamed_function_1099(0x5626c8);
				cRam0065c7fe = '\x01';
			}
			iVar1 = unnamed_function_10101(*(uint *)(this + 0xc),param_2,uRam0055fd14);
			if (iVar1 == 0) {
				uVar3 = *(uint *)(this + 0xc);
				uVar2 = System.WeakReference.ctor(*(uint *)(this + 8),param_2,uRam005626c8);
				unnamed_function_72578(uVar3,param_2,uVar2,uRam0055fd20);
			}
			return;
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func25056 -> ram:808ce90e  [UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_1]
	uint UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_1(int param_1, int param_2, uint param_3, uint param_4)
	{
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;

			uVar1 = 0;
			param_2 = param_2 + -1;
			iVar4 = *(int *)(param_1 + 8);
			if (param_2 < iVar4 + -3) {
				do {
					param_2 = param_2 + 1;
					iVar2 = System.String.Contains_1(param_1,0x3c,param_2,0);
					if (iVar2 == -1) {
						return 0;
					}
					if (iVar2 == iVar4 + -1) {
						return 0;
					}
					iVar3 = System.String.Contains_1(param_1,0x3e,iVar2 + 1,0);
					if (iVar3 == -1) {
						return 0;
					}
					iVar2 = TMPEffects.TextProcessing.ParsingUtility.GetNextTag
														(param_1,iVar2,iVar3,param_3,param_4,iVar2);
				} while (iVar2 == 0);
				uVar1 = 1;
			}
			return uVar1;
	}

	// wasm func42597 -> ram:80e9ad1e  [UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_2]
	uint UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_2()
	{
			return 0x3c;
	}

	// wasm func60681 -> ram:812ff6b3  [UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_3]
	int UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_3(uint * param_1)
	{
			int iVar1;

			if (cRam00661f1f == '\0') {
				unnamed_function_1099(0x559ca0);
				cRam00661f1f = '\x01';
			}
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559ca0,2);
			*(uint *)(iVar1 + 0x10) = *param_1;
			*(uint *)(iVar1 + 0x14) = param_1[1];
			return iVar1;
	}

	// wasm func63186 -> ram:813aca0f  [UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_4]
	uint UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_4(uint param_1, float param_2, uint param_3)
	{
			int iVar1;
			uint uVar2;
			uint uVar3;

			if (cRam00662206 == '\0') {
				unnamed_function_1099(0x557db8);
				unnamed_function_1099(0x557de0);
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x56d3b8);
				unnamed_function_1099(0x56ec88);
				unnamed_function_1099(0x56ec8c);
				unnamed_function_1099(0x55da48);
				cRam00662206 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055da48);
			*(uint *)(iVar1 + 8) = param_1;
			if (0.0 <= param_2) {
				if (1.0 < param_2) {
					param_2 = 1.0;
				}
			}
			else {
				param_2 = 0.0;
			}
			uVar2 = unnamed_function_95402(uRam00557db8);
			unnamed_function_78188(uVar2,iVar1,uRam0056ec88,0);
			uVar3 = unnamed_function_95402(uRam00557de0);
			unnamed_function_78211(uVar3,iVar1,uRam0056ec8c,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			uVar2 = DG.Tweening.DOTween.ManualUpdate(uVar2,uVar3,param_2,param_3,0);
			DG.Tweening.TweenSettingsExtensions.SetSpeedBased_1
								(uVar2,*(uint *)(iVar1 + 8),uRam0056d3b8);
			return uVar2;
	}

	// wasm func86061 -> ram:81a1b657  [UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_5]
	void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_5()
	{
			int iVar1;

			iVar1 = UnityEngine.Input.GetKeyUpInt(0x71,0);
			if (iVar1 != 0) {
				AllIn1SpriteShader.All1DemoChangeScene.Update(0,0);
			}
			return;
	}

	// wasm func86182 -> ram:81a23be4  [UnitySourceGeneratedAssemblyMonoScriptTypes_v1::.ctor_6]
	short UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_6(uint * param_1, int * param_2, short param_3)
	{
			short sVar1;
			uint uVar2;
			uint uVar3;
			short sStack_2;

			sVar1 = 0;
			sStack_2 = param_3;
			if (cRam00664849 == '\0') {
				unnamed_function_1099(0x55a4c4);
				cRam00664849 = '\x01';
			}
			if (0xfff5 < (ushort)(param_3 - 0x3aU)) {
				uVar3 = *param_1;
				if (*(int *)(iRam0055a4c4 + 0x74) == 0) {
					unnamed_function_94848(iRam0055a4c4);
				}
				uVar2 = unnamed_function_82584(&sStack_2,0);
				uVar3 = Mono.Security.X509.X509Crl.X509CrlEntry.ctor(uVar3,uVar2,0);
				*param_1 = uVar3;
				*param_2 = *param_2 + 1;
				sVar1 = sStack_2;
			}
			return sVar1;
	}
}

