// Assembly-CSharp :: MeleeSkillAction
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MeleeSkillAction : SkillsAction // TypeDefIndex: 5570
{
	// Fields
	private MeleeSkills meleeSkills; // 0xA8

	// Methods

	// RVA: 0x3738 Offset: 0x3738 VA: 0x3738 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3739 Offset: 0x3739 VA: 0x3739 Slot: 5
	public override void OnStart() { }

	// RVA: 0x373A Offset: 0x373A VA: 0x373A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x373B Offset: 0x373B VA: 0x373B Slot: 9
	public override void OnEnd() { }

	// RVA: 0x373C Offset: 0x373C VA: 0x373C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MeleeSkillAction$$OnAwake ----
// C#: void MeleeSkillAction__OnAwake (MeleeSkillAction_o* __this, const MethodInfo* method);

void MeleeSkillAction__OnAwake(MeleeSkillAction_o *__this,MethodInfo *method)

{
  MeleeSkills_o *pMVar1;
  
  if (DAT_ram_00664ac9 == '\0') {
    unnamed_function_1099(&DAT_ram_0056cedc);
    DAT_ram_00664ac9 = '\x01';
  }
  SkillsAction__OnAwake((SkillsAction_o *)__this,(MethodInfo *)__this);
  pMVar1 = (MeleeSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cedc);
  __this->meleeSkills = pMVar1;
  return;
}

// ---- MeleeSkillAction$$OnStart ----
// C#: void MeleeSkillAction__OnStart (MeleeSkillAction_o* __this, const MethodInfo* method);

void MeleeSkillAction__OnStart(MeleeSkillAction_o *__this,MethodInfo *method)

{
  int skill;
  MeleeSkills_o *__this_00;
  
  if (DAT_ram_00664aca == '\0') {
    unnamed_function_1099(&DAT_ram_0055fd54);
    DAT_ram_00664aca = '\x01';
  }
  __this->pad_8[0x30] = 1;
  __this_00 = __this->meleeSkills;
  skill = unnamed_function_77425
                    (*(undefined4 *)(__this->pad_8 + 0x9c),*(undefined4 *)(__this->pad_8 + 0x28),
                     DAT_ram_0055fd54);
  MeleeSkills__PlayActiveSkill(__this_00,skill,(MethodInfo *)0x0);
  return;
}

// ---- MeleeSkillAction$$OnUpdate ----
// C#: int32_t MeleeSkillAction__OnUpdate (MeleeSkillAction_o* __this, const MethodInfo* method);

void MeleeSkillAction__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,MeleeSkillAction_o *__this,
               MethodInfo *method)

{
  if (*(char *)(*(int *)(__ret + 0xa8) + 0x4c) != '\0') {
    (**(code **)((ulonglong)*(uint *)(*(int *)__ret + 0x1b8) * 4))
              (__ret,*(undefined4 *)(__ret + 0x34),*(undefined4 *)(*(int *)__ret + 0x1bc));
    return;
  }
  return;
}

// ---- MeleeSkillAction$$OnEnd ----
// C#: void MeleeSkillAction__OnEnd (MeleeSkillAction_o* __this, const MethodInfo* method);

void MeleeSkillAction__OnEnd(MeleeSkillAction_o *__this,MethodInfo *method)

{
  __this->pad_8[0x30] = 0;
  __this->meleeSkills->isAttacking = false;
  return;
}

// ---- MeleeSkillAction$$.ctor ----
// C#: void MeleeSkillAction___ctor (MeleeSkillAction_o* __this, const MethodInfo* method);

void IdleAction___ctor(IdleAction_o *__this,MethodInfo *method)

{
  SkillsAction___ctor((SkillsAction_o *)__this,(MethodInfo *)__this);
  return;
}

