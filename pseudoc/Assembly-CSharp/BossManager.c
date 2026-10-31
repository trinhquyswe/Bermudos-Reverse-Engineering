// Assembly-CSharp :: BossManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class BossManager : MonoBehaviour // TypeDefIndex: 5559
{
	// Fields
	[SerializeField]
	private RectTransform backgroundrectTransform; // 0x10
	[SerializeField]
	private GameObject bossUI; // 0x14
	[SerializeField]
	private GameObject boss; // 0x18
	[SerializeField]
	private GameObject bossContainer; // 0x1C
	[SerializeField]
	private GameObject bossHealthBar; // 0x20

	// Methods

	// RVA: 0x3708 Offset: 0x3708 VA: 0x3708
	private void Start() { }

	// RVA: 0x3709 Offset: 0x3709 VA: 0x3709
	private void SpawnBoss() { }

	// RVA: 0x370A Offset: 0x370A VA: 0x370A
	private int GetBossState() { }

	// RVA: 0x370B Offset: 0x370B VA: 0x370B
	private void OnDestroy() { }

	// RVA: 0x370C Offset: 0x370C VA: 0x370C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x370D Offset: 0x370D VA: 0x370D
	private void <Start>b__5_0() { }

	[CompilerGenerated]
	// RVA: 0x370E Offset: 0x370E VA: 0x370E
	private void <Start>b__5_1() { }

	[CompilerGenerated]
	// RVA: 0x370F Offset: 0x370F VA: 0x370F
	private void <Start>b__5_2() { }
}

===== C# end =====
*/

// ---- BossManager$$Start ----
// C#: void BossManager__Start (BossManager_o* __this, const MethodInfo* method);

void BossManager__Start(BossManager_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 param1;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ab2 == '\0') {
    unnamed_function_1099(&DAT_ram_0056789c);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d340);
    unnamed_function_1099(&DAT_ram_0056d37c);
    DAT_ram_00664ab2 = '\x01';
  }
  if (DAT_ram_00664ab4 == '\0') {
    unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
    DAT_ram_00664ab4 = '\x01';
  }
  iVar1 = unnamed_function_44561(StringLiteral_11508 /* "isBossDefeated" */,0);
  if ((iVar1 == 0) || (iVar1 = unnamed_function_44554(StringLiteral_11508 /* "isBossDefeated" */,0), iVar1 != 1)) {
    local_8 = 0x4416000045098000;
    local_10 = 0x4416000045098000;
    uVar2 = unnamed_function_63274(__this->backgroundrectTransform,&local_10,1.0,0,0);
    uVar2 = unnamed_function_70031(uVar2,0x1b,DAT_ram_0056d37c);
    param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_13649(param1,__this,DAT_ram_0056789c,0);
    unnamed_function_70015(uVar2,param1,DAT_ram_0056d340);
  }
  else {
    unnamed_function_44686(__this->bossHealthBar,0,0);
    iVar1 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (DAT_ram_00664b1b == '\0') {
      unnamed_function_1099(&DAT_ram_00565d58);
      DAT_ram_00664b1b = '\x01';
    }
    *(undefined4 *)(iVar1 + 0x1c) = 3;
    if (DAT_ram_00664b1f == '\0') {
      unnamed_function_1099(&DAT_ram_00567f18);
      DAT_ram_00664b1f = '\x01';
    }
    uVar2 = unnamed_function_65370(*(undefined4 *)(iVar1 + 0x10),DAT_ram_00567f18);
    unnamed_function_16396(uVar2,0.5,0);
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar1 + 0xc) * 4))
                (*(undefined4 *)(iVar1 + 0x20),3,*(undefined4 *)(iVar1 + 0x14));
    }
    uVar2 = unnamed_function_44644(__this,0);
    unnamed_function_44686(uVar2,0,0);
  }
  return;
}

// ---- BossManager$$SpawnBoss ----
// C#: void BossManager__SpawnBoss (BossManager_o* __this, const MethodInfo* method);

void BossManager__SpawnBoss(BossManager_o *__this,MethodInfo *method)

{
  undefined4 param4;
  GameObject_o *param1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664ab3 == '\0') {
    unnamed_function_1099(&DAT_ram_0056b554);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664ab3 = '\x01';
  }
  param1 = __this->boss;
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_18 = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_20 = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  param4 = unnamed_function_44683(__this->bossContainer,0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  local_28 = 0;
  local_8 = 0;
  local_38 = local_18;
  local_30 = 0x4170000041600000;
  local_40 = local_20;
  local_10 = 0x4170000041600000;
  unnamed_function_86955(param1,&local_30,&local_40,param4,DAT_ram_0056b554);
  return;
}

// ---- BossManager$$GetBossState ----
// C#: int32_t BossManager__GetBossState (BossManager_o* __this, const MethodInfo* method);

void BossManager__GetBossState(int __ret,BossManager_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664ab4 == '\0') {
    unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
    DAT_ram_00664ab4 = '\x01';
  }
  iVar1 = unnamed_function_44561(StringLiteral_11508 /* "isBossDefeated" */,0);
  if (iVar1 != 0) {
    unnamed_function_44554(StringLiteral_11508 /* "isBossDefeated" */,0);
  }
  return;
}

// ---- BossManager$$OnDestroy ----
// C#: void BossManager__OnDestroy (BossManager_o* __this, const MethodInfo* method);

void BossManager__OnDestroy(BossManager_o *__this,MethodInfo *method)

{
  RectTransform_o *param1;
  
  if (DAT_ram_00664ab5 == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    DAT_ram_00664ab5 = '\x01';
  }
  param1 = __this->backgroundrectTransform;
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13717(param1,0,0);
  return;
}

// ---- BossManager$$.ctor ----
// C#: void BossManager___ctor (BossManager_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

// ---- BossManager$$<Start>b__5_0 ----
// C#: void BossManager___Start_b__5_0 (BossManager_o* __this, const MethodInfo* method);

void BossManager___Start_b__5_0(BossManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664ab6 == '\0') {
    unnamed_function_1099(&DAT_ram_005678a0);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d344);
    unnamed_function_1099(&DAT_ram_0056d380);
    DAT_ram_00664ab6 = '\x01';
  }
  uVar1 = unnamed_function_44683(__this->bossUI,0);
  local_8 = 0;
  local_18 = 0;
  local_10 = 0xc130000042480000;
  local_20 = 0xc130000042480000;
  uVar1 = unnamed_function_13876(uVar1,&local_20,1.0,0,0);
  uVar1 = unnamed_function_70031(uVar1,0x1b,DAT_ram_0056d380);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_005678a0,0);
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d344);
  return;
}

// ---- BossManager$$<Start>b__5_1 ----
// C#: void BossManager___Start_b__5_1 (BossManager_o* __this, const MethodInfo* method);

void BossManager___Start_b__5_1(BossManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param1;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ab7 == '\0') {
    unnamed_function_1099(&DAT_ram_005678a4);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d344);
    unnamed_function_1099(&DAT_ram_0056d37c);
    unnamed_function_1099(&DAT_ram_0056d380);
    DAT_ram_00664ab7 = '\x01';
  }
  local_8 = 0x44fa000045098000;
  local_20 = 0x44fa000045098000;
  uVar1 = unnamed_function_63274(__this->backgroundrectTransform,&local_20,1.0,0,0);
  unnamed_function_70031(uVar1,0x1a,DAT_ram_0056d37c);
  uVar1 = unnamed_function_44683(__this->bossUI,0);
  local_10 = 0;
  local_28 = 0;
  local_18 = 0xc3c1800044e38000;
  local_30 = 0xc3c1800044e38000;
  uVar1 = unnamed_function_13876(uVar1,&local_30,1.0,0,0);
  uVar1 = unnamed_function_70031(uVar1,0x1a,DAT_ram_0056d380);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_005678a4,0);
  unnamed_function_70015(uVar1,param1,DAT_ram_0056d344);
  return;
}

// ---- BossManager$$<Start>b__5_2 ----
// C#: void BossManager___Start_b__5_2 (BossManager_o* __this, const MethodInfo* method);

void BossManager___Start_b__5_2(BossManager_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  BossManager__SpawnBoss(__this,(MethodInfo *)__this);
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  return;
}

