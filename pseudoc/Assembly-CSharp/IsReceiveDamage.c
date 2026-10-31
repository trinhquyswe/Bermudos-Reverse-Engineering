// Assembly-CSharp :: IsReceiveDamage
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsReceiveDamage : Conditional // TypeDefIndex: 5569
{
	// Fields
	private HealthEvent healthEvent; // 0x2C
	private bool isReceiveDamage; // 0x30

	// Methods

	// RVA: 0x3733 Offset: 0x3733 VA: 0x3733 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3734 Offset: 0x3734 VA: 0x3734
	private void OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs) { }

	// RVA: 0x3735 Offset: 0x3735 VA: 0x3735 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3736 Offset: 0x3736 VA: 0x3736 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3737 Offset: 0x3737 VA: 0x3737
	public void .ctor() { }
}

===== C# end =====
*/

// ---- IsReceiveDamage$$OnAwake ----
// C#: void IsReceiveDamage__OnAwake (IsReceiveDamage_o* __this, const MethodInfo* method);

void IsReceiveDamage__OnAwake(IsReceiveDamage_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  HealthEvent_o *pHVar2;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar3;
  
  if (DAT_ram_00664ac8 == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056a7b4);
    unnamed_function_1099(&DAT_ram_0056ced8);
    DAT_ram_00664ac8 = '\x01';
  }
  pHVar2 = (HealthEvent_o *)unnamed_function_69916(__this,DAT_ram_0056ced8);
  __this->healthEvent = pHVar2;
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056a7b4,0);
  if (DAT_ram_00664b3f == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b3f = '\x01';
  }
  param1 = pHVar2->OnHealthChanged;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar3 = (Action_o *)unnamed_function_1144(&pHVar2->OnHealthChanged,param2_00,param1);
    bVar1 = param1 == pAVar3;
    param1 = pAVar3;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- IsReceiveDamage$$OnHealthChanged ----
// C#: void IsReceiveDamage__OnHealthChanged (IsReceiveDamage_o* __this, HealthEvent_o* healthEvent, HealthEventArgs_o* healthEventArgs, const MethodInfo* method);

void IsReceiveDamage__OnHealthChanged
               (IsReceiveDamage_o *__this,HealthEvent_o *healthEvent,
               HealthEventArgs_o *healthEventArgs,MethodInfo *method)

{
  __this->isReceiveDamage = true;
  return;
}

// ---- IsReceiveDamage$$OnUpdate ----
// C#: int32_t IsReceiveDamage__OnUpdate (IsReceiveDamage_o* __this, const MethodInfo* method);

void IsReceiveDamage__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,IsReceiveDamage_o *__this,
               MethodInfo *method)

{
  return;
}

// ---- IsReceiveDamage$$OnEnd ----
// C#: void IsReceiveDamage__OnEnd (IsReceiveDamage_o* __this, const MethodInfo* method);

void IsReceiveDamage__OnEnd(IsReceiveDamage_o *__this,MethodInfo *method)

{
  __this->isReceiveDamage = false;
  return;
}

// ---- IsReceiveDamage$$.ctor ----
// C#: void IsReceiveDamage___ctor (IsReceiveDamage_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

