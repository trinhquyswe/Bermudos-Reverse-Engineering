// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.HasExitedCollision
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasExitedCollision : Conditional // TypeDefIndex: 5856
{
	// Fields
	[Tooltip("The tag of the GameObject to check for a collision against")]
	public SharedString tag; // 0x2C
	[Tooltip("The object that exited the collision")]
	public SharedGameObject collidedGameObject; // 0x30
	private bool exitedCollision; // 0x34

	// Methods

	// RVA: 0x3CB1 Offset: 0x3CB1 VA: 0x3CB1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3CB2 Offset: 0x3CB2 VA: 0x3CB2 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CB3 Offset: 0x3CB3 VA: 0x3CB3 Slot: 20
	public override void OnCollisionExit(Collision collision) { }

	// RVA: 0x3CB4 Offset: 0x3CB4 VA: 0x3CB4 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CB5 Offset: 0x3CB5 VA: 0x3CB5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnUpdate (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnEnd (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnEnd
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  __this->enteredCollision = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision$$OnCollisionExit ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnCollisionExit (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnCollisionExit
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o *__this,
               UnityEngine_Collision_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param2;
  BehaviorDesigner_Runtime_SharedGameObject_o *param1;
  
  if (DAT_ram_00664be7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664be7 = '\x01';
  }
  uVar1 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
  iVar2 = unnamed_function_81507(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = unnamed_function_15125(collision,0);
    param2 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
    iVar2 = unnamed_function_44655(uVar1,param2,0);
    if (iVar2 == 0) {
      return;
    }
  }
  param1 = __this->collidedGameObject;
  uVar1 = unnamed_function_15125(collision,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  __this->exitedCollision = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnReset (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o *__this,MethodInfo *method)

{
  __this->collidedGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision___ctor (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision___ctor
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664be8 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664be8 = '\x01';
  }
  pvVar1 = StringLiteral_1 /* "" */;
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar2[4].monitor = pvVar1;
  __this->tag = pBVar2;
  unnamed_function_51834(__this,0);
  return;
}

