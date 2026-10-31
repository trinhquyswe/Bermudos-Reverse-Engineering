// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.BuildString
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BuildString : Action // TypeDefIndex: 5956
{
	// Fields
	[Tooltip("The array of strings")]
	public SharedString[] source; // 0x2C
	[RequiredField]
	[Tooltip("The stored result")]
	public SharedString storeResult; // 0x30

	// Methods

	// RVA: 0x3E2F Offset: 0x3E2F VA: 0x3E2F Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E30 Offset: 0x3E30 VA: 0x3E30 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E31 Offset: 0x3E31 VA: 0x3E31
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.BuildString$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  int *piVar2;
  int iVar3;
  undefined4 param2;
  
  iVar3 = 0;
  if (DAT_ram_00664c74 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664c74 = '\x01';
  }
  if (0 < *(int *)(*(int *)(__ret + 0x2c) + 0xc)) {
    do {
      param1 = *(undefined4 *)(__ret + 0x30);
      uVar1 = unnamed_function_61203(param1,DAT_ram_00565d0c);
      piVar2 = *(int **)(*(int *)(__ret + 0x2c) + iVar3 * 4 + 0x10);
      if (piVar2 == (int *)0x0) {
        param2 = 0;
      }
      else {
        param2 = (**(code **)((ulonglong)*(uint *)(*piVar2 + 0xd8) * 4))
                           (piVar2,*(undefined4 *)(*piVar2 + 0xdc));
      }
      uVar1 = unnamed_function_81364(uVar1,param2,0);
      unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(__ret + 0x2c) + 0xc));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.BuildString$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.BuildString$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_BuildString_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

