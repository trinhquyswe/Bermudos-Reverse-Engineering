// Assembly-CSharp :: MovementToPositionArgs
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MovementToPositionArgs : EventArgs // TypeDefIndex: 5681
{
	// Fields
	public Vector3 movePosition; // 0x8
	public Vector3 currentPosition; // 0x14
	public float moveSpeed; // 0x20
	public Vector2 moveDirection; // 0x24
	public bool isDashing; // 0x2C

	// Methods

	// RVA: 0x3974 Offset: 0x3974 VA: 0x3974
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MovementToPositionArgs$$.ctor ----
// C#: void MovementToPositionArgs___ctor (MovementToPositionArgs_o* __this, const MethodInfo* method);

void MovementToPositionArgs___ctor(MovementToPositionArgs_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664931 == '\0') {
    unnamed_function_1099(&System_EventArgs_TypeInfo);
    DAT_ram_00664931 = '\x01';
  }
  if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_EventArgs_TypeInfo);
  }
  return;
}

