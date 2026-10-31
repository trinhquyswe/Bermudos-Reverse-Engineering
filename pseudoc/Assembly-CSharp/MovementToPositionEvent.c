// Assembly-CSharp :: MovementToPositionEvent
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MovementToPositionEvent : MonoBehaviour // TypeDefIndex: 5680
{
	// Fields
	[CompilerGenerated]
	private Action<MovementToPositionEvent, MovementToPositionArgs> OnMovementToPosition; // 0x10

	// Methods

	[CompilerGenerated]
	// RVA: 0x3970 Offset: 0x3970 VA: 0x3970
	public void add_OnMovementToPosition(Action<MovementToPositionEvent, MovementToPositionArgs> value) { }

	[CompilerGenerated]
	// RVA: 0x3971 Offset: 0x3971 VA: 0x3971
	public void remove_OnMovementToPosition(Action<MovementToPositionEvent, MovementToPositionArgs> value) { }

	// RVA: 0x3972 Offset: 0x3972 VA: 0x3972
	public void CallMovementToPositionEvent(Vector3 movePosition, Vector3 currentPosition, float moveSpeed, Vector2 moveDirection, bool isDashing = False) { }

	// RVA: 0x3973 Offset: 0x3973 VA: 0x3973
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MovementToPositionEvent$$add_OnMovementToPosition ----
// C#: void MovementToPositionEvent__add_OnMovementToPosition (MovementToPositionEvent_o* __this, System_Action_MovementToPositionEvent__MovementToPositionArgs__o* value, const MethodInfo* method);

void MovementToPositionEvent__add_OnMovementToPosition
               (MovementToPositionEvent_o *__this,
               System_Action_MovementToPositionEvent__MovementToPositionArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_0066492e == '\0') {
    unnamed_function_1099(&System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
    DAT_ram_0066492e = '\x01';
  }
  param1 = __this->OnMovementToPosition;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85158(param1,value,0);
    param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,
                               System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnMovementToPosition,param2_00,param1);
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

// ---- MovementToPositionEvent$$remove_OnMovementToPosition ----
// C#: void MovementToPositionEvent__remove_OnMovementToPosition (MovementToPositionEvent_o* __this, System_Action_MovementToPositionEvent__MovementToPositionArgs__o* value, const MethodInfo* method);

void MovementToPositionEvent__remove_OnMovementToPosition
               (MovementToPositionEvent_o *__this,
               System_Action_MovementToPositionEvent__MovementToPositionArgs__o *value,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  int param1_00;
  Action_o *pAVar2;
  
  if (DAT_ram_0066492f == '\0') {
    unnamed_function_1099(&System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo);
    DAT_ram_0066492f = '\x01';
  }
  param1 = __this->OnMovementToPosition;
  while( true ) {
    param2_00 = 0;
    param1_00 = unnamed_function_85160(param1,value,0);
    param2 = System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo;
    if ((param1_00 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_00,
                               System_Action_MovementToPositionEvent__MovementToPositionArgs__TypeInfo
                              ), param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&__this->OnMovementToPosition,param2_00,param1);
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

// ---- MovementToPositionEvent$$CallMovementToPositionEvent ----
// C#: void MovementToPositionEvent__CallMovementToPositionEvent (MovementToPositionEvent_o* __this, UnityEngine_Vector3_o movePosition, UnityEngine_Vector3_o currentPosition, float moveSpeed, UnityEngine_Vector2_o moveDirection, bool isDashing, const MethodInfo* method);

void MovementToPositionEvent__CallMovementToPositionEvent
               (MovementToPositionEvent_o *__this,Vector3_o *movePosition,Vector3_o *currentPosition
               ,float moveSpeed,Vector2_o *moveDirection,bool isDashing,MethodInfo *method)

{
  int iVar1;
  Action_o *pAVar2;
  Vector2_o VVar3;
  
  if (DAT_ram_00664930 == '\0') {
    unnamed_function_1099(&MovementToPositionArgs_TypeInfo);
    DAT_ram_00664930 = '\x01';
  }
  pAVar2 = __this->OnMovementToPosition;
  if (pAVar2 != (Action_o *)0x0) {
    iVar1 = unnamed_function_95402(MovementToPositionArgs_TypeInfo);
    if (DAT_ram_00664931 == '\0') {
      unnamed_function_1099(&System_EventArgs_TypeInfo);
      DAT_ram_00664931 = '\x01';
    }
    if (*(int *)(System_EventArgs_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_EventArgs_TypeInfo);
    }
    *(float *)(iVar1 + 0x10) = movePosition->z;
    *(undefined8 *)(iVar1 + 8) = *(undefined8 *)movePosition;
    *(undefined8 *)(iVar1 + 0x14) = *(undefined8 *)currentPosition;
    *(float *)(iVar1 + 0x1c) = currentPosition->z;
    *(float *)(iVar1 + 0x20) = moveSpeed;
    VVar3 = *moveDirection;
    *(bool *)(iVar1 + 0x2c) = isDashing;
    *(Vector2_o *)(iVar1 + 0x24) = VVar3;
    (**(code **)((ulonglong)(uint)pAVar2[3]._opaque * 4))
              (pAVar2[8]._opaque,__this,iVar1,pAVar2[5]._opaque);
  }
  return;
}

// ---- MovementToPositionEvent$$.ctor ----
// C#: void MovementToPositionEvent___ctor (MovementToPositionEvent_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

