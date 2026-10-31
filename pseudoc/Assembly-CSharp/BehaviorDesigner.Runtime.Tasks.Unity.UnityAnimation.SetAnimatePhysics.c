// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.SetAnimatePhysics
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetAnimatePhysics : Action // TypeDefIndex: 6333
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("Are animations executed in the physics loop?")]
	public SharedBool animatePhysics; // 0x30
	private Animation animation; // 0x34
	private GameObject prevGameObject; // 0x38

	// Methods

	// RVA: 0x4389 Offset: 0x4389 VA: 0x4389 Slot: 5
	public override void OnStart() { }

	// RVA: 0x438A Offset: 0x438A VA: 0x438A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x438B Offset: 0x438B VA: 0x438B Slot: 16
	public override void OnReset() { }

	// RVA: 0x438C Offset: 0x438C VA: 0x438C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.SetAnimatePhysics$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics__OnStart (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics__OnStart
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  GameObject_o *param1;
  int iVar1;
  Animation_o *pAVar2;
  GameObject_o *param2_00;
  
  if (DAT_ram_00664f1c == '\0') {
    unnamed_function_1099(&DAT_ram_00569a4c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    DAT_ram_00664f1c = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.SetAnimatePhysics$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  
  if (DAT_ram_00664f1d == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&StringLiteral_1756 /* "Animation is null" */);
    DAT_ram_00664f1d = '\x01';
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
  param1 = *(undefined4 *)(__ret + 0x34);
  uVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  unnamed_function_45381(param1,uVar2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.SetAnimatePhysics$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics_o *__this,
               MethodInfo *method)

{
  if (DAT_ram_00664f1e == '\0') {
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664f1e = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  unnamed_function_61192(__this->animatePhysics,0,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityAnimation.SetAnimatePhysics$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityAnimation_SetAnimatePhysics_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

