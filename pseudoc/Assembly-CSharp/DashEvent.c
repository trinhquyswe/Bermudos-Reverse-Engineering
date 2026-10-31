// Assembly-CSharp :: DashEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DashEvent : MonoBehaviour // TypeDefIndex: 5706
{
	// Fields
	[CompilerGenerated]
	private Action<DashEvent, DashEventArgs> OnDashEvent; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3A1A Offset: 0x3A1A VA: 0x3A1A
	public void add_OnDashEvent(Action<DashEvent, DashEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3A1B Offset: 0x3A1B VA: 0x3A1B
	public void remove_OnDashEvent(Action<DashEvent, DashEventArgs> value) { }

	// RVA: 0x3A1C Offset: 0x3A1C VA: 0x3A1C
	public void CallDashEvent(Vector2 direction) { }

	// RVA: 0x3A1D Offset: 0x3A1D VA: 0x3A1D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DashEvent$$add_OnDashEvent ----
// C#: void DashEvent__add_OnDashEvent (DashEvent_o* __this, System_Action_DashEvent__DashEventArgs__o* value, const MethodInfo* method);

void DashEvent__add_OnDashEvent
               (DashEvent_o *__this,System_Action_DashEvent__DashEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664984 == '\0') {
    unnamed_function_1099(&System_Action_DashEvent__DashEventArgs__TypeInfo);
    DAT_ram_00664984 = '\x01';
  }
  param1 = __this->OnDashEvent;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_DashEvent__DashEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_DashEvent__DashEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDashEvent,param2_00,param1);
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

// ---- DashEvent$$remove_OnDashEvent ----
// C#: void DashEvent__remove_OnDashEvent (DashEvent_o* __this, System_Action_DashEvent__DashEventArgs__o* value, const MethodInfo* method);

void DashEvent__remove_OnDashEvent
               (DashEvent_o *__this,System_Action_DashEvent__DashEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664985 == '\0') {
    unnamed_function_1099(&System_Action_DashEvent__DashEventArgs__TypeInfo);
    DAT_ram_00664985 = '\x01';
  }
  param1 = __this->OnDashEvent;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_DashEvent__DashEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_DashEvent__DashEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDashEvent,param2_00,param1);
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

// ---- DashEvent$$CallDashEvent ----
// C#: void DashEvent__CallDashEvent (DashEvent_o* __this, UnityEngine_Vector2_o direction, const MethodInfo* method);

void DashEvent__CallDashEvent(DashEvent_o *__this,Vector2_o *direction,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664986 == '\0') {
    unnamed_function_1099(&DashEventArgs_TypeInfo);
    DAT_ram_00664986 = '\x01';
  }
  pAVar2 = __this->OnDashEvent;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(DashEventArgs_TypeInfo);
    if (DAT_ram_00664987 == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664987 = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(Vector2_o *)(iVar1 + 8) = *direction;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- DashEvent$$.ctor ----
// C#: void DashEvent___ctor (DashEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

