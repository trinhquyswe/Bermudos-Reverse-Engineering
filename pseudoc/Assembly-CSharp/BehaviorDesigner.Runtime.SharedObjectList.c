// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedObjectList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedObjectList : SharedVariable<List<Object>> // TypeDefIndex: 5813
{
	// Methods

	// RVA: 0x3BDD Offset: 0x3BDD VA: 0x3BDD
	public static SharedObjectList op_Implicit(List<Object> value) { }

	// RVA: 0x3BDE Offset: 0x3BDE VA: 0x3BDE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedObjectList$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedObjectList_o* BehaviorDesigner_Runtime_SharedObjectList__op_Implicit (System_Collections_Generic_List_Object__o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedObjectList_o *
BehaviorDesigner_Runtime_SharedObjectList__op_Implicit
          (System_Collections_Generic_List_Object__o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedObjectList_o *pBVar1;
  
  if (DAT_ram_00664b86 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedObjectList_TypeInfo);
    DAT_ram_00664b86 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedObjectList_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedObjectList_TypeInfo);
  if (DAT_ram_00664b87 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c4c);
    DAT_ram_00664b87 = '\x01';
  }
  pBVar1[4].monitor = value;
  return pBVar1;
}

// ---- BehaviorDesigner.Runtime.SharedObjectList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedObjectList___ctor (BehaviorDesigner_Runtime_SharedObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedObjectList___ctor
               (BehaviorDesigner_Runtime_SharedObjectList_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664b87 == '\0') {
    unnamed_function_1099(&DAT_ram_00565c4c);
    DAT_ram_00664b87 = '\x01';
  }
  return;
}

