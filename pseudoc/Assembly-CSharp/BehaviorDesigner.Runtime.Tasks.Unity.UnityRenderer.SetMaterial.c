// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.SetMaterial
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetMaterial : Action // TypeDefIndex: 6067
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The material to set")]
	public SharedMaterial material; // 0x30
	private Renderer renderer; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x3FC1 Offset: 0x3FC1 VA: 0x3FC1 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3FC2 Offset: 0x3FC2 VA: 0x3FC2 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FC3 Offset: 0x3FC3 VA: 0x3FC3 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FC4 Offset: 0x3FC4 VA: 0x3FC4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.SetMaterial$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Renderer_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d34 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ae8);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d34 = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pRVar2 = (Renderer_o *)unnamed_function_73836(param1,DAT_ram_00569ae8);
    __this->prevGameObject = param1;
    __this->renderer = pRVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.SetMaterial$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664d35 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565ccc);
    unnamed_function_1099(&StringLiteral_6416 /* "Renderer is null" */);
    DAT_ram_00664d35 = '\x01';
  }
  uVar2 = *(undefined4 *)(__ret + 0x34);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(uVar2,0,0);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_6416 /* "Renderer is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x34);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565ccc);
  unnamed_function_52795(param1,uVar2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.SetMaterial$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityTransform_GetParent_o *__this,
               MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->storeValue = (BehaviorDesigner_Runtime_SharedTransform_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.SetMaterial$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_SetMaterial_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

