// Assembly-CSharp :: DieEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DieEvent : MonoBehaviour // TypeDefIndex: 5619
{
	// Fields
	[CompilerGenerated]
	private Action<DieEvent> OnDie; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3823 Offset: 0x3823 VA: 0x3823
	public void add_OnDie(Action<DieEvent> value) { }

	[CompilerGenerated]
	// RVA: 0x3824 Offset: 0x3824 VA: 0x3824
	public void remove_OnDie(Action<DieEvent> value) { }

	// RVA: 0x3825 Offset: 0x3825 VA: 0x3825
	public void CallDieEvent() { }

	// RVA: 0x3826 Offset: 0x3826 VA: 0x3826
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DieEvent$$add_OnDie ----
// C#: void DieEvent__add_OnDie (DieEvent_o* __this, System_Action_DieEvent__o* value, const MethodInfo* method);

void DieEvent__add_OnDie(DieEvent_o *__this,System_Action_DieEvent__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b37 == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    DAT_ram_00664b37 = '\x01';
  }
  param1 = __this->OnDie;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_DieEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_DieEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDie,param2_00,param1);
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

// ---- DieEvent$$remove_OnDie ----
// C#: void DieEvent__remove_OnDie (DieEvent_o* __this, System_Action_DieEvent__o* value, const MethodInfo* method);

void DieEvent__remove_OnDie(DieEvent_o *__this,System_Action_DieEvent__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b38 == '\0') {
    unnamed_function_1099(&System_Action_DieEvent__TypeInfo);
    DAT_ram_00664b38 = '\x01';
  }
  param1 = __this->OnDie;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_DieEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_DieEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDie,param2_00,param1);
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

// ---- DieEvent$$CallDieEvent ----
// C#: void DieEvent__CallDieEvent (DieEvent_o* __this, const MethodInfo* method);

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

// ---- DieEvent$$.ctor ----
// C#: void DieEvent___ctor (DieEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

