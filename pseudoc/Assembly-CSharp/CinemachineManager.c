// Assembly-CSharp :: CinemachineManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class CinemachineManager : MonoBehaviour // TypeDefIndex: 5610
{
	// Fields
	[SerializeField]
	private CinemachineVirtualCamera cinemachineVirtualCamera; // 0x10
	[SerializeField]
	private CinemachineVirtualCamera zoomCamera; // 0x14
	private CinemachineConfiner2D cinemachineConfiner2D; // 0x18
	private Collider2D mapCollider; // 0x1C

	// Methods

	// RVA: 0x37DE Offset: 0x37DE VA: 0x37DE
	private void Awake() { }

	// RVA: 0x37DF Offset: 0x37DF VA: 0x37DF
	private void OnEnable() { }

	// RVA: 0x37E0 Offset: 0x37E0 VA: 0x37E0
	private void OnDisable() { }

	// RVA: 0x37E1 Offset: 0x37E1 VA: 0x37E1
	private void GameManager_OnGameStateChange(GameState gameState) { }

	// RVA: 0x37E2 Offset: 0x37E2 VA: 0x37E2
	private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs) { }

	// RVA: 0x37E3 Offset: 0x37E3 VA: 0x37E3
	private void Start() { }

	[IteratorStateMachine(typeof(CinemachineManager.<ZoomCam>d__10))]
	// RVA: 0x37E4 Offset: 0x37E4 VA: 0x37E4
	private IEnumerator ZoomCam() { }

	// RVA: 0x37E5 Offset: 0x37E5 VA: 0x37E5
	private void Confine(Map map) { }

	// RVA: 0x37E6 Offset: 0x37E6 VA: 0x37E6
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x37E7 Offset: 0x37E7 VA: 0x37E7
	private void <GameManager_OnGameStateChange>b__7_2() { }
}

===== C# end =====
*/

// ---- CinemachineManager$$Awake ----
// C#: void CinemachineManager__Awake (CinemachineManager_o* __this, const MethodInfo* method);

void CinemachineManager__Awake(CinemachineManager_o *__this,MethodInfo *method)

{
  CinemachineConfiner2D_o *pCVar1;
  
  if (DAT_ram_00664b0e == '\0') {
    unnamed_function_1099(&DAT_ram_00567f68);
    DAT_ram_00664b0e = '\x01';
  }
  pCVar1 = (CinemachineConfiner2D_o *)unnamed_function_65372(__this,DAT_ram_00567f68);
  __this->cinemachineConfiner2D = pCVar1;
  return;
}

// ---- CinemachineManager$$OnEnable ----
// C#: void CinemachineManager__OnEnable (CinemachineManager_o* __this, const MethodInfo* method);

void CinemachineManager__OnEnable(CinemachineManager_o *__this,MethodInfo *method)

{
  System_Action_MapChangedEventArgs__o *value;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_00664b0f == '\0') {
    unnamed_function_1099(&System_Action_MapChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567b8c);
    unnamed_function_1099(&DAT_ram_00567b90);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b0f = '\x01';
  }
  value = (System_Action_MapChangedEventArgs__o *)
          unnamed_function_95402(System_Action_MapChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00567b90,0);
  StaticEventHandler__add_OnMapChanged(value,(MethodInfo *)0x0);
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar4 = **(int **)(iVar3 + 0x5c);
  param1 = *(undefined4 *)(iVar4 + 0x20);
  uVar1 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar1,__this,DAT_ram_00567b8c,0);
  iVar3 = unnamed_function_85158(param1,uVar1,0);
  uVar1 = System_Action_GameState__TypeInfo;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x20) = 0;
    return;
  }
  iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
  if (iVar2 == 0) {
    unnamed_function_1116(iVar3,uVar1);
    do {
      halt_trap();
    } while( true );
  }
  *(int *)(iVar4 + 0x20) = iVar2;
  uVar1 = System_Action_GameState__TypeInfo;
  iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
  if (iVar4 != 0) {
    return;
  }
  unnamed_function_1116(iVar3,uVar1);
  do {
    halt_trap();
  } while( true );
}

// ---- CinemachineManager$$OnDisable ----
// C#: void CinemachineManager__OnDisable (CinemachineManager_o* __this, const MethodInfo* method);

void CinemachineManager__OnDisable(CinemachineManager_o *__this,MethodInfo *method)

{
  System_Action_MapChangedEventArgs__o *value;
  
  if (DAT_ram_00664b10 == '\0') {
    unnamed_function_1099(&System_Action_MapChangedEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567b90);
    DAT_ram_00664b10 = '\x01';
  }
  value = (System_Action_MapChangedEventArgs__o *)
          unnamed_function_95402(System_Action_MapChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_00567b90,0);
  StaticEventHandler__remove_OnMapChanged(value,(MethodInfo *)0x0);
  return;
}

// ---- CinemachineManager$$GameManager_OnGameStateChange ----
// C#: void CinemachineManager__GameManager_OnGameStateChange (CinemachineManager_o* __this, int32_t gameState, const MethodInfo* method);

void CinemachineManager__GameManager_OnGameStateChange
               (CinemachineManager_o *__this,GameState gameState,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_ram_00664b11 == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567b8c);
    unnamed_function_1099(&DAT_ram_00567b88);
    unnamed_function_1099(&DG_Tweening_Core_DOGetter_float__TypeInfo);
    unnamed_function_1099(&DG_Tweening_Core_DOSetter_float__TypeInfo);
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d33c);
    unnamed_function_1099(&DAT_ram_0056d378);
    unnamed_function_1099(&DAT_ram_0056eb74);
    unnamed_function_1099(&DAT_ram_0056eb78);
    unnamed_function_1099(&CinemachineManager___c__DisplayClass7_0_TypeInfo);
    DAT_ram_00664b11 = '\x01';
  }
  if (gameState == Intro) {
    if (DAT_ram_00664b13 == '\0') {
      unnamed_function_1099(&CinemachineManager__ZoomCam_d__10_TypeInfo);
      DAT_ram_00664b13 = '\x01';
    }
    iVar1 = unnamed_function_95402(CinemachineManager__ZoomCam_d__10_TypeInfo);
    *(CinemachineManager_o **)(iVar1 + 0x10) = __this;
    *(undefined4 *)(iVar1 + 8) = 0;
    unnamed_function_44725(__this,iVar1,0);
    return;
  }
  if (gameState == Begin) {
    iVar1 = unnamed_function_95402(CinemachineManager___c__DisplayClass7_0_TypeInfo);
    *(CinemachineManager_o **)(iVar1 + 0xc) = __this;
    *(int *)(iVar1 + 8) = __this->zoomCamera[0x1d]._opaque;
    uVar2 = unnamed_function_95402(DG_Tweening_Core_DOGetter_float__TypeInfo);
    unnamed_function_78188(uVar2,iVar1,DAT_ram_0056eb74,0);
    uVar3 = unnamed_function_95402(DG_Tweening_Core_DOSetter_float__TypeInfo);
    unnamed_function_78211(uVar3,iVar1,DAT_ram_0056eb78,0);
    if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
    }
    uVar2 = unnamed_function_13678(uVar2,uVar3,8.4375,5.0,0);
    uVar2 = unnamed_function_70031(uVar2,1,DAT_ram_0056d378);
    uVar3 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_13649(uVar3,__this,DAT_ram_00567b88,0);
    unnamed_function_70015(uVar2,uVar3,DAT_ram_0056d33c);
    return;
  }
  if ((gameState != Instruct) && (gameState == Play)) {
    uVar2 = unnamed_function_44644(__this->zoomCamera,0);
    unnamed_function_44686(uVar2,0,0);
    uVar2 = unnamed_function_44644(__this->cinemachineVirtualCamera,0);
    unnamed_function_44686(uVar2,1,0);
    iVar1 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar5 = **(int **)(iVar1 + 0x5c);
    uVar3 = *(undefined4 *)(iVar5 + 0x20);
    uVar2 = unnamed_function_95402(System_Action_GameState__TypeInfo);
    unnamed_function_60038(uVar2,__this,DAT_ram_00567b8c,0);
    iVar1 = unnamed_function_85160(uVar3,uVar2,0);
    uVar2 = System_Action_GameState__TypeInfo;
    if (iVar1 == 0) {
      *(undefined4 *)(iVar5 + 0x20) = 0;
      return;
    }
    iVar4 = unnamed_function_1112(iVar1,System_Action_GameState__TypeInfo);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar1,uVar2);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar5 + 0x20) = iVar4;
    uVar2 = System_Action_GameState__TypeInfo;
    iVar5 = unnamed_function_1112(iVar1,System_Action_GameState__TypeInfo);
    if (iVar5 == 0) {
      unnamed_function_1116(iVar1,uVar2);
      do {
        halt_trap();
      } while( true );
    }
  }
  return;
}

// ---- CinemachineManager$$StaticEventHandler_OnMapChanged ----
// C#: void CinemachineManager__StaticEventHandler_OnMapChanged (CinemachineManager_o* __this, MapChangedEventArgs_o* mapChangedEventArgs, const MethodInfo* method);

void CinemachineManager__StaticEventHandler_OnMapChanged
               (CinemachineManager_o *__this,MapChangedEventArgs_o *mapChangedEventArgs,
               MethodInfo *method)

{
  CinemachineManager__Confine(__this,*(Map_o **)&mapChangedEventArgs->map,(MethodInfo *)__this);
  return;
}

// ---- CinemachineManager$$Start ----
// C#: void CinemachineManager__Start (CinemachineManager_o* __this, const MethodInfo* method);

void CinemachineManager__Start(CinemachineManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  CinemachineVirtualCamera_o *pCVar2;
  int iVar3;
  
  if (DAT_ram_00664b12 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b12 = '\x01';
  }
  pCVar2 = __this->cinemachineVirtualCamera;
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  uVar1 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
  iVar3 = pCVar2->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x1c0) * 4))
            (pCVar2,uVar1,*(undefined4 *)(iVar3 + 0x1c4));
  pCVar2 = __this->zoomCamera;
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  uVar1 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar3 + 0x5c) + 0x10),0);
  iVar3 = pCVar2->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x1c0) * 4))
            (pCVar2,uVar1,*(undefined4 *)(iVar3 + 0x1c4));
  return;
}

// ---- CinemachineManager$$ZoomCam ----
// C#: System_Collections_IEnumerator_o* CinemachineManager__ZoomCam (CinemachineManager_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
CinemachineManager__ZoomCam(CinemachineManager_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664b13 == '\0') {
    unnamed_function_1099(&CinemachineManager__ZoomCam_d__10_TypeInfo);
    DAT_ram_00664b13 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(CinemachineManager__ZoomCam_d__10_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- CinemachineManager$$Confine ----
// C#: void CinemachineManager__Confine (CinemachineManager_o* __this, Map_o* map, const MethodInfo* method);

void CinemachineManager__Confine(CinemachineManager_o *__this,Map_o *map,MethodInfo *method)

{
  int iVar1;
  Collider2D_o *param1;
  
  if (DAT_ram_00664b14 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e58);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_00664b14 = '\x01';
  }
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(map,0,0);
  if (iVar1 == 0) {
    param1 = (Collider2D_o *)unnamed_function_65370(map,DAT_ram_00567e58);
    __this->mapCollider = param1;
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    iVar1 = unnamed_function_44679(param1,0,0);
    if (iVar1 != 0) {
      __this->cinemachineConfiner2D[6]._opaque = (int)__this->mapCollider;
    }
  }
  return;
}

// ---- CinemachineManager$$.ctor ----
// C#: void CinemachineManager___ctor (CinemachineManager_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

// ---- CinemachineManager$$<GameManager_OnGameStateChange>b__7_2 ----
// C#: void CinemachineManager___GameManager_OnGameStateChange_b__7_2 (CinemachineManager_o* __this, const MethodInfo* method);

void CinemachineManager___GameManager_OnGameStateChange_b__7_2
               (CinemachineManager_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 param1;
  
  if (DAT_ram_00664b15 == '\0') {
    unnamed_function_1099(&System_Action_GameState__TypeInfo);
    unnamed_function_1099(&DAT_ram_00567b8c);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664b15 = '\x01';
  }
  uVar1 = unnamed_function_44644(__this->zoomCamera,0);
  unnamed_function_44686(uVar1,0,0);
  uVar1 = unnamed_function_44644(__this->cinemachineVirtualCamera,0);
  unnamed_function_44686(uVar1,1,0);
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar4 = **(int **)(iVar3 + 0x5c);
  param1 = *(undefined4 *)(iVar4 + 0x20);
  uVar1 = unnamed_function_95402(System_Action_GameState__TypeInfo);
  unnamed_function_60038(uVar1,__this,DAT_ram_00567b8c,0);
  iVar3 = unnamed_function_85160(param1,uVar1,0);
  uVar1 = System_Action_GameState__TypeInfo;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0x20) = 0;
  }
  else {
    iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar2 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
    *(int *)(iVar4 + 0x20) = iVar2;
    uVar1 = System_Action_GameState__TypeInfo;
    iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
    if (iVar4 == 0) {
      unnamed_function_1116(iVar3,uVar1);
      do {
        halt_trap();
      } while( true );
    }
  }
  iVar3 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (DAT_ram_00664b1b == '\0') {
    unnamed_function_1099(&DAT_ram_00565d58);
    DAT_ram_00664b1b = '\x01';
  }
  *(undefined4 *)(iVar3 + 0x1c) = 2;
  unnamed_function_44686(*(undefined4 *)(iVar3 + 0x34),1,0);
  unnamed_function_44686(*(undefined4 *)(iVar3 + 0x38),1,0);
  unnamed_function_44686(*(undefined4 *)(iVar3 + 0x3c),1,0);
  iVar3 = *(int *)(iVar3 + 0x20);
  if (iVar3 != 0) {
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),2,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}

