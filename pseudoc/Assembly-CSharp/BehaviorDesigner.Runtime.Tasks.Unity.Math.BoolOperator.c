// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolOperator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BoolOperator : Action // TypeDefIndex: 6142
{
	// Fields
	[Tooltip("The operation to perform")]
	public BoolOperator.Operation operation; // 0x2C
	[Tooltip("The first bool")]
	public SharedBool bool1; // 0x30
	[Tooltip("The second bool")]
	public SharedBool bool2; // 0x34
	[Tooltip("The variable to store the result")]
	public SharedBool storeResult; // 0x38

	// Methods

	// RVA: 0x40CA Offset: 0x40CA VA: 0x40CA Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40CB Offset: 0x40CB VA: 0x40CB Slot: 16
	public override void OnReset() { }

	// RVA: 0x40CC Offset: 0x40CC VA: 0x40CC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolOperator$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (DAT_ram_00664db2 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565c7c);
    DAT_ram_00664db2 = '\x01';
  }
  iVar2 = *(int *)(__ret + 0x2c);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(__ret + 0x38);
    iVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
    }
    unnamed_function_61192(uVar3,uVar4,DAT_ram_00565c7c);
    return;
  }
  if (iVar2 == 1) {
    uVar3 = *(undefined4 *)(__ret + 0x38);
    iVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
    if (iVar2 == 0) {
      uVar4 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
    }
    else {
      uVar4 = 1;
    }
    unnamed_function_61192(uVar3,uVar4,DAT_ram_00565c7c);
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      uVar3 = *(undefined4 *)(__ret + 0x38);
      uVar5 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
      uVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
      unnamed_function_61192(uVar3,uVar5 ^ uVar1,DAT_ram_00565c7c);
    }
    return;
  }
  uVar3 = *(undefined4 *)(__ret + 0x38);
  iVar2 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = unnamed_function_61191(*(undefined4 *)(__ret + 0x34),DAT_ram_00565c78);
    uVar5 = uVar5 ^ 1;
  }
  unnamed_function_61192(uVar3,uVar5,DAT_ram_00565c7c);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolOperator$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBool_o *pBVar1;
  
  __this->operation = AND;
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->bool1 = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->bool2 = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.BoolOperator$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_BoolOperator_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

