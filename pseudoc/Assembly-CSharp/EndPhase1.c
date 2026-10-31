// Assembly-CSharp :: EndPhase1
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EndPhase1 : Action // TypeDefIndex: 5562
{
	// Fields
	private Animator animator; // 0x2C
	public SharedMaterial material; // 0x30
	public float transitionTime; // 0x34
	private float fadeAmount; // 0x38
	private float transitionTime2; // 0x3C
	private RangedSkills rangedSkills; // 0x40
	private MeleeSkills meleeSkills; // 0x44
	private bool isEyeLoopDeath; // 0x48
	[SerializeField]
	private SoundEffectSO transitionSoundEffect; // 0x4C

	// Methods

	// RVA: 0x3714 Offset: 0x3714 VA: 0x3714 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3715 Offset: 0x3715 VA: 0x3715 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3716 Offset: 0x3716 VA: 0x3716 Slot: 6
	public override TaskStatus OnUpdate() { }

	[IteratorStateMachine(typeof(EndPhase1.<EndPhase1Coroutine>d__12))]
	// RVA: 0x3717 Offset: 0x3717 VA: 0x3717
	public IEnumerator EndPhase1Coroutine() { }

	// RVA: 0x3718 Offset: 0x3718 VA: 0x3718
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EndPhase1$$OnAwake ----
// C#: void EndPhase1__OnAwake (EndPhase1_o* __this, const MethodInfo* method);

void EndPhase1__OnAwake(EndPhase1_o *__this,MethodInfo *method)

{
  Animator_o *pAVar1;
  RangedSkills_o *pRVar2;
  MeleeSkills_o *pMVar3;
  
  if (DAT_ram_00664abb == '\0') {
    unnamed_function_1099(&DAT_ram_0056cec0);
    unnamed_function_1099(&DAT_ram_0056cedc);
    unnamed_function_1099(&DAT_ram_0056cee4);
    DAT_ram_00664abb = '\x01';
  }
  pAVar1 = (Animator_o *)unnamed_function_69916(__this,DAT_ram_0056cec0);
  __this->animator = pAVar1;
  pRVar2 = (RangedSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cee4);
  __this->rangedSkills = pRVar2;
  pMVar3 = (MeleeSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cedc);
  __this->meleeSkills = pMVar3;
  return;
}

// ---- EndPhase1$$OnStart ----
// C#: void EndPhase1__OnStart (EndPhase1_o* __this, const MethodInfo* method);

void EndPhase1__OnStart(EndPhase1_o *__this,MethodInfo *method)

{
  undefined4 param2;
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664abc == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&StringLiteral_3242 /* "Default" */);
    DAT_ram_00664abc = '\x01';
  }
  iVar1 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = unnamed_function_95087(iVar1);
  }
  SoundEffectManager__PlaySoundEffect
            ((SoundEffectManager_o *)**(undefined4 **)(iVar1 + 0x5c),__this->transitionSoundEffect,
             (MethodInfo *)0x0);
  unnamed_function_44733(__this->rangedSkills,0);
  unnamed_function_44733(__this->meleeSkills,0);
  __this->transitionTime2 = __this->transitionTime;
  if (DAT_ram_00664abe == '\0') {
    unnamed_function_1099(&EndPhase1__EndPhase1Coroutine_d__12_TypeInfo);
    DAT_ram_00664abe = '\x01';
  }
  iVar1 = unnamed_function_95402(EndPhase1__EndPhase1Coroutine_d__12_TypeInfo);
  *(EndPhase1_o **)(iVar1 + 0x10) = __this;
  *(undefined4 *)(iVar1 + 8) = 0;
  unnamed_function_51874(__this,iVar1,0);
  param1 = *(undefined4 *)__this->pad_8;
  param2 = unnamed_function_44702(StringLiteral_3242 /* "Default" */,0);
  unnamed_function_44685(param1,param2,0);
  return;
}

// ---- EndPhase1$$OnUpdate ----
// C#: int32_t EndPhase1__OnUpdate (EndPhase1_o* __this, const MethodInfo* method);

void EndPhase1__OnUpdate(BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,EndPhase1_o *__this,
                        MethodInfo *method)

{
  float fVar1;
  undefined4 param1;
  float fVar2;
  
  if (DAT_ram_00664abd == '\0') {
    unnamed_function_1099(&DAT_ram_00565ccc);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    DAT_ram_00664abd = '\x01';
  }
  if (0.0 < *(float *)(__ret + 0x34)) {
    if (*(char *)(__ret + 0x48) != '\0') {
      fVar2 = *(float *)(__ret + 0x38);
      fVar1 = unnamed_function_44879(0);
      *(float *)(__ret + 0x38) = fVar2 + fVar1 / *(float *)(__ret + 0x3c);
      fVar2 = *(float *)(__ret + 0x34);
      fVar1 = unnamed_function_44879(0);
      *(float *)(__ret + 0x34) = fVar2 - fVar1;
      param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x30),DAT_ram_00565ccc);
      unnamed_function_52907(param1,StringLiteral_9330 /* "_FadeAmount" */,*(float *)(__ret + 0x38),0);
    }
    return;
  }
  return;
}

// ---- EndPhase1$$EndPhase1Coroutine ----
// C#: System_Collections_IEnumerator_o* EndPhase1__EndPhase1Coroutine (EndPhase1_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
EndPhase1__EndPhase1Coroutine(EndPhase1_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664abe == '\0') {
    unnamed_function_1099(&EndPhase1__EndPhase1Coroutine_d__12_TypeInfo);
    DAT_ram_00664abe = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(EndPhase1__EndPhase1Coroutine_d__12_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- EndPhase1$$.ctor ----
// C#: void EndPhase1___ctor (EndPhase1_o* __this, const MethodInfo* method);

void EndPhase1___ctor(EndPhase1_o *__this,MethodInfo *method)

{
  __this->transitionTime = 1.0;
  unnamed_function_51834(__this,0);
  return;
}

