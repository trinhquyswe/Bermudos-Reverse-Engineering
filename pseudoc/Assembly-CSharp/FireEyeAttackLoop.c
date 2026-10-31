// Assembly-CSharp :: FireEyeAttackLoop
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FireEyeAttackLoop : Action // TypeDefIndex: 5564
{
	// Fields
	private RangedSkills rangedSkills; // 0x2C
	[Header("EYE LOOP")]
	public float eyeLoopRate; // 0x30
	public float eyeLoopDuration; // 0x34

	// Methods

	// RVA: 0x3723 Offset: 0x3723 VA: 0x3723 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3724 Offset: 0x3724 VA: 0x3724 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3725 Offset: 0x3725 VA: 0x3725
	public void .ctor() { }
}

===== C# end =====
*/

// ---- FireEyeAttackLoop$$OnAwake ----
// C#: void FireEyeAttackLoop__OnAwake (FireEyeAttackLoop_o* __this, const MethodInfo* method);

void FireEyeAttackLoop__OnAwake(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  RangedSkills_o *pRVar1;
  
  if (DAT_ram_00664ac3 == '\0') {
    unnamed_function_1099(&DAT_ram_0056cee4);
    DAT_ram_00664ac3 = '\x01';
  }
  pRVar1 = (RangedSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cee4);
  __this->rangedSkills = pRVar1;
  return;
}

// ---- FireEyeAttackLoop$$OnUpdate ----
// C#: int32_t FireEyeAttackLoop__OnUpdate (FireEyeAttackLoop_o* __this, const MethodInfo* method);

void FireEyeAttackLoop__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,FireEyeAttackLoop_o *__this,
               MethodInfo *method)

{
  RangedSkills__StartEyeLoop
            (*(RangedSkills_o **)(__ret + 0x2c),*(float *)(__ret + 0x34),*(float *)(__ret + 0x30),
             (MethodInfo *)0x0);
  return;
}

// ---- FireEyeAttackLoop$$.ctor ----
// C#: void FireEyeAttackLoop___ctor (FireEyeAttackLoop_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

