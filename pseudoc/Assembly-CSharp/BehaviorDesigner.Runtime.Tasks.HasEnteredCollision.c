// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.HasEnteredCollision
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasEnteredCollision : Conditional // TypeDefIndex: 5852
{
	// Fields
	[Tooltip("The tag of the GameObject to check for a collision against")]
	public SharedString tag; // 0x2C
	[Tooltip("The object that started the collision")]
	public SharedGameObject collidedGameObject; // 0x30
	private bool enteredCollision; // 0x34

	// Methods

	// RVA: 0x3C9D Offset: 0x3C9D VA: 0x3C9D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C9E Offset: 0x3C9E VA: 0x3C9E Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C9F Offset: 0x3C9F VA: 0x3C9F Slot: 19
	public override void OnCollisionEnter(Collision collision) { }

	// RVA: 0x3CA0 Offset: 0x3CA0 VA: 0x3CA0 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CA1 Offset: 0x3CA1 VA: 0x3CA1
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredCollision$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnUpdate (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredCollision$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnEnd (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnEnd
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  __this->enteredCollision = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredCollision$$OnCollisionEnter ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnCollisionEnter (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnCollisionEnter
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,
               UnityEngine_Collision_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param2;
  BehaviorDesigner_Runtime_SharedGameObject_o *param1;
  
  if (DAT_ram_00664bdb == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664bdb = '\x01';
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
  __this->enteredCollision = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredCollision$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnReset (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664bdc == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664bdc = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredCollision$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision___ctor (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision___ctor
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664bdd == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664bdd = '\x01';
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

