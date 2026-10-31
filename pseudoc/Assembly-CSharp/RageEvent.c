// Assembly-CSharp :: RageEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public static class RageEvent // TypeDefIndex: 5628
{
	// Fields
	[CompilerGenerated]
	private static Action<RageEventArgs> OnRageChanged; // 0x0

	// Methods

	[CompilerGenerated]
	// RVA: 0x3845 Offset: 0x3845 VA: 0x3845
	public static void add_OnRageChanged(Action<RageEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3846 Offset: 0x3846 VA: 0x3846
	public static void remove_OnRageChanged(Action<RageEventArgs> value) { }

	// RVA: 0x3847 Offset: 0x3847 VA: 0x3847
	public static void CallRageChangedEvent(float ragePercent, float currentRage, float rageAmount) { }
}

===== C# end =====
*/

// ---- RageEvent$$add_OnRageChanged ----
// C#: void RageEvent__add_OnRageChanged (System_Action_RageEventArgs__o* value, const MethodInfo* method);

void RageEvent__add_OnRageChanged(System_Action_RageEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_00664b47 == '\0') {
    unnamed_function_1099(&System_Action_RageEventArgs__TypeInfo);
    unnamed_function_1099(&RageEvent_TypeInfo);
    DAT_ram_00664b47 = '\x01';
  }
  param1 = **(int **)(RageEvent_TypeInfo + 0x5c);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_RageEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_RageEventArgs__TypeInfo), iVar2 == 0))
    break;
    iVar2 = unnamed_function_1144(*(undefined4 *)(RageEvent_TypeInfo + 0x5c),iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- RageEvent$$remove_OnRageChanged ----
// C#: void RageEvent__remove_OnRageChanged (System_Action_RageEventArgs__o* value, const MethodInfo* method);

void RageEvent__remove_OnRageChanged(System_Action_RageEventArgs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int param1;
  int iVar2;
  int param1_00;
  
  if (DAT_ram_00664b48 == '\0') {
    unnamed_function_1099(&System_Action_RageEventArgs__TypeInfo);
    unnamed_function_1099(&RageEvent_TypeInfo);
    DAT_ram_00664b48 = '\x01';
  }
  param1 = **(int **)(RageEvent_TypeInfo + 0x5c);
  while( true ) {
    iVar2 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_RageEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (iVar2 = unnamed_function_1112(param1_00,System_Action_RageEventArgs__TypeInfo), iVar2 == 0))
    break;
    iVar2 = unnamed_function_1144(*(undefined4 *)(RageEvent_TypeInfo + 0x5c),iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- RageEvent$$CallRageChangedEvent ----
// C#: void RageEvent__CallRageChangedEvent (float ragePercent, float currentRage, float rageAmount, const MethodInfo* method);

void RageEvent__CallRageChangedEvent
               (float ragePercent,float currentRage,float rageAmount,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  if (DAT_ram_00664b49 == '\0') {
    unnamed_function_1099(&RageEventArgs_TypeInfo);
    unnamed_function_1099(&RageEvent_TypeInfo);
    DAT_ram_00664b49 = '\x01';
  }
  iVar2 = **(int **)(RageEvent_TypeInfo + 0x5c);
  if (iVar2 != 0) {
    iVar1 = unnamed_function_95402(RageEventArgs_TypeInfo);
    *(float *)(iVar1 + 0x10) = rageAmount;
    *(float *)(iVar1 + 0xc) = rageAmount;
    *(float *)(iVar1 + 8) = ragePercent;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),iVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}

