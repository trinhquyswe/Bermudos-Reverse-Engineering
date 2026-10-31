// Assembly-CSharp :: GameNameMovement
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class GameNameMovement : MonoBehaviour // TypeDefIndex: 5653
{
	// Fields
	private RectTransform rectTransform; // 0x10
	public float moveDistance; // 0x14
	public float duration; // 0x18
	public Ease easeType; // 0x1C

	// Methods

	// RVA: 0x38F1 Offset: 0x38F1 VA: 0x38F1
	private void Awake() { }

	// RVA: 0x38F2 Offset: 0x38F2 VA: 0x38F2
	private void Start() { }

	// RVA: 0x38F3 Offset: 0x38F3 VA: 0x38F3
	private void OnDestroy() { }

	// RVA: 0x38F4 Offset: 0x38F4 VA: 0x38F4
	private void GameNameAnimation() { }

	// RVA: 0x38F5 Offset: 0x38F5 VA: 0x38F5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- GameNameMovement$$Awake ----
// C#: void GameNameMovement__Awake (GameNameMovement_o* __this, const MethodInfo* method);

void GameNameMovement__Awake(GameNameMovement_o *__this,MethodInfo *method)

{
  RectTransform_o *pRVar1;
  
  if (DAT_ram_006648e4 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f0c);
    DAT_ram_006648e4 = '\x01';
  }
  pRVar1 = (RectTransform_o *)unnamed_function_65370(__this,DAT_ram_00567f0c);
  __this->rectTransform = pRVar1;
  return;
}

// ---- GameNameMovement$$Start ----
// C#: void GameNameMovement__Start (GameNameMovement_o* __this, const MethodInfo* method);

void GameNameMovement__Start(GameNameMovement_o *__this,MethodInfo *method)

{
  GameNameMovement__GameNameAnimation(__this,(MethodInfo *)__this);
  return;
}

// ---- GameNameMovement$$OnDestroy ----
// C#: void GameNameMovement__OnDestroy (GameNameMovement_o* __this, const MethodInfo* method);

void GameNameMovement__OnDestroy(GameNameMovement_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_006648e5 == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    DAT_ram_006648e5 = '\x01';
  }
  param1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(param1,0,0);
  return;
}

// ---- GameNameMovement$$GameNameAnimation ----
// C#: void GameNameMovement__GameNameAnimation (GameNameMovement_o* __this, const MethodInfo* method);

void GameNameMovement__GameNameAnimation(GameNameMovement_o *__this,MethodInfo *method)

{
  int param2;
  undefined4 uVar1;
  undefined4 param1;
  float fVar2;
  undefined1 local_8 [8];
  
  if (DAT_ram_006648e6 == '\0') {
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d340);
    unnamed_function_1099(&DAT_ram_0056d37c);
    unnamed_function_1099(&DAT_ram_0056f26c);
    unnamed_function_1099(&GameNameMovement___c__DisplayClass7_0_TypeInfo);
    DAT_ram_006648e6 = '\x01';
  }
  param2 = unnamed_function_95402(GameNameMovement___c__DisplayClass7_0_TypeInfo);
  *(GameNameMovement_o **)(param2 + 8) = __this;
  unnamed_function_44934(local_8,__this->rectTransform,0);
  fVar2 = __this->moveDistance;
  *(undefined4 *)(param2 + 0x14 /* moveDistance */) = 0;
  *(int *)(param2 + 0xc) = local_8._0_4_;
  *(float *)(param2 + 0x10 /* rectTransform */) = local_8._4_4_ - fVar2;
  uVar1 = unnamed_function_63264(__this->rectTransform,fVar2 + local_8._4_4_,__this->duration,0,0);
  uVar1 = unnamed_function_70031(uVar1,__this->easeType,DAT_ram_0056d37c);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,param2,DAT_ram_0056f26c,0);
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d340);
  return;
}

// ---- GameNameMovement$$.ctor ----
// C#: void GameNameMovement___ctor (GameNameMovement_o* __this, const MethodInfo* method);

void GameNameMovement___ctor(GameNameMovement_o *__this,MethodInfo *method)

{
  __this->easeType = InOutSine;
  __this->moveDistance = 5.0;
  __this->duration = 1.0;
  unnamed_function_44622(__this,0);
  return;
}

