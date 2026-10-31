// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedColor
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedColor : Conditional // TypeDefIndex: 5970
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedColor variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedColor compareTo; // 0x30

	// Methods

	// RVA: 0x3E5E Offset: 0x3E5E VA: 0x3E5E Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E5F Offset: 0x3E5F VA: 0x3E5F Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E60 Offset: 0x3E60 VA: 0x3E60
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedColor$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor_o *__this,
               MethodInfo *method)

{
  int iVar1;
  float4 local_30;
  float4 local_2c;
  float4 local_28;
  float4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664c8e == '\0') {
    unnamed_function_1099(&DAT_ram_00565c90);
    DAT_ram_00664c8e = '\x01';
  }
  unnamed_function_61197(&local_20,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c90);
  local_8 = local_18;
  local_10 = local_20;
  unnamed_function_61197(&local_30,*(undefined4 *)(__ret + 0x30),DAT_ram_00565c90);
  iVar1 = unnamed_function_84031(&local_10,(float)local_30,0);
  if (((iVar1 != 0) &&
      (iVar1 = unnamed_function_84031((uint)&local_10 | 4,(float)local_2c,0), iVar1 != 0)) &&
     (iVar1 = unnamed_function_84031(&local_8,(float)local_28,0), iVar1 != 0)) {
    unnamed_function_84031((int)&local_8 + 4,(float)local_24,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedColor$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedColor_o *pBVar1;
  
  if (DAT_ram_00664b74 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedColor_TypeInfo);
    DAT_ram_00664b74 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedColor_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedColor_TypeInfo);
  if (DAT_ram_00664b75 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c8c);
    DAT_ram_00664b75 = '\x01';
  }
  *(undefined8 *)&pBVar1[5].monitor = 0x3f80000000000000;
  *(undefined8 *)&pBVar1[4].monitor = 0;
  __this->variable = pBVar1;
  if (DAT_ram_00664b74 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedColor_TypeInfo);
    DAT_ram_00664b74 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedColor_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedColor_TypeInfo);
  if (DAT_ram_00664b75 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c8c);
    DAT_ram_00664b75 = '\x01';
  }
  *(undefined8 *)&pBVar1[5].monitor = 0x3f80000000000000;
  *(undefined8 *)&pBVar1[4].monitor = 0;
  __this->compareTo = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedColor$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedColor_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

