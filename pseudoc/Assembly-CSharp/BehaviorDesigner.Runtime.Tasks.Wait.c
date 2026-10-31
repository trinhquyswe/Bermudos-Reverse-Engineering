// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Wait
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Wait : Action // TypeDefIndex: 5840
{
	// Fields
	[Tooltip("The amount of time to wait")]
	public SharedFloat waitTime; // 0x2C
	[Tooltip("Should the wait be randomized?")]
	public SharedBool randomWait; // 0x30
	[Tooltip("The minimum wait time if random wait is enabled")]
	public SharedFloat randomWaitMin; // 0x34
	[Tooltip("The maximum wait time if random wait is enabled")]
	public SharedFloat randomWaitMax; // 0x38
	private float waitDuration; // 0x3C
	private float startTime; // 0x40
	private float pauseTime; // 0x44

	// Methods

	// RVA: 0x3C30 Offset: 0x3C30 VA: 0x3C30 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3C31 Offset: 0x3C31 VA: 0x3C31 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C32 Offset: 0x3C32 VA: 0x3C32 Slot: 10
	public override void OnPause(bool paused) { }

	// RVA: 0x3C33 Offset: 0x3C33 VA: 0x3C33 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C34 Offset: 0x3C34 VA: 0x3C34
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Wait$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_Wait__OnStart (BehaviorDesigner_Runtime_Tasks_Wait_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Wait__OnStart
               (BehaviorDesigner_Runtime_Tasks_Wait_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  float param2;
  
  if (DAT_ram_00664bb1 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664bb1 = '\x01';
  }
  fVar1 = unnamed_function_44878(0);
  __this->startTime = fVar1;
  iVar2 = unnamed_function_61191(__this->randomWait,DAT_ram_00565c78);
  if (iVar2 != 0) {
    fVar1 = unnamed_function_61226(__this->randomWaitMin,DAT_ram_00565d00);
    param2 = unnamed_function_61226(__this->randomWaitMax,DAT_ram_00565d00);
    fVar1 = unnamed_function_44583(fVar1,param2,0);
    __this->waitDuration = fVar1;
    return;
  }
  fVar1 = unnamed_function_61226(__this->waitTime,DAT_ram_00565d00);
  __this->waitDuration = fVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Wait$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Wait__OnUpdate (BehaviorDesigner_Runtime_Tasks_Wait_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Wait__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Wait_o *__this,MethodInfo *method)

{
  unnamed_function_44878(0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Wait$$OnPause ----
// C#: void BehaviorDesigner_Runtime_Tasks_Wait__OnPause (BehaviorDesigner_Runtime_Tasks_Wait_o* __this, bool paused, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Wait__OnPause
               (BehaviorDesigner_Runtime_Tasks_Wait_o *__this,bool paused,MethodInfo *method)

{
  undefined3 in_register_20000011;
  float fVar1;
  float fVar2;
  
  if (CONCAT31(in_register_20000011,paused) == 0) {
    fVar2 = __this->startTime;
    fVar1 = unnamed_function_44878(0);
    __this->startTime = fVar2 + (fVar1 - __this->pauseTime);
    return;
  }
  fVar1 = unnamed_function_44878(0);
  __this->pauseTime = fVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Wait$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Wait__OnReset (BehaviorDesigner_Runtime_Tasks_Wait_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Wait__OnReset
               (BehaviorDesigner_Runtime_Tasks_Wait_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,1.0,DAT_ram_00565d04);
  __this->waitTime = pBVar1;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar2[4].monitor = 0;
  __this->randomWait = pBVar2;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,1.0,DAT_ram_00565d04);
  __this->randomWaitMin = pBVar1;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,1.0,DAT_ram_00565d04);
  __this->randomWaitMax = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Wait$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Wait___ctor (BehaviorDesigner_Runtime_Tasks_Wait_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Wait___ctor
               (BehaviorDesigner_Runtime_Tasks_Wait_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,1.0,DAT_ram_00565d04);
  __this->waitTime = pBVar1;
  if (DAT_ram_00664b70 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBool_TypeInfo);
    DAT_ram_00664b70 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedBool_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBool_TypeInfo);
  if (DAT_ram_00664b71 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c74);
    DAT_ram_00664b71 = '\x01';
  }
  *(undefined1 *)&pBVar2[4].monitor = 0;
  __this->randomWait = pBVar2;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,1.0,DAT_ram_00565d04);
  __this->randomWaitMin = pBVar1;
  if (DAT_ram_00664b76 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664b76 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
  if (DAT_ram_00664b77 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cfc);
    DAT_ram_00664b77 = '\x01';
  }
  unnamed_function_61227(pBVar1,1.0,DAT_ram_00565d04);
  __this->randomWaitMax = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

