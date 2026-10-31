// Assembly-CSharp :: HealthEventArgs
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HealthEventArgs : EventArgs // TypeDefIndex: 5623
{
	// Fields
	public float healthPercent; // 0x8
	public int healthAmount; // 0xC
	public int damageAmount; // 0x10

	// Methods

	// RVA: 0x3839 Offset: 0x3839 VA: 0x3839
	public void .ctor() { }
}

===== C# end =====
*/

// ---- HealthEventArgs$$.ctor ----
// C#: void HealthEventArgs___ctor (HealthEventArgs_o* __this, const MethodInfo* method);

void HealthEventArgs___ctor(HealthEventArgs_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b42 == '\0') {
    unnamed_function_1099(&System_EventArgs_TypeInfo);
    DAT_ram_00664b42 = '\x01';
  }
  if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_EventArgs_TypeInfo);
  }
  return;
}

