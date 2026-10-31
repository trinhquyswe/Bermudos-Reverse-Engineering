// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindGameObjectsWithTag
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FindGameObjectsWithTag : Action // TypeDefIndex: 6205
{
	// Fields
	[Tooltip("The tag of the GameObject to find")]
	public SharedString tag; // 0x2C
	[RequiredField]
	[Tooltip("The objects found by name")]
	public SharedGameObjectList storeValue; // 0x30

	// Methods

	// RVA: 0x418C Offset: 0x418C VA: 0x418C Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x418D Offset: 0x418D VA: 0x418D Slot: 16
	public override void OnReset() { }

	// RVA: 0x418E Offset: 0x418E VA: 0x418E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindGameObjectsWithTag$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag_o *__this
               ,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int param1;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (DAT_ram_00664e0a == '\0') {
    unnamed_function_1099(&DAT_ram_00563078);
    unnamed_function_1099(&DAT_ram_00565c44);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664e0a = '\x01';
  }
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  iVar3 = unnamed_function_44691(uVar2,0);
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c44);
      iVar1 = DAT_ram_00563078;
      uVar2 = *(undefined4 *)(iVar3 + iVar5 * 4 + 0x10);
      *(int *)(param1 + 0x10) = *(int *)(param1 + 0x10) + 1;
      uVar4 = *(uint *)(param1 + 0xc);
      if (uVar4 < *(uint *)(*(int *)(param1 + 8) + 0xc)) {
        *(uint *)(param1 + 0xc) = uVar4 + 1;
        *(undefined4 *)(*(int *)(param1 + 8) + uVar4 * 4 + 0x10) = uVar2;
      }
      else {
        unnamed_function_6534
                  (param1,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar3 + 0xc));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindGameObjectsWithTag$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag_o
                *__this,MethodInfo *method)

{
  if (DAT_ram_00664e0b == '\0') {
    unnamed_function_1099(&DAT_ram_00565c48);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664e0b = '\x01';
  }
  unnamed_function_61204(__this->tag,0,DAT_ram_00565d10);
  unnamed_function_61204(__this->storeValue,0,DAT_ram_00565c48);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindGameObjectsWithTag$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindGameObjectsWithTag_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

