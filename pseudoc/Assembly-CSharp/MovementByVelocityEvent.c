// Assembly-CSharp :: MovementByVelocityEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MovementByVelocityEvent : MonoBehaviour // TypeDefIndex: 5676
{
	// Fields
	[CompilerGenerated]
	private Action<MovementByVelocityEvent, MovementByVelocityArgs> OnMovementByVelocity; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3963 Offset: 0x3963 VA: 0x3963
	public void add_OnMovementByVelocity(Action<MovementByVelocityEvent, MovementByVelocityArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3964 Offset: 0x3964 VA: 0x3964
	public void remove_OnMovementByVelocity(Action<MovementByVelocityEvent, MovementByVelocityArgs> value) { }

	// RVA: 0x3965 Offset: 0x3965 VA: 0x3965
	public void CallMovementByVelocityEvent(Vector2 moveDirection, float moveSpeed) { }

	// RVA: 0x3966 Offset: 0x3966 VA: 0x3966
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MovementByVelocityEvent$$add_OnMovementByVelocity ----
// C#: void MovementByVelocityEvent__add_OnMovementByVelocity (MovementByVelocityEvent_o* __this, System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o* value, const MethodInfo* method);

void MovementByVelocityEvent__add_OnMovementByVelocity
               (MovementByVelocityEvent_o *__this,
               System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664927 == '\0') {
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    DAT_ram_00664927 = '\x01';
  }
  param1 = __this->OnMovementByVelocity;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,
                               System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnMovementByVelocity,param2_00,param1);
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

// ---- MovementByVelocityEvent$$remove_OnMovementByVelocity ----
// C#: void MovementByVelocityEvent__remove_OnMovementByVelocity (MovementByVelocityEvent_o* __this, System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o* value, const MethodInfo* method);

void MovementByVelocityEvent__remove_OnMovementByVelocity
               (MovementByVelocityEvent_o *__this,
               System_Action_MovementByVelocityEvent__MovementByVelocityArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_00664928 == '\0') {
    unnamed_function_1099(&System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo);
    DAT_ram_00664928 = '\x01';
  }
  param1 = __this->OnMovementByVelocity;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,
                               System_Action_MovementByVelocityEvent__MovementByVelocityArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnMovementByVelocity,param2_00,param1);
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

// ---- MovementByVelocityEvent$$CallMovementByVelocityEvent ----
// C#: void MovementByVelocityEvent__CallMovementByVelocityEvent (MovementByVelocityEvent_o* __this, UnityEngine_Vector2_o moveDirection, float moveSpeed, const MethodInfo* method);

void MovementByVelocityEvent__CallMovementByVelocityEvent
               (MovementByVelocityEvent_o *__this,Vector2_o *moveDirection,float moveSpeed,
               MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  Vector2_o VVar3;
  
  if (DAT_ram_00664929 == '\0') {
    unnamed_function_1099(&MovementByVelocityArgs_TypeInfo);
    DAT_ram_00664929 = '\x01';
  }
  pAVar2 = __this->OnMovementByVelocity;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(MovementByVelocityArgs_TypeInfo);
    if (DAT_ram_0066492a == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_0066492a = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    VVar3 = *moveDirection;
    *(float *)(iVar1 + 0x10) = moveSpeed;
    *(Vector2_o *)(iVar1 + 8) = VVar3;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- MovementByVelocityEvent$$.ctor ----
// C#: void MovementByVelocityEvent___ctor (MovementByVelocityEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

