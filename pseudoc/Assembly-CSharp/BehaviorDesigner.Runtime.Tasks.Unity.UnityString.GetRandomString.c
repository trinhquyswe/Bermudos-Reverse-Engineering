// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetRandomString
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetRandomString : Action // TypeDefIndex: 5960
{
	// Fields
	[Tooltip("The array of strings")]
	public SharedString[] source; // 0x2C
	[Tooltip("The stored result")]
	[RequiredField]
	public SharedString storeResult; // 0x30

	// Methods

	// RVA: 0x3E3C Offset: 0x3E3C VA: 0x3E3C Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E3D Offset: 0x3E3D VA: 0x3E3D Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E3E Offset: 0x3E3E VA: 0x3E3E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetRandomString$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param2;
  undefined4 param1;
  int iVar2;
  
  if (DAT_ram_00664c7c == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664c7c = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  iVar2 = *(int *)(__ret + 0x2c);
  iVar1 = unnamed_function_44584(0,*(undefined4 *)(iVar2 + 0xc),0);
  param2 = unnamed_function_61203(*(undefined4 *)(iVar1 * 4 + iVar2 + 0x10),DAT_ram_00565d0c);
  unnamed_function_61204(param1,param2,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetRandomString$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.GetRandomString$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_GetRandomString_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

