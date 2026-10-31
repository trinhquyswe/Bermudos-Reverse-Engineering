// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedBehaviour
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedBehaviour : SharedVariable<Behaviour> // TypeDefIndex: 5801
{
	// Methods

	// RVA: 0x3BC5 Offset: 0x3BC5 VA: 0x3BC5
	public static SharedBehaviour op_Explicit(Behaviour value) { }

	// RVA: 0x3BC6 Offset: 0x3BC6 VA: 0x3BC6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedBehaviour$$op_Explicit ----
// C#: BehaviorDesigner_Runtime_SharedBehaviour_o* BehaviorDesigner_Runtime_SharedBehaviour__op_Explicit (UnityEngine_Behaviour_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedBehaviour_o *
BehaviorDesigner_Runtime_SharedBehaviour__op_Explicit
          (OnScreenStick_Behaviour value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedBehaviour_o *pBVar1;
  
  if (DAT_ram_00664b6e == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedBehaviour_TypeInfo);
    DAT_ram_00664b6e = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedBehaviour_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedBehaviour_TypeInfo);
  if (DAT_ram_00664b6f == '\0') {
    unnamed_function_1099(&DAT_ram_00565c68);
    DAT_ram_00664b6f = '\x01';
  }
  pBVar1[4].monitor = (void *)value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedBehaviour$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedBehaviour___ctor (BehaviorDesigner_Runtime_SharedBehaviour_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedBehaviour___ctor
               (BehaviorDesigner_Runtime_SharedBehaviour_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b6f == '\0') {
    unnamed_function_1099(&DAT_ram_00565c68);
    DAT_ram_00664b6f = '\x01';
  }
  return;
}

