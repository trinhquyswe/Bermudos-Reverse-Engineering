// Assembly-CSharp :: MapTransition
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MapTransition : MonoBehaviour // TypeDefIndex: 5665
{
	// Fields
	private Image image; // 0x10
	private TextMeshProUGUI text; // 0x14
	private bool isLoadedMap; // 0x18
	public float transitonTime; // 0x1C

	// Methods

	// RVA: 0x393A Offset: 0x393A VA: 0x393A
	private void Awake() { }

	// RVA: 0x393B Offset: 0x393B VA: 0x393B
	private void Start() { }

	// RVA: 0x393C Offset: 0x393C VA: 0x393C
	private void OnDestroy() { }

	// RVA: 0x393D Offset: 0x393D VA: 0x393D
	private void OnMapTransition() { }

	// RVA: 0x393E Offset: 0x393E VA: 0x393E
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x393F Offset: 0x393F VA: 0x393F
	private void <OnMapTransition>b__7_0() { }
}

===== C# end =====
*/

// ---- MapTransition$$Awake ----
// C#: void MapTransition__Awake (MapTransition_o* __this, const MethodInfo* method);

void MapTransition__Awake(MapTransition_o *__this,MethodInfo *method)

{
  bool bVar1;
  int param1;
  Image_o *pIVar2;
  TextMeshProUGUI_o *pTVar3;
  undefined4 param1_00;
  int *param1_01;
  int iVar4;
  
  if (DAT_ram_00664911 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_00567f78);
    unnamed_function_1099(&DAT_ram_00567ea8);
    unnamed_function_1099(&DAT_ram_0056ad9c);
    DAT_ram_00664911 = '\x01';
  }
  pIVar2 = (Image_o *)unnamed_function_65370(__this,DAT_ram_00567ea8);
  __this->image = pIVar2;
  pTVar3 = (TextMeshProUGUI_o *)unnamed_function_65372(__this,DAT_ram_00567f78);
  __this->text = pTVar3;
  param1_00 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(param1_00,__this,DAT_ram_0056ad9c,0);
  if (DAT_ram_006649a9 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649a9 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4);
  while ((param1_01 = (int *)unnamed_function_85158(param1,param1_00,0), param1_01 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_01))) {
    iVar4 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_01,param1)
    ;
    bVar1 = param1 == iVar4;
    param1 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- MapTransition$$Start ----
// C#: void MapTransition__Start (MapTransition_o* __this, const MethodInfo* method);

void RestUI__Start(RestUI_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(__this->restImage,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->restText,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}

// ---- MapTransition$$OnDestroy ----
// C#: void MapTransition__OnDestroy (MapTransition_o* __this, const MethodInfo* method);

void MapTransition__OnDestroy(MapTransition_o *__this,MethodInfo *method)

{
  bool bVar1;
  int param1;
  undefined4 uVar2;
  int *param1_00;
  int iVar3;
  
  if (DAT_ram_00664912 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056ad9c);
    DAT_ram_00664912 = '\x01';
  }
  uVar2 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(uVar2,0,0);
  uVar2 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(uVar2,__this,DAT_ram_0056ad9c,0);
  if (DAT_ram_006649aa == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649aa = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4);
  while ((param1_00 = (int *)unnamed_function_85160(param1,uVar2,0), param1_00 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_00))) {
    iVar3 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 4,param1_00,param1)
    ;
    bVar1 = param1 == iVar3;
    param1 = iVar3;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_00,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- MapTransition$$OnMapTransition ----
// C#: void MapTransition__OnMapTransition (MapTransition_o* __this, const MethodInfo* method);

void MapTransition__OnMapTransition(MapTransition_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664913 == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056ad98);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d374);
    DAT_ram_00664913 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->image,0);
  unnamed_function_44686(uVar1,1,0);
  uVar1 = unnamed_function_44644(__this->text,0);
  unnamed_function_44686(uVar1,1,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  uVar1 = unnamed_function_13702(0);
  uVar2 = unnamed_function_63253(__this->image,1.0,__this->transitonTime * 0.5,0);
  uVar2 = unnamed_function_70031(uVar2,4,DAT_ram_0056d374);
  uVar2 = unnamed_function_13904(uVar1,uVar2,0);
  uVar3 = unnamed_function_63251(__this->text,1.0,__this->transitonTime * 0.5,0);
  uVar3 = unnamed_function_70031(uVar3,4,DAT_ram_0056d374);
  unnamed_function_13905(uVar2,uVar3,0);
  uVar2 = unnamed_function_63253(__this->image,0.0,__this->transitonTime * 0.5,0);
  uVar1 = unnamed_function_13904(uVar1,uVar2,0);
  uVar2 = unnamed_function_63251(__this->text,0.0,__this->transitonTime * 0.5,0);
  uVar2 = unnamed_function_70031(uVar2,4,DAT_ram_0056d374);
  uVar1 = unnamed_function_13905(uVar1,uVar2,0);
  uVar2 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(uVar2,__this,DAT_ram_0056ad98,0);
  unnamed_function_14057(uVar1,uVar2,0);
  return;
}

// ---- MapTransition$$.ctor ----
// C#: void MapTransition___ctor (MapTransition_o* __this, const MethodInfo* method);

void MapTransition___ctor(MapTransition_o *__this,MethodInfo *method)

{
  __this->transitonTime = 0.5;
  unnamed_function_44622(__this,0);
  return;
}

// ---- MapTransition$$<OnMapTransition>b__7_0 ----
// C#: void MapTransition___OnMapTransition_b__7_0 (MapTransition_o* __this, const MethodInfo* method);

void RestUI__Start(RestUI_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_44644(__this->restImage,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->restText,0);
  unnamed_function_44686(uVar1,0,0);
  return;
}

