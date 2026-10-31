// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.GetAnimatePhysics
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetAnimatePhysics : Action // TypeDefIndex: 6327
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("Are the if animations are executed in the physics loop?")]
	[RequiredField]
	public SharedBool storeValue; // 0x30
	private Animation animation; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4371 Offset: 0x4371 VA: 0x4371 Slot: 5
	public override void OnStart() { }

	// RVA: 0x4372 Offset: 0x4372 VA: 0x4372 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x4373 Offset: 0x4373 VA: 0x4373 Slot: 16
	public override void OnReset() { }

	// RVA: 0x4374 Offset: 0x4374 VA: 0x4374
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.GetAnimatePhysics$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animation_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664f0b == '\0') {
    unnamed_function_1099(&DAT_ram_00569a4c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664f0b = '\x01';
  }
  param2 = unnamed_function_61203(__this->targetGameObject,DAT_ram_00565c9c);
  param1 = (GameObject_o *)unnamed_function_51881(__this,param2,0);
  param2_00 = __this->prevGameObject;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44679(param1,param2_00,0);
  if (iVar1 != 0) {
    pAVar2 = (Animation_o *)unnamed_function_73836(param1,DAT_ram_00569a4c);
    __this->prevGameObject = param1;
    __this->animation = pAVar2;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.GetAnimatePhysics$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664f0c == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c7c);
    unnamed_function_1099(&StringLiteral_1756 /* "Animation is null" */);
    DAT_ram_00664f0c = '\x01';
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
    unnamed_function_52416(StringLiteral_1756 /* "Animation is null" */,0);
    return;
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar2 = unnamed_function_45380(*(undefined4 *)(__ret + 0x34),0);
  unnamed_function_61192(param1,uVar2,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.GetAnimatePhysics$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664f0d == '\0') {
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664f0d = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  unnamed_function_61192(__this->storeValue,0,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.GetAnimatePhysics$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_GetAnimatePhysics_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

