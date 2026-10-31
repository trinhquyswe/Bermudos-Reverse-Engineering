// Assembly-CSharp :: SkillsAction
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SkillsAction : Action // TypeDefIndex: 5572
{
	// Fields
	[HideInInspector]
	public Animator animator; // 0x2C
	public BossAnimationState bossAnimationState; // 0x30
	public float normalizedTime; // 0x34
	[HideInInspector]
	public bool isFirstUpdate; // 0x38
	private int Idle; // 0x3C
	private int ouch; // 0x40
	private int OpenMouth; // 0x44
	private int eyeAttack; // 0x48
	private int eyeLoop; // 0x4C
	private int Hop; // 0x50
	private int EyeLoopDeath; // 0x54
	private int Base; // 0x58
	private int Walk; // 0x5C
	private int swipe; // 0x60
	private int mouthOpenLoop; // 0x64
	private int spearAtk; // 0x68
	private int spinny; // 0x6C
	private int Idle2; // 0x70
	private int ouch2; // 0x74
	private int OpenMouth2; // 0x78
	private int eyeAttack2; // 0x7C
	private int eyeLoop2; // 0x80
	private int Hop2; // 0x84
	private int EyeLoopDeath2; // 0x88
	private int Base2; // 0x8C
	private int Walk2; // 0x90
	private int swipe2; // 0x94
	private int mouthOpenLoop2; // 0x98
	private int spearAtk2; // 0x9C
	private int spinny2; // 0xA0
	protected Dictionary<BossAnimationState, int> bossAnimationStateDic; // 0xA4

	// Methods

	// RVA: 0x3741 Offset: 0x3741 VA: 0x3741 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3742 Offset: 0x3742 VA: 0x3742 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3743 Offset: 0x3743 VA: 0x3743 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3744 Offset: 0x3744 VA: 0x3744 Slot: 31
	public virtual TaskStatus HandleTimeOfHits(float time) { }

	// RVA: 0x3745 Offset: 0x3745 VA: 0x3745 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3746 Offset: 0x3746 VA: 0x3746
	public void .ctor() { }
}

===== C# end =====
*/

// ---- SkillsAction$$OnAwake ----
// C#: void SkillsAction__OnAwake (SkillsAction_o* __this, const MethodInfo* method);

void SkillsAction__OnAwake(SkillsAction_o *__this,MethodInfo *method)

{
  Animator_o *pAVar1;
  
  if (DAT_ram_00664ace == '\0') {
    unnamed_function_1099(&DAT_ram_0055fd50);
    unnamed_function_1099(&DAT_ram_0056cec0);
    DAT_ram_00664ace = '\x01';
  }
  unnamed_function_77427(__this->bossAnimationStateDic,0xb,__this->spearAtk,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0,__this->Idle,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,1,__this->ouch,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,2,__this->OpenMouth,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,3,__this->eyeAttack,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,4,__this->eyeLoop,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,5,__this->Hop,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,6,__this->EyeLoopDeath,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,7,__this->Base,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,8,__this->Walk,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,9,__this->swipe,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,10,__this->mouthOpenLoop,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0xc,__this->spinny,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0xd,__this->Idle2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0xe,__this->ouch2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0xf,__this->OpenMouth2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x10,__this->eyeAttack2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x11,__this->eyeLoop2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x12,__this->Hop2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x13,__this->EyeLoopDeath2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x14,__this->Base2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x15,__this->Walk2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x16,__this->swipe2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x17,__this->mouthOpenLoop2,DAT_ram_0055fd50)
  ;
  unnamed_function_77427(__this->bossAnimationStateDic,0x18,__this->spearAtk2,DAT_ram_0055fd50);
  unnamed_function_77427(__this->bossAnimationStateDic,0x19,__this->spinny2,DAT_ram_0055fd50);
  pAVar1 = (Animator_o *)unnamed_function_69916(__this,DAT_ram_0056cec0);
  __this->animator = pAVar1;
  return;
}

// ---- SkillsAction$$OnStart ----
// C#: void SkillsAction__OnStart (SkillsAction_o* __this, const MethodInfo* method);

void SkillsAction__OnStart(SkillsAction_o *__this,MethodInfo *method)

{
  undefined4 param2;
  Animator_o *param1;
  
  if (DAT_ram_00664acf == '\0') {
    unnamed_function_1099(&DAT_ram_0055fd54);
    DAT_ram_00664acf = '\x01';
  }
  param1 = __this->animator;
  param2 = unnamed_function_77425
                     (__this->bossAnimationStateDic,__this->bossAnimationState,DAT_ram_0055fd54);
  unnamed_function_45425(param1,param2,0);
  __this->isFirstUpdate = true;
  return;
}

// ---- SkillsAction$$OnUpdate ----
// C#: int32_t SkillsAction__OnUpdate (SkillsAction_o* __this, const MethodInfo* method);

void SkillsAction__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,SkillsAction_o *__this,
               MethodInfo *method)

{
  (**(code **)((ulonglong)*(uint *)(*(int *)__ret + 0x1b8) * 4))
            (__ret,*(undefined4 *)(__ret + 0x34),*(undefined4 *)(*(int *)__ret + 0x1bc));
  return;
}

// ---- SkillsAction$$HandleTimeOfHits ----
// C#: int32_t SkillsAction__HandleTimeOfHits (SkillsAction_o* __this, float time, const MethodInfo* method);

void SkillsAction__HandleTimeOfHits
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,SkillsAction_o *__this,float time,
               MethodInfo *method)

{
  undefined1 local_50 [80];
  
  if (*(char *)(__ret + 0x38) == '\0') {
    unnamed_function_45444(local_50,*(undefined4 *)(__ret + 0x2c),0,0);
  }
  else {
    *(undefined1 *)(__ret + 0x38) = 0;
  }
  return;
}

// ---- SkillsAction$$OnEnd ----
// C#: void SkillsAction__OnEnd (SkillsAction_o* __this, const MethodInfo* method);

void SkillsAction__OnEnd(SkillsAction_o *__this,MethodInfo *method)

{
  __this->isFirstUpdate = false;
  return;
}

// ---- SkillsAction$$.ctor ----
// C#: void SkillsAction___ctor (SkillsAction_o* __this, const MethodInfo* method);

void SkillsAction___ctor(SkillsAction_o *__this,MethodInfo *method)

{
  int iVar1;
  Dictionary_o *param1;
  
  if (DAT_ram_00664ad0 == '\0') {
    unnamed_function_1099(&DAT_ram_0055fd4c);
    unnamed_function_1099(&System_Collections_Generic_Dictionary_BossAnimationState__int__TypeInfo);
    unnamed_function_1099(&StringLiteral_12021 /* "mouthOpenLoop" */);
    unnamed_function_1099(&StringLiteral_4250 /* "Hop2" */);
    unnamed_function_1099(&StringLiteral_8780 /* "Walk2" */);
    unnamed_function_1099(&StringLiteral_10987 /* "eyeLoop" */);
    unnamed_function_1099(&StringLiteral_3792 /* "EyeLoopDeath2" */);
    unnamed_function_1099(&StringLiteral_1973 /* "Base" */);
    unnamed_function_1099(&StringLiteral_10985 /* "eyeAttack" */);
    unnamed_function_1099(&StringLiteral_12280 /* "ouch2" */);
    unnamed_function_1099(&StringLiteral_12814 /* "spearAtk" */);
    unnamed_function_1099(&StringLiteral_4364 /* "Idle2" */);
    unnamed_function_1099(&StringLiteral_12815 /* "spearAtk2" */);
    unnamed_function_1099(&StringLiteral_5897 /* "OpenMouth2" */);
    unnamed_function_1099(&StringLiteral_12022 /* "mouthOpenLoop2" */);
    unnamed_function_1099(&StringLiteral_12279 /* "ouch" */);
    unnamed_function_1099(&StringLiteral_10986 /* "eyeAttack2" */);
    unnamed_function_1099(&StringLiteral_5896 /* "OpenMouth" */);
    unnamed_function_1099(&StringLiteral_3791 /* "EyeLoopDeath" */);
    unnamed_function_1099(&StringLiteral_12821 /* "spinny2" */);
    unnamed_function_1099(&StringLiteral_10988 /* "eyeLoop2" */);
    unnamed_function_1099(&StringLiteral_4249 /* "Hop" */);
    unnamed_function_1099(&StringLiteral_8779 /* "Walk" */);
    unnamed_function_1099(&StringLiteral_12942 /* "swipe" */);
    unnamed_function_1099(&StringLiteral_4363 /* "Idle" */);
    unnamed_function_1099(&StringLiteral_1974 /* "Base2" */);
    unnamed_function_1099(&StringLiteral_12820 /* "spinny" */);
    unnamed_function_1099(&StringLiteral_12943 /* "swipe2" */);
    DAT_ram_00664ad0 = '\x01';
  }
  iVar1 = unnamed_function_45407(StringLiteral_4363 /* "Idle" */,0);
  __this->Idle = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12279 /* "ouch" */,0);
  __this->ouch = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_5896 /* "OpenMouth" */,0);
  __this->OpenMouth = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_10985 /* "eyeAttack" */,0);
  __this->eyeAttack = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_10987 /* "eyeLoop" */,0);
  __this->eyeLoop = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_4249 /* "Hop" */,0);
  __this->Hop = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_3791 /* "EyeLoopDeath" */,0);
  __this->EyeLoopDeath = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_1973 /* "Base" */,0);
  __this->Base = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_8779 /* "Walk" */,0);
  __this->Walk = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12942 /* "swipe" */,0);
  __this->swipe = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12021 /* "mouthOpenLoop" */,0);
  __this->mouthOpenLoop = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12814 /* "spearAtk" */,0);
  __this->spearAtk = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12820 /* "spinny" */,0);
  __this->spinny = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_4364 /* "Idle2" */,0);
  __this->Idle2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12280 /* "ouch2" */,0);
  __this->ouch2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_5897 /* "OpenMouth2" */,0);
  __this->OpenMouth2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_10986 /* "eyeAttack2" */,0);
  __this->eyeAttack2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_10988 /* "eyeLoop2" */,0);
  __this->eyeLoop2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_4250 /* "Hop2" */,0);
  __this->Hop2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_3792 /* "EyeLoopDeath2" */,0);
  __this->EyeLoopDeath2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_1974 /* "Base2" */,0);
  __this->Base2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_8780 /* "Walk2" */,0);
  __this->Walk2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12943 /* "swipe2" */,0);
  __this->swipe2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12022 /* "mouthOpenLoop2" */,0);
  __this->mouthOpenLoop2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12815 /* "spearAtk2" */,0);
  __this->spearAtk2 = iVar1;
  iVar1 = unnamed_function_45407(StringLiteral_12821 /* "spinny2" */,0);
  __this->spinny2 = iVar1;
  param1 = (Dictionary_o *)
           unnamed_function_95402
                     (System_Collections_Generic_Dictionary_BossAnimationState__int__TypeInfo);
  unnamed_function_77380(param1,DAT_ram_0055fd4c);
  __this->bossAnimationStateDic = param1;
  unnamed_function_51834(__this,0);
  return;
}

