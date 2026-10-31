// Assembly-CSharp :: IsDead
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsDead : Conditional // TypeDefIndex: 5567
{
	// Fields
	private Health health; // 0x2C

	// Methods

	// RVA: 0x372C Offset: 0x372C VA: 0x372C Slot: 4
	public override void OnAwake() { }

	// RVA: 0x372D Offset: 0x372D VA: 0x372D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x372E Offset: 0x372E VA: 0x372E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- IsDead$$OnAwake ----
// C#: void IsDead__OnAwake (IsDead_o* __this, const MethodInfo* method);

void IsDead__OnAwake(IsDead_o *__this,MethodInfo *method)

{
  Health_o *pHVar1;
  
  if (DAT_ram_00664ac6 == '\0') {
    unnamed_function_1099(&DAT_ram_0056ced4);
    DAT_ram_00664ac6 = '\x01';
  }
  pHVar1 = (Health_o *)unnamed_function_69916(__this,DAT_ram_0056ced4);
  __this->health = pHVar1;
  return;
}

// ---- IsDead$$OnUpdate ----
// C#: int32_t IsDead__OnUpdate (IsDead_o* __this, const MethodInfo* method);

void IsDead__OnUpdate(BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,IsDead_o *__this,
                     MethodInfo *method)

{
  return;
}

// ---- IsDead$$.ctor ----
// C#: void IsDead___ctor (IsDead_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

