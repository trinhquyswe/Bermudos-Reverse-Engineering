// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindWithTag
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FindWithTag : Action // TypeDefIndex: 6206
{
	// Fields
	[Tooltip("The tag of the GameObject to find")]
	public SharedString tag; // 0x2C
	[Tooltip("Should a random GameObject be found?")]
	public SharedBool random; // 0x30
	[RequiredField]
	[Tooltip("The object found by name")]
	public SharedGameObject storeValue; // 0x34

	// Methods

	// RVA: 0x418F Offset: 0x418F VA: 0x418F Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4190 Offset: 0x4190 VA: 0x4190 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4191 Offset: 0x4191 VA: 0x4191
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindWithTag$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag_o *__this,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_ram_00664e0c == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664e0c = '\x01';
  }
  iVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(__ret + 0x34);
    uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
    uVar3 = unnamed_function_44681(uVar3,0);
  }
  else {
    uVar4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
    iVar1 = unnamed_function_44691(uVar4,0);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      return;
    }
    uVar4 = *(undefined4 *)(__ret + 0x34);
    iVar2 = unnamed_function_44584(0,*(int *)(iVar1 + 0xc),0);
    uVar3 = *(undefined4 *)(iVar1 + iVar2 * 4 + 0x10);
  }
  unnamed_function_61204(uVar4,uVar3,DAT_ram_00565ca0);
  uVar4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c9c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  unnamed_function_44679(uVar4,0,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindWithTag$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664e0d == '\0') {
    unnamed_function_1099(&DAT_ram_00565ca0);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664e0d = '\x01';
  }
  unnamed_function_61204(__this->tag,0,DAT_ram_00565d10);
  unnamed_function_61204(__this->storeValue,0,DAT_ram_00565ca0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityGameObject.FindWithTag$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityGameObject_FindWithTag_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

