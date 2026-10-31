// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformsToTransformList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedTransformsToTransformList : Action // TypeDefIndex: 6003
{
	// Fields
	[Tooltip("The Transforms value")]
	public SharedTransform[] transforms; // 0x2C
	[RequiredField]
	[Tooltip("The SharedTransformList to set")]
	public SharedTransformList storedTransformList; // 0x30

	// Methods

	// RVA: 0x3EC2 Offset: 0x3EC2 VA: 0x3EC2 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3EC3 Offset: 0x3EC3 VA: 0x3EC3 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3EC4 Offset: 0x3EC4 VA: 0x3EC4 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3EC5 Offset: 0x3EC5 VA: 0x3EC5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformsToTransformList$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList__OnAwake (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList__OnAwake
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList_o
                *__this,MethodInfo *method)

{
  undefined4 param1;
  BehaviorDesigner_Runtime_SharedTransformList_o *param1_00;
  
  if (DAT_ram_00664cb4 == '\0') {
    unnamed_function_1099(&DAT_ram_00563fb8);
    unnamed_function_1099(&System_Collections_Generic_List_Transform__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c60);
    DAT_ram_00664cb4 = '\x01';
  }
  param1_00 = __this->storedTransformList;
  param1 = unnamed_function_95402(System_Collections_Generic_List_Transform__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563fb8);
  unnamed_function_61204(param1_00,param1,DAT_ram_00565c60);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformsToTransformList$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList_o
               *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 param2;
  int iVar3;
  uint uVar4;
  
  if (DAT_ram_00664cb5 == '\0') {
    unnamed_function_1099(&DAT_ram_00563fc4);
    unnamed_function_1099(&DAT_ram_00563fc8);
    unnamed_function_1099(&DAT_ram_00565c5c);
    unnamed_function_1099(&DAT_ram_00565d18);
    DAT_ram_00664cb5 = '\x01';
  }
  if ((*(int *)(__ret + 0x2c) != 0) && (*(int *)(*(int *)(__ret + 0x2c) + 0xc) != 0)) {
    iVar1 = 0;
    iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c5c);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar3 = *(int *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = 0;
    if (0 < iVar3) {
      unnamed_function_84588(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
    }
    if (0 < *(int *)(*(int *)(__ret + 0x2c) + 0xc)) {
      do {
        iVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c5c);
        param2 = unnamed_function_61203
                           (*(undefined4 *)(*(int *)(__ret + 0x2c) + iVar1 * 4 + 0x10),
                            DAT_ram_00565d18);
        iVar2 = DAT_ram_00563fc4;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        uVar4 = *(uint *)(iVar3 + 0xc);
        if (uVar4 < *(uint *)(*(int *)(iVar3 + 8) + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar4 + 1;
          *(undefined4 *)(*(int *)(iVar3 + 8) + uVar4 * 4 + 0x10) = param2;
        }
        else {
          unnamed_function_6534
                    (iVar3,param2,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(int *)(__ret + 0x2c) + 0xc));
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformsToTransformList$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedTransformsToTransformList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_SharedTransformsToTransformList_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

