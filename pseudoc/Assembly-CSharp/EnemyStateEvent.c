// Assembly-CSharp :: EnemyStateEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnemyStateEvent : MonoBehaviour // TypeDefIndex: 5595
{
	// Fields
	public Action<EnemyStateEvent, EnemyStateEventArgs> onEnemyState; // 0x10

	// Methods

	// RVA: 0x37D5 Offset: 0x37D5 VA: 0x37D5
	public void CallEnemyStateEvent(EnemyState enemyState) { }

	// RVA: 0x37D6 Offset: 0x37D6 VA: 0x37D6
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnemyStateEvent$$CallEnemyStateEvent ----
// C#: void EnemyStateEvent__CallEnemyStateEvent (EnemyStateEvent_o* __this, int32_t enemyState, const MethodInfo* method);

void EnemyStateEvent__CallEnemyStateEvent
               (EnemyStateEvent_o *__this,EnemyState enemyState,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b09 == '\0') {
    unnamed_function_1099(&EnemyStateEventArgs_TypeInfo);
    DAT_ram_00664b09 = '\x01';
  }
  pAVar2 = __this->onEnemyState;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(EnemyStateEventArgs_TypeInfo);
    if (DAT_ram_00664b0a == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664b0a = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(EnemyState *)(iVar1 + 8) = enemyState;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- EnemyStateEvent$$.ctor ----
// C#: void EnemyStateEvent___ctor (EnemyStateEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

