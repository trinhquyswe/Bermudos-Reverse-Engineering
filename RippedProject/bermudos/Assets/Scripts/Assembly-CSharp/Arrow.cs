// Arrow.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Arrow.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class Arrow : MonoBehaviour
{
	// Fields
	private LineRenderer lineRenderer; // 0x10

	// Methods

	// wasm func86642 -> ram:81a40eb6  [Arrow::Awake]
	private void Awake()
	{
		ulong * param_2 = 0; // IL2CPP hidden slot
		ulong * param_3 = 0; // IL2CPP hidden slot
			float fVar1;
			float fVar2;
			float fVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			float fVar8;
			float fVar9;
			float fVar10;
			ulong uVar11;
			ulong uStack_a0;
			uint uStack_98;
			ulong uStack_90;
			uint uStack_88;
			ulong uStack_80;
			uint uStack_78;
			ulong uStack_70;
			uint uStack_68;
			ulong uStack_60;
			uint uStack_58;
			float fStack_50;
			float fStack_4c;
			uint uStack_48;
			float fStack_40;
			float fStack_3c;
			uint uStack_38;
			float fStack_30;
			float fStack_2c;
			uint uStack_28;
			float fStack_20;
			float fStack_1c;
			uint uStack_18;
			float fStack_10;
			float fStack_c;
			uint uStack_8;

			uVar11 = *param_2;
			fVar1 = (float)((ulong)uVar11 >> 0x20);
			fVar9 = (float)((ulong)*param_3 >> 0x20);
			fVar10 = (float)*param_3;
			if (cRam006634ad == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ad = '\x01';
			}
			fVar2 = fVar9 - fVar1;
			fVar3 = fVar10 - (float)uVar11;
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
			if (1e-05 < fVar4) {
				fVar5 = fVar3 / fVar4;
				fVar6 = -fVar2 / fVar4;
			}
			else {
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				fVar5 = (*(float **)(iRam0055d024 + 0x5c))[1];
				fVar6 = **(float **)(iRam0055d024 + 0x5c);
			}
			if (cRam006634ad == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ad = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			if (1e-05 < fVar4) {
				fVar7 = fVar2 / fVar4;
				fVar8 = fVar3 / fVar4;
			}
			else {
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				fVar7 = (*(float **)(iRam0055d024 + 0x5c))[1];
				fVar8 = **(float **)(iRam0055d024 + 0x5c);
			}
			if (cRam006634ad == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ad = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar9 = fVar2 + fVar9;
			fVar10 = fVar3 + fVar10;
			if (1e-05 < fVar4) {
				fVar2 = fVar2 / fVar4;
				fVar3 = fVar3 / fVar4;
			}
			else {
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				fVar2 = (*(float **)(iRam0055d024 + 0x5c))[1];
				fVar3 = **(float **)(iRam0055d024 + 0x5c);
			}
			UnityEngine.LineRenderer.set_endColor(this.lineRenderer,5,0);
			uStack_8 = 0;
			uStack_58 = 0;
			uStack_60 = uVar11;
			fStack_10 = (float)uVar11;
			fStack_c = fVar1;
			UnityEngine.LineRenderer.set_positionCount
								(this.lineRenderer,0,&uStack_60,0);
			uStack_18 = 0;
			uStack_68 = 0;
			uStack_70 = CONCAT44(fVar9,fVar10);
			fStack_20 = fVar10;
			fStack_1c = fVar9;
			UnityEngine.LineRenderer.set_positionCount
								(this.lineRenderer,1,&uStack_70,0);
			uStack_28 = 0;
			uStack_78 = 0;
			fStack_2c = fVar5 + (fVar9 - fVar7);
			fStack_30 = fVar6 + (fVar10 - fVar8);
			uStack_80 = CONCAT44(fStack_2c,fStack_30);
			UnityEngine.LineRenderer.set_positionCount
								(this.lineRenderer,2,&uStack_80,0);
			uStack_38 = 0;
			uStack_88 = 0;
			uStack_90 = CONCAT44(fVar9,fVar10);
			fStack_40 = fVar10;
			fStack_3c = fVar9;
			UnityEngine.LineRenderer.set_positionCount
								(this.lineRenderer,3,&uStack_90,0);
			uStack_48 = 0;
			uStack_98 = 0;
			fStack_4c = (fVar9 - fVar2) - fVar5;
			fStack_50 = (fVar10 - fVar3) - fVar6;
			uStack_a0 = CONCAT44(fStack_4c,fStack_50);
			UnityEngine.LineRenderer.set_positionCount
								(this.lineRenderer,4,&uStack_a0,0);
			return;
	}

	// wasm func86643 -> ram:81a4123f  [Arrow::MakeArrow]
	public void MakeArrow(Vector2 startPosition, Vector2 endPosition)
	{
			UnityEngine.LineRenderer.set_endColor(this.lineRenderer,0,0);
			return;
	}

	// no recovered body in Arrow.c
	public void ClearArrow()
	{
		// <no recovered body>
	}

	// wasm func86644 -> ram:81a4124f  [Arrow::.ctor]
	public Arrow()
	{
			uint uVar1;

			if (cRam0066496b == '\0') {
				unnamed_function_1099(0x567e1c);
				unnamed_function_1099(0x567ef0);
				cRam0066496b = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ef0);
			*(uint *)(this + 0x18) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e1c);
			*(uint *)(this + 0x20) = 3;
			*(uint *)(this + 0x1c) = uVar1;
			return;
	}
}

