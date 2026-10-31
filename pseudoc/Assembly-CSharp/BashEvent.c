// Assembly-CSharp :: BashEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BashEvent : MonoBehaviour // TypeDefIndex: 5701
{
	// Fields
	[CompilerGenerated]
	private Action<BashEvent, BashEventArgs> OnBash; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x39FD Offset: 0x39FD VA: 0x39FD
	public void add_OnBash(Action<BashEvent, BashEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x39FE Offset: 0x39FE VA: 0x39FE
	public void remove_OnBash(Action<BashEvent, BashEventArgs> value) { }

	// RVA: 0x39FF Offset: 0x39FF VA: 0x39FF
	public void CallOnBashEvent(BashState bashState) { }

	// RVA: 0x3A00 Offset: 0x3A00 VA: 0x3A00
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BashEvent$$add_OnBash ----
// C#: void BashEvent__add_OnBash (BashEvent_o* __this, System_Action_BashEvent__BashEventArgs__o* value, const MethodInfo* method);

void BashEvent__add_OnBash
               (BashEvent_o *__this,System_Action_BashEvent__BashEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664976 == '\0') {
    unnamed_function_1099(&System_Action_BashEvent__BashEventArgs__TypeInfo);
    DAT_ram_00664976 = '\x01';
  }
  param1 = __this->OnBash;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_BashEvent__BashEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_BashEvent__BashEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnBash,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- BashEvent$$remove_OnBash ----
// C#: void BashEvent__remove_OnBash (BashEvent_o* __this, System_Action_BashEvent__BashEventArgs__o* value, const MethodInfo* method);

void BashEvent__remove_OnBash
               (BashEvent_o *__this,System_Action_BashEvent__BashEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664977 == '\0') {
    unnamed_function_1099(&System_Action_BashEvent__BashEventArgs__TypeInfo);
    DAT_ram_00664977 = '\x01';
  }
  param1 = __this->OnBash;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_BashEvent__BashEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_BashEvent__BashEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnBash,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- BashEvent$$CallOnBashEvent ----
// C#: void BashEvent__CallOnBashEvent (BashEvent_o* __this, int32_t bashState, const MethodInfo* method);

void BashEvent__CallOnBashEvent(BashEvent_o *__this,BashState bashState,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664978 == '\0') {
    unnamed_function_1099(&BashEventArgs_TypeInfo);
    DAT_ram_00664978 = '\x01';
  }
  pAVar2 = __this->OnBash;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(BashEventArgs_TypeInfo);
    if (DAT_ram_00664979 == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664979 = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(BashState *)(iVar1 + 8) = bashState;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- BashEvent$$.ctor ----
// C#: void BashEvent___ctor (BashEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

