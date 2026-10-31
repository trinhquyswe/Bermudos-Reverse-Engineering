// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatOperator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FloatOperator : Action // TypeDefIndex: 6148
{
	// Fields
	[Tooltip("The operation to perform")]
	public FloatOperator.Operation operation; // 0x2C
	[Tooltip("The first float")]
	public SharedFloat float1; // 0x30
	[Tooltip("The second float")]
	public SharedFloat float2; // 0x34
	[Tooltip("The variable to store the result")]
	public SharedFloat storeResult; // 0x38

	// Methods

	// RVA: 0x40D6 Offset: 0x40D6 VA: 0x40D6 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x40D7 Offset: 0x40D7 VA: 0x40D7 Slot: 16
	public override void OnReset() { }

	// RVA: 0x40D8 Offset: 0x40D8 VA: 0x40D8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatOperator$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 param1;
  
  if (DAT_ram_00664db7 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664db7 = '\x01';
  }
  iVar3 = *(int *)(__ret + 0x2c);
  if (iVar3 == 0) {
    uVar4 = *(undefined4 *)(__ret + 0x38);
    fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    unnamed_function_61227(uVar4,fVar1 + fVar2,DAT_ram_00565d04);
    return;
  }
  if (iVar3 == 1) {
    uVar4 = *(undefined4 *)(__ret + 0x38);
    fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    unnamed_function_61227(uVar4,fVar1 - fVar2,DAT_ram_00565d04);
    return;
  }
  if (iVar3 != 2) {
    if (iVar3 == 3) {
      uVar4 = *(undefined4 *)(__ret + 0x38);
      fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
      fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
      unnamed_function_61227(uVar4,fVar1 / fVar2,DAT_ram_00565d04);
      return;
    }
    if (iVar3 != 4) {
      if (iVar3 != 5) {
        if (iVar3 == 6) {
          param1 = *(undefined4 *)(__ret + 0x38);
          fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
          fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
          uVar4 = DAT_ram_00565d04;
          fVar1 = unnamed_function_11008(fVar1,fVar2);
          unnamed_function_61227(param1,fVar1,uVar4);
        }
        return;
      }
      uVar4 = *(undefined4 *)(__ret + 0x38);
      fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
      fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
      if (fVar1 <= fVar2) {
        fVar1 = fVar2;
      }
      unnamed_function_61227(uVar4,fVar1,DAT_ram_00565d04);
      return;
    }
    uVar4 = *(undefined4 *)(__ret + 0x38);
    fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
    fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
    unnamed_function_61227(uVar4,fVar1,DAT_ram_00565d04);
    return;
  }
  uVar4 = *(undefined4 *)(__ret + 0x38);
  fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d00);
  fVar2 = unnamed_function_61226(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d00);
  unnamed_function_61227(uVar4,fVar1 * fVar2,DAT_ram_00565d04);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatOperator$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator_o *__this,MethodInfo *method
               )

{
  BehaviorDesigner_Runtime_SharedFloat_o *pBVar1;
  
  __this->operation = Add;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->float1 = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->float2 = pBVar1;
  pBVar1 = BehaviorDesigner_Runtime_SharedFloat__op_Implicit(0.0,(MethodInfo *)0x0);
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.Math.FloatOperator$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator___ctor (BehaviorDesigner_Runtime_Tasks_Unity_Math_FloatOperator_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

