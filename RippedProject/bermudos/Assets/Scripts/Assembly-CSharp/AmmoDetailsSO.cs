// AmmoDetailsSO.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in AmmoDetailsSO.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[CreateAssetMenu(fileName = "AmmoDetailsSO_", menuName = "ScriptableObjects/AmmoDetailsSO", order = 1)]
public class AmmoDetailsSO : ScriptableObject
{
	// Fields
	public float maxSpeed; // 0xC
	public int damage; // 0x10
	public float trajectoryMaxHeight; // 0x14
	public AnimationClip enemyAmmoType; // 0x18
	public Color ammoEffectType; // 0x1C
	public GameObject ammoPrefab; // 0x2C
	public AnimationCurve trajectoryAnimationCurve; // 0x30
	public AnimationCurve axisCorrectionAnimationCurve; // 0x34
	public AnimationCurve ammoSpeedAnimationCurve; // 0x38

	// Methods

	// wasm func86848 -> ram:81a47802  [AmmoDetailsSO::.ctor]
	public AmmoDetailsSO()
	{
			uint uVar1;

			if (cRam00664a6c == '\0') {
				unnamed_function_1099(0x567eec);
				cRam00664a6c = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567eec);
			this.damage = uVar1;
			return;
	}
}

