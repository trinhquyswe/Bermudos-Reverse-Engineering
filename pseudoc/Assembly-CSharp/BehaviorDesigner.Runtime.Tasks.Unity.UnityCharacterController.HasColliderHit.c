// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.HasColliderHit
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasColliderHit : Conditional // TypeDefIndex: 6229
{
	// Fields
	[Tooltip("The GameObject that the task operates on. If null the task GameObject is used.")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The tag of the GameObject to check for a collision against")]
	public SharedString tag; // 0x30
	[Tooltip("The object that started the collision")]
	public SharedGameObject collidedGameObject; // 0x34
	private bool enteredCollision; // 0x38

	// Methods

	// RVA: 0x41E0 Offset: 0x41E0 VA: 0x41E0 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41E1 Offset: 0x41E1 VA: 0x41E1 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x41E2 Offset: 0x41E2 VA: 0x41E2 Slot: 27
	public override void OnControllerColliderHit(ControllerColliderHit hit) { }

	// RVA: 0x41E3 Offset: 0x41E3 VA: 0x41E3 Slot: 16
	public override void OnReset() { }

	// RVA: 0x41E4 Offset: 0x41E4 VA: 0x41E4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.HasColliderHit$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o
               *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.HasColliderHit$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit__OnEnd (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o* __this, const MethodInfo* method);

void SkillsAction__OnEnd(SkillsAction_o *__this,MethodInfo *method)

{
  __this->isFirstUpdate = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.HasColliderHit$$OnControllerColliderHit ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit__OnControllerColliderHit (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o* __this, UnityEngine_ControllerColliderHit_o* hit, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit__OnControllerColliderHit
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o
                *__this,UnityEngine_ControllerColliderHit_o *hit,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  BehaviorDesigner_Runtime_SharedGameObject_o *param1;
  
  if (DAT_ram_00664e36 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664e36 = '\x01';
  }
  uVar1 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
  iVar2 = unnamed_function_81507(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
    uVar3 = unnamed_function_15117(hit,0);
    uVar3 = unnamed_function_44689(uVar3,0);
    iVar2 = unnamed_function_81492(uVar1,uVar3,0);
    if (iVar2 == 0) {
      return;
    }
  }
  param1 = __this->collidedGameObject;
  uVar1 = unnamed_function_15117(hit,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  __this->enteredCollision = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.HasColliderHit$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o
                *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664e37 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664e37 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->collidedGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->tag = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityCharacterController.HasColliderHit$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityCharacterController_HasColliderHit_o
                *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664e38 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664e38 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->tag = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

