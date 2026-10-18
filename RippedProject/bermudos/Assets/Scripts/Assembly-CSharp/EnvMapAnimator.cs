// EnvMapAnimator.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in EnvMapAnimator.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class EnvMapAnimator : MonoBehaviour
{
	// Fields
	public Vector3 RotationSpeeds; // 0x10
	private TMP_Text m_textMeshPro; // 0x1C
	private Material m_material; // 0x20

	// Methods

	// wasm func86177 -> ram:81a237e3  [EnvMapAnimator::Awake]
	private void Awake()
	{
			int iVar1;

			if (cRam00664845 == '\0') {
				unnamed_function_1099(0x55ddfc);
				cRam00664845 = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055ddfc);
			*(uint *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			return iVar1;
	}

	// no recovered body in EnvMapAnimator.c
	private IEnumerator Start()
	{
		// <no recovered body>
	}

	// no recovered body in EnvMapAnimator.c
	public EnvMapAnimator()
	{
		// <no recovered body>
	}

	// ---- members with no metadata member (nested/compiler-generated types, lambdas) ----

	// wasm func86178 -> ram:81a23821  [EnvMapAnimator+<Start>d__4::System.IDisposable.Dispose]
	uint EnvMapAnimator__Start_d__4_System_IDisposable_Dispose(int param_1)
	{
			float fVar1;
			float fVar2;
			float fVar3;
			int iVar4;
			float fVar5;
			float fVar6;
			ulong uStack_b0;
			ulong uStack_a8;
			ulong uStack_a0;
			ulong uStack_98;
			ulong uStack_90;
			ulong uStack_88;
			ulong uStack_80;
			ulong uStack_78;
			ulong uStack_70;
			uint uStack_68;
			ulong uStack_60;
			ulong uStack_58;
			ulong uStack_50;
			uint uStack_48;
			ulong uStack_40;
			float fStack_38;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			uint uStack_18;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			if (cRam00664846 == '\0') {
				unnamed_function_1099(0x579bc4);
				cRam00664846 = '\x01';
			}
			iVar4 = *(int *)(param_1 + 0x10);
			if (*(int *)(param_1 + 8) == 0) {
				*(ulong *)(param_1 + 0x14) = 0;
				*(uint *)(param_1 + 8) = 0xffffffff;
				*(ulong *)(param_1 + 0x1c) = 0;
				*(ulong *)(param_1 + 0x24) = 0;
				*(ulong *)(param_1 + 0x2c) = 0;
				*(ulong *)(param_1 + 0x34) = 0;
				*(ulong *)(param_1 + 0x3c) = 0;
				*(ulong *)(param_1 + 0x44) = 0;
				*(ulong *)(param_1 + 0x4c) = 0;
			}
			else {
				if (*(int *)(param_1 + 8) != 1) {
					return 0;
				}
				*(uint *)(param_1 + 8) = 0xffffffff;
			}
			if (cRam00664829 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00664829 = '\x01';
			}
			uStack_18 = *(uint *)(*(ulong **)(iRam0055d048 + 0x5c) + 1);
			uStack_20 = **(ulong **)(iRam0055d048 + 0x5c);
			fVar1 = (float)UnityEngine.Rendering.Universal.ScriptableRenderer.InternalStartRendering(0);
			fVar5 = *(float *)(iVar4 + 0x10);
			fVar2 = (float)UnityEngine.Rendering.Universal.ScriptableRenderer.InternalStartRendering(0);
			fVar6 = *(float *)(iVar4 + 0x14);
			fVar3 = (float)UnityEngine.Rendering.Universal.ScriptableRenderer.InternalStartRendering(0);
			fStack_38 = fVar3 * *(float *)(iVar4 + 0x18) * 0.017453292;
			fStack_c = fVar2 * fVar6 * 0.017453292;
			fStack_10 = fVar1 * fVar5 * 0.017453292;
			uStack_40 = CONCAT44(fStack_c,fStack_10);
			fStack_8 = fStack_38;
			unnamed_function_8664(&uStack_30,&uStack_40,0);
			if (cRam00662a53 == '\0') {
				unnamed_function_1099(0x55d048);
				cRam00662a53 = '\x01';
			}
			uStack_48 = uStack_18;
			uStack_58 = uStack_28;
			uStack_50 = uStack_20;
			uStack_60 = uStack_30;
			uStack_68 = *(uint *)(*(int *)(iRam0055d048 + 0x5c) + 0x14);
			uStack_70 = *(ulong *)(*(int *)(iRam0055d048 + 0x5c) + 0xc);
			UnityEngine.Matrix4x4.get_decomposeProjection
								((ulong *)(param_1 + 0x14),&uStack_50,&uStack_60,&uStack_70,0);
			uStack_a8 = *(ulong *)(param_1 + 0x1c);
			uStack_a0 = *(ulong *)(param_1 + 0x24);
			uStack_98 = *(ulong *)(param_1 + 0x2c);
			uStack_90 = *(ulong *)(param_1 + 0x34);
			uStack_88 = *(ulong *)(param_1 + 0x3c);
			uStack_80 = *(ulong *)(param_1 + 0x44);
			uStack_78 = *(ulong *)(param_1 + 0x4c);
			uStack_b0 = *(ulong *)(param_1 + 0x14);
			UnityEngine.Material.SetVector_1(*(uint *)(iVar4 + 0x20),uRam00579bc4,&uStack_b0,0);
			*(ulong *)(param_1 + 8) = 1;
			return 1;
	}

	// wasm func86179 -> ram:81a23a83  [EnvMapAnimator+<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current]
	void EnvMapAnimator__Start_d__4_System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
			uint uVar1;
			uint uVar2;

			uVar1 = unnamed_function_94961(0x55bdd8);
			uVar1 = unnamed_function_95402(uVar1);
			unnamed_function_83844(uVar1,0);
			uVar2 = unnamed_function_94961(0x56f158);
			unnamed_function_1109(uVar1,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86180 -> ram:81a23aab  [EnvMapAnimator+<Start>d__4::System.Collections.IEnumerator.get_Current]
	void EnvMapAnimator__Start_d__4_System_Collections_IEnumerator_get_Current(uint * param_1)
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664847 == '\0') {
				unnamed_function_1099(0x5599c4);
				unnamed_function_1099(0x57054c);
				unnamed_function_1099(0x570550);
				cRam00664847 = '\x01';
			}
			uVar1 = Mono.Security.ASN1Convert.ToOid(uRam005599c4,0xc361);
			System.Runtime.CompilerServices.RuntimeHelpers.InitializeArray_1(uVar1,uRam00570550,0);
			uVar2 = Mono.Security.ASN1Convert.ToOid(uRam005599c4,0x988b);
			System.Runtime.CompilerServices.RuntimeHelpers.InitializeArray_1(uVar2,uRam0057054c,0);
			*(ushort *)((int)param_1 + 0x11) = 0;
			*(byte *)(param_1 + 4) = 0;
			*(ulong *)(param_1 + 2) = 0x2af000002cf;
			param_1[1] = uVar2;
			*param_1 = uVar1;
			*(byte *)((int)param_1 + 0x13) = 0;
			return;
	}
}

