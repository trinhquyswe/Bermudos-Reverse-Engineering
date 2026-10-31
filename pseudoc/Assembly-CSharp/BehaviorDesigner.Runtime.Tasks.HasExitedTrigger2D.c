// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.HasExitedTrigger2D
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasExitedTrigger2D : Conditional // TypeDefIndex: 5859
{
	// Fields
	[Tooltip("The tag of the GameObject to check for a trigger against")]
	public SharedString tag; // 0x2C
	[Tooltip("The object that exited the trigger")]
	public SharedGameObject otherGameObject; // 0x30
	private bool exitedTrigger; // 0x34

	// Methods

	// RVA: 0x3CC0 Offset: 0x3CC0 VA: 0x3CC0 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3CC1 Offset: 0x3CC1 VA: 0x3CC1 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CC2 Offset: 0x3CC2 VA: 0x3CC2 Slot: 26
	public override void OnTriggerExit2D(Collider2D other) { }

	// RVA: 0x3CC3 Offset: 0x3CC3 VA: 0x3CC3 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CC4 Offset: 0x3CC4 VA: 0x3CC4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedTrigger2D$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D__OnUpdate (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedTrigger2D$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D__OnEnd (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnEnd
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  __this->enteredCollision = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedTrigger2D$$OnTriggerExit2D ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D__OnTriggerExit2D (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o* __this, UnityEngine_Collider2D_o* other, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D__OnTriggerExit2D
               (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o *__this,
               UnityEngine_Collider2D_o *other,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param2;
  BehaviorDesigner_Runtime_SharedGameObject_o *param1;
  
  if (DAT_ram_00664bef == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664bef = '\x01';
  }
  uVar1 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
  iVar2 = unnamed_function_81507(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = unnamed_function_44644(other,0);
    param2 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
    iVar2 = unnamed_function_44655(uVar1,param2,0);
    if (iVar2 == 0) {
      return;
    }
  }
  param1 = __this->otherGameObject;
  uVar1 = unnamed_function_44644(other,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  __this->exitedTrigger = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedTrigger2D$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D__OnReset (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664bf0 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664bf0 = '\x01';
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
  __this->otherGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->tag = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedTrigger2D$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D___ctor (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D___ctor
               (BehaviorDesigner_Runtime_Tasks_HasExitedTrigger2D_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664bf1 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664bf1 = '\x01';
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

