// Assembly-CSharp :: StaminaEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class StaminaEvent : MonoBehaviour // TypeDefIndex: 5632
{
	// Fields
	[CompilerGenerated]
	private Action<StaminaEvent, StaminaEventArgs> OnStaminaChanged; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3854 Offset: 0x3854 VA: 0x3854
	public void add_OnStaminaChanged(Action<StaminaEvent, StaminaEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3855 Offset: 0x3855 VA: 0x3855
	public void remove_OnStaminaChanged(Action<StaminaEvent, StaminaEventArgs> value) { }

	// RVA: 0x3856 Offset: 0x3856 VA: 0x3856
	public void CallStaminaChangedEvent(float staminaPercent, float currentStamina, float staminaAmount) { }

	// RVA: 0x3857 Offset: 0x3857 VA: 0x3857
	public void .ctor() { }
}

===== C# end =====
*/

// ---- StaminaEvent$$add_OnStaminaChanged ----
// C#: void StaminaEvent__add_OnStaminaChanged (StaminaEvent_o* __this, System_Action_StaminaEvent__StaminaEventArgs__o* value, const MethodInfo* method);

void StaminaEvent__add_OnStaminaChanged
               (StaminaEvent_o *__this,System_Action_StaminaEvent__StaminaEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b4d == '\0') {
    unnamed_function_1099(&System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
    DAT_ram_00664b4d = '\x01';
  }
  param1 = __this->OnStaminaChanged;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnStaminaChanged,param2_00,param1);
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

// ---- StaminaEvent$$remove_OnStaminaChanged ----
// C#: void StaminaEvent__remove_OnStaminaChanged (StaminaEvent_o* __this, System_Action_StaminaEvent__StaminaEventArgs__o* value, const MethodInfo* method);

void StaminaEvent__remove_OnStaminaChanged
               (StaminaEvent_o *__this,System_Action_StaminaEvent__StaminaEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b4e == '\0') {
    unnamed_function_1099(&System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
    DAT_ram_00664b4e = '\x01';
  }
  param1 = __this->OnStaminaChanged;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnStaminaChanged,param2_00,param1);
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

// ---- StaminaEvent$$CallStaminaChangedEvent ----
// C#: void StaminaEvent__CallStaminaChangedEvent (StaminaEvent_o* __this, float staminaPercent, float currentStamina, float staminaAmount, const MethodInfo* method);

void StaminaEvent__CallStaminaChangedEvent
               (StaminaEvent_o *__this,float staminaPercent,float currentStamina,float staminaAmount
               ,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b4f == '\0') {
    unnamed_function_1099(&StaminaEventArgs_TypeInfo);
    DAT_ram_00664b4f = '\x01';
  }
  pAVar2 = __this->OnStaminaChanged;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(StaminaEventArgs_TypeInfo);
    if (DAT_ram_00664b50 == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664b50 = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(float *)(iVar1 + 0x10) = staminaAmount;
    *(float *)(iVar1 + 0xc) = currentStamina;
    *(float *)(iVar1 + 8) = staminaPercent;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- StaminaEvent$$.ctor ----
// C#: void StaminaEvent___ctor (StaminaEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

