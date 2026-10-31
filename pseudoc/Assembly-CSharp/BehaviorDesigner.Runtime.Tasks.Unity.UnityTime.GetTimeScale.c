// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.GetTimeScale
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetTimeScale : Action // TypeDefIndex: 5954
{
	// Fields
	[Tooltip("The variable to store the result")]
	public SharedFloat storeResult; // 0x2C

	// Methods

	// RVA: 0x3E29 Offset: 0x3E29 VA: 0x3E29 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E2A Offset: 0x3E2A VA: 0x3E2A Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E2B Offset: 0x3E2B VA: 0x3E2B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.GetTimeScale$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale_o *__this,
               MethodInfo *method)

{
  float param2;
  undefined4 param1;
  
  if (DAT_ram_00664c71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664c71 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  param2 = unnamed_function_44886(0);
  unnamed_function_61227(param1,param2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.GetTimeScale$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetDeltaTime__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetDeltaTime_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
  
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  param1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(param1,0.0,DAT_ram_00565d04);
  __this->storeResult = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityTime.GetTimeScale$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityTime_GetTimeScale_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

