// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: EnemyManager  (Assembly-CSharp)  -  5 function(s)

// ---- EnemyManager::Start   [wasm func87083 -> ram:81a51940 ; ghidra: EnemyManager::Start]

void EnemyManager__Start(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664afa == '\0') {
    unnamed_function_1099(0x557a30);
    unnamed_function_1099(0x568ebc);
    cRam00664afa = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a30);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00568ebc,0);
  StaticEventHandler__CallBossChangedEvent(uVar1,0);
  return;
}



// ---- EnemyManager::OnEnable   [wasm func87084 -> ram:81a5198f ; ghidra: EnemyManager::OnEnable]

void EnemyManager__OnEnable(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (cRam00664afb == '\0') {
    unnamed_function_1099(0x557a30);
    unnamed_function_1099(0x568ebc);
    cRam00664afb = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00557a30);
  UnityEngine_UIElements_VisualElement__get_layout(uVar1,param_1,uRam00568ebc,0);
  StaticEventHandler__add_OnBuildNavMesh(uVar1,0);
  return;
}



// ---- EnemyManager::OnDisable   [wasm func87085 -> ram:81a519df ; ghidra: EnemyManager::OnDisable]

void EnemyManager__OnDisable(int param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  int iStack_78;
  longlong *plStack_74;
  longlong lStack_70;
  undefined8 uStack_68;
  int iStack_5c;
  longlong lStack_58;
  undefined8 uStack_50;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  longlong lStack_10;
  ulonglong uStack_8;
  
  if (cRam00664afc == '\0') {
    unnamed_function_1099(0x561104);
    unnamed_function_1099(0x560ff0);
    unnamed_function_1099(0x560ff4);
    unnamed_function_1099(0x561108);
    unnamed_function_1099(0x56110c);
    unnamed_function_1099(0x560ff8);
    unnamed_function_1099(0x569aa8);
    unnamed_function_1099(0x563078);
    unnamed_function_1099(0x563080);
    unnamed_function_1099(0x562b54);
    unnamed_function_1099(0x563088);
    unnamed_function_1099(0x563094);
    unnamed_function_1099(0x56411c);
    unnamed_function_1099(0x56b554);
    unnamed_function_1099(0x55be2c);
    unnamed_function_1099(0x570ba8);
    cRam00664afc = '\x01';
  }
  iStack_44 = 0;
  uStack_50 = 0;
  lStack_58 = 0;
  iStack_5c = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    iStack_44 = 0;
    unnamed_function_9774(&lStack_10,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10),uRam00562b54);
    uStack_50 = uStack_8;
    lStack_58 = lStack_10;
    lStack_88 = ZEXT48(&lStack_58) << 0x20;
code_r0x81a51b45:
    iRam005ddf34 = 0;
    iVar3 = import::env::invoke_iii(0x3669,&lStack_58,uRam00560ff4);
    iVar6 = iRam005ddf34;
    iRam005ddf34 = 0;
    if (iVar6 == 1) goto code_r0x81a51f47;
    if (iVar3 == 0) {
      bVar1 = false;
      iVar6 = (int)lStack_88;
      goto code_r0x81a51f9b;
    }
    if (uStack_50._4_1_ != '\0') {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      iRam005ddf34 = 0;
      import::env::invoke_viiii
                (0x366a,&lStack_10,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),iStack_44,
                 uRam0056411c);
      lVar2 = lStack_10;
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a51f4f;
      }
      uStack_90 = 0;
      uStack_38 = 0;
      iRam005ddf34 = 0;
      uStack_98 = 0;
      uStack_40 = 0;
      import::env::invoke_viii(0x366b,&uStack_30,&uStack_98,0);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a51f4f;
      }
      uStack_8 = CONCAT44(uStack_24,uStack_28);
      lStack_10 = CONCAT44(uStack_2c,uStack_30);
      iRam005ddf34 = 0;
      uVar4 = import::env::invoke_iii(0x88d,param_1,0);
      if (iRam005ddf34 == 1) {
code_r0x81a51f0b:
        iRam005ddf34 = 0;
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a51f4f;
      }
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        iRam005ddf34 = 0;
        import::env::invoke_vi(0xfc,iRam0055be2c);
        if (iRam005ddf34 == 1) goto code_r0x81a51f0b;
      }
      uStack_a0 = 0;
      uStack_28 = 0;
      uStack_b0 = uStack_8;
      uStack_2c = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_30 = (undefined4)lVar2;
      iRam005ddf34 = 0;
      lStack_b8 = lStack_10;
      lStack_a8 = lVar2;
      uVar5 = import::env::invoke_iiiiii(0x366c,uVar5,&lStack_a8,&lStack_b8,uVar4,uRam0056b554);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a51f4f;
      }
      iRam005ddf34 = 0;
      iVar3 = import::env::invoke_iii(0x890,uVar5,uRam00569aa8);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a51f4f;
      }
      iVar6 = *(int *)(param_1 + 0x14);
      uVar4 = *(undefined4 *)(iVar6 + 0x18);
      *(int *)(iVar3 + 0x48) = iStack_44;
      *(undefined4 *)(iVar3 + 0x44) = uVar4;
      uVar8 = *(undefined4 *)(iVar6 + 0x10);
      iRam005ddf34 = 0;
      uVar4 = import::env::invoke_iii(0x91b,&iStack_44,0);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a51f4f;
      }
      iRam005ddf34 = 0;
      uVar4 = import::env::invoke_iiiii(0x65e,uVar8,uRam00570ba8,uVar4,0);
      if (iRam005ddf34 != 1) {
        iRam005ddf34 = 0;
        import::env::invoke_viii(0x88f,uVar5,uVar4,0);
        iVar6 = iRam00563078;
        if (iRam005ddf34 != 1) {
          iVar3 = *(int *)(param_1 + 0x1c);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          uVar9 = *(uint *)(iVar3 + 0xc);
          if (uVar9 < *(uint *)(*(int *)(iVar3 + 8) + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar9 + 1;
            *(undefined4 *)(*(int *)(iVar3 + 8) + uVar9 * 4 + 0x10) = uVar5;
            goto code_r0x81a51ed6;
          }
          iRam005ddf34 = 0;
          import::env::invoke_viii
                    (0x481,iVar3,uVar5,
                     *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          iVar6 = iRam005ddf34;
          iRam005ddf34 = 0;
          if (iVar6 == 1) {
            uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
            goto code_r0x81a51f4f;
          }
          goto code_r0x81a51ed6;
        }
      }
      iRam005ddf34 = 0;
      uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
      goto code_r0x81a51f4f;
    }
code_r0x81a51ed6:
    iStack_44 = iStack_44 + 1;
    goto code_r0x81a51b45;
  }
code_r0x81a51fb4:
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) < 1) {
code_r0x81a521ad:
    iStack_5c = 0;
    unnamed_function_9774(&lStack_10,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10),uRam00562b54);
    uStack_50 = uStack_8;
    lStack_58 = lStack_10;
    iStack_78 = 0;
    plStack_74 = &lStack_58;
    while( true ) {
      iRam005ddf34 = 0;
      iVar3 = import::env::invoke_iii(0x3669,&lStack_58,uRam00560ff4);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) break;
      iVar6 = iStack_78;
      if (iVar3 == 0) goto code_r0x81a52693;
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      iRam005ddf34 = 0;
      import::env::invoke_viiii
                (0x366a,&lStack_10,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),iStack_5c,
                 uRam0056411c);
      lVar2 = lStack_10;
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a5264b;
      }
      uStack_c0 = 0;
      uStack_18 = 0;
      iRam005ddf34 = 0;
      uStack_c8 = 0;
      uStack_20 = 0;
      import::env::invoke_viii(0x366b,&lStack_10,&uStack_c8,0);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a5264b;
      }
      uStack_80 = uStack_8;
      lStack_88 = lStack_10;
      iRam005ddf34 = 0;
      uVar4 = import::env::invoke_iii(0x88d,param_1,0);
      if (iRam005ddf34 == 1) {
code_r0x81a52607:
        iRam005ddf34 = 0;
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a5264b;
      }
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        iRam005ddf34 = 0;
        import::env::invoke_vi(0xfc,iRam0055be2c);
        if (iRam005ddf34 == 1) goto code_r0x81a52607;
      }
      uStack_d0 = 0;
      uStack_8 = uStack_8 & 0xffffffff00000000;
      uStack_e0 = uStack_80;
      lStack_d8 = lVar2;
      iRam005ddf34 = 0;
      lStack_e8 = lStack_88;
      lStack_10 = lVar2;
      uVar5 = import::env::invoke_iiiiii(0x366c,uVar5,&lStack_d8,&lStack_e8,uVar4,uRam0056b554);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a5264b;
      }
      iRam005ddf34 = 0;
      iVar3 = import::env::invoke_iii(0x890,uVar5,uRam00569aa8);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a5264b;
      }
      iVar6 = *(int *)(param_1 + 0x14);
      uVar4 = *(undefined4 *)(iVar6 + 0x18);
      *(int *)(iVar3 + 0x48) = iStack_5c;
      *(undefined4 *)(iVar3 + 0x44) = uVar4;
      uVar8 = *(undefined4 *)(iVar6 + 0x10);
      iRam005ddf34 = 0;
      uVar4 = import::env::invoke_iii(0x91b,&iStack_5c,0);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a5264b;
      }
      iRam005ddf34 = 0;
      uVar4 = import::env::invoke_iiiii(0x65e,uVar8,uRam00570ba8,uVar4,0);
      if (iRam005ddf34 == 1) {
code_r0x81a5262f:
        iRam005ddf34 = 0;
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a5264b;
      }
      iRam005ddf34 = 0;
      import::env::invoke_viii(0x88f,uVar5,uVar4,0);
      iVar6 = iRam00563078;
      if (iRam005ddf34 == 1) goto code_r0x81a5262f;
      iVar3 = *(int *)(param_1 + 0x1c);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      uVar9 = *(uint *)(iVar3 + 0xc);
      if (uVar9 < *(uint *)(*(int *)(iVar3 + 8) + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar9 + 1;
        *(undefined4 *)(*(int *)(iVar3 + 8) + uVar9 * 4 + 0x10) = uVar5;
      }
      else {
        iRam005ddf34 = 0;
        import::env::invoke_viii
                  (0x481,iVar3,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38)
                  );
        iVar6 = iRam005ddf34;
        iRam005ddf34 = 0;
        if (iVar6 == 1) {
          uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
          goto code_r0x81a5264b;
        }
      }
      iStack_5c = iStack_5c + 1;
    }
    uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a5264b:
    iVar6 = import::env::getTempRet0();
    iVar3 = import::env::llvm_eh_typeid_for(0x4a99ec);
    if (iVar6 == iVar3) {
      piVar7 = (int *)import::env::__cxa_begin_catch(uVar5);
      iVar6 = *piVar7;
      iRam005ddf34 = 0;
      iStack_78 = iVar6;
      import::env::invoke_v(0x3a);
      iVar3 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar3 != 1) {
code_r0x81a52693:
        iRam005ddf34 = 0;
        if (iVar6 == 0) {
          iRam005ddf34 = 0;
          return;
        }
        System_Net_CommandStream__ReceiveCommandResponseCallback(iVar6);
        do {
          halt_trap();
        } while( true );
      }
      uVar5 = import::env::__cxa_find_matching_catch_2();
      import::env::getTempRet0();
    }
    iRam005ddf34 = 0;
    import::env::invoke_ii(0x366f,&iStack_78);
  }
  else {
    UnityEngine_ComputeBuffer__Release(&lStack_10,*(int *)(param_1 + 0x1c),uRam00563088);
    uStack_68 = uStack_8;
    lStack_70 = lStack_10;
    lStack_10 = ZEXT48(&lStack_70) << 0x20;
    do {
      iRam005ddf34 = 0;
      iVar3 = import::env::invoke_iii(0x483,&lStack_70,uRam00561108);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 == 1) {
        uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
        goto code_r0x81a52120;
      }
      if (iVar3 == 0) goto code_r0x81a52176;
      uVar5 = uStack_68._4_4_;
      if (*(int *)(iRam0055be2c + 0x74) == 0) {
        iRam005ddf34 = 0;
        import::env::invoke_vi(0xfc,iRam0055be2c);
        if (iRam005ddf34 == 1) break;
      }
      iRam005ddf34 = 0;
      import::env::invoke_vii(0x2093,uVar5,0);
    } while (iRam005ddf34 != 1);
    iRam005ddf34 = 0;
    uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a52120:
    iVar6 = import::env::getTempRet0();
    iVar3 = import::env::llvm_eh_typeid_for(0x4a99ec);
    if (iVar6 == iVar3) {
      piVar7 = (int *)import::env::__cxa_begin_catch(uVar5);
      iVar3 = *piVar7;
      iRam005ddf34 = 0;
      lStack_10 = CONCAT44(lStack_10._4_4_,iVar3);
      import::env::invoke_v(0x3a);
      iVar6 = iRam005ddf34;
      iRam005ddf34 = 0;
      if (iVar6 != 1) {
        if (iVar3 != 0) {
          System_Net_CommandStream__ReceiveCommandResponseCallback(iVar3);
          do {
            halt_trap();
          } while( true );
        }
code_r0x81a52176:
        iRam005ddf34 = 0;
        iVar6 = *(int *)(param_1 + 0x1c);
        iVar3 = *(int *)(iVar6 + 0xc);
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
        if (0 < iVar3) {
          unnamed_function_84588(*(undefined4 *)(iVar6 + 8),0,iVar3,0);
        }
        goto code_r0x81a521ad;
      }
      uVar5 = import::env::__cxa_find_matching_catch_2();
      import::env::getTempRet0();
    }
    iRam005ddf34 = 0;
    import::env::invoke_ii(0x366e,&lStack_10);
  }
joined_r0x81a52238:
  if (iRam005ddf34 != 1) {
    iRam005ddf34 = 0;
    import::env::__resumeException(uVar5);
    do {
      halt_trap();
    } while( true );
  }
  iRam005ddf34 = 0;
  import::env::__cxa_find_matching_catch_3(0);
  import::env::getTempRet0();
  unnamed_function_642();
  do {
    halt_trap();
  } while( true );
code_r0x81a51f47:
  uVar5 = import::env::__cxa_find_matching_catch_3(0x4a99ec);
code_r0x81a51f4f:
  iVar6 = import::env::getTempRet0();
  iVar3 = import::env::llvm_eh_typeid_for(0x4a99ec);
  if (iVar6 == iVar3) {
    piVar7 = (int *)import::env::__cxa_begin_catch(uVar5);
    iVar6 = *piVar7;
    iRam005ddf34 = 0;
    lStack_88 = CONCAT44(lStack_88._4_4_,iVar6);
    import::env::invoke_v(0x3a);
    iVar3 = iRam005ddf34;
    iRam005ddf34 = 0;
    bVar1 = true;
    if (iVar3 != 1) {
code_r0x81a51f9b:
      iRam005ddf34 = 0;
      if (iVar6 != 0) {
        System_Net_CommandStream__ReceiveCommandResponseCallback(iVar6);
        do {
          halt_trap();
        } while( true );
      }
      if (!bVar1) {
        iRam005ddf34 = 0;
        return;
      }
      goto code_r0x81a51fb4;
    }
    uVar5 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  iRam005ddf34 = 0;
  import::env::invoke_ii(0x366d,&lStack_88);
  goto joined_r0x81a52238;
}



// ---- EnemyManager::StaticEventHandler_OnBuildNavMesh   [wasm func87087 -> ram:81a5273b ; ghidra: EnemyManager::StaticEventHandler_OnBuildNavMesh]

void EnemyManager__StaticEventHandler_OnBuildNavMesh(int param_1)

{
  undefined4 uVar1;
  
  if (cRam00664afd == '\0') {
    unnamed_function_1099(0x563074);
    unnamed_function_1099(0x558ee4);
    cRam00664afd = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00558ee4);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00563074);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- EnemyManager::ctor   [wasm func87088 -> ram:81a5278c ; ghidra: EnemyManager::.ctor]

void EnemyManager___ctor(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (cRam00664afe == '\0') {
    unnamed_function_1099(0x562b48);
    unnamed_function_1099(0x558dfc);
    cRam00664afe = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam00558dfc);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam00562b48);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  EnemyManagerData___ctor(param_1,param_4,param_1);
  return;
}



