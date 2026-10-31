// Assembly-CSharp :: NoteUI
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class NoteUI : MonoBehaviour // TypeDefIndex: 5686
{
	// Fields
	private TextMeshProUGUI textMeshPro; // 0x10
	private Image Image; // 0x14

	// Methods

	// RVA: 0x398F Offset: 0x398F VA: 0x398F
	private void Awake() { }

	// RVA: 0x3990 Offset: 0x3990 VA: 0x3990
	private void Start() { }

	// RVA: 0x3991 Offset: 0x3991 VA: 0x3991
	private void OnEnable() { }

	// RVA: 0x3992 Offset: 0x3992 VA: 0x3992
	private void OnDestroy() { }

	// RVA: 0x3993 Offset: 0x3993 VA: 0x3993
	private void OnNoteOpened(OnNoteOpenedEventArgs onNoteOpenedEventArgs) { }

	// RVA: 0x3994 Offset: 0x3994 VA: 0x3994
	public void .ctor() { }
}

===== C# end =====
*/

// ---- NoteUI$$Awake ----
// C#: void NoteUI__Awake (NoteUI_o* __this, const MethodInfo* method);

void NoteUI__Awake(NoteUI_o *__this,MethodInfo *method)

{
  TextMeshProUGUI_o *pTVar1;
  Image_o *pIVar2;
  System_Action_OnNoteOpenedEventArgs__o *value;
  
  if (DAT_ram_0066493a == '\0') {
    unnamed_function_1099(&System_Action_OnNoteOpenedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567f78);
    unnamed_function_1099(&DAT_ram_00567ea8);
    unnamed_function_1099(&DAT_ram_0056b4a0);
    DAT_ram_0066493a = '\x01';
  }
  pTVar1 = (TextMeshProUGUI_o *)unnamed_function_65372(__this,DAT_ram_00567f78);
  __this->textMeshPro = pTVar1;
  pIVar2 = (Image_o *)unnamed_function_65370(__this,DAT_ram_00567ea8);
  __this->Image = pIVar2;
  value = (System_Action_OnNoteOpenedEventArgs__o *)
          unnamed_function_95402(System_Action_OnNoteOpenedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056b4a0,0);
  StaticEventHandler__add_OnNoteOpened(value,(MethodInfo *)__this);
  return;
}

// ---- NoteUI$$Start ----
// C#: void NoteUI__Start (NoteUI_o* __this, const MethodInfo* method);

void Ammo__DisableAmmo(Ammo_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  return;
}

// ---- NoteUI$$OnEnable ----
// C#: void NoteUI__OnEnable (NoteUI_o* __this, const MethodInfo* method);

void NoteUI__OnEnable(NoteUI_o *__this,MethodInfo *method)

{
  ulonglong uVar1;
  float4 fVar2;
  undefined4 uVar3;
  int iVar4;
  TextMeshProUGUI_o *pTVar5;
  float4 local_10;
  float4 local_8;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (DAT_ram_0066493b == '\0') {
    unnamed_function_1099(&DAT_ram_0056d374);
    DAT_ram_0066493b = '\x01';
  }
  _local_8 = 0x3f800000;
  _local_10 = 0x3f8000003f800000;
  iVar4 = __this->Image->_opaque;
  local_18 = 0x3f800000;
  local_20 = 0x3f8000003f800000;
  (**(code **)((ulonglong)*(uint *)(iVar4 + 0x178) * 4))
            (__this->Image,&local_20,*(undefined4 *)(iVar4 + 0x17c));
  pTVar5 = __this->textMeshPro;
  (**(code **)((ulonglong)*(uint *)(pTVar5->_opaque + 0x170) * 4))
            (&local_10,pTVar5,*(undefined4 *)(pTVar5->_opaque + 0x174));
  fVar2 = local_10;
  iVar4 = __this->textMeshPro->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar4 + 0x170) * 4))
            (&local_10,__this->textMeshPro,*(undefined4 *)(iVar4 + 0x174));
  uVar1 = _local_10 >> 0x20;
  iVar4 = __this->textMeshPro->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar4 + 0x170) * 4))
            (&local_10,__this->textMeshPro,*(undefined4 *)(iVar4 + 0x174));
  _local_8 = _local_8 & 0xffffffff;
  _local_10 = CONCAT44((int)uVar1,fVar2);
  local_28 = _local_8;
  local_30 = _local_10;
  (**(code **)((ulonglong)*(uint *)(pTVar5->_opaque + 0x178) * 4))
            (pTVar5,&local_30,*(undefined4 *)(pTVar5->_opaque + 0x17c));
  uVar3 = unnamed_function_63253(__this->Image,1.0,1.0,0);
  unnamed_function_70031(uVar3,4,DAT_ram_0056d374);
  uVar3 = unnamed_function_63251(__this->textMeshPro,1.0,1.0,0);
  unnamed_function_70031(uVar3,4,DAT_ram_0056d374);
  return;
}

// ---- NoteUI$$OnDestroy ----
// C#: void NoteUI__OnDestroy (NoteUI_o* __this, const MethodInfo* method);

void NoteUI__OnDestroy(NoteUI_o *__this,MethodInfo *method)

{
  undefined4 param1;
  System_Action_OnNoteOpenedEventArgs__o *value;
  
  if (DAT_ram_0066493c == '\0') {
    unnamed_function_1099(&System_Action_OnNoteOpenedEventArgs__TypeInfo);
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b4a0);
    DAT_ram_0066493c = '\x01';
  }
  param1 = unnamed_function_44643(__this,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(param1,0,0);
  value = (System_Action_OnNoteOpenedEventArgs__o *)
          unnamed_function_95402(System_Action_OnNoteOpenedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056b4a0,0);
  StaticEventHandler__remove_OnNoteOpened(value,(MethodInfo *)__this);
  return;
}

// ---- NoteUI$$OnNoteOpened ----
// C#: void NoteUI__OnNoteOpened (NoteUI_o* __this, OnNoteOpenedEventArgs_o* onNoteOpenedEventArgs, const MethodInfo* method);

void NoteUI__OnNoteOpened
               (NoteUI_o *__this,OnNoteOpenedEventArgs_o *onNoteOpenedEventArgs,MethodInfo *method)

{
  bool bVar1;
  undefined4 param1;
  int iVar2;
  
  bVar1 = onNoteOpenedEventArgs->isOpening;
  param1 = unnamed_function_44644(__this,0);
  if (bVar1 == false) {
    unnamed_function_44686(param1,0,0);
    return;
  }
  unnamed_function_44686(param1,1,0);
  iVar2 = __this->textMeshPro->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar2 + 0x2d0) * 4))
            (__this->textMeshPro,onNoteOpenedEventArgs->note,*(undefined4 *)(iVar2 + 0x2d4));
  return;
}

// ---- NoteUI$$.ctor ----
// C#: void NoteUI___ctor (NoteUI_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

