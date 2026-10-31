// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.IntOperator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IntOperator : Action // TypeDefIndex: 6154
{
	// Fields
	[Tooltip("The operation to perform")]
	public IntOperator.Operation operation; // 0x2C
	[Tooltip("The first integer")]
	public SharedInt integer1; // 0x30
	[Tooltip("The second integer")]
	public SharedInt integer2; // 0x34
	[Tooltip("The variable to store the result")]
	[RequiredField]
	public SharedInt storeResult; // 0x38

	// Methods

	// RVA: 0x40E2 Offset: 0x40E2 VA: 0x40E2 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40E3 Offset: 0x40E3 VA: 0x40E3 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40E4 Offset: 0x40E4 VA: 0x40E4
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntOperator$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664dbc == '\0') {
    unnamed_function_1099(&DAT_ram_00565cb8);
    unnamed_function_1099(&DAT_ram_00565cbc);
    DAT_ram_00664dbc = '\x01';
  }
  iVar2 = *(int *)(__ret + 0x2c);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(__ret + 0x38);
    iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    unnamed_function_61204(uVar3,iVar2 + iVar1,DAT_ram_00565cbc);
    return;
  }
  if (iVar2 == 1) {
    uVar3 = *(undefined4 *)(__ret + 0x38);
    iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    unnamed_function_61204(uVar3,iVar2 - iVar1,DAT_ram_00565cbc);
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      uVar3 = *(undefined4 *)(__ret + 0x38);
      iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
      iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
      unnamed_function_61204(uVar3,iVar2 / iVar1,DAT_ram_00565cbc);
      return;
    }
    if (iVar2 != 4) {
      if (iVar2 != 5) {
        if (iVar2 == 6) {
          uVar3 = *(undefined4 *)(__ret + 0x38);
          iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
          iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
          unnamed_function_61204(uVar3,iVar2 % iVar1,DAT_ram_00565cbc);
        }
        return;
      }
      uVar3 = *(undefined4 *)(__ret + 0x38);
      iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
      iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
      if (iVar2 <= iVar1) {
        iVar2 = iVar1;
      }
      unnamed_function_61204(uVar3,iVar2,DAT_ram_00565cbc);
      return;
    }
    uVar3 = *(undefined4 *)(__ret + 0x38);
    iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
    iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    unnamed_function_61204(uVar3,iVar2,DAT_ram_00565cbc);
    return;
  }
  uVar3 = *(undefined4 *)(__ret + 0x38);
  iVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565cb8);
  iVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565cb8);
  unnamed_function_61204(uVar3,iVar2 * iVar1,DAT_ram_00565cbc);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntOperator$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator_o *__this,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedInt_o *pBVar1;
  
  __this->operation = Add;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->integer1 = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->integer2 = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedInt__op_Implicit(0,(MethodInfo *)0x0);
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.IntOperator$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_IntOperator_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

