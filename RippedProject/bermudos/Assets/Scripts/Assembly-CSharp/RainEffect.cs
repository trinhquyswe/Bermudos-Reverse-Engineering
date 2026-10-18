// RainEffect.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in RainEffect.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class RainEffect : MonoBehaviour
{
	// Fields
	private int appearanceRate; // 0x10
	private SoundEffectSO rainEffect; // 0x14

	// Methods

	// wasm func87052 -> ram:81a4ffaf  [RainEffect::Start]
	private void Start()
	{
			int iVar1;

			if (cRam00664aeb == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam00664aeb = '\x01';
			}
			iVar1 = *(int *)(iRam00565d6c + 0x10);
			if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
				iVar1 = System.Threading.Monitor.Enter_1(iVar1);
			}
			iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
			if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
				iVar1 = System.Threading.Monitor.Enter_1(iVar1);
			}
			SoundEffectManager.PlaySoundEffect
								(**(uint **)(iVar1 + 0x5c),this.rainEffect,0);
			return;
	}

	// no recovered body in RainEffect.c
	private void OnDisable()
	{
		// <no recovered body>
	}

	// wasm func87053 -> ram:81a5001d  [RainEffect::.ctor]
	public RainEffect()
	{
			uint uVar1;

			if (cRam00664aec == '\0') {
				unnamed_function_1099(0x567e14);
				unnamed_function_1099(0x567e18);
				unnamed_function_1099(0x567e20);
				unnamed_function_1099(0x567e7c);
				unnamed_function_1099(0x567e84);
				unnamed_function_1099(0x567e8c);
				unnamed_function_1099(0x567e9c);
				unnamed_function_1099(0x567e98);
				unnamed_function_1099(0x567ea4);
				unnamed_function_1099(0x567ed0);
				unnamed_function_1099(0x567efc);
				unnamed_function_1099(0x567f24);
				cRam00664aec = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e14);
			this.appearanceRate = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e9c);
			this.rainEffect = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e8c);
			*(uint *)(this + 0x18) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567efc);
			*(uint *)(this + 0x28) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e18);
			*(uint *)(this + 0x1c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e98);
			*(uint *)(this + 0x20) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e84);
			*(uint *)(this + 0x24) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f24);
			*(uint *)(this + 0x2c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ea4);
			*(uint *)(this + 0x30) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567ed0);
			*(uint *)(this + 0x34) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e7c);
			*(uint *)(this + 0x3c) = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e20);
			*(uint *)(this + 0x38) = uVar1;
			return;
	}
}

