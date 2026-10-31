// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedRect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CompareSharedRect : Conditional // TypeDefIndex: 5978
{
	// Fields
	[Tooltip("The first variable to compare")]
	public SharedRect variable; // 0x2C
	[Tooltip("The variable to compare to")]
	public SharedRect compareTo; // 0x30

	// Methods

	// RVA: 0x3E76 Offset: 0x3E76 VA: 0x3E76 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E77 Offset: 0x3E77 VA: 0x3E77 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E78 Offset: 0x3E78 VA: 0x3E78
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedRect$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect_o *__this,
               MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  int iVar4;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  float4 local_4;
  
  if (DAT_ram_00664c98 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cf4);
    DAT_ram_00664c98 = '\x01';
  }
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x2c),DAT_ram_00565cf4);
  fVar3 = local_4;
  fVar2 = local_8;
  fVar1 = local_c;
  unnamed_function_61197(&local_10,*(undefined4 *)(__ret + 0x30),DAT_ram_00565cf4);
  iVar4 = unnamed_function_84031(&local_10,(float)local_10,0);
  if (iVar4 != 0) {
    local_10 = fVar1;
    iVar4 = unnamed_function_84031(&local_10,(float)local_c,0);
    if (iVar4 != 0) {
      local_10 = fVar2;
      iVar4 = unnamed_function_84031(&local_10,(float)local_8,0);
      if (iVar4 != 0) {
        local_10 = fVar3;
        unnamed_function_84031(&local_10,(float)local_4,0);
      }
    }
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedRect$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect_o *__this,
               MethodInfo *method)

{
  Rect_o *pRVar1;
  Rect_o local_40;
  Rect_o local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_30.width = 0.0;
  local_30.height = 0.0;
  local_10 = 0;
  local_30.x = 0.0;
  local_30.y = 0.0;
  pRVar1 = BehaviorDesigner_Runtime_SharedRect__op_Implicit(&local_30,(MethodInfo *)0x0);
  __this->variable = (BehaviorDesigner_Runtime_SharedRect_o *)pRVar1;
  local_18 = 0;
  local_40.width = 0.0;
  local_40.height = 0.0;
  local_20 = 0;
  local_40.x = 0.0;
  local_40.y = 0.0;
  pRVar1 = BehaviorDesigner_Runtime_SharedRect__op_Implicit(&local_40,(MethodInfo *)0x0);
  __this->compareTo = (BehaviorDesigner_Runtime_SharedRect_o *)pRVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.CompareSharedRect$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect___ctor (BehaviorDesigner_Runtime_Tasks_Unity_SharedVariables_CompareSharedRect_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

