// Assembly-CSharp :: StunBar
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class StunBar : MonoBehaviour // TypeDefIndex: 5597
{
	// Fields
	private PoiseEvent poiseEvent; // 0x10
	private Slider stunBar; // 0x14
	private float stunTime; // 0x18

	// Methods

	// RVA: 0x37D8 Offset: 0x37D8 VA: 0x37D8
	private void Awake() { }

	// RVA: 0x37D9 Offset: 0x37D9 VA: 0x37D9
	private void OnEnable() { }

	// RVA: 0x37DA Offset: 0x37DA VA: 0x37DA
	private void OnDisable() { }

	// RVA: 0x37DB Offset: 0x37DB VA: 0x37DB
	private void PoiseEvent_OnPoise(PoiseEvent poiseEvent, PoiseEventArgs poiseEventArgs) { }

	// RVA: 0x37DC Offset: 0x37DC VA: 0x37DC
	private void Update() { }

	// RVA: 0x37DD Offset: 0x37DD VA: 0x37DD
	public void .ctor() { }
}

===== C# end =====
*/

// ---- StunBar$$Awake ----
// C#: void StunBar__Awake (StunBar_o* __this, const MethodInfo* method);

void StunBar__Awake(StunBar_o *__this,MethodInfo *method)

{
  PoiseEvent_o *pPVar1;
  Slider_o *pSVar2;
  
  if (DAT_ram_00664b0b == '\0') {
    unnamed_function_1099(&DAT_ram_00567f70);
    unnamed_function_1099(&DAT_ram_00567efc);
    DAT_ram_00664b0b = '\x01';
  }
  pPVar1 = (PoiseEvent_o *)unnamed_function_65370(__this,DAT_ram_00567efc);
  __this->poiseEvent = pPVar1;
  pSVar2 = (Slider_o *)unnamed_function_65372(__this,DAT_ram_00567f70);
  __this->stunBar = pSVar2;
  return;
}

// ---- StunBar$$OnEnable ----
// C#: void StunBar__OnEnable (StunBar_o* __this, const MethodInfo* method);

void StunBar__OnEnable(StunBar_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664b0c == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056cbd0);
    DAT_ram_00664b0c = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056cbd0,0);
  if (DAT_ram_00664b44 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b44 = '\x01';
  }
  param1 = pPVar3->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pPVar3->OnPoise,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StunBar$$OnDisable ----
// C#: void StunBar__OnDisable (StunBar_o* __this, const MethodInfo* method);

void StunBar__OnDisable(StunBar_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  PoiseEvent_o *pPVar3;
  
  if (DAT_ram_00664b0d == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056cbd0);
    DAT_ram_00664b0d = '\x01';
  }
  pPVar3 = __this->poiseEvent;
  param1_00 = unnamed_function_95402(System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056cbd0,0);
  if (DAT_ram_00664b45 == '\0') {
    unnamed_function_1099(&System_Action_PoiseEvent__PoiseEventArgs__TypeInfo);
    DAT_ram_00664b45 = '\x01';
  }
  param1 = pPVar3->OnPoise;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_PoiseEvent__PoiseEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_PoiseEvent__PoiseEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pPVar3->OnPoise,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StunBar$$PoiseEvent_OnPoise ----
// C#: void StunBar__PoiseEvent_OnPoise (StunBar_o* __this, PoiseEvent_o* poiseEvent, PoiseEventArgs_o* poiseEventArgs, const MethodInfo* method);

void StunBar__PoiseEvent_OnPoise
               (StunBar_o *__this,PoiseEvent_o *poiseEvent,PoiseEventArgs_o *poiseEventArgs,
               MethodInfo *method)

{
  float param2;
  int iVar1;
  
  if (poiseEventArgs->currentPoise <= 0.0) {
    param2 = poiseEventArgs->stunTime;
    __this->stunTime = param2;
    unnamed_function_45782(__this->stunBar,param2,0);
    iVar1 = __this->stunBar->_opaque;
    (**(code **)((ulonglong)*(uint *)(iVar1 + 0x238) * 4))
              (__this->stunBar,__this->stunTime,*(undefined4 *)(iVar1 + 0x23c));
  }
  return;
}

// ---- StunBar$$Update ----
// C#: void StunBar__Update (StunBar_o* __this, const MethodInfo* method);

void StunBar__Update(StunBar_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Slider_o *pSVar3;
  int iVar4;
  
  iVar4 = __this->stunBar->_opaque;
  fVar1 = (float)(**(code **)((ulonglong)*(uint *)(iVar4 + 0x230) * 4))
                           (__this->stunBar,*(undefined4 *)(iVar4 + 0x234));
  if (0.0 < fVar1) {
    pSVar3 = __this->stunBar;
    fVar1 = (float)(**(code **)((ulonglong)*(uint *)(pSVar3->_opaque + 0x230) * 4))
                             (pSVar3,*(undefined4 *)(pSVar3->_opaque + 0x234));
    fVar2 = unnamed_function_44879(0);
    (**(code **)((ulonglong)*(uint *)(pSVar3->_opaque + 0x238) * 4))
              (pSVar3,fVar1 - fVar2,*(undefined4 *)(pSVar3->_opaque + 0x23c));
  }
  return;
}

// ---- StunBar$$.ctor ----
// C#: void StunBar___ctor (StunBar_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

