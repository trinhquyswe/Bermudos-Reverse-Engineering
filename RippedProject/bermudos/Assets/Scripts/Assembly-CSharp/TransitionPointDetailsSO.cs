// TransitionPointDetailsSO.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in TransitionPointDetailsSO.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[CreateAssetMenu(fileName = "TransitionPointDetails_", menuName = "ScriptableObjects/TransitionPointDetailsSO", order = 1)]
public class TransitionPointDetailsSO : ScriptableObject
{
	// Fields
	public string transitionPointName; // 0xC
	public string transitionMap; // 0x10
	public Vector2 playerSpawnPoint; // 0x14

	// Methods

	// wasm func86506 -> ram:81a39bf3  [TransitionPointDetailsSO::.ctor]
	public TransitionPointDetailsSO()
	{
			uint uVar1;

			if (cRam00664919 == '\0') {
				unnamed_function_1099(0x55c620);
				unnamed_function_1099(0x57c60c);
				unnamed_function_1099(0x574ca0);
				unnamed_function_1099(0x579368);
				unnamed_function_1099(0x57b5e4);
				unnamed_function_1099(0x57be10);
				unnamed_function_1099(0x574578);
				unnamed_function_1099(0x57a530);
				unnamed_function_1099(0x57a548);
				unnamed_function_1099(0x57290c);
				unnamed_function_1099(0x57b5dc);
				unnamed_function_1099(0x57ca18);
				unnamed_function_1099(0x57d270);
				unnamed_function_1099(0x57be04);
				unnamed_function_1099(0x574e68);
				unnamed_function_1099(0x57a534);
				unnamed_function_1099(0x57a540);
				unnamed_function_1099(0x57d274);
				unnamed_function_1099(0x57be0c);
				unnamed_function_1099(0x57a52c);
				unnamed_function_1099(0x57a528);
				unnamed_function_1099(0x57be14);
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
				unnamed_function_1099(0x57a538);
				unnamed_function_1099(0x57a544);
				unnamed_function_1099(0x574e64);
				unnamed_function_1099(0x57a53c);
				unnamed_function_1099(0x572910);
				unnamed_function_1099(0x57d288);
				unnamed_function_1099(0x57d474);
				cRam00664919 = '\x01';
			}
			uVar1 = UnityEngine.Animator.HasState(uRam0057be10,0);
			**(uint **)(iRam0055c620 + 0x5c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057be14,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 4) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057be04,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 8) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057be0c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0xc) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a53c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x10) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a540,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x14) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a528,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x18) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a548,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x1c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a544,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x20) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a538,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x24) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a534,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x28) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a530,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x2c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057a52c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x30) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574e64,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x34) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057ca14,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x38) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00576658,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x3c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5dc,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x40) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5e4,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x44) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574c9c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x48) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574574,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x4c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057290c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x50) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00579364,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x54) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d470,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x58) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057c60c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x5c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d270,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x60) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d288,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 100) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574e68,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x68) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057ca18,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x6c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057665c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x70) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5e0,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x74) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057b5e8,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x78) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574ca0,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x7c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00574578,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x80) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00572910,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x84) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam00579368,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x88) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d474,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x8c) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057c610,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x90) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d274,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x94) = uVar1;
			uVar1 = UnityEngine.Animator.HasState(uRam0057d28c,0);
			*(uint *)(*(int *)(iRam0055c620 + 0x5c) + 0x98) = uVar1;
			return;
	}
}

