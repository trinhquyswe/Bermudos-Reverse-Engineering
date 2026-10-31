// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.InvokeMethod
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class InvokeMethod : Action // TypeDefIndex: 5831
{
	// Fields
	[Tooltip("The GameObject to invoke the method on")]
	public SharedGameObject targetGameObject; // 0x2C
	[Tooltip("The component to invoke the method on")]
	public SharedString componentName; // 0x30
	[Tooltip("The name of the method")]
	public SharedString methodName; // 0x34
	[Tooltip("The first parameter of the method")]
	public SharedVariable parameter1; // 0x38
	[Tooltip("The second parameter of the method")]
	public SharedVariable parameter2; // 0x3C
	[Tooltip("The third parameter of the method")]
	public SharedVariable parameter3; // 0x40
	[Tooltip("The fourth parameter of the method")]
	public SharedVariable parameter4; // 0x44
	[Tooltip("Store the result of the invoke call")]
	public SharedVariable storeResult; // 0x48

	// Methods

	// RVA: 0x3C04 Offset: 0x3C04 VA: 0x3C04 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3C05 Offset: 0x3C05 VA: 0x3C05 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3C06 Offset: 0x3C06 VA: 0x3C06
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.InvokeMethod$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_InvokeMethod__OnUpdate (BehaviorDesigner_Runtime_Tasks_InvokeMethod_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_InvokeMethod__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_InvokeMethod_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int param1;
  undefined4 uVar4;
  int *piVar5;
  undefined4 param3;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_4;
  
  iVar7 = 0;
  if (DAT_ram_00664ba3 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00564044);
    unnamed_function_1099(&DAT_ram_005636fc);
    unnamed_function_1099(&DAT_ram_00564054);
    unnamed_function_1099(&DAT_ram_00563710);
    unnamed_function_1099(&DAT_ram_005636f4);
    unnamed_function_1099(&DAT_ram_0056403c);
    unnamed_function_1099(&System_Collections_Generic_List_Type__TypeInfo);
    unnamed_function_1099(&System_Collections_Generic_List_object__TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565c9c);
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedVariable_TypeInfo);
    unnamed_function_1099(&BehaviorDesigner_Runtime_TaskUtility_TypeInfo);
    unnamed_function_1099(&System_Type_TypeInfo);
    unnamed_function_1099(&StringLiteral_8339 /* "Unable to invoke - type is null" */);
    unnamed_function_1099(&StringLiteral_8341 /* "Unable to invoke method with component " */);
    unnamed_function_1099(&StringLiteral_266 /* " on component " */);
    unnamed_function_1099(&StringLiteral_12316 /* "parameter" */);
    unnamed_function_1099(&StringLiteral_8340 /* "Unable to invoke method " */);
    unnamed_function_1099(&StringLiteral_8659 /* "Value" */);
    DAT_ram_00664ba3 = '\x01';
  }
  local_4 = 0;
  uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
  if (*(int *)(BehaviorDesigner_Runtime_TaskUtility_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(BehaviorDesigner_Runtime_TaskUtility_TypeInfo);
  }
  uVar1 = unnamed_function_51779(uVar1,0);
  if (*(int *)(System_Type_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Type_TypeInfo);
  }
  iVar2 = unnamed_function_7515(uVar1,0,0);
  if (iVar2 == 0) {
    uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565c9c);
    uVar3 = unnamed_function_51881(__ret,uVar3,0);
    uVar1 = unnamed_function_44646(uVar3,uVar1,0);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar2 = unnamed_function_44710(uVar1,0,0);
    if (iVar2 == 0) {
      iVar2 = unnamed_function_95402(System_Collections_Generic_List_object__TypeInfo);
      unnamed_function_5132(iVar2,DAT_ram_005636f4);
      param1 = unnamed_function_95402(System_Collections_Generic_List_Type__TypeInfo);
      unnamed_function_5132(param1,DAT_ram_0056403c);
      while( true ) {
        uVar3 = unnamed_function_82118(__ret);
        iVar7 = iVar7 + 1;
        local_4 = iVar7;
        uVar4 = unnamed_function_83644(&local_4,0);
        uVar4 = unnamed_function_81364(StringLiteral_12316 /* "parameter" */,uVar4,0);
        piVar5 = (int *)unnamed_function_84258(uVar3,uVar4,0);
        piVar5 = (int *)(**(code **)((ulonglong)*(uint *)(*piVar5 + 400) * 4))
                                  (piVar5,__ret,*(undefined4 *)(*piVar5 + 0x194));
        if (piVar5 == (int *)0x0) break;
        iVar8 = *piVar5;
        if (((uint)*(byte *)(iVar8 + 0xb8) <
             (uint)*(byte *)(BehaviorDesigner_Runtime_SharedVariable_TypeInfo + 0xb8)) ||
           (*(int *)(*(int *)(iVar8 + 100) +
                     (uint)*(byte *)(BehaviorDesigner_Runtime_SharedVariable_TypeInfo + 0xb8) * 4 +
                    -4) != BehaviorDesigner_Runtime_SharedVariable_TypeInfo)) break;
        uVar3 = (**(code **)((ulonglong)*(uint *)(iVar8 + 0xe8) * 4))
                          (piVar5,*(undefined4 *)(iVar8 + 0xec));
        iVar8 = DAT_ram_005636fc;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        uVar6 = *(uint *)(iVar2 + 0xc);
        if (uVar6 < *(uint *)(*(int *)(iVar2 + 8) + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar6 + 1;
          *(undefined4 *)(*(int *)(iVar2 + 8) + uVar6 * 4 + 0x10) = uVar3;
        }
        else {
          unnamed_function_6534
                    (iVar2,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
        uVar3 = unnamed_function_82118(piVar5);
        piVar5 = (int *)unnamed_function_84269(uVar3,StringLiteral_8659 /* "Value" */,0);
        uVar3 = (**(code **)((ulonglong)*(uint *)(*piVar5 + 0x140) * 4))
                          (piVar5,*(undefined4 *)(*piVar5 + 0x144));
        iVar8 = DAT_ram_00564044;
        *(int *)(param1 + 0x10) = *(int *)(param1 + 0x10) + 1;
        uVar6 = *(uint *)(param1 + 0xc);
        if (uVar6 < *(uint *)(*(int *)(param1 + 8) + 0xc)) {
          *(uint *)(param1 + 0xc) = uVar6 + 1;
          *(undefined4 *)(*(int *)(param1 + 8) + uVar6 * 4 + 0x10) = uVar3;
        }
        else {
          unnamed_function_6534
                    (param1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
        if (iVar7 == 4) break;
      }
      uVar3 = unnamed_function_82118(uVar1);
      uVar4 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d0c);
      param3 = unnamed_function_5184(param1,DAT_ram_00564054);
      uVar3 = unnamed_function_84264(uVar3,uVar4,param3,0);
      iVar7 = unnamed_function_85324(uVar3,0,0);
      if (iVar7 == 0) {
        uVar4 = unnamed_function_5184(iVar2,DAT_ram_00563710);
        uVar1 = unnamed_function_85827(uVar3,uVar1,uVar4,0);
        piVar5 = *(int **)(__ret + 0x48);
        if (piVar5 != (int *)0x0) {
          (**(code **)((ulonglong)*(uint *)(*piVar5 + 0xf0) * 4))
                    (piVar5,uVar1,*(undefined4 *)(*piVar5 + 0xf4));
        }
      }
      else {
        uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565d0c);
        uVar3 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
        uVar1 = unnamed_function_81508(StringLiteral_8340 /* "Unable to invoke method " */,uVar1,StringLiteral_266 /* " on component " */,uVar3,0);
        if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
          unnamed_function_94848(UnityEngine_Debug_TypeInfo);
        }
        unnamed_function_52416(uVar1,0);
      }
    }
    else {
      uVar1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565d0c);
      uVar1 = unnamed_function_81364(StringLiteral_8341 /* "Unable to invoke method with component " */,uVar1,0);
      if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
        unnamed_function_94848(UnityEngine_Debug_TypeInfo);
      }
      unnamed_function_52416(uVar1,0);
    }
  }
  else {
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52416(StringLiteral_8339 /* "Unable to invoke - type is null" */,0);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.InvokeMethod$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_InvokeMethod__OnReset (BehaviorDesigner_Runtime_Tasks_InvokeMethod_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_InvokeMethod__OnReset
               (BehaviorDesigner_Runtime_Tasks_InvokeMethod_o *__this,MethodInfo *method)

{
  __this->targetGameObject = (BehaviorDesigner_Runtime_SharedGameObject_o *)0x0;
  __this->componentName = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  __this->parameter4 = (SharedVariable_o *)0x0;
  __this->storeResult = (SharedVariable_o *)0x0;
  __this->parameter2 = (SharedVariable_o *)0x0;
  __this->parameter3 = (SharedVariable_o *)0x0;
  __this->methodName = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  __this->parameter1 = (SharedVariable_o *)0x0;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.InvokeMethod$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_InvokeMethod___ctor (BehaviorDesigner_Runtime_Tasks_InvokeMethod_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

