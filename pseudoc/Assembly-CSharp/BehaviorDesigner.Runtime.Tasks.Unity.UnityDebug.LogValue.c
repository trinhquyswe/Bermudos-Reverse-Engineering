// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogValue
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class LogValue : Action // TypeDefIndex: 6216
{
	// Fields
	[Tooltip("The variable to output")]
	public SharedGenericVariable variable; // 0x2C

	// Methods

	// RVA: 0x41AF Offset: 0x41AF VA: 0x41AF Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41B0 Offset: 0x41B0 VA: 0x41B0 Slot: 16
	public override void OnReset() { }

	// RVA: 0x41B1 Offset: 0x41B1 VA: 0x41B1
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogValue$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue_o *__this,MethodInfo *method
               )

{
  int iVar1;
  undefined4 param1;
  int iVar2;
  
  if (DAT_ram_00664e1d == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565ca8);
    DAT_ram_00664e1d = '\x01';
  }
  iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ca8);
  iVar2 = **(int **)(iVar1 + 0xc);
  param1 = (**(code **)((ulonglong)*(uint *)(iVar2 + 0xe8) * 4))
                     (*(int **)(iVar1 + 0xc),*(undefined4 *)(iVar2 + 0xec));
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(param1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogValue$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogValue$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogValue_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

