// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.HasEnteredTrigger
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasEnteredTrigger : Conditional // TypeDefIndex: 5854
{
	// Fields
	[Tooltip("The tag of the GameObject to check for a trigger against")]
	public SharedString tag; // 0x2C
	[Tooltip("The object that entered the trigger")]
	public SharedGameObject otherGameObject; // 0x30
	private bool enteredTrigger; // 0x34

	// Methods

	// RVA: 0x3CA7 Offset: 0x3CA7 VA: 0x3CA7 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3CA8 Offset: 0x3CA8 VA: 0x3CA8 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CA9 Offset: 0x3CA9 VA: 0x3CA9 Slot: 21
	public override void OnTriggerEnter(Collider other) { }

	// RVA: 0x3CAA Offset: 0x3CAA VA: 0x3CAA Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CAB Offset: 0x3CAB VA: 0x3CAB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredTrigger$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger__OnUpdate (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredTrigger$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger__OnEnd (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredCollision__OnEnd
               (BehaviorDesigner_Runtime_Tasks_HasEnteredCollision_o *__this,MethodInfo *method)

{
  __this->enteredCollision = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredTrigger$$OnTriggerEnter ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger__OnTriggerEnter (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger__OnTriggerEnter
               (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o *__this,
               UnityEngine_Collider_o *other,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 param2;
  BehaviorDesigner_Runtime_SharedGameObject_o *param1;
  
  if (DAT_ram_00664be1 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca0);
    DAT_ram_00664be1 = '\x01';
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
  __this->enteredTrigger = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredTrigger$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger__OnReset (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664be2 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664be2 = '\x01';
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

// ---- BehaviorDesigner.Runtime.Tasks.HasEnteredTrigger$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger___ctor (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger___ctor
               (BehaviorDesigner_Runtime_Tasks_HasEnteredTrigger_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664be3 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664be3 = '\x01';
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

