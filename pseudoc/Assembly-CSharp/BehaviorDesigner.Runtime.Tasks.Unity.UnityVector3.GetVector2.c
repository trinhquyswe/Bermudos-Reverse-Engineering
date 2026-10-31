// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetVector2
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetVector2 : Action // TypeDefIndex: 5886
{
	// Fields
	[Tooltip("The Vector3 to get the Vector2 value of")]
	public SharedVector3 vector3Variable; // 0x2C
	[RequiredField]
	[Tooltip("The Vector2 value")]
	public SharedVector2 storeResult; // 0x30

	// Methods

	// RVA: 0x3D3E Offset: 0x3D3E VA: 0x3D3E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D3F Offset: 0x3D3F VA: 0x3D3F Slot: 16
	public override void OnReset() { }

	// RVA: 0x3D40 Offset: 0x3D40 VA: 0x3D40
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetVector2$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2_o *__this,
               MethodInfo *method)

{
  undefined4 param1;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  if (DAT_ram_00664c0a == '\0') {
    unnamed_function_1099(&DAT_ram_00565d38);
    unnamed_function_1099(&DAT_ram_00565d2c);
    DAT_ram_00664c0a = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x30);
  unnamed_function_61245(local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d38);
  local_18 = local_10[0];
  unnamed_function_61236(param1,&local_18,DAT_ram_00565d2c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetVector2$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedVector3_o *pBVar1;
  BehaviorDesigner_Runtime_SharedVector2_o *pBVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (DAT_ram_00664829 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
    DAT_ram_00664829 = '\x01';
  }
  pvVar3 = *(void **)(*(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
  uVar4 = **(undefined8 **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  if (DAT_ram_00664b98 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
    DAT_ram_00664b98 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedVector3_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector3_TypeInfo);
  if (DAT_ram_00664b99 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d34);
    DAT_ram_00664b99 = '\x01';
  }
  pBVar1[5].monitor = pvVar3;
  *(undefined8 *)&pBVar1[4].monitor = uVar4;
  __this->vector3Variable = pBVar1;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  uVar4 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  if (DAT_ram_00664b94 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
    DAT_ram_00664b94 = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedVector2_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedVector2_TypeInfo);
  if (DAT_ram_00664b95 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d24);
    DAT_ram_00664b95 = '\x01';
  }
  *(undefined8 *)&pBVar2[4].monitor = uVar4;
  __this->storeResult = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityVector3.GetVector2$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityVector3_GetVector2_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

