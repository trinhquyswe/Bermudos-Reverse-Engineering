// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Operator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Operator : Action // TypeDefIndex: 5911
{
	// Fields
	[Tooltip("The operation to perform")]
	public Operator.Operation operation; // 0x2C
	[Tooltip("The first Vector2")]
	public SharedVector2 firstVector2; // 0x30
	[Tooltip("The second Vector2")]
	public SharedVector2 secondVector2; // 0x34
	[Tooltip("The variable to store the result")]
	public SharedVector2 storeResult; // 0x38

	// Methods

	// RVA: 0x3D83 Offset: 0x3D83 VA: 0x3D83 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D84 Offset: 0x3D84 VA: 0x3D84 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D85 Offset: 0x3D85 VA: 0x3D85
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Operator$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c21 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d28);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c21 = '\x01';
  }
  iVar2 = *(int *)(__ret + 0x2c);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
    uVar1 = local_8;
    unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d28);
    local_20 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) + (float)((ulonglong)local_8 >> 0x20),
                        (float)uVar1 + (float)local_8);
    local_8 = local_20;
    unnamed_function_61236(uVar3,&local_20,DAT_ram_00565d2c);
  }
  else if (iVar2 == 1) {
    uVar3 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
    uVar1 = local_8;
    unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d28);
    local_18 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)local_8 >> 0x20),
                        (float)uVar1 - (float)local_8);
    local_8 = local_18;
    unnamed_function_61236(uVar3,&local_18,DAT_ram_00565d2c);
  }
  else if (iVar2 == 2) {
    uVar3 = *(undefined4 *)(__ret + 0x38);
    unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x30),DAT_ram_00565d28);
    uVar1 = local_8;
    unnamed_function_61235(&local_8,*(undefined4 *)(__ret + 0x34),DAT_ram_00565d28);
    local_10 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * (float)((ulonglong)local_8 >> 0x20),
                        (float)uVar1 * (float)local_8);
    local_8 = local_10;
    unnamed_function_61236(uVar3,&local_10,DAT_ram_00565d2c);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Operator$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar1;
  undefined8 uVar2;
  
  __this->operation = Add;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar2 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  if (DAT_ram_00664b94 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
    DAT_ram_00664b94 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
  if (DAT_ram_00664b95 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d24);
    DAT_ram_00664b95 = '\x01';
  }
  *(undefined8 *)&pBVar1[4].monitor = uVar2;
  __this->firstVector2 = pBVar1;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar2 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  if (DAT_ram_00664b94 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
    DAT_ram_00664b94 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
  if (DAT_ram_00664b95 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d24);
    DAT_ram_00664b95 = '\x01';
  }
  *(undefined8 *)&pBVar1[4].monitor = uVar2;
  __this->secondVector2 = pBVar1;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar2 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  if (DAT_ram_00664b94 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
    DAT_ram_00664b94 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
  if (DAT_ram_00664b95 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d24);
    DAT_ram_00664b95 = '\x01';
  }
  *(undefined8 *)&pBVar1[4].monitor = uVar2;
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector2.Operator$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector2_Operator_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

