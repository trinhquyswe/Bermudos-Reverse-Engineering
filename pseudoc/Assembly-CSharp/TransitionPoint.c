// Assembly-CSharp :: TransitionPoint
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TransitionPoint : MonoBehaviour // TypeDefIndex: 5667
{
	// Fields
	[SerializeField]
	private TransitionPointDetailsSO TransitionPointDetailsSO; // 0x10
	private bool isCollider; // 0x14
	private WaitForSeconds waitForSeconds; // 0x18

	// Methods

	// RVA: 0x3940 Offset: 0x3940 VA: 0x3940
	private void OnTriggerEnter2D(Collider2D collision) { }

	[IteratorStateMachine(typeof(TransitionPoint.<MapTransitionCoroutine>d__4))]
	// RVA: 0x3941 Offset: 0x3941 VA: 0x3941
	private IEnumerator MapTransitionCoroutine(Collider2D collision) { }

	// RVA: 0x3942 Offset: 0x3942 VA: 0x3942
	private void SceneManager_sceneLoaded(Scene arg0, LoadSceneMode arg1) { }

	// RVA: 0x3943 Offset: 0x3943 VA: 0x3943
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TransitionPoint$$OnTriggerEnter2D ----
// C#: void TransitionPoint__OnTriggerEnter2D (TransitionPoint_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void TransitionPoint__OnTriggerEnter2D
               (TransitionPoint_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_ram_00664914 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&StringLiteral_5674 /* "North Of The Forest" */);
    unnamed_function_1099(&StringLiteral_2761 /* "Complete the instructions to enter this map" */);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_00664914 = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  if ((*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 2) &&
     (iVar2 = unnamed_function_81494
                        (__this->TransitionPointDetailsSO->transitionMap,StringLiteral_5674 /* "North Of The Forest" */,0),
     uVar1 = StringLiteral_2761 /* "Complete the instructions to enter this map" */, iVar2 != 0)) {
    if (DAT_ram_006649de == '\0') {
      unnamed_function_1099(&StaticEventHandler_TypeInfo);
      DAT_ram_006649de = '\x01';
    }
    iVar2 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x48);
    if (iVar2 != 0) {
      (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
                (*(undefined4 *)(iVar2 + 0x20),uVar1,0xffffffff,1,*(undefined4 *)(iVar2 + 0x14));
      return;
    }
  }
  else {
    iVar2 = unnamed_function_44654(collision,StringLiteral_6075 /* "Player" */,0);
    if ((iVar2 != 0) && (__this->isCollider == false)) {
      if (DAT_ram_00664915 == '\0') {
        unnamed_function_1099(&TransitionPoint__MapTransitionCoroutine_d__4_TypeInfo);
        DAT_ram_00664915 = '\x01';
      }
      iVar2 = unnamed_function_95402(TransitionPoint__MapTransitionCoroutine_d__4_TypeInfo);
      *(UnityEngine_Collider2D_o **)(iVar2 + 0x14) = collision;
      *(TransitionPoint_o **)(iVar2 + 0x10) = __this;
      *(undefined4 *)(iVar2 + 8) = 0;
      unnamed_function_44725(__this,iVar2,0);
      __this->isCollider = true;
    }
  }
  return;
}

// ---- TransitionPoint$$MapTransitionCoroutine ----
// C#: System_Collections_IEnumerator_o* TransitionPoint__MapTransitionCoroutine (TransitionPoint_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

System_Collections_IEnumerator_o *
TransitionPoint__MapTransitionCoroutine
          (TransitionPoint_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664915 == '\0') {
    unnamed_function_1099(&TransitionPoint__MapTransitionCoroutine_d__4_TypeInfo);
    DAT_ram_00664915 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(TransitionPoint__MapTransitionCoroutine_d__4_TypeInfo);
  pSVar1[5]._opaque = (int)collision;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- TransitionPoint$$SceneManager_sceneLoaded ----
// C#: void TransitionPoint__SceneManager_sceneLoaded (TransitionPoint_o* __this, UnityEngine_SceneManagement_Scene_o arg0, int32_t arg1, const MethodInfo* method);

void TransitionPoint__SceneManager_sceneLoaded
               (TransitionPoint_o *__this,UnityEngine_SceneManagement_Scene_o *arg0,
               UnityEngine_SceneManagement_LoadSceneMode arg1,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  
  if (DAT_ram_00664916 == '\0') {
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&DAT_ram_0056d2ec);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    unnamed_function_1099(&StringLiteral_5674 /* "North Of The Forest" */);
    DAT_ram_00664916 = '\x01';
  }
  iVar1 = unnamed_function_81494
                    (__this->TransitionPointDetailsSO->transitionMap,StringLiteral_5674 /* "North Of The Forest" */,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    GameManager__HandleGameState
              ((GameManager_o *)**(undefined4 **)(iVar1 + 0x5c),EngagedBoss,(MethodInfo *)0x0);
  }
  param1 = unnamed_function_95402(UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
  unnamed_function_71914(param1,__this,DAT_ram_0056d2ec,0);
  if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  unnamed_function_45261(param1,0);
  return;
}

// ---- TransitionPoint$$.ctor ----
// C#: void TransitionPoint___ctor (TransitionPoint_o* __this, const MethodInfo* method);

void TransitionPoint___ctor(TransitionPoint_o *__this,MethodInfo *method)

{
  WaitForSeconds_o *param1;
  
  if (DAT_ram_00664917 == '\0') {
    unnamed_function_1099(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_ram_00664917 = '\x01';
  }
  param1 = (WaitForSeconds_o *)unnamed_function_95402(UnityEngine_WaitForSeconds_TypeInfo);
  unnamed_function_9208(param1,0.1,0);
  __this->waitForSeconds = param1;
  unnamed_function_44622(__this,0);
  return;
}

