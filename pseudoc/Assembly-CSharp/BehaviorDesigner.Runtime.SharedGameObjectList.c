// Assembly-CSharp :: BehaviorDesigner.Runtime.SharedGameObjectList
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SharedGameObjectList : SharedVariable<List<GameObject>> // TypeDefIndex: 5807
{
	// Methods

	// RVA: 0x3BD1 Offset: 0x3BD1 VA: 0x3BD1
	public void .ctor() { }

	// RVA: 0x3BD2 Offset: 0x3BD2 VA: 0x3BD2
	public static SharedGameObjectList op_Implicit(List<GameObject> value) { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.SharedGameObjectList$$.ctor ----
// C#: void BehaviorDesigner_Runtime_SharedGameObjectList___ctor (BehaviorDesigner_Runtime_SharedGameObjectList_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_SharedGameObjectList___ctor
               (BehaviorDesigner_Runtime_SharedGameObjectList_o *__this,MethodInfo *method)

{
  void *param1;
  
  if (DAT_ram_00664b7a == '\0') {
    unnamed_function_1099(&DAT_ram_00563074);
    unnamed_function_1099(&System_Collections_Generic_List_GameObject__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c40);
    DAT_ram_00664b7a = '\x01';
  }
  param1 = (void *)unnamed_function_95402(System_Collections_Generic_List_GameObject__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563074);
  __this[4].monitor = param1;
  return;
}

// ---- BehaviorDesigner.Runtime.SharedGameObjectList$$op_Implicit ----
// C#: BehaviorDesigner_Runtime_SharedGameObjectList_o* BehaviorDesigner_Runtime_SharedGameObjectList__op_Implicit (System_Collections_Generic_List_GameObject__o* value, const MethodInfo* method);

BehaviorDesigner_Runtime_SharedGameObjectList_o *
BehaviorDesigner_Runtime_SharedGameObjectList__op_Implicit
          (System_Collections_Generic_List_GameObject__o *value,MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedGameObjectList_o *pBVar1;
  undefined4 param1;
  
  if (DAT_ram_00664b7b == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedGameObjectList_TypeInfo);
    DAT_ram_00664b7b = '\x01';
  }
  pBVar1 = (BehaviorDesigner_Runtime_SharedGameObjectList_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedGameObjectList_TypeInfo);
  if (DAT_ram_00664b7a == '\0') {
    unnamed_function_1099(&DAT_ram_00563074);
    unnamed_function_1099(&System_Collections_Generic_List_GameObject__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c40);
    DAT_ram_00664b7a = '\x01';
  }
  param1 = unnamed_function_95402(System_Collections_Generic_List_GameObject__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563074);
  pBVar1[4].monitor = value;
  return pBVar1;
}

