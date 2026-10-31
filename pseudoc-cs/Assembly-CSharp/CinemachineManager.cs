// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/CinemachineManager.c by tools/c2cs.py
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
    private void Awake()
    {
        CinemachineConfiner2D pCVar1 = default;

        pCVar1 = (CinemachineConfiner2D)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f68);
        this.cinemachineConfiner2D = pCVar1;
    }

    // RVA: 0x37DF Offset: 0x37DF VA: 0x37DF
    private void OnEnable()
    {
        System.Action.MapChangedEventArgs value = default;
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        value = (System.Action.MapChangedEventArgs) new System_Action_MapChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00567b90,0);
        StaticEventHandler.add_OnMapChanged(value);
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        param1 = Raw.Read<int>(iVar4 + 0x20);
        uVar1 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_00567b8c,0);
        iVar3 = System.Delegate.Combine(param1,uVar1,0);
        uVar1 = System_Action_GameState__TypeInfo;
        if (iVar3 == 0) {
            Raw.Write<int>(iVar4 + 0x20, 0);
            return;
        }
        iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
        if (iVar2 == 0) {
            unnamed_function_1116(iVar3,uVar1);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar4 + 0x20, iVar2);
        uVar1 = System_Action_GameState__TypeInfo;
        iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
        if (iVar4 != 0) {
            return;
        }
        unnamed_function_1116(iVar3,uVar1);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x37E0 Offset: 0x37E0 VA: 0x37E0
    private void OnDisable()
    {
        System.Action.MapChangedEventArgs value = default;

        value = (System.Action.MapChangedEventArgs) new System_Action_MapChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_00567b90,0);
        StaticEventHandler.remove_OnMapChanged(value);
    }

    // RVA: 0x37E1 Offset: 0x37E1 VA: 0x37E1
    private void GameManager_OnGameStateChange(GameState gameState)
    {
        int iVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        int iVar5 = default;

        if (gameState == Intro) {
            iVar1 = new CinemachineManager__ZoomCam_d__10();
            Raw.Write<object>(iVar1 + 0x10, this);
            Raw.Write<int>(iVar1 + 8, 0);
            UnityEngine.MonoBehaviour.StartCoroutine(this,iVar1,0);
            return;
        }
        if (gameState == Begin) {
            iVar1 = new CinemachineManager___c__DisplayClass7_0();
            Raw.Write<object>(iVar1 + 0xc, this);
            Raw.Write<int>(iVar1 + 8, this.zoomCamera[0x1d]._opaque);
            uVar2 = new DG_Tweening_Core_DOGetter_float_();
            DG.Tweening.Core.DOGetter<float>.__ctor(uVar2,iVar1,DAT_ram_0056eb74,0);
            uVar3 = new DG_Tweening_Core_DOSetter_float_();
            DG.Tweening.Core.DOSetter<float>.__ctor(uVar3,iVar1,DAT_ram_0056eb78,0);
            uVar2 = DG.Tweening.DOTween.To(uVar2,uVar3,8.4375,5.0,0);
            uVar2 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar2,1,DAT_ram_0056d378);
            uVar3 = new DG_Tweening_TweenCallback();
            DG.Tweening.TweenCallback.__ctor(uVar3,this,DAT_ram_00567b88,0);
            DG.Tweening.TweenSettingsExtensions.OnComplete<object>(uVar2,uVar3,DAT_ram_0056d33c);
            return;
        }
        if ((gameState != Instruct) && (gameState == Play)) {
            uVar2 = UnityEngine.Component.get_gameObject(this.zoomCamera,0);
            UnityEngine.GameObject.SetActive(uVar2,0,0);
            uVar2 = UnityEngine.Component.get_gameObject(this.cinemachineVirtualCamera,0);
            UnityEngine.GameObject.SetActive(uVar2,1,0);
            iVar1 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = unnamed_function_95087(iVar1);
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = unnamed_function_95087(iVar1);
            }
            iVar5 = Raw.Deref(Raw.Read<object>(iVar1 + 0x5c));
            uVar3 = Raw.Read<int>(iVar5 + 0x20);
            uVar2 = new System_Action_GameState_();
            System.Action<Int32Enum>.__ctor(uVar2,this,DAT_ram_00567b8c,0);
            iVar1 = System.Delegate.Remove(uVar3,uVar2,0);
            uVar2 = System_Action_GameState__TypeInfo;
            if (iVar1 == 0) {
                Raw.Write<int>(iVar5 + 0x20, 0);
                return;
            }
            iVar4 = unnamed_function_1112(iVar1,System_Action_GameState__TypeInfo);
            if (iVar4 == 0) {
                unnamed_function_1116(iVar1,uVar2);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar5 + 0x20, iVar4);
            uVar2 = System_Action_GameState__TypeInfo;
            iVar5 = unnamed_function_1112(iVar1,System_Action_GameState__TypeInfo);
            if (iVar5 == 0) {
                unnamed_function_1116(iVar1,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
    }

    // RVA: 0x37E2 Offset: 0x37E2 VA: 0x37E2
    private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs)
    {
        this.Confine(*(Map)&mapChangedEventArgs.map);
    }

    // RVA: 0x37E3 Offset: 0x37E3 VA: 0x37E3
    private void Start()
    {
        int uVar1 = default;
        CinemachineVirtualCamera pCVar2 = default;
        int iVar3 = default;

        pCVar2 = this.cinemachineVirtualCamera;
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        uVar1 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10),0);
        iVar3 = pCVar2._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0x1c0) * 4) /* virtual */ (pCVar2,uVar1,Raw.Read<int>(iVar3 + 0x1c4));
        pCVar2 = this.zoomCamera;
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        uVar1 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x10),0);
        iVar3 = pCVar2._opaque;
        Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0x1c0) * 4) /* virtual */ (pCVar2,uVar1,Raw.Read<int>(iVar3 + 0x1c4));
    }

    [IteratorStateMachine(typeof(CinemachineManager._ZoomCam_d__10))]
    // RVA: 0x37E4 Offset: 0x37E4 VA: 0x37E4
    private IEnumerator ZoomCam()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new CinemachineManager__ZoomCam_d__10();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x37E5 Offset: 0x37E5 VA: 0x37E5
    private void Confine(Map map)
    {
        int iVar1 = default;
        Collider2D param1 = default;

        iVar1 = UnityEngine.Object.op_Equality(map,0,0);
        if (iVar1 == 0) {
            param1 = (Collider2D)UnityEngine.Component.GetComponent<object>(map,DAT_ram_00567e58);
            this.mapCollider = param1;
            iVar1 = (param1 != null);
            if (iVar1 != 0) {
                this.cinemachineConfiner2D[6]._opaque = (int)this.mapCollider;
            }
        }
    }

    // RVA: 0x37E6 Offset: 0x37E6 VA: 0x37E6
    public CinemachineManager()
    {
        unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x37E7 Offset: 0x37E7 VA: 0x37E7
    private void _GameManager_OnGameStateChange_b__7_2() { }

    // methods without a dump.cs skeleton stub
    public void _GameManager_OnGameStateChange_b__7_2()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.zoomCamera,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
        uVar1 = UnityEngine.Component.get_gameObject(this.cinemachineVirtualCamera,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        param1 = Raw.Read<int>(iVar4 + 0x20);
        uVar1 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_00567b8c,0);
        iVar3 = System.Delegate.Remove(param1,uVar1,0);
        uVar1 = System_Action_GameState__TypeInfo;
        if (iVar3 == 0) {
            Raw.Write<int>(iVar4 + 0x20, 0);
        }
        else {
            iVar2 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar2 == 0) {
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar4 + 0x20, iVar2);
            uVar1 = System_Action_GameState__TypeInfo;
            iVar4 = unnamed_function_1112(iVar3,System_Action_GameState__TypeInfo);
            if (iVar4 == 0) {
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
        }
        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        Raw.Write<int>(iVar3 + 0x1c, 2);
        UnityEngine.GameObject.SetActive(Raw.Read<int>(iVar3 + 0x34),1,0);
        UnityEngine.GameObject.SetActive(Raw.Read<int>(iVar3 + 0x38),1,0);
        UnityEngine.GameObject.SetActive(Raw.Read<int>(iVar3 + 0x3c),1,0);
        iVar3 = Raw.Read<int>(iVar3 + 0x20);
        if (iVar3 != 0) {
            Raw.VCall((ulong)Raw.Read<uint>(iVar3 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar3 + 0x20),2,Raw.Read<int>(iVar3 + 0x14));
        }
    }
}
