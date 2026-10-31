// Assembly-CSharp :: DestroyedEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DestroyedEvent : MonoBehaviour // TypeDefIndex: 5617
{
	// Fields
	[CompilerGenerated]
	private Action<DestroyedEvent, DestroyedEventArgs> OnDestroyed; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x381E Offset: 0x381E VA: 0x381E
	public void add_OnDestroyed(Action<DestroyedEvent, DestroyedEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x381F Offset: 0x381F VA: 0x381F
	public void remove_OnDestroyed(Action<DestroyedEvent, DestroyedEventArgs> value) { }

	// RVA: 0x3820 Offset: 0x3820 VA: 0x3820
	public void CallDestroyedEvent(DestroyedEventArgs destroyedEventArgs) { }

	// RVA: 0x3821 Offset: 0x3821 VA: 0x3821
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DestroyedEvent$$add_OnDestroyed ----
// C#: void DestroyedEvent__add_OnDestroyed (DestroyedEvent_o* __this, System_Action_DestroyedEvent__DestroyedEventArgs__o* value, const MethodInfo* method);

void DestroyedEvent__add_OnDestroyed
               (DestroyedEvent_o *__this,System_Action_DestroyedEvent__DestroyedEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b34 == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    DAT_ram_00664b34 = '\x01';
  }
  param1 = __this->OnDestroyed;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo)
       , param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDestroyed,param2_00,param1);
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

// ---- DestroyedEvent$$remove_OnDestroyed ----
// C#: void DestroyedEvent__remove_OnDestroyed (DestroyedEvent_o* __this, System_Action_DestroyedEvent__DestroyedEventArgs__o* value, const MethodInfo* method);

void DestroyedEvent__remove_OnDestroyed
               (DestroyedEvent_o *__this,System_Action_DestroyedEvent__DestroyedEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b35 == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    DAT_ram_00664b35 = '\x01';
  }
  param1 = __this->OnDestroyed;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo)
       , param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnDestroyed,param2_00,param1);
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

// ---- DestroyedEvent$$CallDestroyedEvent ----
// C#: void DestroyedEvent__CallDestroyedEvent (DestroyedEvent_o* __this, DestroyedEventArgs_o* destroyedEventArgs, const MethodInfo* method);

void DestroyedEvent__CallDestroyedEvent
               (DestroyedEvent_o *__this,DestroyedEventArgs_o *destroyedEventArgs,MethodInfo *method
               )

{
  Action_o *pAVar1;
  
  pAVar1 = __this->OnDestroyed;
  if (pAVar1 != (Action_o *)0x0) {
    (**(code **)((ulonglong)(uint)pAVar1[3]._opaque * 4))
              (pAVar1[8]._opaque,__this,destroyedEventArgs,pAVar1[5]._opaque);
  }
  return;
}

// ---- DestroyedEvent$$.ctor ----
// C#: void DestroyedEvent___ctor (DestroyedEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

