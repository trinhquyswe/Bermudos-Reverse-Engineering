// Assembly-CSharp :: IdleAction
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class IdleAction : SkillsAction // TypeDefIndex: 5566
{
	// Methods

	// RVA: 0x3729 Offset: 0x3729 VA: 0x3729 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x372A Offset: 0x372A VA: 0x372A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x372B Offset: 0x372B VA: 0x372B
	public void .ctor() { }
}

===== C# end =====
*/

// ---- IdleAction$$OnAwake ----
// C#: void IdleAction__OnAwake (IdleAction_o* __this, const MethodInfo* method);

void IdleAction__OnAwake(IdleAction_o *__this,MethodInfo *method)

{
  SkillsAction__OnAwake((SkillsAction_o *)__this,(MethodInfo *)__this);
  return;
}

// ---- IdleAction$$OnUpdate ----
// C#: int32_t IdleAction__OnUpdate (IdleAction_o* __this, const MethodInfo* method);

void IdleAction__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,IdleAction_o *__this,
               MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  
  if (DAT_ram_00664ac5 == '\0') {
    unnamed_function_1099(&DAT_ram_0055fd54);
    DAT_ram_00664ac5 = '\x01';
  }
  param1 = *(undefined4 *)(__ret + 0x2c);
  param2 = unnamed_function_77425
                     (*(undefined4 *)(__ret + 0xa4),*(undefined4 *)(__ret + 0x30),DAT_ram_0055fd54);
  unnamed_function_45425(param1,param2,0);
  return;
}

// ---- IdleAction$$.ctor ----
// C#: void IdleAction___ctor (IdleAction_o* __this, const MethodInfo* method);

void IdleAction___ctor(IdleAction_o *__this,MethodInfo *method)

{
  SkillsAction___ctor((SkillsAction_o *)__this,(MethodInfo *)__this);
  return;
}

