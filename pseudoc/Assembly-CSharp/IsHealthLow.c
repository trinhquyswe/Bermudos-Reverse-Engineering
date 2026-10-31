// Assembly-CSharp :: IsHealthLow
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsHealthLow : Conditional // TypeDefIndex: 5568
{
	// Fields
	public float healthThreshold; // 0x2C
	private Health health; // 0x30
	private bool isFirstEnd; // 0x34

	// Methods

	// RVA: 0x372F Offset: 0x372F VA: 0x372F Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3730 Offset: 0x3730 VA: 0x3730 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3731 Offset: 0x3731 VA: 0x3731 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3732 Offset: 0x3732 VA: 0x3732
	public void .ctor() { }
}

===== C# end =====
*/

// ---- IsHealthLow$$OnAwake ----
// C#: void IsHealthLow__OnAwake (IsHealthLow_o* __this, const MethodInfo* method);

void IsHealthLow__OnAwake(IsHealthLow_o *__this,MethodInfo *method)

{
  Health_o *pHVar1;
  
  if (DAT_ram_00664ac7 == '\0') {
    unnamed_function_1099(&DAT_ram_0056ced4);
    DAT_ram_00664ac7 = '\x01';
  }
  pHVar1 = (Health_o *)unnamed_function_69916(__this,DAT_ram_0056ced4);
  __this->health = pHVar1;
  return;
}

// ---- IsHealthLow$$OnUpdate ----
// C#: int32_t IsHealthLow__OnUpdate (IsHealthLow_o* __this, const MethodInfo* method);

void IsHealthLow__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,IsHealthLow_o *__this,
               MethodInfo *method)

{
  return;
}

// ---- IsHealthLow$$OnEnd ----
// C#: void IsHealthLow__OnEnd (IsHealthLow_o* __this, const MethodInfo* method);

void IsHealthLow__OnEnd(IsHealthLow_o *__this,MethodInfo *method)

{
  if (__this->isFirstEnd == false) {
    __this->healthThreshold = -1.0;
  }
  __this->isFirstEnd = false;
  return;
}

// ---- IsHealthLow$$.ctor ----
// C#: void IsHealthLow___ctor (IsHealthLow_o* __this, const MethodInfo* method);

void IsHealthLow___ctor(IsHealthLow_o *__this,MethodInfo *method)

{
  __this->isFirstEnd = true;
  __this->healthThreshold = 0.5;
  unnamed_function_51834(__this,0);
  return;
}

