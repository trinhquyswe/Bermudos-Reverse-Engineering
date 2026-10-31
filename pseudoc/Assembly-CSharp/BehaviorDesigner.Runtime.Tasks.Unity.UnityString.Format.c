// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Format
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Format : Action // TypeDefIndex: 5958
{
	// Fields
	[Tooltip("The format of the string")]
	public SharedString format; // 0x2C
	[Tooltip("Any variables to appear in the string")]
	public SharedGenericVariable[] variables; // 0x30
	[RequiredField]
	[Tooltip("The result of the format")]
	public SharedString storeResult; // 0x34
	private object[] variableValues; // 0x38

	// Methods

	// RVA: 0x3E35 Offset: 0x3E35 VA: 0x3E35 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3E36 Offset: 0x3E36 VA: 0x3E36 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3E37 Offset: 0x3E37 VA: 0x3E37 Slot: 16
	public override void OnReset() { }

	// RVA: 0x3E38 Offset: 0x3E38 VA: 0x3E38
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Format$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format__OnAwake (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format__OnAwake
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format_o *__this,MethodInfo *method
               )

{
  object_o *poVar1;
  
  if (DAT_ram_00664c77 == '\0') {
    unnamed_function_1099(&object___TypeInfo);
    DAT_ram_00664c77 = '\x01';
  }
  poVar1 = (object_o *)unnamed_function_1050(object___TypeInfo,__this->variables[3]._opaque);
  __this->variableValues = poVar1;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Format$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format__OnUpdate (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *param2;
  int *piVar5;
  undefined4 param2_00;
  int iVar6;
  
  if (DAT_ram_00664c78 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d0c);
    unnamed_function_1099(&DAT_ram_00565ca8);
    unnamed_function_1099(&DAT_ram_00565d10);
    DAT_ram_00664c78 = '\x01';
  }
  piVar5 = *(int **)(__ret + 0x38);
  if (0 < piVar5[3]) {
    iVar2 = 0;
    do {
      iVar3 = unnamed_function_61203
                        (*(undefined4 *)(iVar2 * 4 + *(int *)(__ret + 0x30) + 0x10),DAT_ram_00565ca8
                        );
      iVar6 = **(int **)(iVar3 + 0xc);
      iVar3 = (**(code **)((ulonglong)*(uint *)(iVar6 + 0xe8) * 4))
                        (*(int **)(iVar3 + 0xc),*(undefined4 *)(iVar6 + 0xec));
      if ((iVar3 != 0) &&
         (iVar6 = unnamed_function_1112(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
        uVar1 = unnamed_function_1123();
        unnamed_function_1109(uVar1,0);
        do {
          halt_trap();
        } while( true );
      }
      piVar5[iVar2 + 4] = iVar3;
      iVar2 = iVar2 + 1;
      piVar5 = *(int **)(__ret + 0x38);
    } while (iVar2 < piVar5[3]);
  }
  param2_00 = *(undefined4 *)(__ret + 0x34);
  DAT_ram_005ddf34 = 0;
  uVar1 = import::env::invoke_iii
                    (s___Scripting__UnityEngine__Capsul_ram_00003670 + 4,
                     *(undefined4 *)(__ret + 0x2c),DAT_ram_00565d0c);
  iVar2 = DAT_ram_005ddf34;
  DAT_ram_005ddf34 = 0;
  if (iVar2 == 1) {
    uVar1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
  }
  else {
    DAT_ram_005ddf34 = 0;
    uVar1 = import::env::invoke_iiii
                      (s___Scripting__Unity__Collections__ram_0000091f + 2,uVar1,
                       *(undefined4 *)(__ret + 0x38),0);
    if (DAT_ram_005ddf34 != 1) {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_viii
                (s___Scripting__UnityEngine__Capsul_ram_00003670 + 5,param2_00,uVar1,
                 DAT_ram_00565d10);
      if (DAT_ram_005ddf34 != 1) {
        DAT_ram_005ddf34 = 0;
        return;
      }
    }
    DAT_ram_005ddf34 = 0;
    uVar1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
  }
  iVar2 = import::env::getTempRet0();
  iVar3 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar2 == iVar3) {
    puVar4 = (undefined4 *)import::env::__cxa_begin_catch(uVar1);
    DAT_ram_005ddf34 = 0;
    uVar1 = import::env::invoke_ii(0x108,&System_Exception_TypeInfo);
    if (DAT_ram_005ddf34 != 1) {
      DAT_ram_005ddf34 = 0;
      iVar3 = import::env::invoke_iii(0x109,uVar1,*(undefined4 *)*puVar4);
      iVar2 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar2 != 1) {
        if (iVar3 != 0) {
          piVar5 = (int *)*puVar4;
          import::env::__cxa_end_catch();
          iVar2 = *piVar5;
          uVar1 = (**(code **)((ulonglong)*(uint *)(iVar2 + 0xe8) * 4))
                            (piVar5,*(undefined4 *)(iVar2 + 0xec));
          iVar2 = unnamed_function_94961(&UnityEngine_Debug_TypeInfo);
          if (*(int *)(iVar2 + 0x74) == 0) {
            unnamed_function_94848(iVar2);
          }
          unnamed_function_52411(uVar1,0);
          return;
        }
        param2 = (undefined4 *)import::env::__cxa_allocate_exception(4);
        *param2 = *puVar4;
        DAT_ram_005ddf34 = 0;
        import::env::invoke_viii(0x10a,param2,&DAT_ram_004a99ec,0);
        if (DAT_ram_005ddf34 != 1) goto code_r0x81a6cdd8;
      }
    }
    DAT_ram_005ddf34 = 0;
    uVar1 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
    DAT_ram_005ddf34 = 0;
    import::env::invoke_v(0x3a);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 == 1) {
      import::env::__cxa_find_matching_catch_3(0);
      import::env::getTempRet0();
      unnamed_function_642();
code_r0x81a6cdd8:
      do {
        halt_trap();
      } while( true );
    }
  }
  import::env::__resumeException(uVar1);
  do {
    halt_trap();
  } while( true );
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Format$$OnReset ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format__OnReset (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format__OnReset
               (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format_o *__this,MethodInfo *method
               )

{
  void *pvVar1;
  BehaviorDesigner_Runtime_SharedString_o *pBVar2;
  
  if (DAT_ram_00664c79 == '\0') {
    unnamed_function_1099(&StringLiteral_1 /* "" */);
    DAT_ram_00664c79 = '\x01';
  }
  pvVar1 = StringLiteral_1 /* "" */;
  if (DAT_ram_00664b8c == '\0') {
    unnamed_function_1099(&BehaviorDesigner_Runtime_SharedString_TypeInfo);
    DAT_ram_00664b8c = '\x01';
  }
  pBVar2 = (BehaviorDesigner_Runtime_SharedString_o *)
           unnamed_function_95402(BehaviorDesigner_Runtime_SharedString_TypeInfo);
  if (DAT_ram_00664b8d == '\0') {
    unnamed_function_1099(&DAT_ram_00565d08);
    DAT_ram_00664b8d = '\x01';
  }
  pBVar2[4].monitor = pvVar1;
  __this->variables = (SharedGenericVariable_o *)0x0;
  __this->storeResult = (BehaviorDesigner_Runtime_SharedString_o *)0x0;
  __this->format = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.Unity.UnityString.Format$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format___ctor (BehaviorDesigner_Runtime_Tasks_Unity_UnityString_Format_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

