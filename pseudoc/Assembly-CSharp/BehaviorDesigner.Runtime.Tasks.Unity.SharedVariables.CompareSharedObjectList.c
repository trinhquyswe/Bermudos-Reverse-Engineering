// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObjectList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedObjectList : Conditional // TypeDefIndex: 5976
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedObjectList variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedObjectList compareTo; // 0x30

	// Methods

	// RVA: 0x3E70 Offset: 0x3E70 VA: 0x3E70 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E71 Offset: 0x3E71 VA: 0x3E71 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E72 Offset: 0x3E72 VA: 0x3E72
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObjectList$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList_o
               *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_ram_00664c96 == '\0') {
    unnamed_function_1099(&DAT_ram_00563728);
    unnamed_function_1099(&DAT_ram_0056372c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c50);
    DAT_ram_00664c96 = '\x01';
  }
  iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c50);
  if ((iVar1 != 0) ||
     (iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c50), iVar1 == 0)) {
    iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c50);
    if ((iVar1 == 0) &&
       (iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c50), iVar1 == 0))
    {
      return;
    }
    iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c50);
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c50);
    if (iVar4 == *(int *)(iVar1 + 0xc)) {
      iVar1 = 0;
      iVar4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c50);
      if (0 < *(int *)(iVar4 + 0xc)) {
        do {
          uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c50);
          uVar2 = unnamed_function_6529(uVar2,iVar1,DAT_ram_0056372c);
          uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c50);
          uVar3 = unnamed_function_6529(uVar3,iVar1,DAT_ram_0056372c);
          if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
            unnamed_function_94848(UnityEngine_Object_TypeInfo);
          }
          iVar4 = unnamed_function_44679(uVar2,uVar3,0);
          if (iVar4 != 0) {
            return;
          }
          iVar1 = iVar1 + 1;
          iVar4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c50);
        } while (iVar1 < *(int *)(iVar4 + 0xc));
      }
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObjectList$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedObjectList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedObjectList_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

