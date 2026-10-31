// Assembly-CSharp :: HealthEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HealthEvent : MonoBehaviour // TypeDefIndex: 5622
{
	// Fields
	[CompilerGenerated]
	private Action<HealthEvent, HealthEventArgs> OnHealthChanged; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3835 Offset: 0x3835 VA: 0x3835
	public void add_OnHealthChanged(Action<HealthEvent, HealthEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3836 Offset: 0x3836 VA: 0x3836
	public void remove_OnHealthChanged(Action<HealthEvent, HealthEventArgs> value) { }

	// RVA: 0x3837 Offset: 0x3837 VA: 0x3837
	public void CallHealthChangedEvent(float healthPercent, int healthAmount, int damageAmount) { }

	// RVA: 0x3838 Offset: 0x3838 VA: 0x3838
	public void .ctor() { }
}

===== C# end =====
*/

// ---- HealthEvent$$add_OnHealthChanged ----
// C#: void HealthEvent__add_OnHealthChanged (HealthEvent_o* __this, System_Action_HealthEvent__HealthEventArgs__o* value, const MethodInfo* method);

void HealthEvent__add_OnHealthChanged
               (HealthEvent_o *__this,System_Action_HealthEvent__HealthEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b3f == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b3f = '\x01';
  }
  param1 = __this->OnHealthChanged;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnHealthChanged,param2_00,param1);
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

// ---- HealthEvent$$remove_OnHealthChanged ----
// C#: void HealthEvent__remove_OnHealthChanged (HealthEvent_o* __this, System_Action_HealthEvent__HealthEventArgs__o* value, const MethodInfo* method);

void HealthEvent__remove_OnHealthChanged
               (HealthEvent_o *__this,System_Action_HealthEvent__HealthEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b40 == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b40 = '\x01';
  }
  param1 = __this->OnHealthChanged;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnHealthChanged,param2_00,param1);
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

// ---- HealthEvent$$CallHealthChangedEvent ----
// C#: void HealthEvent__CallHealthChangedEvent (HealthEvent_o* __this, float healthPercent, int32_t healthAmount, int32_t damageAmount, const MethodInfo* method);

void HealthEvent__CallHealthChangedEvent
               (HealthEvent_o *__this,float healthPercent,int healthAmount,int damageAmount,
               MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b41 == '\0') {
    unnamed_function_1099(&HealthEventArgs_TypeInfo);
    DAT_ram_00664b41 = '\x01';
  }
  pAVar2 = __this->OnHealthChanged;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(HealthEventArgs_TypeInfo);
    if (DAT_ram_00664b42 == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664b42 = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(int *)(iVar1 + 0x10) = damageAmount;
    *(int *)(iVar1 + 0xc) = healthAmount;
    *(float *)(iVar1 + 8) = healthPercent;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- HealthEvent$$.ctor ----
// C#: void HealthEvent___ctor (HealthEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

