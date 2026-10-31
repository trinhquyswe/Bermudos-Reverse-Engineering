// Assembly-CSharp :: EnterPhase2
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnterPhase2 : Action // TypeDefIndex: 5563
{
	// Fields
	private Animator animator; // 0x2C
	private DealContactDamage dealContactDamage; // 0x30
	public SharedMaterial material; // 0x34
	public float fadeInTime; // 0x38
	private float fadeInTime2; // 0x3C
	private float fadeInAmount; // 0x40
	private Rigidbody2D rb; // 0x44
	private RangedSkills rangedSkills; // 0x48
	private BossEffect bossEffect; // 0x4C
	public Poise poise; // 0x50
	private Boss boss; // 0x54

	// Methods

	// RVA: 0x371F Offset: 0x371F VA: 0x371F Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3720 Offset: 0x3720 VA: 0x3720 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3721 Offset: 0x3721 VA: 0x3721 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3722 Offset: 0x3722 VA: 0x3722
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnterPhase2$$OnAwake ----
// C#: void EnterPhase2__OnAwake (EnterPhase2_o* __this, const MethodInfo* method);

void EnterPhase2__OnAwake(EnterPhase2_o *__this,MethodInfo *method)

{
  Animator_o *pAVar1;
  DealContactDamage_o *pDVar2;
  Rigidbody2D_o *pRVar3;
  RangedSkills_o *pRVar4;
  BossEffect_o *pBVar5;
  Poise_o *pPVar6;
  Boss_o *pBVar7;
  
  if (DAT_ram_00664ac0 == '\0') {
    unnamed_function_1099(&DAT_ram_0056cec0);
    unnamed_function_1099(&DAT_ram_0056cec8);
    unnamed_function_1099(&DAT_ram_0056cec4);
    unnamed_function_1099(&DAT_ram_0056ced0);
    unnamed_function_1099(&DAT_ram_0056cee0);
    unnamed_function_1099(&DAT_ram_0056cee4);
    unnamed_function_1099(&DAT_ram_0056cee8);
    DAT_ram_00664ac0 = '\x01';
  }
  pAVar1 = (Animator_o *)unnamed_function_69916(__this,DAT_ram_0056cec0);
  __this->animator = pAVar1;
  pDVar2 = (DealContactDamage_o *)unnamed_function_69916(__this,DAT_ram_0056ced0);
  __this->dealContactDamage = pDVar2;
  pRVar3 = (Rigidbody2D_o *)unnamed_function_69916(__this,DAT_ram_0056cee8);
  __this->rb = pRVar3;
  pRVar4 = (RangedSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cee4);
  __this->rangedSkills = pRVar4;
  pBVar5 = (BossEffect_o *)unnamed_function_69916(__this,DAT_ram_0056cec8);
  __this->bossEffect = pBVar5;
  pPVar6 = (Poise_o *)unnamed_function_69916(__this,DAT_ram_0056cee0);
  __this->poise = pPVar6;
  pBVar7 = (Boss_o *)unnamed_function_69916(__this,DAT_ram_0056cec4);
  __this->boss = pBVar7;
  return;
}

// ---- EnterPhase2$$OnStart ----
// C#: void EnterPhase2__OnStart (EnterPhase2_o* __this, const MethodInfo* method);

void EnterPhase2__OnStart(EnterPhase2_o *__this,MethodInfo *method)

{
  undefined4 param2;
  undefined4 param1;
  Animator_o *param1_00;
  
  if (DAT_ram_00664ac1 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    unnamed_function_1099(&StringLiteral_2074 /* "Boss" */);
    DAT_ram_00664ac1 = '\x01';
  }
  param1 = *(undefined4 *)__this->pad_8;
  param2 = unnamed_function_44702(StringLiteral_2074 /* "Boss" */,0);
  unnamed_function_44685(param1,param2,0);
  __this->poise->currentPoise = __this->poise->maxPoise;
  __this->rangedSkills->ammo = __this->rangedSkills->ammoPhase2;
  param1_00 = __this->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45425(param1_00,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x68),0);
  __this->fadeInTime2 = __this->fadeInTime;
  __this->dealContactDamage->isRemoved = true;
  unnamed_function_16407(__this->rb,4,0);
  __this->bossEffect->isPhase2 = true;
  __this->boss->isPhaseTwo = true;
  return;
}

// ---- EnterPhase2$$OnUpdate ----
// C#: int32_t EnterPhase2__OnUpdate (EnterPhase2_o* __this, const MethodInfo* method);

void EnterPhase2__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,EnterPhase2_o *__this,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 param1;
  float fVar3;
  
  if (DAT_ram_00664ac2 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ccc);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    unnamed_function_1099(&StringLiteral_2074 /* "Boss" */);
    DAT_ram_00664ac2 = '\x01';
  }
  if (0.0 < *(float *)(__ret + 0x38)) {
    fVar3 = *(float *)(__ret + 0x40);
    fVar1 = unnamed_function_44879(0);
    *(float *)(__ret + 0x40) = fVar3 - fVar1 / *(float *)(__ret + 0x3c);
    uVar2 = unnamed_function_61203(*(undefined4 *)(__ret + 0x34),DAT_ram_00565ccc);
    unnamed_function_52907(uVar2,StringLiteral_9330 /* "_FadeAmount" */,*(float *)(__ret + 0x40),0);
    fVar3 = *(float *)(__ret + 0x38);
    fVar1 = unnamed_function_44879(0);
    *(float *)(__ret + 0x38) = fVar3 - fVar1;
    return;
  }
  param1 = *(undefined4 *)(__ret + 8);
  uVar2 = unnamed_function_44702(StringLiteral_2074 /* "Boss" */,0);
  unnamed_function_44685(param1,uVar2,0);
  return;
}

// ---- EnterPhase2$$.ctor ----
// C#: void EnterPhase2___ctor (EnterPhase2_o* __this, const MethodInfo* method);

void EnterPhase2___ctor(EnterPhase2_o *__this,MethodInfo *method)

{
  __this->fadeInAmount = 1.0;
  __this->fadeInTime = 1.0;
  unnamed_function_51834(__this,0);
  return;
}

