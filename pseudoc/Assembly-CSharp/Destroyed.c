// Assembly-CSharp :: Destroyed
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Destroyed : MonoBehaviour // TypeDefIndex: 5616
{
	// Fields
	private DestroyedEvent destroyedEvent; // 0x10
	private Player player; // 0x14
	private DieEvent dieEvent; // 0x18

	// Methods

	// RVA: 0x3811 Offset: 0x3811 VA: 0x3811
	private void Awake() { }

	// RVA: 0x3812 Offset: 0x3812 VA: 0x3812
	private void OnEnable() { }

	// RVA: 0x3813 Offset: 0x3813 VA: 0x3813
	private void OnDisable() { }

	// RVA: 0x3814 Offset: 0x3814 VA: 0x3814
	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs) { }

	[IteratorStateMachine(typeof(Destroyed.<Die>d__7))]
	// RVA: 0x3815 Offset: 0x3815 VA: 0x3815
	private IEnumerator Die() { }

	// RVA: 0x3816 Offset: 0x3816 VA: 0x3816
	private void MarkEnemyAsDead() { }

	// RVA: 0x3817 Offset: 0x3817 VA: 0x3817
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Destroyed$$Awake ----
// C#: void Destroyed__Awake (Destroyed_o* __this, const MethodInfo* method);

void Destroyed__Awake(Destroyed_o *__this,MethodInfo *method)

{
  DestroyedEvent_o *pDVar1;
  Player_o *pPVar2;
  DieEvent_o *pDVar3;
  
  if (DAT_ram_00664b2d == '\0') {
    unnamed_function_1099(&DAT_ram_00567e70);
    unnamed_function_1099(&DAT_ram_00567e74);
    unnamed_function_1099(&DAT_ram_00567ef0);
    DAT_ram_00664b2d = '\x01';
  }
  pDVar1 = (DestroyedEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e70);
  __this->destroyedEvent = pDVar1;
  pPVar2 = (Player_o *)unnamed_function_65370(__this,DAT_ram_00567ef0);
  __this->player = pPVar2;
  pDVar3 = (DieEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e74);
  __this->dieEvent = pDVar3;
  return;
}

// ---- Destroyed$$OnEnable ----
// C#: void Destroyed__OnEnable (Destroyed_o* __this, const MethodInfo* method);

void Destroyed__OnEnable(Destroyed_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  DestroyedEvent_o *pDVar3;
  
  if (DAT_ram_00664b2e == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568cb4);
    DAT_ram_00664b2e = '\x01';
  }
  pDVar3 = __this->destroyedEvent;
  param1_00 = unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568cb4,0);
  if (DAT_ram_00664b34 == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    DAT_ram_00664b34 = '\x01';
  }
  param1 = pDVar3->OnDestroyed;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo)
       , param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pDVar3->OnDestroyed,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- Destroyed$$OnDisable ----
// C#: void Destroyed__OnDisable (Destroyed_o* __this, const MethodInfo* method);

void Destroyed__OnDisable(Destroyed_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  DestroyedEvent_o *pDVar3;
  
  if (DAT_ram_00664b2f == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568cb4);
    DAT_ram_00664b2f = '\x01';
  }
  pDVar3 = __this->destroyedEvent;
  param1_00 = unnamed_function_95402(System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00568cb4,0);
  if (DAT_ram_00664b35 == '\0') {
    unnamed_function_1099(&System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo);
    DAT_ram_00664b35 = '\x01';
  }
  param1 = pDVar3->OnDestroyed;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo)
       , param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pDVar3->OnDestroyed,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- Destroyed$$DestroyedEvent_OnDestroyed ----
// C#: void Destroyed__DestroyedEvent_OnDestroyed (Destroyed_o* __this, DestroyedEvent_o* destroyedEvent, DestroyedEventArgs_o* destroyedEventArgs, const MethodInfo* method);

void Destroyed__DestroyedEvent_OnDestroyed
               (Destroyed_o *__this,DestroyedEvent_o *destroyedEvent,
               DestroyedEventArgs_o *destroyedEventArgs,MethodInfo *method)

{
  int param2;
  undefined4 param1;
  
  if (DAT_ram_00664b30 == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664b30 = '\x01';
  }
  if (destroyedEventArgs->playerDied != false) {
    if (DAT_ram_00664b31 == '\0') {
      unnamed_function_1099(&Destroyed__Die_d__7_TypeInfo);
      DAT_ram_00664b31 = '\x01';
    }
    param2 = unnamed_function_95402(Destroyed__Die_d__7_TypeInfo);
    *(Destroyed_o **)(param2 + 0x10 /* destroyedEvent */) = __this;
    *(undefined4 *)(param2 + 8) = 0;
    unnamed_function_44725(__this,param2,0);
    return;
  }
  if (destroyedEventArgs->bossDied == false) {
    Destroyed__MarkEnemyAsDead(__this,(MethodInfo *)__this);
    param1 = unnamed_function_44644(__this,0);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    unnamed_function_44782(param1,0);
  }
  return;
}

// ---- Destroyed$$Die ----
// C#: System_Collections_IEnumerator_o* Destroyed__Die (Destroyed_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o * Destroyed__Die(Destroyed_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664b31 == '\0') {
    unnamed_function_1099(&Destroyed__Die_d__7_TypeInfo);
    DAT_ram_00664b31 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)unnamed_function_95402(Destroyed__Die_d__7_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- Destroyed$$MarkEnemyAsDead ----
// C#: void Destroyed__MarkEnemyAsDead (Destroyed_o* __this, const MethodInfo* method);

void Destroyed__MarkEnemyAsDead(Destroyed_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_ram_00664b32 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e78);
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00562b68);
    unnamed_function_1099(&DAT_ram_0056c1a0);
    unnamed_function_1099(&DAT_ram_0056c1bc);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&StringLiteral_3540 /* "Enemy Marked as dead" */);
    DAT_ram_00664b32 = '\x01';
  }
  iVar2 = unnamed_function_65370(__this,DAT_ram_00567e78);
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(**(int **)(iVar5 + 0x5c) + 0x14);
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar1 = 0;
    do {
      iVar7 = *(int *)(iVar5 + iVar1 * 4 + 0x10);
      iVar3 = unnamed_function_81494(*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar7 + 0x18),0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
        if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = unnamed_function_95087(iVar3);
        }
        uVar4 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
        iVar3 = unnamed_function_60732(uVar4,*(undefined4 *)(iVar7 + 0x18),0);
        if (iVar3 != 0) {
          iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
          }
          uVar4 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
          iVar3 = unnamed_function_60819(uVar4,*(undefined4 *)(iVar7 + 0x18),0,DAT_ram_0056c1bc);
          unnamed_function_9755
                    (*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar2 + 0x48),0,DAT_ram_00562b68)
          ;
          iVar6 = *(int *)(DAT_ram_00565d78 + 0x10);
          if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = unnamed_function_95087(iVar6);
          }
          iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 8);
          if ((*(byte *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = unnamed_function_95087(iVar6);
          }
          uVar4 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar6 + 0x5c) + 0x18),0);
          unnamed_function_60813(uVar4,*(undefined4 *)(iVar7 + 0x18),iVar3,DAT_ram_0056c1a0);
          iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
          if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
          }
          uVar4 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
          unnamed_function_60714(uVar4,0,0);
          uVar4 = unnamed_function_83644((undefined4 *)(iVar2 + 0x48),0);
          uVar4 = unnamed_function_81364(StringLiteral_3540 /* "Enemy Marked as dead" */,uVar4,0);
          if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
            unnamed_function_94848(UnityEngine_Debug_TypeInfo);
          }
          unnamed_function_52407(uVar4,0);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(iVar5 + 0xc));
  }
  return;
}

// ---- Destroyed$$.ctor ----
// C#: void Destroyed___ctor (Destroyed_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

