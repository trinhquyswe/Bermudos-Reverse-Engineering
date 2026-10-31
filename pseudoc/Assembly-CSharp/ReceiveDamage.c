// Assembly-CSharp :: ReceiveDamage
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ReceiveDamage : MonoBehaviour // TypeDefIndex: 5554
{
	// Fields
	[SerializeField]
	[Header("The damage amount to receive")]
	private int damageAmount; // 0x10
	private Health health; // 0x14
	public bool isNotReceivingDamage; // 0x18

	// Methods

	// RVA: 0x36E8 Offset: 0x36E8 VA: 0x36E8
	private void Awake() { }

	// RVA: 0x36E9 Offset: 0x36E9 VA: 0x36E9
	public void TakeDamage(int damageAmount = 0) { }

	// RVA: 0x36EA Offset: 0x36EA VA: 0x36EA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- ReceiveDamage$$Awake ----
// C#: void ReceiveDamage__Awake (ReceiveDamage_o* __this, const MethodInfo* method);

void ReceiveDamage__Awake(ReceiveDamage_o *__this,MethodInfo *method)

{
  Health_o *pHVar1;
  
  if (DAT_ram_00664aa0 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e98);
    DAT_ram_00664aa0 = '\x01';
  }
  pHVar1 = (Health_o *)unnamed_function_65370(__this,DAT_ram_00567e98);
  __this->health = pHVar1;
  return;
}

// ---- ReceiveDamage$$TakeDamage ----
// C#: void ReceiveDamage__TakeDamage (ReceiveDamage_o* __this, int32_t damageAmount, const MethodInfo* method);

void ReceiveDamage__TakeDamage(ReceiveDamage_o *__this,int damageAmount,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (__this->isNotReceivingDamage == false) {
    method_00 = (MethodInfo *)__this->damageAmount;
    if (0 < (int)method_00) {
      damageAmount = (int)method_00;
    }
    Health__TakeDamage(__this->health,damageAmount,method_00);
  }
  return;
}

// ---- ReceiveDamage$$.ctor ----
// C#: void ReceiveDamage___ctor (ReceiveDamage_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

