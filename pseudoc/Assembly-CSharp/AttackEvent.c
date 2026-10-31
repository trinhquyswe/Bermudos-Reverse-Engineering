// Assembly-CSharp :: AttackEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AttackEvent : MonoBehaviour // TypeDefIndex: 5548
{
	// Fields
	[CompilerGenerated]
	private Action<AttackEvent> OnAttack; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x36CB Offset: 0x36CB VA: 0x36CB
	public void add_OnAttack(Action<AttackEvent> value) { }

	[CompilerGenerated]
	// RVA: 0x36CC Offset: 0x36CC VA: 0x36CC
	public void remove_OnAttack(Action<AttackEvent> value) { }

	// RVA: 0x36CD Offset: 0x36CD VA: 0x36CD
	public void CallAttackEvent() { }

	// RVA: 0x36CE Offset: 0x36CE VA: 0x36CE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AttackEvent$$add_OnAttack ----
// C#: void AttackEvent__add_OnAttack (AttackEvent_o* __this, System_Action_AttackEvent__o* value, const MethodInfo* method);

void AttackEvent__add_OnAttack
               (AttackEvent_o *__this,System_Action_AttackEvent__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a8d == '\0') {
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    DAT_ram_00664a8d = '\x01';
  }
  param1 = __this->OnAttack;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_AttackEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_AttackEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnAttack,param2_00,param1);
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

// ---- AttackEvent$$remove_OnAttack ----
// C#: void AttackEvent__remove_OnAttack (AttackEvent_o* __this, System_Action_AttackEvent__o* value, const MethodInfo* method);

void AttackEvent__remove_OnAttack
               (AttackEvent_o *__this,System_Action_AttackEvent__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a8e == '\0') {
    unnamed_function_1099(&System_Action_AttackEvent__TypeInfo);
    DAT_ram_00664a8e = '\x01';
  }
  param1 = __this->OnAttack;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_AttackEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_AttackEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnAttack,param2_00,param1);
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

// ---- AttackEvent$$CallAttackEvent ----
// C#: void AttackEvent__CallAttackEvent (AttackEvent_o* __this, const MethodInfo* method);

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

// ---- AttackEvent$$.ctor ----
// C#: void AttackEvent___ctor (AttackEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

