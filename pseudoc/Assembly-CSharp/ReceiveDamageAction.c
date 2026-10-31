// Assembly-CSharp :: ReceiveDamageAction
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class ReceiveDamageAction : Action // TypeDefIndex: 5571
{
	// Fields
	private Animator animator; // 0x2C
	private RangedSkills rangedSkills; // 0x30
	private MeleeSkills meleeSkills; // 0x34
	private bool isFirstUpdate; // 0x38
	public SharedFloat stunTime; // 0x3C
	private Poise poise; // 0x40

	// Methods

	// RVA: 0x373D Offset: 0x373D VA: 0x373D Slot: 4
	public override void OnAwake() { }

	// RVA: 0x373E Offset: 0x373E VA: 0x373E Slot: 5
	public override void OnStart() { }

	// RVA: 0x373F Offset: 0x373F VA: 0x373F Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3740 Offset: 0x3740 VA: 0x3740
	public void .ctor() { }
}

===== C# end =====
*/

// ---- ReceiveDamageAction$$OnAwake ----
// C#: void ReceiveDamageAction__OnAwake (ReceiveDamageAction_o* __this, const MethodInfo* method);

void ReceiveDamageAction__OnAwake(ReceiveDamageAction_o *__this,MethodInfo *method)

{
  Poise_o *pPVar1;
  Animator_o *pAVar2;
  RangedSkills_o *pRVar3;
  MeleeSkills_o *pMVar4;
  
  if (DAT_ram_00664acb == '\0') {
    unnamed_function_1099(&DAT_ram_0056cec0);
    unnamed_function_1099(&DAT_ram_0056cedc);
    unnamed_function_1099(&DAT_ram_0056cee0);
    unnamed_function_1099(&DAT_ram_0056cee4);
    DAT_ram_00664acb = '\x01';
  }
  pPVar1 = (Poise_o *)unnamed_function_69916(__this,DAT_ram_0056cee0);
  __this->poise = pPVar1;
  pAVar2 = (Animator_o *)unnamed_function_69916(__this,DAT_ram_0056cec0);
  __this->animator = pAVar2;
  pRVar3 = (RangedSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cee4);
  __this->rangedSkills = pRVar3;
  pMVar4 = (MeleeSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cedc);
  __this->meleeSkills = pMVar4;
  return;
}

// ---- ReceiveDamageAction$$OnStart ----
// C#: void ReceiveDamageAction__OnStart (ReceiveDamageAction_o* __this, const MethodInfo* method);

void ReceiveDamageAction__OnStart(ReceiveDamageAction_o *__this,MethodInfo *method)

{
  if (DAT_ram_00664acc == '\0') {
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664acc = '\x01';
  }
  unnamed_function_44733(__this->rangedSkills,0);
  unnamed_function_44733(__this->meleeSkills,0);
  __this->isFirstUpdate = true;
  unnamed_function_61227(__this->stunTime,__this->poise->stunTime,DAT_ram_00565d04);
  return;
}

// ---- ReceiveDamageAction$$OnUpdate ----
// C#: int32_t ReceiveDamageAction__OnUpdate (ReceiveDamageAction_o* __this, const MethodInfo* method);

void ReceiveDamageAction__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,ReceiveDamageAction_o *__this,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 param1;
  undefined1 local_50 [80];
  
  if (DAT_ram_00664acd == '\0') {
    unnamed_function_1099(&DAT_ram_00565d00);
    unnamed_function_1099(&DAT_ram_00565d04);
    DAT_ram_00664acd = '\x01';
  }
  if ((*(float *)(*(int *)(__ret + 0x40) + 0x18) <= 0.0) &&
     (fVar1 = unnamed_function_61226(*(undefined4 *)(__ret + 0x3c),DAT_ram_00565d00), 0.0 < fVar1))
  {
    param1 = *(undefined4 *)(__ret + 0x3c);
    fVar1 = unnamed_function_61226(param1,DAT_ram_00565d00);
    fVar2 = unnamed_function_44879(0);
    unnamed_function_61227(param1,fVar1 - fVar2,DAT_ram_00565d04);
  }
  if (*(char *)(__ret + 0x38) == '\0') {
    unnamed_function_45444(local_50,*(undefined4 *)(__ret + 0x2c),0,0);
  }
  else {
    *(undefined1 *)(__ret + 0x38) = 0;
  }
  return;
}

// ---- ReceiveDamageAction$$.ctor ----
// C#: void ReceiveDamageAction___ctor (ReceiveDamageAction_o* __this, const MethodInfo* method);

void FireEyeAttackLoop___ctor(FireEyeAttackLoop_o *__this,MethodInfo *method)

{
  unnamed_function_51834(__this,0);
  return;
}

