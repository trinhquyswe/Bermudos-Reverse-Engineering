// Assembly-CSharp :: DestroyedEventArgs
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DestroyedEventArgs : EventArgs // TypeDefIndex: 5618
{
	// Fields
	public bool playerDied; // 0x8
	public bool bossDied; // 0x9

	// Methods

	// RVA: 0x3822 Offset: 0x3822 VA: 0x3822
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DestroyedEventArgs$$.ctor ----
// C#: void DestroyedEventArgs___ctor (DestroyedEventArgs_o* __this, const MethodInfo* method);

void DestroyedEventArgs___ctor(DestroyedEventArgs_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b36 == '\0') {
    unnamed_function_1099(&System_EventArgs_TypeInfo);
    DAT_ram_00664b36 = '\x01';
  }
  if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_EventArgs_TypeInfo);
  }
  return;
}

