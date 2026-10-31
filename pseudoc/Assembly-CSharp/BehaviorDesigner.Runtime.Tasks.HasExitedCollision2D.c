// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.HasExitedCollision2D
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasExitedCollision2D : Conditional // TypeDefIndex: 5857
{
	// Fields
	[Tooltip("The tag of the GameObject to check for a collision against")]
	public SharedString tag; // 0x2C
	[Tooltip("The object that exited the collision")]
	public SharedGameObject collidedGameObject; // 0x30
	private bool exitedCollision; // 0x34

	// Methods

	// RVA: 0x3CB6 Offset: 0x3CB6 VA: 0x3CB6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3CB7 Offset: 0x3CB7 VA: 0x3CB7 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CB8 Offset: 0x3CB8 VA: 0x3CB8 Slot: 24
	public override void OnCollisionExit2D(Collision2D collision) { }

	// RVA: 0x3CB9 Offset: 0x3CB9 VA: 0x3CB9 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CBA Offset: 0x3CBA VA: 0x3CBA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision2D$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D__OnUpdate (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision2D$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D__OnEnd (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnEnd
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  __this->enteredCollision = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision2D$$OnCollisionExit2D ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D__OnCollisionExit2D (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D__OnCollisionExit2D
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o *__this,
               UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param2;
  BehaviorDesigner_Runtime_SharedGameObject_o *param1;
  
  if (DAT_ram_00664be9 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664be9 = '\x01';
  }
  uVar1 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
  iVar2 = unnamed_function_81507(uVar1,0);
  if (iVar2 == 0) {
    uVar1 = unnamed_function_16380(collision,0);
    param2 = unnamed_function_61203(__this->tag,DAT_ram_00565d0c);
    iVar2 = unnamed_function_44655(uVar1,param2,0);
    if (iVar2 == 0) {
      return;
    }
  }
  param1 = __this->collidedGameObject;
  uVar1 = unnamed_function_16380(collision,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565ca0);
  __this->exitedCollision = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision2D$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D__OnReset (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664bea == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664bea = '\x01';
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
  __this->collidedGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->tag = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasExitedCollision2D$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D___ctor (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D___ctor
               (BehaviorDesigner_Runtime_Tasks_HasExitedCollision2D_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664beb == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664beb = '\x01';
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

