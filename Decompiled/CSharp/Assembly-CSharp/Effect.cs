// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: 
public abstract class Effect : MonoBehaviour
{
	// Fields
	protected Color flashColor;
	protected Rigidbody2D rb;
	public AnimationCurve damageFlashCurve;
	protected WaitForFixedUpdate waitForFixedUpdate;
	protected float damageForce;
	protected float duration;
	protected ParticleSystem stunEffect;
	protected ParticleSystem bloodEffect;

	// Methods
	public void StunEffect(float stunTime)
	{
		// <no wasm mapping>
	}

	protected void .ctor()
	{
		// <no wasm mapping>
	}

}
