// Assembly-CSharp :: DealDamageEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DealDamageEvent : MonoBehaviour // TypeDefIndex: 5551
{
	// Fields
	[CompilerGenerated]
	private Action<DealDamageEvent, DealDamageEventAgrs> OnDealDamage; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x36E0 Offset: 0x36E0 VA: 0x36E0
	public void add_OnDealDamage(Action<DealDamageEvent, DealDamageEventAgrs> value) { }

	[CompilerGenerated]
	// RVA: 0x36E1 Offset: 0x36E1 VA: 0x36E1
	public void remove_OnDealDamage(Action<DealDamageEvent, DealDamageEventAgrs> value) { }

	// RVA: 0x36E2 Offset: 0x36E2 VA: 0x36E2
	public void CallTakeDamageEvent(int damage) { }

	// RVA: 0x36E3 Offset: 0x36E3 VA: 0x36E3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DealDamageEvent$$add_OnDealDamage ----
// C#: void DealDamageEvent__add_OnDealDamage (DealDamageEvent_o* __this, System_Action_DealDamageEvent__DealDamageEventAgrs__o* value, const MethodInfo* method);

void DealDamageEvent__add_OnDealDamage
               (DealDamageEvent_o *__this,
               System_Action_DealDamageEvent__DealDamageEventAgrs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a9b == '\0') {
    unnamed_function_1099(&System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
    DAT_ram_00664a9b = '\x01';
  }
  param1 = __this->OnDealDamage;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,
                               System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDealDamage,param2_00,param1);
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

// ---- DealDamageEvent$$remove_OnDealDamage ----
// C#: void DealDamageEvent__remove_OnDealDamage (DealDamageEvent_o* __this, System_Action_DealDamageEvent__DealDamageEventAgrs__o* value, const MethodInfo* method);

void DealDamageEvent__remove_OnDealDamage
               (DealDamageEvent_o *__this,
               System_Action_DealDamageEvent__DealDamageEventAgrs__o *value,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a9c == '\0') {
    unnamed_function_1099(&System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo);
    DAT_ram_00664a9c = '\x01';
  }
  param1 = __this->OnDealDamage;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,
                               System_Action_DealDamageEvent__DealDamageEventAgrs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDealDamage,param2_00,param1);
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

// ---- DealDamageEvent$$CallTakeDamageEvent ----
// C#: void DealDamageEvent__CallTakeDamageEvent (DealDamageEvent_o* __this, int32_t damage, const MethodInfo* method);

void DealDamageEvent__CallTakeDamageEvent(DealDamageEvent_o *__this,int damage,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a9d == '\0') {
    unnamed_function_1099(&DealDamageEventAgrs_TypeInfo);
    DAT_ram_00664a9d = '\x01';
  }
  pAVar2 = __this->OnDealDamage;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(DealDamageEventAgrs_TypeInfo);
    if (DAT_ram_00664a9e == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664a9e = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(int *)(iVar1 + 8) = damage;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- DealDamageEvent$$.ctor ----
// C#: void DealDamageEvent___ctor (DealDamageEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

