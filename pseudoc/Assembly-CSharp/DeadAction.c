// Assembly-CSharp :: DeadAction
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class DeadAction : Action // TypeDefIndex: 5560
{
	// Fields
	public SharedMaterial deadMaterial; // 0x2C
	[ColorUsage(True, True)]
	public Color fadeColor; // 0x30
	public float fadeTime; // 0x40
	private float fadeAmount; // 0x44
	private float fadeTime2; // 0x48
	private Color defaultColor; // 0x4C

	// Methods

	// RVA: 0x3710 Offset: 0x3710 VA: 0x3710 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3711 Offset: 0x3711 VA: 0x3711 Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x3712 Offset: 0x3712 VA: 0x3712 Slot: 9
	public override void OnEnd() { }

	// RVA: 0x3713 Offset: 0x3713 VA: 0x3713
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DeadAction$$OnStart ----
// C#: void DeadAction__OnStart (DeadAction_o* __this, const MethodInfo* method);

void DeadAction__OnStart(DeadAction_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ab8 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ccc);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    unnamed_function_1099(&StringLiteral_368 /* "#FFFF00" */);
    unnamed_function_1099(&StringLiteral_9331 /* "_FadeBurnColor" */);
    DAT_ram_00664ab8 = '\x01';
  }
  unnamed_function_8500(StringLiteral_368 /* "#FFFF00" */,&__this->defaultColor,0);
  uVar1 = unnamed_function_61203(__this->deadMaterial,DAT_ram_00565ccc);
  unnamed_function_52907(uVar1,StringLiteral_9330 /* "_FadeAmount" */,__this->fadeAmount,0);
  __this->fadeTime2 = __this->fadeTime;
  uVar1 = unnamed_function_61203(__this->deadMaterial,DAT_ram_00565ccc);
  local_8._0_4_ = (__this->fadeColor).b;
  local_8._4_4_ = (__this->fadeColor).a;
  local_10._0_4_ = (__this->fadeColor).r;
  local_10._4_4_ = (__this->fadeColor).g;
  unnamed_function_52853(uVar1,StringLiteral_9331 /* "_FadeBurnColor" */,&local_10,0);
  return;
}

// ---- DeadAction$$OnUpdate ----
// C#: int32_t DeadAction__OnUpdate (DeadAction_o* __this, const MethodInfo* method);

void DeadAction__OnUpdate
               (BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,DeadAction_o *__this,
               MethodInfo *method)

{
  float fVar1;
  undefined4 param1;
  int iVar2;
  GameManager_o *__this_00;
  Action_o *pAVar3;
  float fVar4;
  
  if (DAT_ram_00664ab9 == '\0') {
    unnamed_function_1099(&DAT_ram_00565ccc);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    DAT_ram_00664ab9 = '\x01';
  }
  if (0.0 < *(float *)(__ret + 0x40)) {
    fVar4 = *(float *)(__ret + 0x44);
    fVar1 = unnamed_function_44879(0);
    *(float *)(__ret + 0x44) = fVar4 + fVar1 / *(float *)(__ret + 0x48);
    param1 = unnamed_function_61203(*(undefined4 *)(__ret + 0x2c),DAT_ram_00565ccc);
    unnamed_function_52907(param1,StringLiteral_9330 /* "_FadeAmount" */,*(float *)(__ret + 0x44),0);
    fVar4 = *(float *)(__ret + 0x40);
    fVar1 = unnamed_function_44879(0);
    *(float *)(__ret + 0x40) = fVar4 - fVar1;
    return;
  }
  iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  __this_00 = (GameManager_o *)**(undefined4 **)(iVar2 + 0x5c);
  if (DAT_ram_00664b1b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d58);
    DAT_ram_00664b1b = '\x01';
  }
  __this_00->gameState = Won;
  if (DAT_ram_00664b1c == '\0') {
    unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
    DAT_ram_00664b1c = '\x01';
  }
  unnamed_function_44552(StringLiteral_11508 /* "isBossDefeated" */,1,0);
  GameManager__WonScene(__this_00,(MethodInfo *)__this_00);
  pAVar3 = __this_00->OnGameStateChange;
  if (pAVar3 != (Action_o *)0x0) {
    (**(code **)((ulonglong)(uint)pAVar3[3]._opaque * 4))(pAVar3[8]._opaque,5,pAVar3[5]._opaque);
  }
  return;
}

// ---- DeadAction$$OnEnd ----
// C#: void DeadAction__OnEnd (DeadAction_o* __this, const MethodInfo* method);

void DeadAction__OnEnd(DeadAction_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664aba == '\0') {
    unnamed_function_1099(&DAT_ram_00565ccc);
    unnamed_function_1099(&StringLiteral_9330 /* "_FadeAmount" */);
    unnamed_function_1099(&StringLiteral_9331 /* "_FadeBurnColor" */);
    DAT_ram_00664aba = '\x01';
  }
  uVar1 = unnamed_function_61203(__this->deadMaterial,DAT_ram_00565ccc);
  local_8._0_4_ = (__this->defaultColor).b;
  local_8._4_4_ = (__this->defaultColor).a;
  local_10._0_4_ = (__this->defaultColor).r;
  local_10._4_4_ = (__this->defaultColor).g;
  unnamed_function_52853(uVar1,StringLiteral_9331 /* "_FadeBurnColor" */,&local_10,0);
  unnamed_function_44686(*(undefined4 *)__this->pad_8,0,0);
  uVar1 = unnamed_function_61203(__this->deadMaterial,DAT_ram_00565ccc);
  unnamed_function_52907(uVar1,StringLiteral_9330 /* "_FadeAmount" */,0.0,0);
  return;
}

// ---- DeadAction$$.ctor ----
// C#: void DeadAction___ctor (DeadAction_o* __this, const MethodInfo* method);

void DeadAction___ctor(DeadAction_o *__this,MethodInfo *method)

{
  __this->fadeTime = 3.0;
  unnamed_function_51834(__this,0);
  return;
}

