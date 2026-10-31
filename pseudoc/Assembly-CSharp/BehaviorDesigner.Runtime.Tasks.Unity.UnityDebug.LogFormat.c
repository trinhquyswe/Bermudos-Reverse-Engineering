// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class LogFormat : Action // TypeDefIndex: 6215
{
	// Fields
	[Tooltip("Text format with {0}, {1}, etc")]
	public SharedString textFormat; // 0x2C
	[Tooltip("Is this text an error?")]
	public SharedBool logError; // 0x30
	public SharedVariable arg0; // 0x34
	public SharedVariable arg1; // 0x38
	public SharedVariable arg2; // 0x3C
	public SharedVariable arg3; // 0x40

	// Methods

	// RVA: 0x41AA Offset: 0x41AA VA: 0x41AA Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x41AB Offset: 0x41AB VA: 0x41AB
	private object[] buildParamsArray() { }

	// RVA: 0x41AC Offset: 0x41AC VA: 0x41AC
	private bool isValid(SharedVariable sv) { }

	// RVA: 0x41AD Offset: 0x41AD VA: 0x41AD Slot: 16
	public override void OnReset() { }

	// RVA: 0x41AE Offset: 0x41AE VA: 0x41AE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o *__this,
               MethodInfo *method)

{
  System_Object_array *param2;
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664e1a == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c78);
    unnamed_function_1099(&DAT_ram_00565d0c);
    DAT_ram_00664e1a = '\x01';
  }
  param2 = BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__buildParamsArray
                     ((BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o *)__ret,
                      (MethodInfo *)__ret);
  iVar1 = unnamed_function_61191(*(undefined4 *)(__ret + 0x30),DAT_ram_00565c78);
  param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  if (iVar1 != 0) {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52413(param1,param2,0);
    return;
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52409(param1,param2,0);
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat$$buildParamsArray ----
// C#: System_Object_array* BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__buildParamsArray (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o* __this, const MethodInfo* method);

System_Object_array *
BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__buildParamsArray
          (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Object_array *pSVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_ram_00664e1b == '\0') {
    unnamed_function_1099(&object___TypeInfo);
    DAT_ram_00664e1b = '\x01';
  }
  if ((__this->arg3 == (SharedVariable_o *)0x0) ||
     (iVar1 = unnamed_function_51865(__this->arg3,0), iVar1 != 0)) {
    if ((__this->arg2 == (SharedVariable_o *)0x0) ||
       (iVar1 = unnamed_function_51865(__this->arg2,0), iVar1 != 0)) {
      if ((__this->arg1 == (SharedVariable_o *)0x0) ||
         (iVar1 = unnamed_function_51865(__this->arg1,0), iVar1 != 0)) {
        if (__this->arg0 == (SharedVariable_o *)0x0) {
          return (System_Object_array *)0x0;
        }
        iVar1 = unnamed_function_51865(__this->arg0,0);
        if (iVar1 != 0) {
          return (System_Object_array *)0x0;
        }
        pSVar2 = (System_Object_array *)unnamed_function_1050(object___TypeInfo,1);
        iVar1 = __this->arg0->_opaque;
        iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                          (__this->arg0,*(undefined4 *)(iVar1 + 0xec));
        if ((iVar1 != 0) &&
           (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0
           )) {
          uVar4 = unnamed_function_1123();
          unnamed_function_1109(uVar4,0);
          do {
            halt_trap();
          } while( true );
        }
      }
      else {
        pSVar2 = (System_Object_array *)unnamed_function_1050(object___TypeInfo,2);
        iVar1 = __this->arg1->_opaque;
        iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                          (__this->arg1,*(undefined4 *)(iVar1 + 0xec));
        if ((iVar1 != 0) &&
           (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0
           )) {
          uVar4 = unnamed_function_1123();
          unnamed_function_1109(uVar4,0);
          do {
            halt_trap();
          } while( true );
        }
        pSVar2[5]._opaque = iVar1;
        iVar1 = __this->arg0->_opaque;
        iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                          (__this->arg0,*(undefined4 *)(iVar1 + 0xec));
        if ((iVar1 != 0) &&
           (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0
           )) {
          uVar4 = unnamed_function_1123();
          unnamed_function_1109(uVar4,0);
          do {
            halt_trap();
          } while( true );
        }
      }
    }
    else {
      pSVar2 = (System_Object_array *)unnamed_function_1050(object___TypeInfo,3);
      iVar1 = __this->arg2->_opaque;
      iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                        (__this->arg2,*(undefined4 *)(iVar1 + 0xec));
      if ((iVar1 != 0) &&
         (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0))
      {
        uVar4 = unnamed_function_1123();
        unnamed_function_1109(uVar4,0);
        do {
          halt_trap();
        } while( true );
      }
      pSVar2[6]._opaque = iVar1;
      iVar1 = __this->arg1->_opaque;
      iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                        (__this->arg1,*(undefined4 *)(iVar1 + 0xec));
      if ((iVar1 != 0) &&
         (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0))
      {
        uVar4 = unnamed_function_1123();
        unnamed_function_1109(uVar4,0);
        do {
          halt_trap();
        } while( true );
      }
      pSVar2[5]._opaque = iVar1;
      iVar1 = __this->arg0->_opaque;
      iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                        (__this->arg0,*(undefined4 *)(iVar1 + 0xec));
      if ((iVar1 != 0) &&
         (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0))
      {
        uVar4 = unnamed_function_1123();
        unnamed_function_1109(uVar4,0);
        do {
          halt_trap();
        } while( true );
      }
    }
  }
  else {
    pSVar2 = (System_Object_array *)unnamed_function_1050(object___TypeInfo,4);
    iVar1 = __this->arg3->_opaque;
    iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                      (__this->arg3,*(undefined4 *)(iVar1 + 0xec));
    if ((iVar1 != 0) &&
       (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0)) {
      uVar4 = unnamed_function_1123();
      unnamed_function_1109(uVar4,0);
      do {
        halt_trap();
      } while( true );
    }
    pSVar2[7]._opaque = iVar1;
    iVar1 = __this->arg2->_opaque;
    iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                      (__this->arg2,*(undefined4 *)(iVar1 + 0xec));
    if ((iVar1 != 0) &&
       (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0)) {
      uVar4 = unnamed_function_1123();
      unnamed_function_1109(uVar4,0);
      do {
        halt_trap();
      } while( true );
    }
    pSVar2[6]._opaque = iVar1;
    iVar1 = __this->arg1->_opaque;
    iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                      (__this->arg1,*(undefined4 *)(iVar1 + 0xec));
    if ((iVar1 != 0) &&
       (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0)) {
      uVar4 = unnamed_function_1123();
      unnamed_function_1109(uVar4,0);
      do {
        halt_trap();
      } while( true );
    }
    pSVar2[5]._opaque = iVar1;
    iVar1 = __this->arg0->_opaque;
    iVar1 = (**(code **)((ulonglong)*(uint *)(iVar1 + 0xe8) * 4))
                      (__this->arg0,*(undefined4 *)(iVar1 + 0xec));
    if ((iVar1 != 0) &&
       (iVar3 = unnamed_function_1112(iVar1,*(undefined4 *)(pSVar2->_opaque + 0x20)), iVar3 == 0)) {
      uVar4 = unnamed_function_1123();
      unnamed_function_1109(uVar4,0);
      do {
        halt_trap();
      } while( true );
    }
  }
  pSVar2[4]._opaque = iVar1;
  return pSVar2;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat$$isValid ----
// C#: bool BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__isValid (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o* __this, BehaviorDesigner_Runtime_SharedVariable_o* sv, const MethodInfo* method);

bool BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__isValid
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o *__this,
               BehaviorDesigner_Runtime_SharedVariable_o *sv,MethodInfo *method)

{
  undefined4 uVar1;
  
  if (sv != (BehaviorDesigner_Runtime_SharedVariable_o *)0x0) {
    uVar1 = unnamed_function_51865(sv,0);
    return (bool)((byte)uVar1 ^ 1);
  }
  return false;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o *__this,
               MethodInfo *method)

{
  BehaviorDesigner_Runtime_SharedString_o *pBVar1;
  BehaviorDesigner_Runtime_SharedBool_o *pBVar2;
  
  if (DAT_ram_00664e1c == '\0') {
    unnamed_function_1099(&string_TypeInfo);
    DAT_ram_00664e1c = '\x01';
  }
  pBVar1 = BehaviorDesigner_Runtime_SharedString__op_Implicit
                     ((System_String_o *)**(undefined4 **)(string_TypeInfo + 0x5c),(MethodInfo *)0x0
                     );
  __this->textFormat = pBVar1;
  pBVar2 = BehaviorDesigner_Runtime_SharedBool__op_Implicit(false,(MethodInfo *)0x0);
  __this->arg0 = (SharedVariable_o *)0x0;
  __this->arg1 = (SharedVariable_o *)0x0;
  __this->logError = pBVar2;
  __this->arg2 = (SharedVariable_o *)0x0;
  __this->arg3 = (SharedVariable_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityDebug.LogFormat$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityDebug_LogFormat_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

