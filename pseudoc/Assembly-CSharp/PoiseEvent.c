// Assembly-CSharp :: PoiseEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PoiseEvent : MonoBehaviour // TypeDefIndex: 5625
{
	// Fields
	[CompilerGenerated]
	private Action<PoiseEvent, PoiseEventArgs> OnPoise; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x383E Offset: 0x383E VA: 0x383E
	public void add_OnPoise(Action<PoiseEvent, PoiseEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x383F Offset: 0x383F VA: 0x383F
	public void remove_OnPoise(Action<PoiseEvent, PoiseEventArgs> value) { }

	// RVA: 0x3840 Offset: 0x3840 VA: 0x3840
	public void CallPoiseEvent(float poiseAmount, float currentPoise, float maxPoise, float stunTime) { }

	// RVA: 0x3841 Offset: 0x3841 VA: 0x3841
	public void .ctor() { }
}

===== C# end =====
*/

// ---- PoiseEvent$$add_OnPoise ----
// C#: void PoiseEvent__add_OnPoise (PoiseEvent_o* __this, System_Action_PoiseEvent__PoiseEventArgs__o* value, const MethodInfo* method);

void PoiseEvent__add_OnPoise
               (PoiseEvent_o *__this,System_Action_PoiseEvent__PoiseEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b44 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b44 = '\x01';
  }
  param1 = __this->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnPoise,param2_00,param1);
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

// ---- PoiseEvent$$remove_OnPoise ----
// C#: void PoiseEvent__remove_OnPoise (PoiseEvent_o* __this, System_Action_PoiseEvent__PoiseEventArgs__o* value, const MethodInfo* method);

void PoiseEvent__remove_OnPoise
               (PoiseEvent_o *__this,System_Action_PoiseEvent__PoiseEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b45 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b45 = '\x01';
  }
  param1 = __this->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnPoise,param2_00,param1);
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

// ---- PoiseEvent$$CallPoiseEvent ----
// C#: void PoiseEvent__CallPoiseEvent (PoiseEvent_o* __this, float poiseAmount, float currentPoise, float maxPoise, float stunTime, const MethodInfo* method);

void PoiseEvent__CallPoiseEvent
               (PoiseEvent_o *__this,float poiseAmount,float currentPoise,float maxPoise,
               float stunTime,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664b46 == '\0') {
    unnamed_function_1099(&PoiseEventArgs_TypeInfo);
    DAT_ram_00664b46 = '\x01';
  }
  pAVar2 = __this->OnPoise;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(PoiseEventArgs_TypeInfo);
    *(float *)(iVar1 + 0x14) = stunTime;
    *(float *)(iVar1 + 0x10) = maxPoise;
    *(float *)(iVar1 + 0xc) = currentPoise;
    *(float *)(iVar1 + 8) = poiseAmount;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- PoiseEvent$$.ctor ----
// C#: void PoiseEvent___ctor (PoiseEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

