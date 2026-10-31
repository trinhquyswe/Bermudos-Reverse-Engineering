// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.HasReceivedEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HasReceivedEvent : Conditional // TypeDefIndex: 5851
{
	// Fields
	[Tooltip("The name of the event to receive")]
	public SharedString eventName; // 0x2C
	[Tooltip("Optionally store the first sent argument")]
	[SharedRequired]
	public SharedVariable storedValue1; // 0x30
	[SharedRequired]
	[Tooltip("Optionally store the second sent argument")]
	public SharedVariable storedValue2; // 0x34
	[SharedRequired]
	[Tooltip("Optionally store the third sent argument")]
	public SharedVariable storedValue3; // 0x38
	private bool eventReceived; // 0x3C
	private bool registered; // 0x3D

	// Methods

	// RVA: 0x3C93 Offset: 0x3C93 VA: 0x3C93 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C94 Offset: 0x3C94 VA: 0x3C94 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C95 Offset: 0x3C95 VA: 0x3C95 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3C96 Offset: 0x3C96 VA: 0x3C96
	private void ReceivedEvent() { }

	// RVA: 0x3C97 Offset: 0x3C97 VA: 0x3C97
	private void ReceivedEvent(object arg1) { }

	// RVA: 0x3C98 Offset: 0x3C98 VA: 0x3C98
	private void ReceivedEvent(object arg1, object arg2) { }

	// RVA: 0x3C99 Offset: 0x3C99 VA: 0x3C99
	private void ReceivedEvent(object arg1, object arg2, object arg3) { }

	// RVA: 0x3C9A Offset: 0x3C9A VA: 0x3C9A Slot: 15
	public override void OnBehaviorComplete() { }

	// RVA: 0x3C9B Offset: 0x3C9B VA: 0x3C9B Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C9C Offset: 0x3C9C VA: 0x3C9C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnStart (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnStart
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664bd6 == '\0') {
    unnamed_function_1099(&System_Action_object__TypeInfo);
    unnamed_function_1099(&System_Action_object__object__TypeInfo);
    unnamed_function_1099(&System_Action_object__object__object__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_005676b0);
    unnamed_function_1099(&DAT_ram_005676ac);
    unnamed_function_1099(&DAT_ram_005676a8);
    unnamed_function_1099(&DAT_ram_00569d94);
    unnamed_function_1099(&DAT_ram_00569d90);
    unnamed_function_1099(&DAT_ram_00569d88);
    unnamed_function_1099(&DAT_ram_00569d8c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664bd6 = '\x01';
  }
  if (__this->registered == false) {
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_TypeInfo);
    unnamed_function_82700(uVar2,__this,DAT_ram_00569d88,0);
    unnamed_function_51611(uVar3,uVar1,uVar2,0);
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_object__TypeInfo);
    unnamed_function_60074(uVar2,__this,DAT_ram_00569d8c,0);
    unnamed_function_65304(uVar3,uVar1,uVar2,DAT_ram_005676a8);
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_object__object__TypeInfo);
    unnamed_function_60334(uVar2,__this,DAT_ram_00569d90,0);
    unnamed_function_65304(uVar3,uVar1,uVar2,DAT_ram_005676ac);
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_object__object__object__TypeInfo);
    unnamed_function_60361(uVar2,__this,DAT_ram_00569d94,0);
    unnamed_function_65304(uVar3,uVar1,uVar2,DAT_ram_005676b0);
    __this->registered = true;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnUpdate (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnEnd (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnEnd
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664bd7 == '\0') {
    unnamed_function_1099(&System_Action_object__TypeInfo);
    unnamed_function_1099(&System_Action_object__object__TypeInfo);
    unnamed_function_1099(&System_Action_object__object__object__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_005676c8);
    unnamed_function_1099(&DAT_ram_005676c4);
    unnamed_function_1099(&DAT_ram_005676c0);
    unnamed_function_1099(&DAT_ram_00569d94);
    unnamed_function_1099(&DAT_ram_00569d90);
    unnamed_function_1099(&DAT_ram_00569d88);
    unnamed_function_1099(&DAT_ram_00569d8c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664bd7 = '\x01';
  }
  if (__this->eventReceived != false) {
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_TypeInfo);
    unnamed_function_82700(uVar2,__this,DAT_ram_00569d88,0);
    unnamed_function_51615(uVar3,uVar1,uVar2,0);
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_object__TypeInfo);
    unnamed_function_60074(uVar2,__this,DAT_ram_00569d8c,0);
    unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c0);
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_object__object__TypeInfo);
    unnamed_function_60334(uVar2,__this,DAT_ram_00569d90,0);
    unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c4);
    uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
    uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
    uVar2 = unnamed_function_95402(System_Action_object__object__object__TypeInfo);
    unnamed_function_60361(uVar2,__this,DAT_ram_00569d94,0);
    unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c8);
    __this->registered = false;
  }
  __this->eventReceived = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$ReceivedEvent ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,MethodInfo *method)

{
  __this->eventReceived = true;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$ReceivedEvent ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, Il2CppObject* arg1, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,Il2CppObject *arg1,
               MethodInfo *method)

{
  int iVar1;
  
  __this->eventReceived = true;
  if ((__this->storedValue1 != (SharedVariable_o *)0x0) &&
     (iVar1 = unnamed_function_51865(__this->storedValue1,0), iVar1 == 0)) {
    iVar1 = __this->storedValue1->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xf0) * 4))
              (__this->storedValue1,arg1,*(undefined4 *)(iVar1 + 0xf4));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$ReceivedEvent ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, Il2CppObject* arg1, Il2CppObject* arg2, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,Il2CppObject *arg1,
               Il2CppObject *arg2,MethodInfo *method)

{
  int iVar1;
  
  __this->eventReceived = true;
  if ((__this->storedValue1 != (SharedVariable_o *)0x0) &&
     (iVar1 = unnamed_function_51865(__this->storedValue1,0), iVar1 == 0)) {
    iVar1 = __this->storedValue1->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xf0) * 4))
              (__this->storedValue1,arg1,*(undefined4 *)(iVar1 + 0xf4));
  }
  if ((__this->storedValue2 != (SharedVariable_o *)0x0) &&
     (iVar1 = unnamed_function_51865(__this->storedValue2,0), iVar1 == 0)) {
    iVar1 = __this->storedValue2->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xf0) * 4))
              (__this->storedValue2,arg2,*(undefined4 *)(iVar1 + 0xf4));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$ReceivedEvent ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, Il2CppObject* arg1, Il2CppObject* arg2, Il2CppObject* arg3, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__ReceivedEvent
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,Il2CppObject *arg1,
               Il2CppObject *arg2,Il2CppObject *arg3,MethodInfo *method)

{
  int iVar1;
  
  __this->eventReceived = true;
  if ((__this->storedValue1 != (SharedVariable_o *)0x0) &&
     (iVar1 = unnamed_function_51865(__this->storedValue1,0), iVar1 == 0)) {
    iVar1 = __this->storedValue1->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xf0) * 4))
              (__this->storedValue1,arg1,*(undefined4 *)(iVar1 + 0xf4));
  }
  if ((__this->storedValue2 != (SharedVariable_o *)0x0) &&
     (iVar1 = unnamed_function_51865(__this->storedValue2,0), iVar1 == 0)) {
    iVar1 = __this->storedValue2->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xf0) * 4))
              (__this->storedValue2,arg2,*(undefined4 *)(iVar1 + 0xf4));
  }
  if ((__this->storedValue3 != (SharedVariable_o *)0x0) &&
     (iVar1 = unnamed_function_51865(__this->storedValue3,0), iVar1 == 0)) {
    iVar1 = __this->storedValue3->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0xf0) * 4))
              (__this->storedValue3,arg3,*(undefined4 *)(iVar1 + 0xf4));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$OnBehaviorComplete ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnBehaviorComplete (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnBehaviorComplete
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664bd8 == '\0') {
    unnamed_function_1099(&System_Action_object__TypeInfo);
    unnamed_function_1099(&System_Action_object__object__TypeInfo);
    unnamed_function_1099(&System_Action_object__object__object__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_005676c8);
    unnamed_function_1099(&DAT_ram_005676c4);
    unnamed_function_1099(&DAT_ram_005676c0);
    unnamed_function_1099(&DAT_ram_00569d94);
    unnamed_function_1099(&DAT_ram_00569d90);
    unnamed_function_1099(&DAT_ram_00569d88);
    unnamed_function_1099(&DAT_ram_00569d8c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664bd8 = '\x01';
  }
  uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
  uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
  uVar2 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(uVar2,__this,DAT_ram_00569d88,0);
  unnamed_function_51615(uVar3,uVar1,uVar2,0);
  uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
  uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
  uVar2 = unnamed_function_95402(System_Action_object__TypeInfo);
  unnamed_function_60074(uVar2,__this,DAT_ram_00569d8c,0);
  unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c0);
  uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
  uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
  uVar2 = unnamed_function_95402(System_Action_object__object__TypeInfo);
  unnamed_function_60334(uVar2,__this,DAT_ram_00569d90,0);
  unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c4);
  uVar3 = *(undefined4 *)(__this->pad_8 + 0xc);
  uVar1 = unnamed_function_61203(__this->eventName,DAT_ram_00565d0c);
  uVar2 = unnamed_function_95402(System_Action_object__object__object__TypeInfo);
  unnamed_function_60361(uVar2,__this,DAT_ram_00569d94,0);
  unnamed_function_65311(uVar3,uVar1,uVar2,DAT_ram_005676c8);
  __this->eventReceived = false;
  __this->registered = false;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnReset (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent__OnReset
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664bd9 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664bd9 = '\x01';
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
  __this->eventName = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.HasReceivedEvent$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent___ctor (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_HasReceivedEvent___ctor
               (BehaviorDesigner_Runtime_Tasks_HasReceivedEvent_o *__this,MethodInfo *method)

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664bda == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664bda = '\x01';
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
  __this->eventName = pBVar2;
  unnamed_function_51834(__this,0);
  return;
}

