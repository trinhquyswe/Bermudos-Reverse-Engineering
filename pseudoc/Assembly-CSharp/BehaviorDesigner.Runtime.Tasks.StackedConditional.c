// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.StackedConditional
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class StackedConditional : Conditional // TypeDefIndex: 5864
{
	// Fields
	[InspectTask]
	public Conditional[] conditionals; // 0x2C
	[Tooltip("Specifies if the tasks should be traversed with an AND (Sequence) or an OR (Selector).")]
	public StackedConditional.ComparisonType comparisonType; // 0x30
	[Tooltip("Should the tasks be labeled within the graph?")]
	public bool graphLabel; // 0x34

	// Methods

	// RVA: 0x3CCF Offset: 0x3CCF VA: 0x3CCF Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3CD0 Offset: 0x3CD0 VA: 0x3CD0 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3CD1 Offset: 0x3CD1 VA: 0x3CD1 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3CD2 Offset: 0x3CD2 VA: 0x3CD2 Slot: 8
	public override void OnFixedUpdate() { }

	// RVA: 0x3CD3 Offset: 0x3CD3 VA: 0x3CD3 Slot: 7
	public override void OnLateUpdate() { }

	// RVA: 0x3CD4 Offset: 0x3CD4 VA: 0x3CD4 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3CD5 Offset: 0x3CD5 VA: 0x3CD5 Slot: 21
	public override void OnTriggerEnter(Collider other) { }

	// RVA: 0x3CD6 Offset: 0x3CD6 VA: 0x3CD6 Slot: 25
	public override void OnTriggerEnter2D(Collider2D other) { }

	// RVA: 0x3CD7 Offset: 0x3CD7 VA: 0x3CD7 Slot: 22
	public override void OnTriggerExit(Collider other) { }

	// RVA: 0x3CD8 Offset: 0x3CD8 VA: 0x3CD8 Slot: 26
	public override void OnTriggerExit2D(Collider2D other) { }

	// RVA: 0x3CD9 Offset: 0x3CD9 VA: 0x3CD9 Slot: 19
	public override void OnCollisionEnter(Collision collision) { }

	// RVA: 0x3CDA Offset: 0x3CDA VA: 0x3CDA Slot: 23
	public override void OnCollisionEnter2D(Collision2D collision) { }

	// RVA: 0x3CDB Offset: 0x3CDB VA: 0x3CDB Slot: 20
	public override void OnCollisionExit(Collision collision) { }

	// RVA: 0x3CDC Offset: 0x3CDC VA: 0x3CDC Slot: 24
	public override void OnCollisionExit2D(Collision2D collision) { }

	// RVA: 0x3CDD Offset: 0x3CDD VA: 0x3CDD Slot: 18
	public override string OnDrawNodeText() { }

	// RVA: 0x3CDE Offset: 0x3CDE VA: 0x3CDE Slot: 16
	public override void OnReset() { }

	// RVA: 0x3CDF Offset: 0x3CDF VA: 0x3CDF
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnAwake (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnAwake
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,MethodInfo *method)

{
  Action_o *pAVar1;
  Action_o *pAVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      pAVar2 = pAVar1 + iVar3 + 4;
      if (pAVar2->_opaque != 0) {
        *(undefined4 *)(pAVar2->_opaque + 8) = *(undefined4 *)__this->pad_8;
        *(undefined4 *)(pAVar2->_opaque + 0xc) = *(undefined4 *)(__this->pad_8 + 4);
        *(undefined4 *)(pAVar2->_opaque + 0x14) = *(undefined4 *)(__this->pad_8 + 0xc);
        iVar4 = *(int *)pAVar2->_opaque;
        (**(code **)((ulonglong)*(uint *)(iVar4 + 0xe0) * 4))
                  ((int *)pAVar2->_opaque,*(undefined4 *)(iVar4 + 0xe4));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnStart (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnStart
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0xe8) * 4))
                  (piVar2,*(undefined4 *)(*piVar2 + 0xec));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_StackedConditional__OnUpdate (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(__ret + 0x2c);
  if (iVar1 == 0) {
    return;
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    do {
      piVar2 = *(int **)(iVar1 + iVar3 * 4 + 0x10);
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)((ulonglong)*(uint *)(*piVar2 + 0xf0) * 4))
                          (piVar2,*(undefined4 *)(*piVar2 + 0xf4));
        if (*(int *)(__ret + 0x30) == 0) {
          if (iVar1 == 1) {
            return;
          }
        }
        else if ((*(int *)(__ret + 0x30) == 1) && (iVar1 == 2)) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(__ret + 0x2c);
    } while (iVar3 < *(int *)(iVar1 + 0xc));
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnFixedUpdate ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnFixedUpdate (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnFixedUpdate
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x100) * 4))
                  (piVar2,*(undefined4 *)(*piVar2 + 0x104));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnLateUpdate ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnLateUpdate (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnLateUpdate
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0xf8) * 4))
                  (piVar2,*(undefined4 *)(*piVar2 + 0xfc));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnEnd (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnEnd
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x108) * 4))
                  (piVar2,*(undefined4 *)(*piVar2 + 0x10c));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnTriggerEnter ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnTriggerEnter (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnTriggerEnter
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,UnityEngine_Collider_o *other
               ,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x168) * 4))
                  (piVar2,other,*(undefined4 *)(*piVar2 + 0x16c));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnTriggerEnter2D ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnTriggerEnter2D (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collider2D_o* other, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnTriggerEnter2D
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,
               UnityEngine_Collider2D_o *other,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x188) * 4))
                  (piVar2,other,*(undefined4 *)(*piVar2 + 0x18c));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnTriggerExit ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnTriggerExit (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnTriggerExit
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,UnityEngine_Collider_o *other
               ,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x170) * 4))
                  (piVar2,other,*(undefined4 *)(*piVar2 + 0x174));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnTriggerExit2D ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnTriggerExit2D (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collider2D_o* other, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnTriggerExit2D
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,
               UnityEngine_Collider2D_o *other,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 400) * 4))
                  (piVar2,other,*(undefined4 *)(*piVar2 + 0x194));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnCollisionEnter ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnCollisionEnter (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnCollisionEnter
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,
               UnityEngine_Collision_o *collision,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x158) * 4))
                  (piVar2,collision,*(undefined4 *)(*piVar2 + 0x15c));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnCollisionEnter2D ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnCollisionEnter2D (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnCollisionEnter2D
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,
               UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x178) * 4))
                  (piVar2,collision,*(undefined4 *)(*piVar2 + 0x17c));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnCollisionExit ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnCollisionExit (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnCollisionExit
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,
               UnityEngine_Collision_o *collision,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x160) * 4))
                  (piVar2,collision,*(undefined4 *)(*piVar2 + 0x164));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnCollisionExit2D ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnCollisionExit2D (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnCollisionExit2D
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,
               UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x180) * 4))
                  (piVar2,collision,*(undefined4 *)(*piVar2 + 0x184));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnDrawNodeText ----
// C#: System_String_o* BehaviorDesigner_Runtime_Tasks_StackedConditional__OnDrawNodeText (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

System_String_o *
BehaviorDesigner_Runtime_Tasks_StackedConditional__OnDrawNodeText
          (BehaviorDesigner_Runtime_Tasks_StackedConditional_o *__this,MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  undefined4 param2;
  Conditional_o *pCVar3;
  System_String_o *param1;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_ram_00664bf6 == '\0') {
    unnamed_function_1099(&string_TypeInfo);
    unnamed_function_1099(&StringLiteral_43 /* "\n" */);
    DAT_ram_00664bf6 = '\x01';
  }
  pCVar3 = __this->conditionals;
  if ((pCVar3 != (Conditional_o *)0x0) && (__this->graphLabel != false)) {
    param1 = (System_String_o *)**(undefined4 **)(string_TypeInfo + 0x5c);
    if (0 < pCVar3[3]._opaque) {
      do {
        if (pCVar3[iVar4 + 4]._opaque != 0) {
          iVar1 = unnamed_function_81507(param1,0);
          if (iVar1 == 0) {
            param1 = (System_String_o *)unnamed_function_81364(param1,StringLiteral_43 /* "\n" */,0);
          }
          piVar2 = (int *)unnamed_function_82118(__this->conditionals[iVar4 + 4]._opaque);
          param2 = (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x100) * 4))
                             (piVar2,*(undefined4 *)(*piVar2 + 0x104));
          param1 = (System_String_o *)unnamed_function_81364(param1,param2,0);
          pCVar3 = __this->conditionals;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < pCVar3[3]._opaque);
    }
    return param1;
  }
  return (System_String_o *)**(undefined4 **)(string_TypeInfo + 0x5c);
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional__OnReset (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StackedAction__OnReset
               (BehaviorDesigner_Runtime_Tasks_StackedAction_o *__this,MethodInfo *method)

{
  Action_o *pAVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  pAVar1 = __this->actions;
  if ((pAVar1 != (Action_o *)0x0) && (0 < pAVar1[3]._opaque)) {
    do {
      piVar2 = (int *)pAVar1[iVar3 + 4]._opaque;
      if (piVar2 != (int *)0x0) {
        (**(code **)((ulonglong)*(uint *)(*piVar2 + 0x140) * 4))
                  (piVar2,*(undefined4 *)(*piVar2 + 0x144));
        pAVar1 = __this->actions;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < pAVar1[3]._opaque);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StackedConditional$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_StackedConditional___ctor (BehaviorDesigner_Runtime_Tasks_StackedConditional_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

