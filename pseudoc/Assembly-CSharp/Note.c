// Assembly-CSharp :: Note
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Note : MonoBehaviour // TypeDefIndex: 5685
{
	// Fields
	private LayerMask playerLayer; // 0x10
	private SpriteRenderer spriteRenderer; // 0x14
	[TextArea]
	public string noteText; // 0x18

	// Methods

	// RVA: 0x3989 Offset: 0x3989 VA: 0x3989
	private void Awake() { }

	// RVA: 0x398A Offset: 0x398A VA: 0x398A
	private void Start() { }

	// RVA: 0x398B Offset: 0x398B VA: 0x398B
	private void OnCollisionStay2D(Collision2D collision) { }

	// RVA: 0x398C Offset: 0x398C VA: 0x398C
	private void OnDestroy() { }

	// RVA: 0x398D Offset: 0x398D VA: 0x398D
	private void OnCollisionExit2D(Collision2D collision) { }

	// RVA: 0x398E Offset: 0x398E VA: 0x398E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Note$$Awake ----
// C#: void Note__Awake (Note_o* __this, const MethodInfo* method);

void Note__Awake(Note_o *__this,MethodInfo *method)

{
  int iVar1;
  SpriteRenderer_o *pSVar2;
  
  if (DAT_ram_00664937 == '\0') {
    unnamed_function_1099(&DAT_ram_00567f24);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_00664937 = '\x01';
  }
  iVar1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_6075 /* "Player" */;
  iVar1 = unnamed_function_44703(iVar1,0);
  (__this->playerLayer).m_Mask = iVar1;
  pSVar2 = (SpriteRenderer_o *)unnamed_function_65370(__this,DAT_ram_00567f24);
  __this->spriteRenderer = pSVar2;
  return;
}

// ---- Note$$Start ----
// C#: void Note__Start (Note_o* __this, const MethodInfo* method);

void Note__Start(Note_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  if (DAT_ram_00664938 == '\0') {
    unnamed_function_1099(&DAT_ram_0056d374);
    unnamed_function_1099(&DAT_ram_0056d390);
    DAT_ram_00664938 = '\x01';
  }
  uVar1 = unnamed_function_63243(__this->spriteRenderer,0.3,1.5,0);
  uVar1 = unnamed_function_70031(uVar1,4,DAT_ram_0056d374);
  unnamed_function_70043(uVar1,0xffffffff,1,DAT_ram_0056d390);
  return;
}

// ---- Note$$OnCollisionStay2D ----
// C#: void Note__OnCollisionStay2D (Note_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Note__OnCollisionStay2D(Note_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 param1;
  uint uVar1;
  OnNoteOpenedEventArgs_o *__this_00;
  uint uVar2;
  string_o *psVar3;
  int iVar4;
  
  uVar2 = (__this->playerLayer).m_Mask;
  param1 = unnamed_function_16380(collision,0);
  uVar1 = unnamed_function_44684(param1,0);
  if (0 < (int)(uVar2 & 1 << (uVar1 & 0x1f))) {
    psVar3 = __this->noteText;
    if (DAT_ram_006649ae == '\0') {
      unnamed_function_1099(&OnNoteOpenedEventArgs_TypeInfo);
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649ae = '\x01';
    }
    iVar4 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 8);
    if (iVar4 != 0) {
      __this_00 = (OnNoteOpenedEventArgs_o *)unnamed_function_95402(OnNoteOpenedEventArgs_TypeInfo);
      OnNoteOpenedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
      __this_00->note = psVar3;
      __this_00->isOpening = true;
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0xc) * 4))
                (*(undefined4 *)(iVar4 + 0x20),__this_00,*(undefined4 *)(iVar4 + 0x14));
    }
  }
  return;
}

// ---- Note$$OnDestroy ----
// C#: void Note__OnDestroy (Note_o* __this, const MethodInfo* method);

void Note__OnDestroy(Note_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664939 == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    DAT_ram_00664939 = '\x01';
  }
  param1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(param1,0,0);
  return;
}

// ---- Note$$OnCollisionExit2D ----
// C#: void Note__OnCollisionExit2D (Note_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Note__OnCollisionExit2D(Note_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 param1;
  uint uVar1;
  OnNoteOpenedEventArgs_o *__this_00;
  uint uVar2;
  string_o *psVar3;
  int iVar4;
  
  uVar2 = (__this->playerLayer).m_Mask;
  param1 = unnamed_function_16380(collision,0);
  uVar1 = unnamed_function_44684(param1,0);
  if (0 < (int)(uVar2 & 1 << (uVar1 & 0x1f))) {
    psVar3 = __this->noteText;
    if (DAT_ram_006649ae == '\0') {
      unnamed_function_1099(&OnNoteOpenedEventArgs_TypeInfo);
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649ae = '\x01';
    }
    iVar4 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 8);
    if (iVar4 != 0) {
      __this_00 = (OnNoteOpenedEventArgs_o *)unnamed_function_95402(OnNoteOpenedEventArgs_TypeInfo);
      OnNoteOpenedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
      __this_00->note = psVar3;
      __this_00->isOpening = false;
      (**(code **)((ulonglong)*(uint *)(iVar4 + 0xc) * 4))
                (*(undefined4 *)(iVar4 + 0x20),__this_00,*(undefined4 *)(iVar4 + 0x14));
    }
  }
  return;
}

// ---- Note$$.ctor ----
// C#: void Note___ctor (Note_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

