// Assembly-CSharp :: BossHealthBar
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BossHealthBar : MonoBehaviour // TypeDefIndex: 5614
{
	// Fields
	[SerializeField]
	private Slider healthBar; // 0x10
	[SerializeField]
	private Slider easeHealthBar; // 0x14
	private float lerpSpeed; // 0x18
	private HealthEvent healthEvent; // 0x1C

	// Methods

	// RVA: 0x380B Offset: 0x380B VA: 0x380B
	private void OnEnable() { }

	// RVA: 0x380C Offset: 0x380C VA: 0x380C
	private void OnDisable() { }

	// RVA: 0x380D Offset: 0x380D VA: 0x380D
	private void StaticEventHandler_OnBossChanged(OnBossChangedEventArgs onBossChangedEventArgs) { }

	// RVA: 0x380E Offset: 0x380E VA: 0x380E
	private void HealthEvent_OnHealthChanged(HealthEvent healthEvent, HealthEventArgs healthEventArgs) { }

	// RVA: 0x380F Offset: 0x380F VA: 0x380F
	private void Update() { }

	// RVA: 0x3810 Offset: 0x3810 VA: 0x3810
	public void .ctor() { }
}

===== C# end =====
*/

// ---- BossHealthBar$$OnEnable ----
// C#: void BossHealthBar__OnEnable (BossHealthBar_o* __this, const MethodInfo* method);

void BossHealthBar__OnEnable(BossHealthBar_o *__this,MethodInfo *method)

{
  System_Action_OnBossChangedEventArgs__o *value;
  
  if (DAT_ram_00664b2a == '\0') {
    unnamed_function_1099(&System_Action_OnBossChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567898);
    DAT_ram_00664b2a = '\x01';
  }
  value = (System_Action_OnBossChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnBossChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00567898,0);
  StaticEventHandler__add_OnBossChanged(value,(MethodInfo *)0x0);
  return;
}

// ---- BossHealthBar$$OnDisable ----
// C#: void BossHealthBar__OnDisable (BossHealthBar_o* __this, const MethodInfo* method);

void BossHealthBar__OnDisable(BossHealthBar_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  System_Action_OnBossChangedEventArgs__o *value;
  int iVar2;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar3;
  HealthEvent_o *pHVar4;
  
  if (DAT_ram_00664b2b == '\0') {
    unnamed_function_1099(&System_Action_OnBossChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567894);
    unnamed_function_1099(&DAT_ram_00567898);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664b2b = '\x01';
  }
  value = (System_Action_OnBossChangedEventArgs__o *)
          unnamed_function_95402(System_Action_OnBossChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00567898,0);
  StaticEventHandler__remove_OnBossChanged(value,(MethodInfo *)0x0);
  pHVar4 = __this->healthEvent;
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar2 = unnamed_function_44679(pHVar4,0,0);
  if (iVar2 != 0) {
    pHVar4 = __this->healthEvent;
    param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_60334(param1_00,__this,DAT_ram_00567894,0);
    if (DAT_ram_00664b40 == '\0') {
      unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
      DAT_ram_00664b40 = '\x01';
    }
    param1 = pHVar4->OnHealthChanged;
    do {
      iVar2 = 0;
      param1_01 = unnamed_function_85160(param1,param1_00,0);
      param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
      if ((param1_01 != 0) &&
         (iVar2 = unnamed_function_1112
                            (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
         iVar2 == 0)) {
        unnamed_function_1116(param1_01,param2);
        do {
          halt_trap();
        } while( true );
      }
      pAVar3 = (Action_o *)unnamed_function_1144(&pHVar4->OnHealthChanged,iVar2,param1);
      bVar1 = param1 != pAVar3;
      param1 = pAVar3;
    } while (bVar1);
  }
  return;
}

// ---- BossHealthBar$$StaticEventHandler_OnBossChanged ----
// C#: void BossHealthBar__StaticEventHandler_OnBossChanged (BossHealthBar_o* __this, OnBossChangedEventArgs_o* onBossChangedEventArgs, const MethodInfo* method);

void BossHealthBar__StaticEventHandler_OnBossChanged
               (BossHealthBar_o *__this,OnBossChangedEventArgs_o *onBossChangedEventArgs,
               MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  HealthEvent_o *pHVar3;
  
  if (DAT_ram_00664b2c == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567894);
    DAT_ram_00664b2c = '\x01';
  }
  pHVar3 = onBossChangedEventArgs->boss->healthEvent;
  __this->healthEvent = pHVar3;
  param1_00 = unnamed_function_95402(System_Action_HealthEvent__HealthEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_00567894,0);
  if (DAT_ram_00664b3f == '\0') {
    unnamed_function_1099(&System_Action_HealthEvent__HealthEventArgs__TypeInfo);
    DAT_ram_00664b3f = '\x01';
  }
  param1 = pHVar3->OnHealthChanged;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_HealthEvent__HealthEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_HealthEvent__HealthEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pHVar3->OnHealthChanged,param2_00,param1);
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

// ---- BossHealthBar$$HealthEvent_OnHealthChanged ----
// C#: void BossHealthBar__HealthEvent_OnHealthChanged (BossHealthBar_o* __this, HealthEvent_o* healthEvent, HealthEventArgs_o* healthEventArgs, const MethodInfo* method);

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

// ---- BossHealthBar$$Update ----
// C#: void BossHealthBar__Update (BossHealthBar_o* __this, const MethodInfo* method);

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

// ---- BossHealthBar$$.ctor ----
// C#: void BossHealthBar___ctor (BossHealthBar_o* __this, const MethodInfo* method);

void BossHealthBar___ctor(BossHealthBar_o *__this,MethodInfo *method)

{
  __this->lerpSpeed = 0.05;
  unnamed_function_44622(__this,0);
  return;
}

