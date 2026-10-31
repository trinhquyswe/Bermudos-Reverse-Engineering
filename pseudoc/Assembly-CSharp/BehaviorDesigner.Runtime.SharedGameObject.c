// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedGameObject
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedGameObject : SharedVariable<GameObject> // TypeDefIndex: 5806
{
	// Methods

	// RVA: 0x3BCF Offset: 0x3BCF VA: 0x3BCF
	public static SharedGameObject op_Implicit(GameObject value) { }

	// RVA: 0x3BD0 Offset: 0x3BD0 VA: 0x3BD0
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedGameObject$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedGameObject_o* BehaviorDesigner_Runtime_SharedGameObject__op_Implicit (UnityEngine_GameObject_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedGameObject_o *
BehaviorDesigner_Runtime_SharedGameObject__op_Implicit
          (UnityEngine_GameObject_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedGameObject_o *pBVar1;
  
  if (DAT_ram_00664b78 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedGameObject_TypeInfo);
    DAT_ram_00664b78 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedGameObject_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedGameObject_TypeInfo);
  if (DAT_ram_00664b79 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c98);
    DAT_ram_00664b79 = '\x01';
  }
  pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedGameObject$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedGameObject___ctor (BehaviorDesigner_Runtime_SharedGameObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedGameObject___ctor
               (BehaviorDesigner_Runtime_SharedGameObject_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b79 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c98);
    DAT_ram_00664b79 = '\x01';
  }
  return;
}

