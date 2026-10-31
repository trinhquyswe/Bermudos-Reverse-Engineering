// Assembly-CSharp :: ReceiveContactDamage
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ReceiveContactDamage : MonoBehaviour // TypeDefIndex: 5553
{
	// Fields
	[SerializeField]
	[Header("The contact damage amount to receive")]
	private int contactDamageAmount; // 0x10
	private Health health; // 0x14

	// Methods

	// RVA: 0x36E5 Offset: 0x36E5 VA: 0x36E5
	private void Awake() { }

	// RVA: 0x36E6 Offset: 0x36E6 VA: 0x36E6
	public void TakeContactDamage(int damageAmount = 0) { }

	// RVA: 0x36E7 Offset: 0x36E7 VA: 0x36E7
	public void .ctor() { }
}

===== C# end =====
*/

// ---- ReceiveContactDamage$$Awake ----
// C#: void ReceiveContactDamage__Awake (ReceiveContactDamage_o* __this, const MethodInfo* method);

void ReceiveContactDamage__Awake(ReceiveContactDamage_o *__this,MethodInfo *method)

{
  Health_o *pHVar1;
  
  if (DAT_ram_00664a9f == '\0') {
    unnamed_function_1099(&DAT_ram_00567e98);
    DAT_ram_00664a9f = '\x01';
  }
  pHVar1 = (Health_o *)unnamed_function_65370(__this,DAT_ram_00567e98);
  __this->health = pHVar1;
  return;
}

// ---- ReceiveContactDamage$$TakeContactDamage ----
// C#: void ReceiveContactDamage__TakeContactDamage (ReceiveContactDamage_o* __this, int32_t damageAmount, const MethodInfo* method);

void ReceiveContactDamage__TakeContactDamage
               (ReceiveContactDamage_o *__this,int damageAmount,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)__this->contactDamageAmount;
  if (0 < (int)method_00) {
    damageAmount = (int)method_00;
  }
  Health__TakeDamage(__this->health,damageAmount,method_00);
  return;
}

// ---- ReceiveContactDamage$$.ctor ----
// C#: void ReceiveContactDamage___ctor (ReceiveContactDamage_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

