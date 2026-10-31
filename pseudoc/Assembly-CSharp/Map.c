// Assembly-CSharp :: Map
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Map : MonoBehaviour // TypeDefIndex: 5664
{
	// Fields
	[SerializeField]
	private string mapName; // 0x10
	private float repeatInterval; // 0x14
	[SerializeField]
	private List<Enviroment> enviroments; // 0x18

	// Methods

	// RVA: 0x3935 Offset: 0x3935 VA: 0x3935
	private void Start() { }

	// RVA: 0x3936 Offset: 0x3936 VA: 0x3936
	private void OnDisable() { }

	// RVA: 0x3937 Offset: 0x3937 VA: 0x3937
	private void PlayFlowingWaterSoundEffect() { }

	// RVA: 0x3938 Offset: 0x3938 VA: 0x3938
	public int GetBossState() { }

	// RVA: 0x3939 Offset: 0x3939 VA: 0x3939
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Map$$Start ----
// C#: void Map__Start (Map_o* __this, const MethodInfo* method);

void Map__Start(Map_o *__this,MethodInfo *method)

{
  MapChangedEventArgs_o *__this_00;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_20 [8];
  int local_18;
  undefined8 *local_14;
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_0066490d == '\0') {
    unnamed_function_1099(&DAT_ram_005610e0);
    unnamed_function_1099(&DAT_ram_005610e4);
    unnamed_function_1099(&DAT_ram_005610e8);
    unnamed_function_1099(&DAT_ram_00562f7c);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&StringLiteral_6071 /* "PlayFlowingWaterSoundEffect" */);
    DAT_ram_0066490d = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  if (DAT_ram_006649a8 == '\0') {
    unnamed_function_1099(&MapChangedEventArgs_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649a8 = '\x01';
  }
  iVar4 = **(int **)(StaticEventHandler_TypeInfo + 0x5c);
  if (iVar4 != 0) {
    __this_00 = (MapChangedEventArgs_o *)unnamed_function_95402(MapChangedEventArgs_TypeInfo);
    MapChangedEventArgs___ctor(__this_00,(MethodInfo *)0x0);
    *(Map_o **)&__this_00->map = __this;
    (**(code **)((ulonglong)*(uint *)(iVar4 + 0xc) * 4))
              (*(undefined4 *)(iVar4 + 0x20),__this_00,*(undefined4 *)(iVar4 + 0x14));
  }
  unnamed_function_6549(&local_10,__this->enviroments,DAT_ram_00562f7c);
  local_18 = 0;
  local_14 = &local_10;
  do {
    do {
      while( true ) {
        DAT_ram_005ddf34 = 0;
        iVar1 = import::env::invoke_iii
                          (s___Scripting__UnityEngine__Render_ram_00001cf5 + 0x33,&local_10,
                           DAT_ram_005610e4);
        iVar4 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar4 == 1) {
          uVar2 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
          goto code_r0x81a38b34;
        }
        if (iVar1 == 0) {
          DAT_ram_005ddf34 = 0;
          return;
        }
        if (local_8._4_4_ != 1) break;
        DAT_ram_005ddf34 = 0;
        import::env::invoke_viiffi
                  (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1f,__this,StringLiteral_6071 /* "PlayFlowingWaterSoundEffect" */,
                   0.0,__this->repeatInterval,0);
        iVar4 = DAT_ram_005ddf34;
        DAT_ram_005ddf34 = 0;
        if (iVar4 == 1) {
          uVar2 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
          goto code_r0x81a38b34;
        }
      }
    } while (local_8._4_4_ != 2);
    iVar4 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      DAT_ram_005ddf34 = 0;
      iVar4 = import::env::invoke_ii(0x100,iVar4);
      if (DAT_ram_005ddf34 != 1) goto code_r0x81a38a48;
code_r0x81a38b0e:
      DAT_ram_005ddf34 = 0;
      uVar2 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a38b34;
    }
code_r0x81a38a48:
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      DAT_ram_005ddf34 = 0;
      iVar4 = import::env::invoke_ii(0x100,iVar4);
      if (DAT_ram_005ddf34 == 1) goto code_r0x81a38b0e;
    }
    uVar2 = **(undefined4 **)(iVar4 + 0x5c);
    DAT_ram_005ddf34 = 0;
    iVar1 = import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x20,0);
    iVar4 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar4 == 1) {
      uVar2 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a38b34;
    }
    DAT_ram_005ddf34 = 0;
    import::env::invoke_viiii
              (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x21,uVar2,
               *(undefined4 *)(iVar1 + 0x68),1,auStack_20);
    iVar4 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
  } while (iVar4 != 1);
  uVar2 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a38b34:
  iVar4 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar4 == iVar1) {
    piVar3 = (int *)import::env::__cxa_begin_catch(uVar2);
    iVar1 = *piVar3;
    DAT_ram_005ddf34 = 0;
    local_18 = iVar1;
    import::env::invoke_v(0x3a);
    iVar4 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar4 != 1) {
      if (iVar1 == 0) {
        DAT_ram_005ddf34 = 0;
        return;
      }
      unnamed_function_1088(iVar1);
      do {
        halt_trap();
      } while( true );
    }
    uVar2 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x22,&local_18);
  iVar4 = DAT_ram_005ddf34;
  DAT_ram_005ddf34 = 0;
  if (iVar4 != 1) {
    import::env::__resumeException(uVar2);
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

// ---- Map$$OnDisable ----
// C#: void Map__OnDisable (Map_o* __this, const MethodInfo* method);

void Map__OnDisable(Map_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  int param1;
  MethodInfo *method_00;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_0066490e == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&StringLiteral_6071 /* "PlayFlowingWaterSoundEffect" */);
    DAT_ram_0066490e = '\x01';
  }
  unnamed_function_44719(__this,StringLiteral_6071 /* "PlayFlowingWaterSoundEffect" */,0);
  param1 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(param1 + 0xbd) & 1) == 0) {
    param1 = unnamed_function_95087(param1);
  }
  method_00 = *(MethodInfo **)(*(int *)(param1 + 0x60) + 8);
  if ((method_00[5].field_0x1d & 1) == 0) {
    method_00 = (MethodInfo *)unnamed_function_95087(method_00);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)&method_00[2].field_0x1c;
  pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
  SoundEffectManager__StopSoundEffectLoop(__this_00,pGVar1->waweOceanEffect,method_00);
  return;
}

// ---- Map$$PlayFlowingWaterSoundEffect ----
// C#: void Map__PlayFlowingWaterSoundEffect (Map_o* __this, const MethodInfo* method);

void Map__PlayFlowingWaterSoundEffect(Map_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  int param1;
  MethodInfo *method_00;
  SoundEffectManager_o *__this_00;
  
  if (DAT_ram_0066490f == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_0066490f = '\x01';
  }
  param1 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(param1 + 0xbd) & 1) == 0) {
    param1 = unnamed_function_95087(param1);
  }
  method_00 = *(MethodInfo **)(*(int *)(param1 + 0x60) + 8);
  if ((method_00[5].field_0x1d & 1) == 0) {
    method_00 = (MethodInfo *)unnamed_function_95087(method_00);
  }
  __this_00 = (SoundEffectManager_o *)**(undefined4 **)&method_00[2].field_0x1c;
  pGVar1 = GameResources__get_Instance((MethodInfo *)0x0);
  SoundEffectManager__PlaySoundEffect(__this_00,pGVar1->flowingWater,method_00);
  return;
}

// ---- Map$$GetBossState ----
// C#: int32_t Map__GetBossState (Map_o* __this, const MethodInfo* method);

void Map__GetBossState(int __ret,Map_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664910 == '\0') {
    unnamed_function_1099(&StringLiteral_11508 /* "isBossDefeated" */);
    DAT_ram_00664910 = '\x01';
  }
  iVar1 = unnamed_function_44561(StringLiteral_11508 /* "isBossDefeated" */,0);
  if (iVar1 != 0) {
    unnamed_function_44554(StringLiteral_11508 /* "isBossDefeated" */,0);
  }
  return;
}

// ---- Map$$.ctor ----
// C#: void Map___ctor (Map_o* __this, const MethodInfo* method);

void BossMap___ctor(BossMap_o *__this,MethodInfo *method)

{
  __this->pad_8[0xc] = 0;
  __this->pad_8[0xd] = 0;
  __this->pad_8[0xe] = 0x20;
  __this->pad_8[0xf] = 0x41;
  unnamed_function_44622(__this,0);
  return;
}

