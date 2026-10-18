// AmmoHitEffect.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AmmoHitEffect.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class AmmoHitEffect : MonoBehaviour
{
	// Fields
	private ParticleSystem particleSystemHitEffect; // 0x10

	// Methods

	// wasm func86845 -> ram:81a476fc  [AmmoHitEffect::Awake]
	private void Awake()
	{
		ulong * param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			ulong uStack_78;
			ulong uStack_70;
			ulong uStack_68;
			ulong uStack_60;
			ulong uStack_58;
			uint uStack_50;
			ulong uStack_48;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			uint uStack_10;
			uint[] auStack_8 = new uint[2];

			auStack_8[0] = this.particleSystemHitEffect;
			uStack_40 = param_2[1];
			uStack_48 = *param_2;
			UnityEngine.ParticleSystem.MinMaxCurve.op_Implicit(&uStack_38,&uStack_48,0);
			uStack_50 = uStack_10;
			uStack_58 = uStack_18;
			uStack_60 = uStack_20;
			uStack_68 = uStack_28;
			uStack_70 = uStack_30;
			uStack_78 = uStack_38;
			UnityEngine.ParticleSystem.MainModule.set_startRotation(auStack_8,&uStack_78,0);
			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,1,0);
			return;
	}

	// no recovered body in AmmoHitEffect.c
	public void InitialiseAmmoHitEffect(Color ammoHitEffectType)
	{
		// <no recovered body>
	}

	// wasm func86849 -> ram:81a47836  [AmmoHitEffect::.ctor]
	public AmmoHitEffect()
	{
			uint uVar1;

			if (cRam00664a6d == '\0') {
				unnamed_function_1099(0x567e08);
				cRam00664a6d = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e08);
			this.particleSystemHitEffect = uVar1;
			return;
	}
}

