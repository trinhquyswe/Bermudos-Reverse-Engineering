// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedTransformList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedTransformList : SharedVariable<List<Transform>> // TypeDefIndex: 5818
{
	// Methods

	// RVA: 0x3BE7 Offset: 0x3BE7 VA: 0x3BE7
	public void .ctor() { }

	// RVA: 0x3BE8 Offset: 0x3BE8 VA: 0x3BE8
	public static SharedTransformList op_Implicit(List<Transform> value) { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedTransformList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedTransformList___ctor (BehaviorDesigner_Runtime_SharedTransformList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedTransformList___ctor
               (BehaviorDesigner_Runtime_SharedTransformList_o *__this,MethodInfo *method)

{
  void *param1;
  
  if (DAT_ram_00664b90 == '\0') {
    unnamed_function_1099(&DAT_ram_00563fb8);
    unnamed_function_1099(&System_Collections_Generic_List_Transform__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c58);
    DAT_ram_00664b90 = '\x01';
  }
  param1 = (void *)unnamed_function_95402(System_Collections_Generic_List_Transform__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563fb8);
  __this[4].monitor = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.SharedTransformList$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedTransformList_o* BehaviorDesigner_Runtime_SharedTransformList__op_Implicit (System_Collections_Generic_List_Transform__o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedTransformList_o *
BehaviorDesigner_Runtime_SharedTransformList__op_Implicit
          (System_Collections_Generic_List_Transform__o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedTransformList_o *pBVar1;
  undefined4 param1;
  
  if (DAT_ram_00664b91 == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedTransformList_TypeInfo);
    DAT_ram_00664b91 = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedTransformList_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedTransformList_TypeInfo);
  if (DAT_ram_00664b90 == '\0') {
    unnamed_function_1099(&DAT_ram_00563fb8);
    unnamed_function_1099(&System_Collections_Generic_List_Transform__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c58);
    DAT_ram_00664b90 = '\x01';
  }
  param1 = unnamed_function_95402(System_Collections_Generic_List_Transform__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563fb8);
  pBVar1[4].monitor = value;
  return pBVar1;
}

