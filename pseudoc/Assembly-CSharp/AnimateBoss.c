// Assembly-CSharp :: AnimateBoss
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class AnimateBoss : MonoBehaviour // TypeDefIndex: 5541
{
	// Fields
	private Boss boss; // 0x10

	// Methods

	// RVA: 0x3698 Offset: 0x3698 VA: 0x3698
	private void Awake() { }

	// RVA: 0x3699 Offset: 0x3699 VA: 0x3699
	public void Update() { }

	// RVA: 0x369A Offset: 0x369A VA: 0x369A
	public void InitializeAimDirection() { }

	// RVA: 0x369B Offset: 0x369B VA: 0x369B
	public AimDirection SetAimDirection(Vector3 direction) { }

	// RVA: 0x369C Offset: 0x369C VA: 0x369C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- AnimateBoss$$Awake ----
// C#: void AnimateBoss__Awake (AnimateBoss_o* __this, const MethodInfo* method);

void AnimateBoss__Awake(AnimateBoss_o *__this,MethodInfo *method)

{
  Boss_o *pBVar1;
  
  if (DAT_ram_00664a6e == '\0') {
    unnamed_function_1099(&DAT_ram_00567e30);
    DAT_ram_00664a6e = '\x01';
  }
  pBVar1 = (Boss_o *)unnamed_function_65370(__this,DAT_ram_00567e30);
  __this->boss = pBVar1;
  return;
}

// ---- AnimateBoss$$Update ----
// C#: void AnimateBoss__Update (AnimateBoss_o* __this, const MethodInfo* method);

void AnimateBoss__Update(AnimateBoss_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  MethodInfo *in_i3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_30 [16];
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_00664a6f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664a6f = '\x01';
  }
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  uVar4 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar5 + 0x5c) + 0x10),0);
  unnamed_function_44960(&local_10,uVar4,0);
  fVar3 = local_8;
  fVar2 = local_c;
  fVar1 = local_10;
  uVar4 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar4,0);
  local_30._8_4_ = (float)fVar3 - (float)local_8;
  local_1c = (float4)((float)fVar2 - (float)local_c);
  local_20 = (float4)((float)fVar1 - (float)local_10);
  local_30._4_4_ = (void *)local_1c;
  local_30._0_4_ = (void *)local_20;
  local_18 = (float4)local_30._8_4_;
  AnimateBoss__SetAimDirection
            ((AimDirection)__this,(AnimateBoss_o *)local_30,(Vector3_o *)local_30,in_i3);
  return;
}

// ---- AnimateBoss$$InitializeAimDirection ----
// C#: void AnimateBoss__InitializeAimDirection (AnimateBoss_o* __this, const MethodInfo* method);

void AnimateBoss__InitializeAimDirection(AnimateBoss_o *__this,MethodInfo *method)

{
  Animator_o *param1;
  
  if (DAT_ram_00664a70 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a70 = '\x01';
  }
  param1 = __this->boss->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45420(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x10),0,0);
  unnamed_function_45420
            (__this->boss->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x18),0,0);
  unnamed_function_45420
            (__this->boss->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x28),0,0);
  unnamed_function_45420
            (__this->boss->animator,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x24),0,0);
  return;
}

// ---- AnimateBoss$$SetAimDirection ----
// C#: int32_t AnimateBoss__SetAimDirection (AnimateBoss_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);

void AnimateBoss__SetAimDirection
               (AimDirection __ret,AnimateBoss_o *__this,Vector3_o *direction,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  undefined4 param1;
  int iVar3;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664a71 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    DAT_ram_00664a71 = '\x01';
  }
  local_8._0_1_ = __this->pad_8[0];
  local_8._1_1_ = __this->pad_8[1];
  local_8._2_1_ = __this->pad_8[2];
  local_8._3_1_ = __this->pad_8[3];
  local_10._0_4_ = (int)__this->klass;
  local_10._4_4_ = (int)__this->monitor;
  fVar2 = HelperUtilities__GetAngleFromVector((Vector3_o *)&stack0xfffffff0,(MethodInfo *)0x0);
  if ((fVar2 <= 45.0) || (135.0 < fVar2)) {
    if ((fVar2 <= 180.0 && 135.0 < fVar2) || ((-180.0 < fVar2 && (fVar2 <= -155.0)))) {
      AnimateBoss__InitializeAimDirection((AnimateBoss_o *)__ret,(MethodInfo *)&stack0xfffffff0);
      param1 = *(undefined4 *)(*(int *)(__ret + 0x10) + 0x24);
      iVar1 = 0x28;
      iVar3 = *(int *)(Settings_TypeInfo + 0x74);
    }
    else if ((fVar2 <= -155.0) || (-45.0 < fVar2)) {
      if (fVar2 <= -45.0) {
        return;
      }
      if (45.0 < fVar2) {
        return;
      }
      AnimateBoss__InitializeAimDirection((AnimateBoss_o *)__ret,(MethodInfo *)&stack0xfffffff0);
      param1 = *(undefined4 *)(*(int *)(__ret + 0x10) + 0x24);
      iVar1 = 0x24;
      iVar3 = *(int *)(Settings_TypeInfo + 0x74);
    }
    else {
      AnimateBoss__InitializeAimDirection((AnimateBoss_o *)__ret,(MethodInfo *)&stack0xfffffff0);
      param1 = *(undefined4 *)(*(int *)(__ret + 0x10) + 0x24);
      iVar1 = 0x18;
      iVar3 = *(int *)(Settings_TypeInfo + 0x74);
    }
  }
  else {
    AnimateBoss__InitializeAimDirection((AnimateBoss_o *)__ret,(MethodInfo *)&stack0xfffffff0);
    param1 = *(undefined4 *)(*(int *)(__ret + 0x10) + 0x24);
    iVar1 = 0x10;
    iVar3 = *(int *)(Settings_TypeInfo + 0x74);
  }
  if (iVar3 == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45425(param1,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + iVar1),0);
  return;
}

// ---- AnimateBoss$$.ctor ----
// C#: void AnimateBoss___ctor (AnimateBoss_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

