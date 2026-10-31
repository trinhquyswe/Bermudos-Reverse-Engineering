// Assembly-CSharp :: SkillCooldownTimer
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class SkillCooldownTimer : MonoBehaviour // TypeDefIndex: 5708
{
	// Fields
	[SerializeField]
	private Image dashCooldownImage; // 0x10
	[SerializeField]
	private Image bashCooldownImage; // 0x14
	[SerializeField]
	private Image beamCooldownImage; // 0x18
	[SerializeField]
	private Image beamIcon; // 0x1C
	public float dashCooldown; // 0x20
	public float bashCooldown; // 0x24

	// Methods

	// RVA: 0x3A1F Offset: 0x3A1F VA: 0x3A1F
	private void OnEnable() { }

	// RVA: 0x3A20 Offset: 0x3A20 VA: 0x3A20
	private void OnDisable() { }

	// RVA: 0x3A21 Offset: 0x3A21 VA: 0x3A21
	public void GetDashCooldown() { }

	// RVA: 0x3A22 Offset: 0x3A22 VA: 0x3A22
	public void GetBashCooldown() { }

	// RVA: 0x3A23 Offset: 0x3A23 VA: 0x3A23
	public void IncreaseBeamCooldown(RageEventArgs rageEventArgs) { }

	// RVA: 0x3A24 Offset: 0x3A24 VA: 0x3A24
	private void Start() { }

	// RVA: 0x3A25 Offset: 0x3A25 VA: 0x3A25
	private void Update() { }

	// RVA: 0x3A26 Offset: 0x3A26 VA: 0x3A26
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A27 Offset: 0x3A27 VA: 0x3A27
	private void <IncreaseBeamCooldown>b__10_0() { }
}

===== C# end =====
*/

// ---- SkillCooldownTimer$$OnEnable ----
// C#: void SkillCooldownTimer__OnEnable (SkillCooldownTimer_o* __this, const MethodInfo* method);

void SkillCooldownTimer__OnEnable(SkillCooldownTimer_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  System_Action_RageEventArgs__o *value;
  
  if (DAT_ram_00664988 == '\0') {
    unnamed_function_1099(&System_Action_RageEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056c58c);
    unnamed_function_1099(&DAT_ram_0056c590);
    unnamed_function_1099(&DAT_ram_0056c594);
    DAT_ram_00664988 = '\x01';
  }
  uVar3 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(uVar3,__this,DAT_ram_0056c590,0);
  if (DAT_ram_006649bb == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649bb = '\x01';
  }
  iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c);
  while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (System_Action_TypeInfo == *piVar4))) {
    iVar5 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,piVar4,iVar2);
    bVar1 = iVar2 == iVar5;
    iVar2 = iVar5;
    if (bVar1) {
      uVar3 = unnamed_function_95402(System_Action_TypeInfo);
      unnamed_function_82700(uVar3,__this,DAT_ram_0056c58c,0);
      if (DAT_ram_006649b8 == '\0') {
        unnamed_function_1099(&System_Action_TypeInfo);
        unnamed_function_1099(&StaticEventHandler_TypeInfo);
        DAT_ram_006649b8 = '\x01';
      }
      iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18);
      while ((piVar4 = (int *)unnamed_function_85158(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
             (System_Action_TypeInfo == *piVar4))) {
        iVar5 = unnamed_function_1144
                          (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18,piVar4,iVar2);
        bVar1 = iVar2 == iVar5;
        iVar2 = iVar5;
        if (bVar1) {
          value = (System_Action_RageEventArgs__o *)
                  unnamed_function_95402(System_Action_RageEventArgs__TypeInfo);
          unnamed_function_60074(value,__this,DAT_ram_0056c594,0);
          RageEvent__add_OnRageChanged(value,(MethodInfo *)0x0);
          return;
        }
      }
      unnamed_function_1116(piVar4,System_Action_TypeInfo);
      do {
        halt_trap();
      } while( true );
    }
  }
  unnamed_function_1116(piVar4,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- SkillCooldownTimer$$OnDisable ----
// C#: void SkillCooldownTimer__OnDisable (SkillCooldownTimer_o* __this, const MethodInfo* method);

void SkillCooldownTimer__OnDisable(SkillCooldownTimer_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  System_Action_RageEventArgs__o *value;
  
  if (DAT_ram_00664989 == '\0') {
    unnamed_function_1099(&System_Action_RageEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056c58c);
    unnamed_function_1099(&DAT_ram_0056c590);
    unnamed_function_1099(&DAT_ram_0056c594);
    DAT_ram_00664989 = '\x01';
  }
  uVar3 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(uVar3,__this,DAT_ram_0056c590,0);
  if (DAT_ram_006649bc == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649bc = '\x01';
  }
  iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c);
  while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
         (System_Action_TypeInfo == *piVar4))) {
    iVar5 = unnamed_function_1144(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x1c,piVar4,iVar2);
    bVar1 = iVar2 == iVar5;
    iVar2 = iVar5;
    if (bVar1) {
      uVar3 = unnamed_function_95402(System_Action_TypeInfo);
      unnamed_function_82700(uVar3,__this,DAT_ram_0056c58c,0);
      if (DAT_ram_006649b9 == '\0') {
        unnamed_function_1099(&System_Action_TypeInfo);
        unnamed_function_1099(&StaticEventHandler_TypeInfo);
        DAT_ram_006649b9 = '\x01';
      }
      iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18);
      while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
             (System_Action_TypeInfo == *piVar4))) {
        iVar5 = unnamed_function_1144
                          (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x18,piVar4,iVar2);
        bVar1 = iVar2 == iVar5;
        iVar2 = iVar5;
        if (bVar1) {
          value = (System_Action_RageEventArgs__o *)
                  unnamed_function_95402(System_Action_RageEventArgs__TypeInfo);
          unnamed_function_60074(value,__this,DAT_ram_0056c594,0);
          RageEvent__remove_OnRageChanged(value,(MethodInfo *)0x0);
          return;
        }
      }
      unnamed_function_1116(piVar4,System_Action_TypeInfo);
      do {
        halt_trap();
      } while( true );
    }
  }
  unnamed_function_1116(piVar4,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- SkillCooldownTimer$$GetDashCooldown ----
// C#: void SkillCooldownTimer__GetDashCooldown (SkillCooldownTimer_o* __this, const MethodInfo* method);

void SkillCooldownTimer__GetDashCooldown(SkillCooldownTimer_o *__this,MethodInfo *method)

{
  __this->dashCooldown = 1.0;
  unnamed_function_16686(__this->dashCooldownImage,1.0,0);
  return;
}

// ---- SkillCooldownTimer$$GetBashCooldown ----
// C#: void SkillCooldownTimer__GetBashCooldown (SkillCooldownTimer_o* __this, const MethodInfo* method);

void SkillCooldownTimer__GetBashCooldown(SkillCooldownTimer_o *__this,MethodInfo *method)

{
  __this->bashCooldown = 0.5;
  unnamed_function_16686(__this->bashCooldownImage,1.0,0);
  return;
}

// ---- SkillCooldownTimer$$IncreaseBeamCooldown ----
// C#: void SkillCooldownTimer__IncreaseBeamCooldown (SkillCooldownTimer_o* __this, RageEventArgs_o* rageEventArgs, const MethodInfo* method);

void SkillCooldownTimer__IncreaseBeamCooldown
               (SkillCooldownTimer_o *__this,RageEventArgs_o *rageEventArgs,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param1_00;
  
  if (DAT_ram_0066498a == '\0') {
    unnamed_function_1099(&DAT_ram_0056c588);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d33c);
    DAT_ram_0066498a = '\x01';
  }
  param1 = unnamed_function_63254(__this->beamCooldownImage,rageEventArgs->ragePercent,0.3,0);
  param1_00 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1_00,__this,DAT_ram_0056c588,0);
  unnamed_function_70015(param1,param1_00,DAT_ram_0056d33c);
  return;
}

// ---- SkillCooldownTimer$$Start ----
// C#: void SkillCooldownTimer__Start (SkillCooldownTimer_o* __this, const MethodInfo* method);

void SkillCooldownTimer__Start(SkillCooldownTimer_o *__this,MethodInfo *method)

{
  unnamed_function_16686(__this->dashCooldownImage,0.0,0);
  unnamed_function_16686(__this->bashCooldownImage,0.0,0);
  unnamed_function_16686(__this->beamCooldownImage,0.0,0);
  return;
}

// ---- SkillCooldownTimer$$Update ----
// C#: void SkillCooldownTimer__Update (SkillCooldownTimer_o* __this, const MethodInfo* method);

void SkillCooldownTimer__Update(SkillCooldownTimer_o *__this,MethodInfo *method)

{
  float fVar1;
  Image_o *pIVar2;
  float fVar3;
  float fVar4;
  
  pIVar2 = __this->dashCooldownImage;
  fVar3 = (float)pIVar2[0x25]._opaque;
  if (0.0 < fVar3) {
    fVar4 = __this->dashCooldown;
    fVar1 = unnamed_function_44879(0);
    unnamed_function_16686(pIVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
  }
  pIVar2 = __this->bashCooldownImage;
  fVar3 = (float)pIVar2[0x25]._opaque;
  if (0.0 < fVar3) {
    fVar4 = __this->bashCooldown;
    fVar1 = unnamed_function_44879(0);
    unnamed_function_16686(pIVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
  }
  return;
}

// ---- SkillCooldownTimer$$.ctor ----
// C#: void SkillCooldownTimer___ctor (SkillCooldownTimer_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

// ---- SkillCooldownTimer$$<IncreaseBeamCooldown>b__10_0 ----
// C#: void SkillCooldownTimer___IncreaseBeamCooldown_b__10_0 (SkillCooldownTimer_o* __this, const MethodInfo* method);

void SkillCooldownTimer___IncreaseBeamCooldown_b__10_0
               (SkillCooldownTimer_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)__this->beamCooldownImage[0x25]._opaque;
  uVar1 = unnamed_function_44644(__this->beamCooldownImage,0);
  unnamed_function_44686(uVar1,(uint)(fVar2 != 1.0),0);
  uVar1 = unnamed_function_44644(__this->beamIcon,0);
  unnamed_function_44686(uVar1,(uint)(fVar2 == 1.0),0);
  return;
}

