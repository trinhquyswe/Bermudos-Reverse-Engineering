// Assembly-CSharp :: IdleEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IdleEvent : MonoBehaviour // TypeDefIndex: 5673
{
	// Fields
	[CompilerGenerated]
	private Action<IdleEvent> OnIdle; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3953 Offset: 0x3953 VA: 0x3953
	public void add_OnIdle(Action<IdleEvent> value) { }

	[CompilerGenerated]
	// RVA: 0x3954 Offset: 0x3954 VA: 0x3954
	public void remove_OnIdle(Action<IdleEvent> value) { }

	// RVA: 0x3955 Offset: 0x3955 VA: 0x3955
	public void CallIdleEvent() { }

	// RVA: 0x3956 Offset: 0x3956 VA: 0x3956
	public void .ctor() { }
}

===== C# end =====
*/

// ---- IdleEvent$$add_OnIdle ----
// C#: void IdleEvent__add_OnIdle (IdleEvent_o* __this, System_Action_IdleEvent__o* value, const MethodInfo* method);

void IdleEvent__add_OnIdle(IdleEvent_o *__this,System_Action_IdleEvent__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_0066491e == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    DAT_ram_0066491e = '\x01';
  }
  param1 = __this->OnIdle;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_IdleEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_IdleEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnIdle,param2_00,param1);
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

// ---- IdleEvent$$remove_OnIdle ----
// C#: void IdleEvent__remove_OnIdle (IdleEvent_o* __this, System_Action_IdleEvent__o* value, const MethodInfo* method);

void IdleEvent__remove_OnIdle
               (IdleEvent_o *__this,System_Action_IdleEvent__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_0066491f == '\0') {
    unnamed_function_1099(&System_Action_IdleEvent__TypeInfo);
    DAT_ram_0066491f = '\x01';
  }
  param1 = __this->OnIdle;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_IdleEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_IdleEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnIdle,param2_00,param1);
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

// ---- IdleEvent$$CallIdleEvent ----
// C#: void IdleEvent__CallIdleEvent (IdleEvent_o* __this, const MethodInfo* method);

void AttackEvent__CallAttackEvent(AttackEvent_o *__this,MethodInfo *method)

{
  Action_o *pAVar1;
  
  pAVar1 = __this->OnAttack;
  if (pAVar1 != (Action_o *)0x0) {
    (**(code **)((ulonglong)(uint)pAVar1[3]._opaque * 4))
              (pAVar1[8]._opaque,__this,pAVar1[5]._opaque);
  }
  return;
}

// ---- IdleEvent$$.ctor ----
// C#: void IdleEvent___ctor (IdleEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

