// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedObject
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedObject : SharedVariable<Object> // TypeDefIndex: 5812
{
	// Methods

	// RVA: 0x3BDB Offset: 0x3BDB VA: 0x3BDB
	public static SharedObject op_Explicit(Object value) { }

	// RVA: 0x3BDC Offset: 0x3BDC VA: 0x3BDC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedObject$$op_Explicit ----
// C#: BehaviorDesigner_Runtime_SharedObject_o* BehaviorDesigner_Runtime_SharedObject__op_Explicit (UnityEngine_Object_o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedObject_o *
BehaviorDesigner_Runtime_SharedObject__op_Explicit(UnityEngine_Object_o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedObject_o *pBVar1;
  
  if (DAT_ram_00664b84 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedObject_TypeInfo);
    DAT_ram_00664b84 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedObject_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedObject_TypeInfo);
  if (DAT_ram_00664b85 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cd8);
    DAT_ram_00664b85 = '\x01';
  }
  pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedObject$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedObject___ctor (BehaviorDesigner_Runtime_SharedObject_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedObject___ctor
               (BehaviorDesigner_Runtime_SharedObject_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b85 == '\0') {
    unnamed_function_1099(&DAT_ram_00565cd8);
    DAT_ram_00664b85 = '\x01';
  }
  return;
}

