// Assembly-CSharp :: RangedSkills
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class RangedSkills : MonoBehaviour // TypeDefIndex: 5698
{
	// Fields
	private Animator animator; // 0x10
	public Transform shootPosition; // 0x14
	public AmmoDetailsSO ammo; // 0x18
	public AmmoDetailsSO ammoPhase2; // 0x1C
	[Header("EYE ATTACK")]
	public GameObject Beam; // 0x20
	public float[] offsetArr; // 0x24

	// Methods

	// RVA: 0x39D3 Offset: 0x39D3 VA: 0x39D3
	private void Awake() { }

	// RVA: 0x3667 Offset: 0x3667 VA: 0x3667
	public void Shoot(AmmoDetailsSO ammoDetailsSO, Vector3 shootPosition, Vector3 target) { }

	// RVA: 0x39D4 Offset: 0x39D4 VA: 0x39D4
	private Vector2[] Get15ShootDirections() { }

	// RVA: 0x39D5 Offset: 0x39D5 VA: 0x39D5
	public void BaseShoot() { }

	// RVA: 0x39D6 Offset: 0x39D6 VA: 0x39D6
	public void EyeAttack() { }

	// RVA: 0x39D7 Offset: 0x39D7 VA: 0x39D7
	public void StartEyeLoop(float eyeLoopDuration, float eyeLoopRate) { }

	[IteratorStateMachine(typeof(RangedSkills.<EyeLoop>d__11))]
	// RVA: 0x39D8 Offset: 0x39D8 VA: 0x39D8
	public IEnumerator EyeLoop(float eyeLoopDuration, float eyeLoopRate) { }

	// RVA: 0x39D9 Offset: 0x39D9 VA: 0x39D9
	public void OpenMouth() { }

	// RVA: 0x39DA Offset: 0x39DA VA: 0x39DA
	public List<Vector3> GetTargetPositionList() { }

	// RVA: 0x39DB Offset: 0x39DB VA: 0x39DB
	public void StartMouthOpenLoopMouth(float mouthOpenLoopRate, float mouthOpenLoopDuration) { }

	[IteratorStateMachine(typeof(RangedSkills.<MouthOpenLoop>d__16))]
	// RVA: 0x39DC Offset: 0x39DC VA: 0x39DC
	public IEnumerator MouthOpenLoop(float mouthOpenLoopRate, float mouthOpenLoopDuration) { }

	// RVA: 0x39DD Offset: 0x39DD VA: 0x39DD
	public void .ctor() { }
}

===== C# end =====
*/

// ---- RangedSkills$$Shoot ----
// C#: void RangedSkills__Shoot (RangedSkills_o* __this, AmmoDetailsSO_o* ammoDetailsSO, UnityEngine_Vector3_o shootPosition, UnityEngine_Vector3_o target, const MethodInfo* method);

void RangedSkills__Shoot(RangedSkills_o *__this,AmmoDetailsSO_o *ammoDetailsSO,
                        Vector3_o *shootPosition,Vector3_o *target,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Component_o *param1;
  int *param1_00;
  uint *puVar2;
  int iVar3;
  UnityEngine_GameObject_o *prefab;
  PoolManager_o *__this_00;
  undefined8 local_30;
  float local_28;
  Quaternion_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664961 == '\0') {
    unnamed_function_1099(&IFireable_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d64);
    DAT_ram_00664961 = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d64 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  prefab = (UnityEngine_GameObject_o *)ammoDetailsSO->ammoPrefab;
  __this_00 = (PoolManager_o *)**(undefined4 **)(iVar3 + 0x5c);
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_10.z = shootPosition->z;
  local_10.x = shootPosition->x;
  local_10.y = shootPosition->y;
  local_20._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_20._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  param1 = PoolManager__ReuseComponent
                     (__this_00,prefab,&local_10,&local_20,(MethodInfo *)shootPosition);
  iVar3 = IFireable_TypeInfo;
  if (param1 != (UnityEngine_Component_o *)0x0) {
    param1_00 = (int *)unnamed_function_1112(param1,IFireable_TypeInfo);
    if (param1_00 == (int *)0x0) {
      unnamed_function_1116(param1,iVar3);
      do {
        halt_trap();
      } while( true );
    }
    uVar1 = 0;
    iVar3 = *param1_00;
    if (*(ushort *)(iVar3 + 0xb6) != 0) {
      do {
        if (IFireable_TypeInfo == *(int *)(*(int *)(iVar3 + 0x58) + uVar1 * 8)) {
          puVar2 = (uint *)(iVar3 + *(int *)(*(int *)(iVar3 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0);
          goto code_r0x81a40092;
        }
        uVar1 = uVar1 + 1;
      } while (*(ushort *)(iVar3 + 0xb6) != uVar1);
    }
    puVar2 = (uint *)unnamed_function_95091(param1_00,IFireable_TypeInfo,0);
code_r0x81a40092:
    local_28 = target->z;
    local_30._0_4_ = target->x;
    local_30._4_4_ = target->y;
    (**(code **)((ulonglong)*puVar2 * 4))(param1_00,ammoDetailsSO,&local_30,puVar2[1]);
  }
  return;
}

// ---- RangedSkills$$Awake ----
// C#: void RangedSkills__Awake (RangedSkills_o* __this, const MethodInfo* method);

void RangedSkills__Awake(RangedSkills_o *__this,MethodInfo *method)

{
  Animator_o *pAVar1;
  
  if (DAT_ram_00664960 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e18);
    DAT_ram_00664960 = '\x01';
  }
  pAVar1 = (Animator_o *)unnamed_function_65370(__this,DAT_ram_00567e18);
  __this->animator = pAVar1;
  return;
}

// ---- RangedSkills$$Get15ShootDirections ----
// C#: UnityEngine_Vector2_array* RangedSkills__Get15ShootDirections (RangedSkills_o* __this, const MethodInfo* method);

UnityEngine_Vector2_array *
RangedSkills__Get15ShootDirections(RangedSkills_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Vector2_array *pUVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  float4 local_30;
  float4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  float4 local_8;
  
  if (DAT_ram_00664962 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2___TypeInfo);
    DAT_ram_00664962 = '\x01';
  }
  pUVar2 = (UnityEngine_Vector2_array *)unnamed_function_1050(UnityEngine_Vector2___TypeInfo,0xf);
  if (DAT_ram_00661a14 == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_00661a14 = '\x01';
  }
  uVar4 = *(undefined8 *)(*(int *)(UnityEngine_Vector2_TypeInfo + 0x5c) + 0x28);
  fVar3 = (float)((ulonglong)uVar4 >> 0x20) * 30.0;
  fVar5 = (float)uVar4 * 30.0;
  *(ulonglong *)(pUVar2 + 4) = CONCAT44(fVar3,fVar5);
  iVar1 = 1;
  do {
    local_38 = (float)(iVar1 * 0x18) * 0.017453292;
    local_40 = 0;
    local_10 = 0;
    local_8 = (float4)local_38;
    unnamed_function_8664(&local_20,&local_40,0);
    local_28 = 0;
    local_58 = 0;
    local_48 = local_18;
    local_50 = local_20;
    local_60 = CONCAT44(fVar3,fVar5);
    local_30 = (float4)fVar5;
    local_2c = (float4)fVar3;
    unnamed_function_8675(&local_10,&local_50,&local_60,0);
    *(undefined8 *)(pUVar2 + iVar1 * 2 + 4) = local_10;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xf);
  return pUVar2;
}

// ---- RangedSkills$$BaseShoot ----
// C#: void RangedSkills__BaseShoot (RangedSkills_o* __this, const MethodInfo* method);

void RangedSkills__BaseShoot(RangedSkills_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  UnityEngine_Vector2_array *pUVar4;
  undefined4 uVar5;
  AmmoDetailsSO_o *ammoDetailsSO;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_40 [16];
  Vector3_o local_30;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  iVar6 = 0;
  pUVar4 = RangedSkills__Get15ShootDirections((RangedSkills_o *)local_40,(MethodInfo *)local_40);
  if (0 < pUVar4[3]._opaque) {
    do {
      uVar5 = unnamed_function_44643(__this,0);
      unnamed_function_44960(&local_10,uVar5,0);
      fVar3 = local_8;
      fVar2 = local_c;
      fVar1 = local_10;
      uVar7 = *(undefined8 *)(pUVar4 + iVar6 * 2 + 4);
      ammoDetailsSO = __this->ammo;
      uVar5 = unnamed_function_44643(__this,0);
      unnamed_function_44960(&local_10,uVar5,0);
      local_40._8_4_ = (float)fVar3 + 0.0;
      local_30.z = (float)local_8;
      local_20 = (float4)((float)fVar1 + (float)uVar7);
      local_1c = (float4)((float)fVar2 + (float)((ulonglong)uVar7 >> 0x20));
      local_40._4_4_ = (void *)local_1c;
      local_40._0_4_ = (void *)local_20;
      local_18 = (float4)local_40._8_4_;
      RangedSkills__Shoot((RangedSkills_o *)local_40,ammoDetailsSO,&local_30,(Vector3_o *)local_40,
                          (MethodInfo *)local_40);
      iVar6 = iVar6 + 1;
    } while (iVar6 < pUVar4[3]._opaque);
  }
  return;
}

// ---- RangedSkills$$EyeAttack ----
// C#: void RangedSkills__EyeAttack (RangedSkills_o* __this, const MethodInfo* method);

void RangedSkills__EyeAttack(RangedSkills_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 param2;
  GameObject_o *param1;
  int iVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float4 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_30;
  undefined8 local_28;
  float4 local_20;
  float4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  float4 local_8;
  
  if (DAT_ram_00664963 == '\0') {
    unnamed_function_1099(&DAT_ram_00569a58);
    unnamed_function_1099(&DAT_ram_0056b548);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664963 = '\x01';
  }
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  uVar3 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar5 + 0x5c) + 0x10),0);
  unnamed_function_44960(&local_20,uVar3,0);
  fVar2 = local_1c;
  fVar1 = local_20;
  uVar3 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_20,uVar3,0);
  fVar4 = unnamed_function_12077((float)fVar2 - (float)local_1c,(float)fVar1 - (float)local_20);
  local_38 = (fVar4 * 57.29578 + 90.0) * 0.017453292;
  local_40 = 0;
  local_10 = 0;
  local_8 = (float4)local_38;
  unnamed_function_8664(&local_30,&local_40,0);
  local_18 = local_28;
  _local_20 = local_30;
  param1 = __this->Beam;
  unnamed_function_44960(&local_10,__this->shootPosition,0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  local_48 = local_8;
  local_58 = local_18;
  local_50 = local_10;
  local_60 = _local_20;
  uVar3 = unnamed_function_86418(param1,&local_50,&local_60,DAT_ram_0056b548);
  iVar5 = unnamed_function_73836(uVar3,DAT_ram_00569a58);
  *(undefined4 *)(iVar5 + 0x2c) = 0x40600000;
  uVar3 = unnamed_function_44683(uVar3,0);
  param2 = unnamed_function_44643(__this,0);
  unnamed_function_44983(uVar3,param2,0);
  return;
}

// ---- RangedSkills$$StartEyeLoop ----
// C#: void RangedSkills__StartEyeLoop (RangedSkills_o* __this, float eyeLoopDuration, float eyeLoopRate, const MethodInfo* method);

void RangedSkills__StartEyeLoop
               (RangedSkills_o *__this,float eyeLoopDuration,float eyeLoopRate,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664964 == '\0') {
    unnamed_function_1099(&RangedSkills__EyeLoop_d__11_TypeInfo);
    DAT_ram_00664964 = '\x01';
  }
  param2 = unnamed_function_95402(RangedSkills__EyeLoop_d__11_TypeInfo);
  *(float *)(param2 + 0x18 /* ammo */) = eyeLoopRate;
  *(float *)(param2 + 0x14 /* shootPosition */) = eyeLoopDuration;
  *(RangedSkills_o **)(param2 + 0x10 /* animator */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- RangedSkills$$EyeLoop ----
// C#: System_Collections_IEnumerator_o* RangedSkills__EyeLoop (RangedSkills_o* __this, float eyeLoopDuration, float eyeLoopRate, const MethodInfo* method);

System_Collections_IEnumerator_o *
RangedSkills__EyeLoop
          (RangedSkills_o *__this,float eyeLoopDuration,float eyeLoopRate,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664964 == '\0') {
    unnamed_function_1099(&RangedSkills__EyeLoop_d__11_TypeInfo);
    DAT_ram_00664964 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(RangedSkills__EyeLoop_d__11_TypeInfo);
  pSVar1[6]._opaque = (int)eyeLoopRate;
  pSVar1[5]._opaque = (int)eyeLoopDuration;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- RangedSkills$$OpenMouth ----
// C#: void RangedSkills__OpenMouth (RangedSkills_o* __this, const MethodInfo* method);

void RangedSkills__OpenMouth(RangedSkills_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o *param2;
  int iVar1;
  undefined4 param1;
  int iVar2;
  int *piVar3;
  AmmoDetailsSO_o *param3;
  MethodInfo local_70;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40 [2];
  int local_30;
  undefined1 *local_2c;
  MethodInfo local_28;
  int local_8;
  undefined4 uStack_4;
  
  if (DAT_ram_00664965 == '\0') {
    unnamed_function_1099(&DAT_ram_005615cc);
    unnamed_function_1099(&DAT_ram_005615d0);
    unnamed_function_1099(&DAT_ram_005615d4);
    unnamed_function_1099(&DAT_ram_00564134);
    DAT_ram_00664965 = '\x01';
  }
  local_8 = 0;
  uStack_4 = 0;
  local_28._24_4_ = 0;
  local_28._28_4_ = 0;
  local_28._16_8_ = 0;
  param2 = RangedSkills__GetTargetPositionList(__this,&local_70);
  unnamed_function_5249(&local_28.field_0x10,param2,DAT_ram_00564134);
  local_30 = 0;
  local_2c = &local_28.field_0x10;
  while( true ) {
    DAT_ram_005ddf34 = 0;
    iVar1 = import::env::invoke_iii
                      (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x24,&local_28.field_0x10,
                       DAT_ram_005615d0);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 == 1) {
      param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a40758;
    }
    if (iVar1 == 0) {
      DAT_ram_005ddf34 = 0;
      return;
    }
    local_28._8_4_ = uStack_4;
    local_28._opaque1 = local_8;
    local_28._opaque0 = local_28._28_4_;
    param3 = __this->ammo;
    DAT_ram_005ddf34 = 0;
    import::env::invoke_viii
              (s___Scripting__UnityEngine__Player_ram_00000896 + 0x51,local_40,__this->shootPosition
               ,0);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 == 1) break;
    local_48 = (undefined4)local_40[1];
    local_70._24_4_ = (undefined4)local_40[1];
    local_70._8_4_ = local_28._8_4_;
    local_50 = local_40[0];
    DAT_ram_005ddf34 = 0;
    local_70._16_8_ = local_40[0];
    local_70._opaque0 = local_28._opaque0;
    local_70._opaque1 = local_28._opaque1;
    import::env::invoke_viiiii
              (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x25,&local_70,param3,
               &local_70.field_0x10,&local_70,&local_70);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 == 1) {
      param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a40758:
      iVar2 = import::env::getTempRet0();
      iVar1 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
      if (iVar2 == iVar1) {
        piVar3 = (int *)import::env::__cxa_begin_catch(param1);
        iVar1 = *piVar3;
        DAT_ram_005ddf34 = 0;
        local_30 = iVar1;
        import::env::invoke_v(0x3a);
        iVar2 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar2 != 1) {
          if (iVar1 == 0) {
            DAT_ram_005ddf34 = 0;
            return;
          }
          unnamed_function_1088(iVar1);
          do {
            halt_trap();
          } while( true );
        }
        param1 = import::env::__cxa_find_matching_catch_2();
        import::env::getTempRet0();
      }
      DAT_ram_005ddf34 = 0;
      import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x26,&local_30);
      iVar2 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar2 != 1) {
        import::env::__resumeException(param1);
        do {
          halt_trap();
        } while( true );
      }
      import::env::__cxa_find_matching_catch_3(0);
      import::env::getTempRet0();
      unnamed_function_642();
      do {
        halt_trap();
      } while( true );
    }
  }
  param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
  goto code_r0x81a40758;
}

// ---- RangedSkills$$GetTargetPositionList ----
// C#: System_Collections_Generic_List_Vector3__o* RangedSkills__GetTargetPositionList (RangedSkills_o* __this, const MethodInfo* method);

System_Collections_Generic_List_Vector3__o *
RangedSkills__GetTargetPositionList(RangedSkills_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float4 fVar4;
  undefined4 uVar5;
  System_Collections_Generic_List_Vector3__o *param1;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  float4 local_10;
  float4 local_c;
  undefined4 local_8;
  
  iVar8 = 0;
  if (DAT_ram_00664966 == '\0') {
    unnamed_function_1099(&DAT_ram_00564128);
    unnamed_function_1099(&DAT_ram_00564120);
    unnamed_function_1099(&System_Collections_Generic_List_Vector3__TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664966 = '\x01';
  }
  iVar9 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = unnamed_function_95087(iVar9);
  }
  iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 8);
  if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = unnamed_function_95087(iVar9);
  }
  uVar5 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar9 + 0x5c) + 0x10),0);
  unnamed_function_44960(&local_10,uVar5,0);
  fVar3 = local_c;
  fVar1 = local_10;
  uVar5 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar5,0);
  fVar4 = local_c;
  fVar2 = local_10;
  param1 = (System_Collections_Generic_List_Vector3__o *)
           unnamed_function_95402(System_Collections_Generic_List_Vector3__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00564120);
  fVar6 = (float)fVar3 - (float)fVar4;
  fVar10 = (float)fVar1 - (float)fVar2;
  if (ABS(fVar6) < ABS(fVar10)) {
    if (0 < __this->offsetArr[3]._opaque) {
      do {
        iVar9 = *(int *)(DAT_ram_00565d78 + 0x10);
        if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = unnamed_function_95087(iVar9);
        }
        iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 8);
        if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = unnamed_function_95087(iVar9);
        }
        uVar5 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar9 + 0x5c) + 0x10),0);
        unnamed_function_44960(&local_10,uVar5,0);
        iVar9 = DAT_ram_00564128;
        local_8 = 0;
        local_10 = (float4)(fVar10 + (float)local_10);
        local_c = (float4)((float)local_c + fVar6 + (float)__this->offsetArr[iVar8 + 4]._opaque);
        param1[4]._opaque = param1[4]._opaque + 1;
        uVar7 = param1[3]._opaque;
        if (uVar7 < *(uint *)(param1[2]._opaque + 0xc)) {
          param1[3]._opaque = uVar7 + 1;
          iVar9 = param1[2]._opaque + uVar7 * 0xc;
          *(undefined4 *)(iVar9 + 0x18) = 0;
          *(ulonglong *)(iVar9 + 0x10) = CONCAT44(local_c,local_10);
        }
        else {
          local_28 = 0;
          local_30 = CONCAT44(local_c,local_10);
          unnamed_function_5234
                    (param1,&local_30,
                     *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < __this->offsetArr[3]._opaque);
    }
  }
  else if ((ABS(fVar10) < ABS(fVar6)) && (0 < __this->offsetArr[3]._opaque)) {
    do {
      iVar9 = *(int *)(DAT_ram_00565d78 + 0x10);
      if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = unnamed_function_95087(iVar9);
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x60) + 8);
      if ((*(byte *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = unnamed_function_95087(iVar9);
      }
      uVar5 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar9 + 0x5c) + 0x10),0);
      unnamed_function_44960(&local_10,uVar5,0);
      iVar9 = DAT_ram_00564128;
      local_8 = 0;
      local_c = (float4)(fVar6 + (float)local_c);
      local_10 = (float4)((float)local_10 + fVar10 + (float)__this->offsetArr[iVar8 + 4]._opaque);
      param1[4]._opaque = param1[4]._opaque + 1;
      uVar7 = param1[3]._opaque;
      if (uVar7 < *(uint *)(param1[2]._opaque + 0xc)) {
        param1[3]._opaque = uVar7 + 1;
        iVar9 = param1[2]._opaque + uVar7 * 0xc;
        *(undefined4 *)(iVar9 + 0x18) = 0;
        *(ulonglong *)(iVar9 + 0x10) = CONCAT44(local_c,local_10);
      }
      else {
        local_18 = 0;
        local_20 = CONCAT44(local_c,local_10);
        unnamed_function_5234
                  (param1,&local_20,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
        ;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < __this->offsetArr[3]._opaque);
  }
  return param1;
}

// ---- RangedSkills$$StartMouthOpenLoopMouth ----
// C#: void RangedSkills__StartMouthOpenLoopMouth (RangedSkills_o* __this, float mouthOpenLoopRate, float mouthOpenLoopDuration, const MethodInfo* method);

void RangedSkills__StartMouthOpenLoopMouth
               (RangedSkills_o *__this,float mouthOpenLoopRate,float mouthOpenLoopDuration,
               MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664967 == '\0') {
    unnamed_function_1099(&RangedSkills__MouthOpenLoop_d__16_TypeInfo);
    DAT_ram_00664967 = '\x01';
  }
  param2 = unnamed_function_95402(RangedSkills__MouthOpenLoop_d__16_TypeInfo);
  *(float *)(param2 + 0x18 /* ammo */) = mouthOpenLoopRate;
  *(RangedSkills_o **)(param2 + 0x10 /* animator */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  *(float *)(param2 + 0x14 /* shootPosition */) = mouthOpenLoopDuration;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- RangedSkills$$MouthOpenLoop ----
// C#: System_Collections_IEnumerator_o* RangedSkills__MouthOpenLoop (RangedSkills_o* __this, float mouthOpenLoopRate, float mouthOpenLoopDuration, const MethodInfo* method);

System_Collections_IEnumerator_o *
RangedSkills__MouthOpenLoop
          (RangedSkills_o *__this,float mouthOpenLoopRate,float mouthOpenLoopDuration,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664967 == '\0') {
    unnamed_function_1099(&RangedSkills__MouthOpenLoop_d__16_TypeInfo);
    DAT_ram_00664967 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(RangedSkills__MouthOpenLoop_d__16_TypeInfo);
  pSVar1[6]._opaque = (int)mouthOpenLoopRate;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  pSVar1[5]._opaque = (int)mouthOpenLoopDuration;
  return pSVar1;
}

// ---- RangedSkills$$.ctor ----
// C#: void RangedSkills___ctor (RangedSkills_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

