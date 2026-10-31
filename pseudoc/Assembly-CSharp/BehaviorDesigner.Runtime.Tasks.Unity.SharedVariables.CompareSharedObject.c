// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObject
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedObject : Conditional // TypeDefIndex: 5975
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedObject variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedObject compareTo; // 0x30

	// Methods

	// RVA: 0x3E6D Offset: 0x3E6D VA: 0x3E6D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E6E Offset: 0x3E6E VA: 0x3E6E Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E6F Offset: 0x3E6F VA: 0x3E6F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObject$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_ram_00664c95 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565cdc);
    DAT_ram_00664c95 = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cdc);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44710(uVar1,0,0);
  if (iVar2 != 0) {
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cdc);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar2 = unnamed_function_44679(uVar1,0,0);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cdc);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44710(uVar1,0,0);
  if (iVar2 != 0) {
    uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cdc);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar2 = unnamed_function_44710(uVar1,0,0);
    if (iVar2 != 0) {
      return;
    }
  }
  piVar3 = (int *)unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cdc);
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cdc);
  (**(code **)((ulonglong)*(uint *)(*piVar3 + 0xc0) * 4))
            (piVar3,uVar1,*(undefined4 *)(*piVar3 + 0xc4));
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObject$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObject$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObject_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

