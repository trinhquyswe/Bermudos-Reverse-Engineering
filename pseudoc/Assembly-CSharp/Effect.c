// Assembly-CSharp :: Effect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public abstract class Effect : MonoBehaviour // TypeDefIndex: 5576
{
	// Fields
	[SerializeField]
	[ColorUsage(True, True)]
	protected Color flashColor; // 0x10
	protected Rigidbody2D rb; // 0x20
	public AnimationCurve damageFlashCurve; // 0x24
	protected WaitForFixedUpdate waitForFixedUpdate; // 0x28
	[SerializeField]
	protected float damageForce; // 0x2C
	[SerializeField]
	protected float duration; // 0x30
	[SerializeField]
	protected ParticleSystem stunEffect; // 0x34
	[SerializeField]
	protected ParticleSystem bloodEffect; // 0x38

	// Methods

	// RVA: 0x375D Offset: 0x375D VA: 0x375D
	public void StunEffect(float stunTime) { }

	// RVA: 0x375E Offset: 0x375E VA: 0x375E
	protected void .ctor() { }
}

===== C# end =====
*/

// ---- Effect$$StunEffect ----
// C#: void Effect__StunEffect (Effect_o* __this, float stunTime, const MethodInfo* method);

void Effect__StunEffect(Effect_o *__this,float stunTime,MethodInfo *method)

{
  ParticleSystem_o *local_8 [2];
  
  local_8[0] = __this->stunEffect;
  unnamed_function_86779(local_8,stunTime,0);
  unnamed_function_86756(__this->stunEffect,0);
  return;
}

// ---- Effect$$.ctor ----
// C#: void Effect___ctor (Effect_o* __this, const MethodInfo* method);

void BossEffect___ctor(BossEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  if (DAT_ram_00664ada == '\0') {
    unnamed_function_1099(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    DAT_ram_00664ada = '\x01';
  }
  uVar1 = unnamed_function_95402(UnityEngine_WaitForFixedUpdate_TypeInfo);
  __this->pad_8[0x28] = 0;
  __this->pad_8[0x29] = 0;
  __this->pad_8[0x2a] = 0x80;
  __this->pad_8[0x2b] = 0x3e;
  *(undefined4 *)(__this->pad_8 + 0x20) = uVar1;
  unnamed_function_44622(__this,0);
  return;
}

