// Assembly-CSharp :: EnemyManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnemyManager : MonoBehaviour // TypeDefIndex: 5590
{
	// Fields
	[SerializeField]
	private GameObject enemy; // 0x10
	[SerializeField]
	private EnemyManagerDetailsSO enemyManagerDetailsSO; // 0x14
	private EnemyManagerData enemyManagerData; // 0x18
	public List<GameObject> enemyList; // 0x1C

	// Methods

	// RVA: 0x37B8 Offset: 0x37B8 VA: 0x37B8
	private void Start() { }

	// RVA: 0x37B9 Offset: 0x37B9 VA: 0x37B9
	private void OnEnable() { }

	// RVA: 0x37BA Offset: 0x37BA VA: 0x37BA
	private void OnDisable() { }

	// RVA: 0x37BB Offset: 0x37BB VA: 0x37BB
	private void StaticEventHandler_OnBuildNavMesh(OnBuildNavMeshEventArgs onBuildNavMeshEventArgs) { }

	// RVA: 0x37BC Offset: 0x37BC VA: 0x37BC
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnemyManager$$Start ----
// C#: void EnemyManager__Start (EnemyManager_o* __this, const MethodInfo* method);

void EnemyManager__Start(EnemyManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  EnemyManagerData_o *pEVar2;
  int iVar3;
  
  if (DAT_ram_00664af9 == '\0') {
    unnamed_function_1099(&DAT_ram_0056c1bc);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664af9 = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  uVar1 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
  iVar3 = unnamed_function_60732(uVar1,__this->enemyManagerDetailsSO->enemyManagerDataKey,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    uVar1 = unnamed_function_60744(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x18),0);
    pEVar2 = (EnemyManagerData_o *)
             unnamed_function_60819
                       (uVar1,__this->enemyManagerDetailsSO->enemyManagerDataKey,0,DAT_ram_0056c1bc)
    ;
    __this->enemyManagerData = pEVar2;
  }
  return;
}

// ---- EnemyManager$$OnEnable ----
// C#: void EnemyManager__OnEnable (EnemyManager_o* __this, const MethodInfo* method);

void EnemyManager__OnEnable(EnemyManager_o *__this,MethodInfo *method)

{
  System_Action_OnBuildNavMeshEventArgs__o *value;
  
  if (DAT_ram_00664afa == '\0') {
    unnamed_function_1099(&System_Action_OnBuildNavMeshEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568ebc);
    DAT_ram_00664afa = '\x01';
  }
  value = (System_Action_OnBuildNavMeshEventArgs__o *)
          unnamed_function_95402(System_Action_OnBuildNavMeshEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00568ebc,0);
  StaticEventHandler__add_OnBuildNavMesh(value,(MethodInfo *)0x0);
  return;
}

// ---- EnemyManager$$OnDisable ----
// C#: void EnemyManager__OnDisable (EnemyManager_o* __this, const MethodInfo* method);

void EnemyManager__OnDisable(EnemyManager_o *__this,MethodInfo *method)

{
  System_Action_OnBuildNavMeshEventArgs__o *value;
  
  if (DAT_ram_00664afb == '\0') {
    unnamed_function_1099(&System_Action_OnBuildNavMeshEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00568ebc);
    DAT_ram_00664afb = '\x01';
  }
  value = (System_Action_OnBuildNavMeshEventArgs__o *)
          unnamed_function_95402(System_Action_OnBuildNavMeshEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00568ebc,0);
  StaticEventHandler__remove_OnBuildNavMesh(value,(MethodInfo *)0x0);
  return;
}

// ---- EnemyManager$$StaticEventHandler_OnBuildNavMesh ----
// C#: void EnemyManager__StaticEventHandler_OnBuildNavMesh (EnemyManager_o* __this, OnBuildNavMeshEventArgs_o* onBuildNavMeshEventArgs, const MethodInfo* method);

void EnemyManager__StaticEventHandler_OnBuildNavMesh
               (EnemyManager_o *__this,OnBuildNavMeshEventArgs_o *onBuildNavMeshEventArgs,
               MethodInfo *method)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  GameObject_o *pGVar8;
  EnemyManagerDetailsSO_o *pEVar9;
  string_o *psVar10;
  List_o *pLVar11;
  uint uVar12;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  ulonglong local_80;
  int local_78;
  longlong *local_74;
  longlong local_70;
  undefined8 local_68;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined4 local_18;
  longlong local_10;
  ulonglong local_8;
  
  if (DAT_ram_00664afc == '\0') {
    unnamed_function_1099(&DAT_ram_00561104);
    unnamed_function_1099(&DAT_ram_00560ff0);
    unnamed_function_1099(&DAT_ram_00560ff4);
    unnamed_function_1099(&DAT_ram_00561108);
    unnamed_function_1099(&DAT_ram_0056110c);
    unnamed_function_1099(&DAT_ram_00560ff8);
    unnamed_function_1099(&DAT_ram_00569aa8);
    unnamed_function_1099(&DAT_ram_00563078);
    unnamed_function_1099(&DAT_ram_00563080);
    unnamed_function_1099(&DAT_ram_00562b54);
    unnamed_function_1099(&DAT_ram_00563088);
    unnamed_function_1099(&DAT_ram_00563094);
    unnamed_function_1099(&DAT_ram_0056411c);
    unnamed_function_1099(&DAT_ram_0056b554);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_92 /* " " */);
    DAT_ram_00664afc = '\x01';
  }
  local_44 = 0;
  local_50 = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_70 = 0;
  if (onBuildNavMeshEventArgs->isBuildWhenMapChanged != false) {
    local_44 = 0;
    unnamed_function_9774(&local_10,__this->enemyManagerData->enemieStateList,DAT_ram_00562b54);
    local_50 = local_8;
    local_58 = local_10;
    local_88 = ZEXT48(&local_58) << 0x20;
code_r0x81a51b45:
    DAT_ram_005ddf34 = 0;
    iVar3 = import::env::invoke_iii
                      (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x27,&local_58,
                       DAT_ram_00560ff4);
    iVar6 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar6 == 1) goto code_r0x81a51f47;
    if (iVar3 == 0) {
      bVar1 = false;
      iVar6 = (int)local_88;
      goto code_r0x81a51f9b;
    }
    if (local_50._4_1_ != '\0') {
      pGVar8 = __this->enemy;
      DAT_ram_005ddf34 = 0;
      import::env::invoke_viiii
                (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x28,&local_10,
                 __this->enemyManagerDetailsSO->enemyPostionList,local_44,DAT_ram_0056411c);
      lVar2 = local_10;
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a51f4f;
      }
      local_90 = 0;
      local_38 = 0;
      DAT_ram_005ddf34 = 0;
      local_98 = 0;
      local_40 = 0;
      import::env::invoke_viii
                (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x29,&local_30,&local_98,0);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a51f4f;
      }
      local_8 = CONCAT44(uStack_24,local_28);
      local_10 = CONCAT44(uStack_2c,local_30);
      DAT_ram_005ddf34 = 0;
      uVar5 = import::env::invoke_iii
                        (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x25,__this,0);
      if (DAT_ram_005ddf34 == 1) {
code_r0x81a51f0b:
        DAT_ram_005ddf34 = 0;
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a51f4f;
      }
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        DAT_ram_005ddf34 = 0;
        import::env::invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
        if (DAT_ram_005ddf34 == 1) goto code_r0x81a51f0b;
      }
      local_a0 = 0;
      local_28 = 0;
      local_b0 = local_8;
      uStack_2c = (undefined4)((ulonglong)lVar2 >> 0x20);
      local_30 = (undefined4)lVar2;
      DAT_ram_005ddf34 = 0;
      local_b8 = local_10;
      local_a8 = lVar2;
      uVar5 = import::env::invoke_iiiiii
                        (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2a,pGVar8,&local_a8,
                         &local_b8,uVar5,DAT_ram_0056b554);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a51f4f;
      }
      DAT_ram_005ddf34 = 0;
      iVar3 = import::env::invoke_iii
                        (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x28,uVar5,
                         DAT_ram_00569aa8);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a51f4f;
      }
      pEVar9 = __this->enemyManagerDetailsSO;
      psVar10 = pEVar9->enemyManagerDataKey;
      *(int *)(iVar3 + 0x48) = local_44;
      *(string_o **)(iVar3 + 0x44) = psVar10;
      psVar10 = pEVar9->enemyName;
      DAT_ram_005ddf34 = 0;
      uVar4 = import::env::invoke_iii
                        (s___Scripting__Unity__Profiling__P_ram_000008ea + 0x31,&local_44,0);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a51f4f;
      }
      DAT_ram_005ddf34 = 0;
      uVar4 = import::env::invoke_iiiii
                        (s_MotionT_z_ram_00000655 + 9,psVar10,StringLiteral_92 /* " " */,uVar4,0);
      if (DAT_ram_005ddf34 != 1) {
        DAT_ram_005ddf34 = 0;
        import::env::invoke_viii
                  (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x27,uVar5,uVar4,0);
        iVar6 = DAT_ram_00563078;
        if (DAT_ram_005ddf34 != 1) {
          pLVar11 = __this->enemyList;
          pLVar11[4]._opaque = pLVar11[4]._opaque + 1;
          uVar12 = pLVar11[3]._opaque;
          if (uVar12 < *(uint *)(pLVar11[2]._opaque + 0xc)) {
            pLVar11[3]._opaque = uVar12 + 1;
            *(undefined4 *)(pLVar11[2]._opaque + uVar12 * 4 + 0x10) = uVar5;
            goto code_r0x81a51ed6;
          }
          DAT_ram_005ddf34 = 0;
          import::env::invoke_viii
                    (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3b,pLVar11,uVar5,
                     *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          iVar6 = DAT_ram_005ddf34;
          DAT_ram_005ddf34 = 0;
          if (iVar6 == 1) {
            uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
            goto code_r0x81a51f4f;
          }
          goto code_r0x81a51ed6;
        }
      }
      DAT_ram_005ddf34 = 0;
      uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a51f4f;
    }
code_r0x81a51ed6:
    local_44 = local_44 + 1;
    goto code_r0x81a51b45;
  }
code_r0x81a51fb4:
  if (__this->enemyList[3]._opaque < 1) {
code_r0x81a521ad:
    local_5c = 0;
    unnamed_function_9774(&local_10,__this->enemyManagerData->enemieStateList,DAT_ram_00562b54);
    local_50 = local_8;
    local_58 = local_10;
    local_78 = 0;
    local_74 = &local_58;
    while( true ) {
      DAT_ram_005ddf34 = 0;
      iVar3 = import::env::invoke_iii
                        (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x27,&local_58,
                         DAT_ram_00560ff4);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) break;
      iVar6 = local_78;
      if (iVar3 == 0) goto code_r0x81a52693;
      pGVar8 = __this->enemy;
      DAT_ram_005ddf34 = 0;
      import::env::invoke_viiii
                (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x28,&local_10,
                 __this->enemyManagerDetailsSO->enemyPostionList,local_5c,DAT_ram_0056411c);
      lVar2 = local_10;
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a5264b;
      }
      local_c0 = 0;
      local_18 = 0;
      DAT_ram_005ddf34 = 0;
      local_c8 = 0;
      local_20 = 0;
      import::env::invoke_viii
                (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x29,&local_10,&local_c8,0);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a5264b;
      }
      local_80 = local_8;
      local_88 = local_10;
      DAT_ram_005ddf34 = 0;
      uVar5 = import::env::invoke_iii
                        (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x25,__this,0);
      if (DAT_ram_005ddf34 == 1) {
code_r0x81a52607:
        DAT_ram_005ddf34 = 0;
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a5264b;
      }
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        DAT_ram_005ddf34 = 0;
        import::env::invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
        if (DAT_ram_005ddf34 == 1) goto code_r0x81a52607;
      }
      local_d0 = 0;
      local_8 = local_8 & 0xffffffff00000000;
      local_e0 = local_80;
      local_d8 = lVar2;
      DAT_ram_005ddf34 = 0;
      local_e8 = local_88;
      local_10 = lVar2;
      uVar5 = import::env::invoke_iiiiii
                        (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2a,pGVar8,&local_d8,
                         &local_e8,uVar5,DAT_ram_0056b554);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a5264b;
      }
      DAT_ram_005ddf34 = 0;
      iVar3 = import::env::invoke_iii
                        (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x28,uVar5,
                         DAT_ram_00569aa8);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a5264b;
      }
      pEVar9 = __this->enemyManagerDetailsSO;
      psVar10 = pEVar9->enemyManagerDataKey;
      *(int *)(iVar3 + 0x48) = local_5c;
      *(string_o **)(iVar3 + 0x44) = psVar10;
      psVar10 = pEVar9->enemyName;
      DAT_ram_005ddf34 = 0;
      uVar4 = import::env::invoke_iii
                        (s___Scripting__Unity__Profiling__P_ram_000008ea + 0x31,&local_5c,0);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a5264b;
      }
      DAT_ram_005ddf34 = 0;
      uVar4 = import::env::invoke_iiiii
                        (s_MotionT_z_ram_00000655 + 9,psVar10,StringLiteral_92 /* " " */,uVar4,0);
      if (DAT_ram_005ddf34 == 1) {
code_r0x81a5262f:
        DAT_ram_005ddf34 = 0;
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a5264b;
      }
      DAT_ram_005ddf34 = 0;
      import::env::invoke_viii(s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x27,uVar5,uVar4,0)
      ;
      iVar6 = DAT_ram_00563078;
      if (DAT_ram_005ddf34 == 1) goto code_r0x81a5262f;
      pLVar11 = __this->enemyList;
      pLVar11[4]._opaque = pLVar11[4]._opaque + 1;
      uVar12 = pLVar11[3]._opaque;
      if (uVar12 < *(uint *)(pLVar11[2]._opaque + 0xc)) {
        pLVar11[3]._opaque = uVar12 + 1;
        *(undefined4 *)(pLVar11[2]._opaque + uVar12 * 4 + 0x10) = uVar5;
      }
      else {
        DAT_ram_005ddf34 = 0;
        import::env::invoke_viii
                  (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3b,pLVar11,uVar5,
                   *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
        iVar6 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar6 == 1) {
          uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
          goto code_r0x81a5264b;
        }
      }
      local_5c = local_5c + 1;
    }
    uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a5264b:
    iVar6 = import::env::getTempRet0();
    iVar3 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
    if (iVar6 == iVar3) {
      piVar7 = (int *)import::env::__cxa_begin_catch(uVar5);
      iVar6 = *piVar7;
      DAT_ram_005ddf34 = 0;
      local_78 = iVar6;
      import::env::invoke_v(0x3a);
      iVar3 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar3 != 1) {
code_r0x81a52693:
        DAT_ram_005ddf34 = 0;
        if (iVar6 == 0) {
          DAT_ram_005ddf34 = 0;
          return;
        }
        unnamed_function_1088(iVar6);
        do {
          halt_trap();
        } while( true );
      }
      uVar5 = import::env::__cxa_find_matching_catch_2();
      import::env::getTempRet0();
    }
    DAT_ram_005ddf34 = 0;
    import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2d,&local_78);
  }
  else {
    unnamed_function_6549(&local_10,__this->enemyList,DAT_ram_00563088);
    local_68 = local_8;
    local_70 = local_10;
    local_10 = ZEXT48(&local_70) << 0x20;
    do {
      DAT_ram_005ddf34 = 0;
      iVar3 = import::env::invoke_iii
                        (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_70,
                         DAT_ram_00561108);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a52120;
      }
      if (iVar3 == 0) goto code_r0x81a52176;
      uVar5 = local_68._4_4_;
      if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
        DAT_ram_005ddf34 = 0;
        import::env::invoke_vi(0xfc,UnityEngine_Object_TypeInfo);
        if (DAT_ram_005ddf34 == 1) break;
      }
      DAT_ram_005ddf34 = 0;
      import::env::invoke_vii(s___Scripting__UnityEngine__VFX__V_ram_00002079 + 0x1a,uVar5,0);
    } while (DAT_ram_005ddf34 != 1);
    DAT_ram_005ddf34 = 0;
    uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a52120:
    iVar6 = import::env::getTempRet0();
    iVar3 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
    if (iVar6 == iVar3) {
      piVar7 = (int *)import::env::__cxa_begin_catch(uVar5);
      iVar3 = *piVar7;
      DAT_ram_005ddf34 = 0;
      local_10 = CONCAT44(local_10._4_4_,iVar3);
      import::env::invoke_v(0x3a);
      iVar6 = DAT_ram_005ddf34;
      DAT_ram_005ddf34 = 0;
      if (iVar6 != 1) {
        if (iVar3 != 0) {
          unnamed_function_1088(iVar3);
          do {
            halt_trap();
          } while( true );
        }
code_r0x81a52176:
        DAT_ram_005ddf34 = 0;
        pLVar11 = __this->enemyList;
        iVar6 = pLVar11[3]._opaque;
        pLVar11[3]._opaque = 0;
        pLVar11[4]._opaque = pLVar11[4]._opaque + 1;
        if (0 < iVar6) {
          unnamed_function_84588(pLVar11[2]._opaque,0,iVar6,0);
        }
        goto code_r0x81a521ad;
      }
      uVar5 = import::env::__cxa_find_matching_catch_2();
      import::env::getTempRet0();
    }
    DAT_ram_005ddf34 = 0;
    import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2c,&local_10);
  }
joined_r0x81a52238:
  if (DAT_ram_005ddf34 != 1) {
    DAT_ram_005ddf34 = 0;
    import::env::__resumeException(uVar5);
    do {
      halt_trap();
    } while( true );
  }
  DAT_ram_005ddf34 = 0;
  import::env::__cxa_find_matching_catch_3(0);
  import::env::getTempRet0();
  unnamed_function_642();
  do {
    halt_trap();
  } while( true );
code_r0x81a51f47:
  uVar5 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a51f4f:
  iVar6 = import::env::getTempRet0();
  iVar3 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar6 == iVar3) {
    piVar7 = (int *)import::env::__cxa_begin_catch(uVar5);
    iVar6 = *piVar7;
    DAT_ram_005ddf34 = 0;
    local_88 = CONCAT44(local_88._4_4_,iVar6);
    import::env::invoke_v(0x3a);
    iVar3 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    bVar1 = true;
    if (iVar3 != 1) {
code_r0x81a51f9b:
      DAT_ram_005ddf34 = 0;
      if (iVar6 != 0) {
        unnamed_function_1088(iVar6);
        do {
          halt_trap();
        } while( true );
      }
      if (!bVar1) {
        DAT_ram_005ddf34 = 0;
        return;
      }
      goto code_r0x81a51fb4;
    }
    uVar5 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x2b,&local_88);
  goto joined_r0x81a52238;
}

// ---- EnemyManager$$.ctor ----
// C#: void EnemyManager___ctor (EnemyManager_o* __this, const MethodInfo* method);

void EnemyManager___ctor(EnemyManager_o *__this,MethodInfo *method)

{
  List_o *param1;
  
  if (DAT_ram_00664afd == '\0') {
    unnamed_function_1099(&DAT_ram_00563074);
    unnamed_function_1099(&System_Collections_Generic_List_GameObject__TypeInfo);
    DAT_ram_00664afd = '\x01';
  }
  param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_GameObject__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00563074);
  __this->enemyList = param1;
  unnamed_function_44622(__this,0);
  return;
}

