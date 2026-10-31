// Assembly-CSharp :: FireOpenMouthLoop
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class FireOpenMouthLoop : Action // TypeDefIndex: 5565
{
	// Fields
	private RangedSkills rangedSkills; // 0x2C
	public float mouthOpenLoopRate; // 0x30
	public float mouthOpenLoopDuration; // 0x34

	// Methods

	// RVA: 0x3726 Offset: 0x3726 VA: 0x3726 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3727 Offset: 0x3727 VA: 0x3727 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3728 Offset: 0x3728 VA: 0x3728
	public void .ctor() { }
}

===== C# end =====
*/

// ---- FireOpenMouthLoop$$OnAwake ----
// C#: void FireOpenMouthLoop__OnAwake (FireOpenMouthLoop_o* __this, const MethodInfo* method);

void FireOpenMouthLoop__OnAwake(FireOpenMouthLoop_o *__this,MethodInfo *method)

{
  RangedSkills_o *pRVar1;
  
  if (DAT_ram_00664ac4 == '\0') {
    unnamed_function_1099(&DAT_ram_0056cee4);
    DAT_ram_00664ac4 = '\x01';
  }
  pRVar1 = (RangedSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cee4);
  __this->rangedSkills = pRVar1;
  return;
}

// ---- FireOpenMouthLoop$$OnUpdate ----
// C#: int32_t FireOpenMouthLoop__OnUpdate (FireOpenMouthLoop_o* __this, const MethodInfo* method);

void FireOpenMouthLoop__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,FireOpenMouthLoop_o *__this,
               MethodInfo *method)

{
  RangedSkills__StartMouthOpenLoopMouth
            (*(RangedSkills_o **)(__ret + 0x2c),*(float *)(__ret + 0x30),*(float *)(__ret + 0x34),
             (MethodInfo *)0x0);
  return;
}

// ---- FireOpenMouthLoop$$.ctor ----
// C#: void FireOpenMouthLoop___ctor (FireOpenMouthLoop_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

