// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.IsEnabled
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsEnabled : Conditional // TypeDefIndex: 6253
{
	// Fields
	[Tooltip("The Object to use")]
	public SharedObject specifiedObject; // 0x2C

	// Methods

	// RVA: 0x4240 Offset: 0x4240 VA: 0x4240 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4241 Offset: 0x4241 VA: 0x4241 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4242 Offset: 0x4242 VA: 0x4242
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.IsEnabled$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled_o *__this,
               MethodInfo *method)

{
  int *piVar1;
  int param1;
  
  if (DAT_ram_00664e67 == '\0') {
    unnamed_function_1099(&UnityEngine_Behaviour_TypeInfo);
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cdc);
    unnamed_function_1099(&StringLiteral_6840 /* "SpecifiedObject is null or not a subclass of UnityEngine...." */);
    DAT_ram_00664e67 = '\x01';
  }
  param1 = *(int *)(__ret + 0x2c);
  if (param1 == 0) {
    piVar1 = (int *)unnamed_function_61203(0,DAT_ram_00565cdc);
    if (piVar1 != (int *)0x0) {
      if (((uint)*(byte *)(UnityEngine_Behaviour_TypeInfo + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)
          ) && (*(int *)(*(int *)(*piVar1 + 100) +
                         (uint)*(byte *)(UnityEngine_Behaviour_TypeInfo + 0xb8) * 4 + -4) ==
                UnityEngine_Behaviour_TypeInfo)) {
        param1 = *(int *)(__ret + 0x2c);
        goto code_r0x81a836b5;
      }
    }
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6840 /* "SpecifiedObject is null or not a subclass of UnityEngine...." */,0);
    return;
  }
code_r0x81a836b5:
  piVar1 = (int *)unnamed_function_61203(param1,DAT_ram_00565cdc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else if ((uint)*(byte *)(*piVar1 + 0xb8) < (uint)*(byte *)(UnityEngine_Behaviour_TypeInfo + 0xb8))
  {
    piVar1 = (int *)0x0;
  }
  else if (*(int *)(*(int *)(*piVar1 + 100) +
                    (uint)*(byte *)(UnityEngine_Behaviour_TypeInfo + 0xb8) * 4 + -4) !=
           UnityEngine_Behaviour_TypeInfo) {
    piVar1 = (int *)0x0;
  }
  unnamed_function_44619(piVar1,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.IsEnabled$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664e68 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ce0);
    DAT_ram_00664e68 = '\x01';
  }
  if (__this->specifiedObject != (BehaviorDesigner_Runtime_SharedObject_o *)0x0) {
    unnamed_function_61204(__this->specifiedObject,0,DAT_ram_00565ce0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityBehaviour.IsEnabled$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityBehaviour_IsEnabled_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

