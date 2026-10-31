// Assembly-CSharp :: StaminaBar
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class StaminaBar : MonoBehaviour // TypeDefIndex: 5631
{
	// Fields
	[SerializeField]
	private Slider staminaBar; // 0x10
	[SerializeField]
	private Slider easeStaminaBar; // 0x14
	private float lerpSpeed; // 0x18

	// Methods

	// RVA: 0x384F Offset: 0x384F VA: 0x384F
	private void OnEnable() { }

	// RVA: 0x3850 Offset: 0x3850 VA: 0x3850
	private void OnDisable() { }

	// RVA: 0x3851 Offset: 0x3851 VA: 0x3851
	private void StaminaEvent_OnStaminaChanged(StaminaEvent staminaEvent, StaminaEventArgs staminaEventArgs) { }

	// RVA: 0x3852 Offset: 0x3852 VA: 0x3852
	private void Update() { }

	// RVA: 0x3853 Offset: 0x3853 VA: 0x3853
	public void .ctor() { }
}

===== C# end =====
*/

// ---- StaminaBar$$OnEnable ----
// C#: void StaminaBar__OnEnable (StaminaBar_o* __this, const MethodInfo* method);

void StaminaBar__OnEnable(StaminaBar_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int iVar2;
  int param1;
  undefined4 param1_00;
  int param1_01;
  int iVar3;
  
  if (DAT_ram_00664b4b == '\0') {
    unnamed_function_1099(&System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&DAT_ram_0056c9cc);
    DAT_ram_00664b4b = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x3c);
  param1_00 = unnamed_function_95402(System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056c9cc,0);
  if (DAT_ram_00664b4d == '\0') {
    unnamed_function_1099(&System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
    DAT_ram_00664b4d = '\x01';
  }
  param1 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_01,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(iVar3 + 0x10,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaminaBar$$OnDisable ----
// C#: void StaminaBar__OnDisable (StaminaBar_o* __this, const MethodInfo* method);

void StaminaBar__OnDisable(StaminaBar_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int iVar2;
  int param1;
  undefined4 param1_00;
  int param1_01;
  int iVar3;
  
  if (DAT_ram_00664b4c == '\0') {
    unnamed_function_1099(&System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&DAT_ram_0056c9cc);
    DAT_ram_00664b4c = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x3c);
  param1_00 = unnamed_function_95402(System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_0056c9cc,0);
  if (DAT_ram_00664b4e == '\0') {
    unnamed_function_1099(&System_Action_StaminaEvent__StaminaEventArgs__TypeInfo);
    DAT_ram_00664b4e = '\x01';
  }
  param1 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_StaminaEvent__StaminaEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_01,System_Action_StaminaEvent__StaminaEventArgs__TypeInfo),
       iVar2 == 0)) break;
    iVar2 = unnamed_function_1144(iVar3 + 0x10,iVar2,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- StaminaBar$$StaminaEvent_OnStaminaChanged ----
// C#: void StaminaBar__StaminaEvent_OnStaminaChanged (StaminaBar_o* __this, StaminaEvent_o* staminaEvent, StaminaEventArgs_o* staminaEventArgs, const MethodInfo* method);

void BossHealthBar__HealthEvent_OnHealthChanged
               (BossHealthBar_o *__this,HealthEvent_o *healthEvent,
               HealthEventArgs_o *healthEventArgs,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = __this->healthBar->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar1 + 0x238) * 4))
            (__this->healthBar,healthEventArgs->healthPercent,*(undefined4 *)(iVar1 + 0x23c));
  return;
}

// ---- StaminaBar$$Update ----
// C#: void StaminaBar__Update (StaminaBar_o* __this, const MethodInfo* method);

void BossHealthBar__Update(BossHealthBar_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Slider_o *pSVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar5 = __this->healthBar->_opaque;
  fVar1 = (float)(**(code **)((ulonglong)*(uint *)(iVar5 + 0x230) * 4))
                           (__this->healthBar,*(undefined4 *)(iVar5 + 0x234));
  iVar5 = __this->easeHealthBar->_opaque;
  fVar2 = (float)(**(code **)((ulonglong)*(uint *)(iVar5 + 0x230) * 4))
                           (__this->easeHealthBar,*(undefined4 *)(iVar5 + 0x234));
  if (fVar1 != fVar2) {
    pSVar4 = __this->easeHealthBar;
    fVar2 = (float)(**(code **)((ulonglong)*(uint *)(pSVar4->_opaque + 0x230) * 4))
                             (pSVar4,*(undefined4 *)(pSVar4->_opaque + 0x234));
    iVar5 = __this->healthBar->_opaque;
    fVar3 = (float)(**(code **)((ulonglong)*(uint *)(iVar5 + 0x230) * 4))
                             (__this->healthBar,*(undefined4 *)(iVar5 + 0x234));
    fVar7 = __this->lerpSpeed;
    fVar1 = fVar7;
    if (1.0 <= fVar7) {
      fVar1 = 1.0;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar1;
    }
    (**(code **)((ulonglong)*(uint *)(pSVar4->_opaque + 0x238) * 4))
              (pSVar4,fVar2 + (fVar3 - fVar2) * fVar6,*(undefined4 *)(pSVar4->_opaque + 0x23c));
  }
  return;
}

// ---- StaminaBar$$.ctor ----
// C#: void StaminaBar___ctor (StaminaBar_o* __this, const MethodInfo* method);

void BossHealthBar___ctor(BossHealthBar_o *__this,MethodInfo *method)

{
  __this->lerpSpeed = 0.05;
  unnamed_function_44622(__this,0);
  return;
}

