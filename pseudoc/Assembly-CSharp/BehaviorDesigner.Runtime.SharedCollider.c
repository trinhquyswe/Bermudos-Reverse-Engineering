// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedCollider
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedCollider : SharedVariable<Collider> // TypeDefIndex: 5803
{
	// Methods

	// RVA: 0x3BC9 Offset: 0x3BC9 VA: 0x3BC9
	public static SharedCollider op_Implicit(Collider value) { }

	// RVA: 0x3BCA Offset: 0x3BCA VA: 0x3BCA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedCollider$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedCollider_o* BehaviorDesigner_Runtime_SharedCollider__op_Implicit (UnityEngine_Collider_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedCollider_o *
BehaviorDesigner_Runtime_SharedCollider__op_Implicit
          (UnityEngine_Collider_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedCollider_o *pBVar1;
  
  if (DAT_ram_00664b72 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedCollider_TypeInfo);
    DAT_ram_00664b72 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedCollider_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedCollider_TypeInfo);
  if (DAT_ram_00664b73 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c80);
    DAT_ram_00664b73 = '\x01';
  }
  pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedCollider$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedCollider___ctor (BehaviorDesigner_Runtime_SharedCollider_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedCollider___ctor
               (BehaviorDesigner_Runtime_SharedCollider_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b73 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c80);
    DAT_ram_00664b73 = '\x01';
  }
  return;
}

