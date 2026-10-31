// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.SetLayer
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SetLayer : Action // TypeDefIndex: 6184
{
	// Fields
	[Tooltip("The GameObject to set the layer of")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The name of the layer to set")]
	public SharedString layerName; // 0x30

	// Methods

	// RVA: 0x414D Offset: 0x414D VA: 0x414D Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x414E Offset: 0x414E VA: 0x414E Slot: 16
	public override void OnReset() { }

	// RVA: 0x414F Offset: 0x414F VA: 0x414F
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.SetLayer$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer_o *__this,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_ram_00664def == '\0') {
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664def = '\x01';
  }
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
  uVar1 = unnamed_function_51881(__ret,uVar1,0);
  uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  uVar2 = unnamed_function_44702(uVar2,0);
  unnamed_function_44685(uVar1,uVar2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.SetLayer$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664df0 == '\0') {
    unnamed_function_1099(&StringLiteral_3242 /* "Default" */);
    DAT_ram_00664df0 = '\x01';
  }
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_3242 /* "Default" */,(MethodInfo *)0x0);
  __this->layerName = pBVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityLayerMask.SetLayer$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer___ctor
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityLayerMask_SetLayer_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  
  if (DAT_ram_00664df1 == '\0') {
    unnamed_function_1099(&StringLiteral_3242 /* "Default" */);
    DAT_ram_00664df1 = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit(StringLiteral_3242 /* "Default" */,(MethodInfo *)0x0);
  __this->layerName = pBVar1;
  unnamed_function_51834(__this,0);
  return;
}

