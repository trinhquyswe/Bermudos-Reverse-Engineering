// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.SetTimeScale
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetTimeScale : Action // TypeDefIndex: 5955
{
	// Fields
	[Tooltip("The timescale")]
	public SharedFloat timeScale; // 0x2C

	// Methods

	// RVA: 0x3E2C Offset: 0x3E2C VA: 0x3E2C Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E2D Offset: 0x3E2D VA: 0x3E2D Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E2E Offset: 0x3E2E VA: 0x3E2E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.SetTimeScale$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale_o *__this,
               MethodInfo *method)

{
  float param1;
  
  if (DAT_ram_00664c72 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664c72 = '\x01';
  }
  param1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d00);
  unnamed_function_44887(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.SetTimeScale$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664c73 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664c73 = '\x01';
  }
  unnamed_function_61227(__this->timeScale,0.0,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.SetTimeScale$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_SetTimeScale_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

