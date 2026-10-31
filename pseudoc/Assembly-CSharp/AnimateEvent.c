// Assembly-CSharp :: AnimateEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AnimateEvent : MonoBehaviour // TypeDefIndex: 5544
{
	// Fields
	[CompilerGenerated]
	private Action<AnimateEvent, AnimateEventArgs> OnAnimate; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x36B0 Offset: 0x36B0 VA: 0x36B0
	public void add_OnAnimate(Action<AnimateEvent, AnimateEventArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x36B1 Offset: 0x36B1 VA: 0x36B1
	public void remove_OnAnimate(Action<AnimateEvent, AnimateEventArgs> value) { }

	// RVA: 0x36B2 Offset: 0x36B2 VA: 0x36B2
	public void CallAnimateEvent(AimDirection aimDirection) { }

	// RVA: 0x36B3 Offset: 0x36B3 VA: 0x36B3
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AnimateEvent$$add_OnAnimate ----
// C#: void AnimateEvent__add_OnAnimate (AnimateEvent_o* __this, System_Action_AnimateEvent__AnimateEventArgs__o* value, const MethodInfo* method);

void AnimateEvent__add_OnAnimate
               (AnimateEvent_o *__this,System_Action_AnimateEvent__AnimateEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a7c == '\0') {
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    DAT_ram_00664a7c = '\x01';
  }
  param1 = __this->OnAnimate;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnAnimate,param2_00,param1);
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

// ---- AnimateEvent$$remove_OnAnimate ----
// C#: void AnimateEvent__remove_OnAnimate (AnimateEvent_o* __this, System_Action_AnimateEvent__AnimateEventArgs__o* value, const MethodInfo* method);

void AnimateEvent__remove_OnAnimate
               (AnimateEvent_o *__this,System_Action_AnimateEvent__AnimateEventArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a7d == '\0') {
    unnamed_function_1099(&System_Action_AnimateEvent__AnimateEventArgs__TypeInfo);
    DAT_ram_00664a7d = '\x01';
  }
  param1 = __this->OnAnimate;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_AnimateEvent__AnimateEventArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,System_Action_AnimateEvent__AnimateEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnAnimate,param2_00,param1);
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

// ---- AnimateEvent$$CallAnimateEvent ----
// C#: void AnimateEvent__CallAnimateEvent (AnimateEvent_o* __this, int32_t aimDirection, const MethodInfo* method);

void AnimateEvent__CallAnimateEvent
               (AnimateEvent_o *__this,AimDirection aimDirection,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  
  if (DAT_ram_00664a7e == '\0') {
    unnamed_function_1099(&AnimateEventArgs_TypeInfo);
    DAT_ram_00664a7e = '\x01';
  }
  pAVar2 = __this->OnAnimate;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(AnimateEventArgs_TypeInfo);
    if (DAT_ram_00664a7f == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664a7f = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(AimDirection *)(iVar1 + 8) = aimDirection;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- AnimateEvent$$.ctor ----
// C#: void AnimateEvent___ctor (AnimateEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

