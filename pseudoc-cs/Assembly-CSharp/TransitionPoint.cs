// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TransitionPoint.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(a)(args)                  virtual call through vtable slot a
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class TransitionPoint : MonoBehaviour // TypeDefIndex: 5667
{
    // Fields
    [SerializeField]
    private TransitionPointDetailsSO TransitionPointDetailsSO; // 0x10
    private bool isCollider; // 0x14
    private WaitForSeconds waitForSeconds; // 0x18

    // Methods

    // RVA: 0x3940 Offset: 0x3940 VA: 0x3940
    private void OnTriggerEnter2D(Collider2D collision)
    {
        int uVar1 = default;
        int iVar2 = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        if ((Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x1c) == 2) && (iVar2 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494 (this.TransitionPointDetailsSO.transitionMap,"North Of The Forest",0), uVar1 = "Complete the instructions to enter this map", iVar2 != 0)) {
            iVar2 = StaticEventHandler.OnInstructionChanged;
            if (iVar2 != 0) {
                Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar2 + 0x20),uVar1,0xffffffff,1,Raw.Read<int>(iVar2 + 0x14));
                return;
            }
        }
        else {
            iVar2 = UnityEngine.Component.CompareTag(collision,"Player",0);
            if ((iVar2 != 0) && (this.isCollider == false)) {
                iVar2 = new TransitionPoint__MapTransitionCoroutine_d__4();
                Raw.Write<object>(iVar2 + 0x14, collision);
                Raw.Write<object>(iVar2 + 0x10, this);
                Raw.Write<int>(iVar2 + 8, 0);
                UnityEngine.MonoBehaviour.StartCoroutine(this,iVar2,0);
                this.isCollider = true;
            }
        }
    }

    [IteratorStateMachine(typeof(TransitionPoint._MapTransitionCoroutine_d__4))]
    // RVA: 0x3941 Offset: 0x3941 VA: 0x3941
    private IEnumerator MapTransitionCoroutine(Collider2D collision)
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new TransitionPoint__MapTransitionCoroutine_d__4();
        pSVar1[5]._opaque = (int)collision;
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3942 Offset: 0x3942 VA: 0x3942
    private void SceneManager_sceneLoaded(Scene arg0, LoadSceneMode arg1)
    {
        int iVar1 = default;
        int param1 = default;

        iVar1 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494 (this.TransitionPointDetailsSO.transitionMap,"North Of The Forest",0);
        if (iVar1 != 0) {
            iVar1 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
            }
            ((GameManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c))).HandleGameState(EngagedBoss);
        }
        param1 = new UnityEngine_Events_UnityAction_Scene__LoadSceneMode_();
        UnityEngine.Events.UnityAction<Scene, Int32Enum>.__ctor(param1,this,DAT_ram_0056d2ec,0);
        UnityEngine.SceneManagement.SceneManager.remove_sceneLoaded(param1,0);
    }

    // RVA: 0x3943 Offset: 0x3943 VA: 0x3943
    public TransitionPoint()
    {
        WaitForSeconds param1 = default;

        param1 = (WaitForSeconds)new UnityEngine_WaitForSeconds();
        /* candidates: DG.Tweening.DOVirtual.__c__DisplayClass0_0._Float_b__1 | TMPEffects.Components.TMPWriter.Delays.SetDelay (+13) */ unnamed_function_9208(param1,0.1,0);
        this.waitForSeconds = param1;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
