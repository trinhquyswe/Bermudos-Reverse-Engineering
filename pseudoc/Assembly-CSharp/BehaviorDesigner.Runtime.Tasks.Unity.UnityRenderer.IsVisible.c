// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.IsVisible
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IsVisible : Conditional // TypeDefIndex: 6066
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	private Renderer renderer; // 0x30
	private GameObject prevGameObject; // 0x34

	// Methods

	// RVA: 0x3FBD Offset: 0x3FBD VA: 0x3FBD Slot: 5
	public override void OnStart() { }

	// RVA: 0x3FBE Offset: 0x3FBE VA: 0x3FBE Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3FBF Offset: 0x3FBF VA: 0x3FBF Slot: 16
	public override void OnReset() { }

	// RVA: 0x3FC0 Offset: 0x3FC0 VA: 0x3FC0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.IsVisible$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Renderer_o *pRVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664d32 == '\0') {
    unnamed_function_1099(&DAT_ram_00569ae8);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664d32 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.IsVisible$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664d33 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_6416 /* "Renderer is null" */);
    DAT_ram_00664d33 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(param1,0,0);
  if (iVar1 == 0) {
    unnamed_function_52799(*(undefined4 *)(__ret + 0x30),0);
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52416(StringLiteral_6416 /* "Renderer is null" */,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.IsVisible$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Timeline_IsPaused_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityRenderer.IsVisible$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityRenderer_IsVisible_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

