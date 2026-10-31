// Assembly-CSharp :: MoveByEnemyAIEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MoveByEnemyAIEvent : MonoBehaviour // TypeDefIndex: 5674
{
	// Fields
	[CompilerGenerated]
	private Action<MoveByEnemyAIEvent> OnMoveByEnemyAI; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3957 Offset: 0x3957 VA: 0x3957
	public void add_OnMoveByEnemyAI(Action<MoveByEnemyAIEvent> value) { }

	[CompilerGenerated]
	// RVA: 0x3958 Offset: 0x3958 VA: 0x3958
	public void remove_OnMoveByEnemyAI(Action<MoveByEnemyAIEvent> value) { }

	// RVA: 0x3959 Offset: 0x3959 VA: 0x3959
	public void CallMoveByEnemyAIEvent() { }

	// RVA: 0x395A Offset: 0x395A VA: 0x395A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MoveByEnemyAIEvent$$add_OnMoveByEnemyAI ----
// C#: void MoveByEnemyAIEvent__add_OnMoveByEnemyAI (MoveByEnemyAIEvent_o* __this, System_Action_MoveByEnemyAIEvent__o* value, const MethodInfo* method);

void MoveByEnemyAIEvent__add_OnMoveByEnemyAI
               (MoveByEnemyAIEvent_o *__this,System_Action_MoveByEnemyAIEvent__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664920 == '\0') {
    unnamed_function_1099(&System_Action_MoveByEnemyAIEvent__TypeInfo);
    DAT_ram_00664920 = '\x01';
  }
  param1 = __this->OnMoveByEnemyAI;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_MoveByEnemyAIEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_MoveByEnemyAIEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnMoveByEnemyAI,param2_00,param1);
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

// ---- MoveByEnemyAIEvent$$remove_OnMoveByEnemyAI ----
// C#: void MoveByEnemyAIEvent__remove_OnMoveByEnemyAI (MoveByEnemyAIEvent_o* __this, System_Action_MoveByEnemyAIEvent__o* value, const MethodInfo* method);

void MoveByEnemyAIEvent__remove_OnMoveByEnemyAI
               (MoveByEnemyAIEvent_o *__this,System_Action_MoveByEnemyAIEvent__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664921 == '\0') {
    unnamed_function_1099(&System_Action_MoveByEnemyAIEvent__TypeInfo);
    DAT_ram_00664921 = '\x01';
  }
  param1 = __this->OnMoveByEnemyAI;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_MoveByEnemyAIEvent__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112(param1_00,System_Action_MoveByEnemyAIEvent__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnMoveByEnemyAI,param2_00,param1);
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

// ---- MoveByEnemyAIEvent$$CallMoveByEnemyAIEvent ----
// C#: void MoveByEnemyAIEvent__CallMoveByEnemyAIEvent (MoveByEnemyAIEvent_o* __this, const MethodInfo* method);

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

// ---- MoveByEnemyAIEvent$$.ctor ----
// C#: void MoveByEnemyAIEvent___ctor (MoveByEnemyAIEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

