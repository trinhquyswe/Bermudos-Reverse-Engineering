// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.GetLayer
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GetLayer : Action // TypeDefIndex: 6183
{
	// Fields
	[Tooltip("The GameObject to set the layer of")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the layer to get")]
	[RequiredField]
	public SharedString storeResult; // 0x30

	// Methods

	// RVA: 0x414A Offset: 0x414A VA: 0x414A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x414B Offset: 0x414B VA: 0x414B Slot: 16
	public override void OnReset() { }

	// RVA: 0x414C Offset: 0x414C VA: 0x414C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.GetLayer$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  
  if (DAT_ram_00664ded == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664ded = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__ret,uVar1,0);
  param1 = *(undefined4 *)(__ret + 0x30);
  uVar1 = unnamed_function_44684(uVar1,0);
  uVar1 = unnamed_function_44701(uVar1,0);
  unnamed_function_61204(param1,uVar1,DAT_ram_00565d10);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.GetLayer$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664dee == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664dee = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_1 /* "" */,(MethodInfo *)0x0);
  __this->storeResult = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.GetLayer$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_GetLayer_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

