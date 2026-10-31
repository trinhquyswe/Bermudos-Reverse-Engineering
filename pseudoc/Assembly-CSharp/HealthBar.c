// Assembly-CSharp :: HealthBar
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class HealthBar : MonoBehaviour // TypeDefIndex: 5621
{
	// Fields
	[SerializeField]
	private Slider healthBar; // 0x10
	[SerializeField]
	private Slider easeHealthBar; // 0x14
	private float lerpSpeed; // 0x18

	// Methods

	// RVA: 0x3830 Offset: 0x3830 VA: 0x3830
	private void OnEnable() { }

	// RVA: 0x3831 Offset: 0x3831 VA: 0x3831
	private void OnDisable() { }

	// RVA: 0x3832 Offset: 0x3832 VA: 0x3832
	private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs) { }

	// RVA: 0x3833 Offset: 0x3833 VA: 0x3833
	private void Update() { }

	// RVA: 0x3834 Offset: 0x3834 VA: 0x3834
	public void .ctor() { }
}

===== C# end =====
*/

// ---- HealthBar$$OnEnable ----
// C#: void HealthBar__OnEnable (HealthBar_o* __this, const MethodInfo* method);

void HealthBar__OnEnable(HealthBar_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int iVar2;
  int param1;
  undefined4 param1_00;
  int param1_01;
  int iVar3;
  
  if (DAT_ram_00664b3d == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00569e38);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b3d = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x2c);
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00569e38,0);
  if (DAT_ram_00664b3f == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b3f = '\x01';
  }
  param1 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
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

// ---- HealthBar$$OnDisable ----
// C#: void HealthBar__OnDisable (HealthBar_o* __this, const MethodInfo* method);

void HealthBar__OnDisable(HealthBar_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  int iVar2;
  int param1;
  undefined4 param1_00;
  int param1_01;
  int iVar3;
  
  if (DAT_ram_00664b3e == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00569e38);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b3e = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(**(int **)(iVar3 + 0x5c) + 0x10) + 0x2c);
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00569e38,0);
  if (DAT_ram_00664b40 == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b40 = '\x01';
  }
  param1 = *(int *)(iVar3 + 0x10);
  while( true ) {
    iVar2 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (iVar2 = unnamed_function_1112
                          (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
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

// ---- HealthBar$$HealthEvent_OnHealthChanged ----
// C#: void HealthBar__HealthEvent_OnHealthChanged (HealthBar_o* __this, HealthEvent_o* healthEvent, HealthEventArgs_o* healthEventArgs, const MethodInfo* method);

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

// ---- HealthBar$$Update ----
// C#: void HealthBar__Update (HealthBar_o* __this, const MethodInfo* method);

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

// ---- HealthBar$$.ctor ----
// C#: void HealthBar___ctor (HealthBar_o* __this, const MethodInfo* method);

void BossHealthBar___ctor(BossHealthBar_o *__this,MethodInfo *method)

{
  __this->lerpSpeed = 0.05;
  unnamed_function_44622(__this,0);
  return;
}

