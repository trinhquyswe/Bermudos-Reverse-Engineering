// Assembly-CSharp :: BehaviorDesigner.Runtime.Tasks.StunAction
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class StunAction : SkillsAction // TypeDefIndex: 5876
{
	// Fields
	private Boss boss; // 0xA8
	private Poise poise; // 0xAC
	public SharedFloat stunTime; // 0xB0

	// Methods

	// RVA: 0x3D1E Offset: 0x3D1E VA: 0x3D1E Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3D1F Offset: 0x3D1F VA: 0x3D1F Slot: 5
	public override void OnStart() { }

	// RVA: 0x3D20 Offset: 0x3D20 VA: 0x3D20 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3D21 Offset: 0x3D21 VA: 0x3D21 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3D22 Offset: 0x3D22 VA: 0x3D22
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BehaviorDesigner.Runtime.Tasks.StunAction$$OnAwake ----
// C#: void BehaviorDesigner_Runtime_Tasks_StunAction__OnAwake (BehaviorDesigner_Runtime_Tasks_StunAction_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StunAction__OnAwake
               (BehaviorDesigner_Runtime_Tasks_StunAction_o *__this,MethodInfo *method)

{
  Poise_o *pPVar1;
  Boss_o *pBVar2;
  
  if (DAT_ram_00664bfe == '\0') {
    unnamed_function_1099(&DAT_ram_0056cec4);
    unnamed_function_1099(&DAT_ram_0056cee0);
    DAT_ram_00664bfe = '\x01';
  }
  SkillsAction__OnAwake((SkillsAction_o *)__this,(MethodInfo *)0x0);
  pPVar1 = (Poise_o *)unnamed_function_69916(__this,DAT_ram_0056cee0);
  __this->poise = pPVar1;
  pBVar2 = (Boss_o *)unnamed_function_69916(__this,DAT_ram_0056cec4);
  __this->boss = pBVar2;
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StunAction$$OnStart ----
// C#: void BehaviorDesigner_Runtime_Tasks_StunAction__OnStart (BehaviorDesigner_Runtime_Tasks_StunAction_o* __this, const MethodInfo* method);

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
               (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *__this,MethodInfo *method)

{
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StunAction$$OnUpdate ----
// C#: int32_t BehaviorDesigner_Runtime_Tasks_StunAction__OnUpdate (BehaviorDesigner_Runtime_Tasks_StunAction_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StunAction__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,
               BehaviorDesigner_Runtime_Tasks_StunAction_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 param1;
  
  if (DAT_ram_00664bff == '\0') {
    unnamed_function_1099(&DAT_ram_0055fd54);
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664bff = '\x01';
  }
  if ((*(float *)(*(int *)(__ret + 0xac) + 0x18) <= 0.0) &&
     (fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0xb0),DAT_ram_00565d00), 0.0 < fVar1))
  {
    fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0xb0),DAT_ram_00565d00);
    if ((0.5 <= fVar1) ||
       (fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0xb0),DAT_ram_00565d00), fVar1 <= 0.0
       )) {
      param1 = *(undefined4 *)(__ret + 0x2c);
      uVar2 = unnamed_function_77425
                        (*(undefined4 *)(__ret + 0xa4),*(undefined4 *)(__ret + 0x30),
                         DAT_ram_0055fd54);
      unnamed_function_45425(param1,uVar2,0);
    }
    uVar2 = *(undefined4 *)(__ret + 0xb0);
    fVar1 = unnamed_function_61226(uVar2,DAT_ram_00565d00);
    fVar3 = unnamed_function_44879(0);
    unnamed_function_61227(uVar2,fVar1 - fVar3,DAT_ram_00565d04);
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StunAction$$OnEnd ----
// C#: void BehaviorDesigner_Runtime_Tasks_StunAction__OnEnd (BehaviorDesigner_Runtime_Tasks_StunAction_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StunAction__OnEnd
               (BehaviorDesigner_Runtime_Tasks_StunAction_o *__this,MethodInfo *method)

{
  float fVar1;
  BehaviorDesigner_Runtime_SharedFloat_o *param1;
  Poise_o *pPVar2;
  
  if (DAT_ram_00664c00 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    DAT_ram_00664c00 = '\x01';
  }
  pPVar2 = __this->poise;
  if (pPVar2->currentPoise <= 0.0) {
    pPVar2->currentPoise = pPVar2->maxPoise;
  }
  fVar1 = unnamed_function_61226(__this->stunTime,DAT_ram_00565d00);
  if (fVar1 <= 0.0) {
    fVar1 = __this->poise->stunTime;
    if (DAT_ram_00664b76 == '\0') {
      unnamed_function_1099(&BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
      unnamed_function_1099(&DAT_ram_00565d04);
      DAT_ram_00664b76 = '\x01';
    }
    param1 = (BehaviorDesigner_Runtime_SharedFloat_o *)
             unnamed_function_95402(BehaviorDesigner_Runtime_SharedFloat_TypeInfo);
    if (DAT_ram_00664b77 == '\0') {
      unnamed_function_1099(&DAT_ram_00565cfc);
      DAT_ram_00664b77 = '\x01';
    }
    unnamed_function_61227(param1,fVar1,DAT_ram_00565d04);
    __this->stunTime = param1;
  }
  return;
}

// ---- BehaviorDesigner.Runtime.Tasks.StunAction$$.ctor ----
// C#: void BehaviorDesigner_Runtime_Tasks_StunAction___ctor (BehaviorDesigner_Runtime_Tasks_StunAction_o* __this, const MethodInfo* method);

void BehaviorDesigner_Runtime_Tasks_StunAction___ctor
               (BehaviorDesigner_Runtime_Tasks_StunAction_o *__this,MethodInfo *method)

{
  SkillsAction___ctor((SkillsAction_o *)__this,(MethodInfo *)0x0);
  return;
}

