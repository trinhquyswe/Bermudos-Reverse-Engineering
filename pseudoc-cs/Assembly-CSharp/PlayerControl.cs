// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/PlayerControl.c by tools/c2cs.py
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

public class PlayerControl : MonoBehaviour // TypeDefIndex: 5690
{
    // Fields
    private Player player; // 0x10
    private InputSystem_Actions inputSystem_Actions; // 0x14
    private InputAction move; // 0x18
    private InputAction fire; // 0x1C
    private InputAction rightClick; // 0x20
    private InputAction spaceClick; // 0x24
    private InputAction beam; // 0x28
    private InputAction openInventory; // 0x2C
    private InputAction useItemAction; // 0x30
    private InputAction restAction; // 0x34
    private BeamByPlayer beamByPlayer; // 0x38
    private InventoryManager inventoryManager; // 0x3C
    private ItemConsumer useItem; // 0x40
    private Vector2 direction; // 0x44
    private Vector2 lastMoveDirection; // 0x4C
    private Vector2 previousLastDirection; // 0x54
    private float dashCooldownTimer; // 0x5C
    private float bashCooldownTimer; // 0x60
    private bool isRunningSoundPlaying; // 0x64

    // Methods

    // RVA: 0x39A2 Offset: 0x39A2 VA: 0x39A2
    private void Awake()
    {
        Player pPVar1 = default;
        BeamByPlayer pBVar2 = default;
        InventoryManager pIVar3 = default;
        ItemConsumer pIVar4 = default;
        InputSystem_Actions __this_00 = default;
        int uVar5 = default;
        int iVar6 = default;
        int iVar7 = default;
        int iVar8 = default;
        int param1 = default;

        pPVar1 = (Player)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        this.player = pPVar1;
        pBVar2 = (BeamByPlayer)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e2c);
        this.beamByPlayer = pBVar2;
        pIVar3 = (InventoryManager)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567eb4);
        this.inventoryManager = pIVar3;
        pIVar4 = (ItemConsumer)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567eb8);
        this.useItem = pIVar4;
        __this_00 = (InputSystem_Actions)new InputSystem_Actions();
        new InputSystem_Actions();
        this.inputSystem_Actions = __this_00;
        iVar7 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar7 + 0xbd) & 1) == 0) {
        }
        iVar7 = Raw.Read<int>(Raw.Read<int>(iVar7 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar7 + 0xbd) & 1) == 0) {
        }
        iVar8 = Raw.Deref(Raw.Read<object>(iVar7 + 0x5c));
        param1 = Raw.Read<int>(iVar8 + 0x20);
        uVar5 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar5,this,DAT_ram_0056b924,0);
        iVar7 = System.Delegate.Combine(param1,uVar5,0);
        uVar5 = System_Action_GameState__TypeInfo;
        if (iVar7 == 0) {
            Raw.Write<int>(iVar8 + 0x20, 0);
            return;
        }
        iVar6 = (iVar7 as System_Action_GameState_);
        if (iVar6 == 0) {
            unnamed_function_1116(iVar7,uVar5);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar8 + 0x20, iVar6);
        uVar5 = System_Action_GameState__TypeInfo;
        iVar8 = (iVar7 as System_Action_GameState_);
        if (iVar8 != 0) {
            return;
        }
        unnamed_function_1116(iVar7,uVar5);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x39A3 Offset: 0x39A3 VA: 0x39A3
    private void OnEnable()
    {
        UnityEngine.InputSystem.InputAction pUVar1 = default;
        int uVar2 = default;
        InputAction pIVar3 = default;
        int param1 = default;
        InputSystem_Actions_UIActions local_10 = default;
        InputSystem_Actions_PlayerActions local_8 = default;

        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).Move;
        this.move = (InputAction)pUVar1;
        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).Fire;
        this.fire = (InputAction)pUVar1;
        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).Beam;
        this.beam = (InputAction)pUVar1;
        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).RightClick;
        this.rightClick = (InputAction)pUVar1;
        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).SpaceClick;
        this.spaceClick = (InputAction)pUVar1;
        local_10.klass = this.inputSystem_Actions;
        pUVar1 = (&local_10).OpenInventory;
        this.openInventory = (InputAction)pUVar1;
        local_10.klass = this.inputSystem_Actions;
        pUVar1 = (&local_10).UseItem;
        this.useItemAction = (InputAction)pUVar1;
        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).Rest;
        this.restAction = (InputAction)pUVar1;
        UnityEngine.InputSystem.InputAction.Enable(this.move,0);
        UnityEngine.InputSystem.InputAction.Enable(this.fire,0);
        UnityEngine.InputSystem.InputAction.Enable(this.beam,0);
        UnityEngine.InputSystem.InputAction.Enable(this.rightClick,0);
        UnityEngine.InputSystem.InputAction.Enable(this.spaceClick,0);
        UnityEngine.InputSystem.InputAction.Enable(this.useItemAction,0);
        UnityEngine.InputSystem.InputAction.Enable(this.restAction,0);
        pIVar3 = this.fire;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056b920,0);
        UnityEngine.InputSystem.InputAction.add_performed(pIVar3,uVar2,0);
        pIVar3 = this.beam;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056b910,0);
        UnityEngine.InputSystem.InputAction.add_performed(pIVar3,uVar2,0);
        pIVar3 = this.rightClick;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056b928,0);
        UnityEngine.InputSystem.InputAction.add_performed(pIVar3,uVar2,0);
        pIVar3 = this.rightClick;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056b914,0);
        UnityEngine.InputSystem.InputAction.add_canceled(pIVar3,uVar2,0);
        pIVar3 = this.spaceClick;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056b92c,0);
        UnityEngine.InputSystem.InputAction.add_performed(pIVar3,uVar2,0);
        pIVar3 = this.openInventory;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056b918,0);
        UnityEngine.InputSystem.InputAction.add_performed(pIVar3,uVar2,0);
        pIVar3 = this.useItemAction;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056b91c,0);
        UnityEngine.InputSystem.InputAction.add_performed(pIVar3,uVar2,0);
        pIVar3 = this.restAction;
        param1 = Raw.Read<int>(Raw.Read<int>(PlayerControl___c_TypeInfo + 0x5c) + 4);
        if (param1 == 0) {
            uVar2 = Raw.Deref(Raw.Read<object>(PlayerControl___c_TypeInfo + 0x5c));
            param1 = new System_Action_InputAction_CallbackContext_();
            System.Action<InputAction.CallbackContext>.__ctor(param1,uVar2,DAT_ram_0056f704,0);
            Raw.Write<int>(Raw.Read<int>(PlayerControl___c_TypeInfo + 0x5c) + 4, param1);
        }
        UnityEngine.InputSystem.InputAction.add_performed(pIVar3,param1,0);
    }

    // RVA: 0x39A4 Offset: 0x39A4 VA: 0x39A4
    private void OnDisable()
    {
        int uVar1 = default;
        InputAction pIVar2 = default;
        int param1 = default;

        UnityEngine.InputSystem.InputAction.Disable(this.move,0);
        UnityEngine.InputSystem.InputAction.Disable(this.fire,0);
        UnityEngine.InputSystem.InputAction.Disable(this.beam,0);
        UnityEngine.InputSystem.InputAction.Disable(this.rightClick,0);
        UnityEngine.InputSystem.InputAction.Disable(this.spaceClick,0);
        UnityEngine.InputSystem.InputAction.Disable(this.openInventory,0);
        UnityEngine.InputSystem.InputAction.Disable(this.useItemAction,0);
        UnityEngine.InputSystem.InputAction.Disable(this.restAction,0);
        pIVar2 = this.fire;
        uVar1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar1,this,DAT_ram_0056b920,0);
        UnityEngine.InputSystem.InputAction.remove_performed(pIVar2,uVar1,0);
        pIVar2 = this.beam;
        uVar1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar1,this,DAT_ram_0056b900,0);
        UnityEngine.InputSystem.InputAction.remove_performed(pIVar2,uVar1,0);
        pIVar2 = this.rightClick;
        uVar1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar1,this,DAT_ram_0056b928,0);
        UnityEngine.InputSystem.InputAction.remove_performed(pIVar2,uVar1,0);
        pIVar2 = this.rightClick;
        uVar1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar1,this,DAT_ram_0056b904,0);
        UnityEngine.InputSystem.InputAction.remove_canceled(pIVar2,uVar1,0);
        pIVar2 = this.spaceClick;
        uVar1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar1,this,DAT_ram_0056b92c,0);
        UnityEngine.InputSystem.InputAction.remove_performed(pIVar2,uVar1,0);
        pIVar2 = this.openInventory;
        uVar1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar1,this,DAT_ram_0056b908,0);
        UnityEngine.InputSystem.InputAction.remove_performed(pIVar2,uVar1,0);
        pIVar2 = this.useItemAction;
        uVar1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar1,this,DAT_ram_0056b90c,0);
        UnityEngine.InputSystem.InputAction.remove_performed(pIVar2,uVar1,0);
        pIVar2 = this.restAction;
        param1 = Raw.Read<int>(Raw.Read<int>(PlayerControl___c_TypeInfo + 0x5c) + 8);
        if (param1 == 0) {
            uVar1 = Raw.Deref(Raw.Read<object>(PlayerControl___c_TypeInfo + 0x5c));
            param1 = new System_Action_InputAction_CallbackContext_();
            System.Action<InputAction.CallbackContext>.__ctor(param1,uVar1,DAT_ram_0056f700,0);
            Raw.Write<int>(Raw.Read<int>(PlayerControl___c_TypeInfo + 0x5c) + 8, param1);
        }
        UnityEngine.InputSystem.InputAction.remove_performed(pIVar2,param1,0);
    }

    // RVA: 0x39A5 Offset: 0x39A5 VA: 0x39A5
    private void OnDestroy()
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        param1 = Raw.Read<int>(iVar4 + 0x20);
        uVar1 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_0056b924,0);
        iVar3 = System.Delegate.Remove(param1,uVar1,0);
        uVar1 = System_Action_GameState__TypeInfo;
        if (iVar3 == 0) {
            Raw.Write<int>(iVar4 + 0x20, 0);
            return;
        }
        iVar2 = (iVar3 as System_Action_GameState_);
        if (iVar2 == 0) {
            unnamed_function_1116(iVar3,uVar1);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar4 + 0x20, iVar2);
        uVar1 = System_Action_GameState__TypeInfo;
        iVar4 = (iVar3 as System_Action_GameState_);
        if (iVar4 != 0) {
            return;
        }
        unnamed_function_1116(iVar3,uVar1);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x39A6 Offset: 0x39A6 VA: 0x39A6
    private void OnGameStateChange(GameState gameState)
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        if ((gameState & ~Begin) == Instruct) {
            UnityEngine.InputSystem.InputAction.Enable(this.openInventory,0);
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
            param1 = Raw.Read<int>(iVar4 + 0x20);
            uVar1 = new System_Action_GameState_();
            System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_0056b924,0);
            iVar3 = System.Delegate.Remove(param1,uVar1,0);
            uVar1 = System_Action_GameState__TypeInfo;
            if (iVar3 == 0) {
                Raw.Write<int>(iVar4 + 0x20, 0);
                return;
            }
            iVar2 = (iVar3 as System_Action_GameState_);
            if (iVar2 == 0) {
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar4 + 0x20, iVar2);
            uVar1 = System_Action_GameState__TypeInfo;
            iVar4 = (iVar3 as System_Action_GameState_);
            if (iVar4 == 0) {
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
        }
    }

    // RVA: 0x39A7 Offset: 0x39A7 VA: 0x39A7
    private void OnRightMouseClick(InputAction.CallbackContext ctx)
    {
        float fVar1 = default;
        int iVar2 = default;

        fVar1 = UnityEngine.Time.get_unscaledTime(0);
        if (this.bashCooldownTimer < fVar1) {
            fVar1 = UnityEngine.Time.get_unscaledTime(0);
            this.bashCooldownTimer = fVar1 + 0.5;
            this.player.bashEvent.CallOnBashEvent(ActiveBash);
            iVar2 = StaticEventHandler.OnTriggerBash;
            if (iVar2 != 0) {
                Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar2 + 0x20),Raw.Read<int>(iVar2 + 0x14));
            }
        }
    }

    // RVA: 0x39A8 Offset: 0x39A8 VA: 0x39A8
    private void OnSpaceClick(InputAction.CallbackContext ctx)
    {
        float fVar1 = default;
        int iVar2 = default;
        DashEvent pDVar3 = default;
        Action pAVar4 = default;
        Vector2 VVar5 = default;
        float fVar6 = default;

        VVar5 = this.direction;
        fVar1 = VVar5.x - (float)Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        fVar6 = VVar5.y - (float)((ulong)Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c)) >> 0x20);
        if ((9.9999994e-11 <= fVar1 * fVar1 + fVar6 * fVar6) && (fVar1 = UnityEngine.Time.get_time(0), this.dashCooldownTimer < fVar1)) {
            iVar2 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            }
            iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            }
            ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c))).PlaySoundEffect(this.player.dashSoundEffect);
            fVar1 = UnityEngine.Time.get_time(0);
            this.dashCooldownTimer = fVar1 + 1.0;
            VVar5 = this.direction;
            pDVar3 = this.player.dashEvent;
            pAVar4 = pDVar3.OnDashEvent;
            if (pAVar4 != (Action)0x0) {
                iVar2 = new DashEventArgs();
                Raw.Write<Vector2>(iVar2 + 8, VVar5);
                Raw.VCall((ulong)(uint)pAVar4[3]._opaque * 4) /* virtual */ (pAVar4[8]._opaque,pDVar3,iVar2,pAVar4[5]._opaque);
            }
            iVar2 = StaticEventHandler.OnTriggerDash;
            if (iVar2 != 0) {
                Raw.VCall((ulong)Raw.Read<uint>(iVar2 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar2 + 0x20),Raw.Read<int>(iVar2 + 0x14));
            }
        }
    }

    // RVA: 0x39A9 Offset: 0x39A9 VA: 0x39A9
    private void OnFireClick(InputAction.CallbackContext ctx)
    {
        if (10.0 < this.player.stamina.currentStamina) {
            this.player.attackEvent.CallAttackEvent();
        }
    }

    // RVA: 0x39AA Offset: 0x39AA VA: 0x39AA
    private void Update()
    {
        float fVar1 = default;

        this.MovementInput();
        fVar1 = UnityEngine.InputSystem.InputAction.ReadValue<float>(this.rightClick,DAT_ram_0056a010);
        if (0.0 < fVar1) {
            this.player.bashEvent.CallOnBashEvent(DuringBash);
        }
    }

    // RVA: 0x39AB Offset: 0x39AB VA: 0x39AB
    private void MovementInput()
    {
        AimDirection aimDirection = default;
        bool bVar1 = default;
        uint extraout_var = default;
        uint extraout_var_00 = default;
        uint extraout_var_01 = default;
        uint extraout_var_02 = default;
        uint extraout_var_03 = default;
        uint extraout_var_04 = default;
        uint extraout_var_05 = default;
        uint extraout_var_06 = default;
        float fVar2 = default;
        MovementByVelocityEvent pMVar3 = default;
        MovementDetailsSO pMVar4 = default;
        int iVar5 = default;
        IdleEvent pIVar6 = default;
        Action pAVar7 = default;
        Vector2 VVar8 = default;
        float fVar9 = default;
        Vector2 local_108 = default;
        Vector2 local_100 = default;
        Vector2 local_f8 = default;
        Vector2 local_f0 = default;
        Vector2 local_e8 = default;
        Vector2 local_e0 = default;
        Vector2 local_d8 = default;
        Vector2 local_d0 = default;
        Vector2 local_c8 = default;
        Vector2 local_c0 = default;
        Vector2 local_b8 = default;
        Vector2 local_b0 = default;
        Vector2 local_a8 = default;
        Vector2 local_a0 = default;
        Vector2 local_98 = default;
        Vector2 local_90 = default;
        long local_88 = default;
        Vector2 local_80 = default;
        long local_78 = default;
        Vector2 local_70 = default;
        long local_68 = default;
        Vector2 local_60 = default;
        long local_58 = default;
        Vector2 local_50 = default;
        long local_48 = default;
        Vector2 local_40 = default;
        long local_38 = default;
        Vector2 local_30 = default;
        long local_28 = default;
        Vector2 local_20 = default;
        long local_18 = default;
        Vector2 local_10 = default;
        float local_8 = default;
        float local_4 = default;

        aimDirection = Up;
        UnityEngine.InputSystem.InputAction.ReadValue<Vector2>(&local_8,this.move,DAT_ram_0056a014);
        if (((((float)local_8 == 0.0 && (float)local_4 != 0.0) || (((float)local_8 != 0.0 && ((float)local_4 == 0.0)))) && (this.direction.x != 0.0)) && (this.direction.y != 0.0)) {
            this.lastMoveDirection = this.direction;
        }
        UnityEngine.InputSystem.InputAction.ReadValue<Vector2>(&local_8,this.move,DAT_ram_0056a014);
        VVar8.y = (float)local_4;
        VVar8.x = (float)local_8;
        this.direction = VVar8;
        fVar2 = (float)local_8 - (float)Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        fVar9 = (float)local_4 - (float)((ulong)Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c)) >> 0x20);
        if (fVar2 * fVar2 + fVar9 * fVar9 < 9.9999994e-11) {
            if (this.isRunningSoundPlaying != false) {
                iVar5 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
                if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
                }
                iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
                }
                ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar5 + 0x5c))).StopSoundEffectLoop((SoundEffectSO)this.player.spawnPosition.y);
                this.isRunningSoundPlaying = false;
            }
            pIVar6 = this.player.idleEvent;
            pAVar7 = pIVar6.OnIdle;
            if (pAVar7 != (Action)0x0) {
                Raw.VCall((ulong)(uint)pAVar7[3]._opaque * 4) /* virtual */ (pAVar7[8]._opaque,pIVar6,pAVar7[5]._opaque);
            }
            local_90 = this.lastMoveDirection;
            fVar2 = this.previousLastDirection.x - local_90.x;
            fVar9 = this.previousLastDirection.y - local_90.y;
            if (fVar2 * fVar2 + fVar9 * fVar9 < 9.9999994e-11) {
                return;
            }
            this.previousLastDirection = local_90;
            local_58 = 0xbf35c28fbf35c28f;
            local_98.x = -0.71;
            local_98.y = -0.71;
            local_50 = local_90;
            bVar1 = HelperUtilities.ApproximatelyEqual(&local_90, &local_98, 0.01);
            if (CONCAT31(extraout_var_03,bVar1) != 0) {
                this.player.animateEvent.CallAnimateEvent(DownLeft);
                return;
            }
            local_a0 = this.lastMoveDirection;
            local_68 = 0xbf35c28f3f35c28f;
            local_a8.x = 0.71;
            local_a8.y = -0.71;
            local_60 = local_a0;
            bVar1 = HelperUtilities.ApproximatelyEqual(&local_a0, &local_a8, 0.01);
            if (CONCAT31(extraout_var_04,bVar1) == 0) {
                local_b0 = this.lastMoveDirection;
                local_78 = 0x3f35c28fbf35c28f;
                local_b8.x = -0.71;
                local_b8.y = 0.71;
                local_70 = local_b0;
                bVar1 = HelperUtilities.ApproximatelyEqual(&local_b0, &local_b8, 0.01);
                if (CONCAT31(extraout_var_05,bVar1) != 0) {
                    this.player.animateEvent.CallAnimateEvent(UpLeft);
                    return;
                }
                local_c0 = this.lastMoveDirection;
                local_88 = 0x3f35c28f3f35c28f;
                local_c8.x = 0.71;
                local_c8.y = 0.71;
                local_80 = local_c0;
                bVar1 = HelperUtilities.ApproximatelyEqual(&local_c0, &local_c8, 0.01);
                if (CONCAT31(extraout_var_06,bVar1) == 0) {
                    return;
                }
                this.player.animateEvent.CallAnimateEvent(UpRight);
                return;
            }
            this.player.animateEvent.CallAnimateEvent(DownRight);
            return;
        }
        fVar2 = UnityEngine.InputSystem.InputAction.ReadValue<float>(this.fire,DAT_ram_0056a010);
        if (fVar2 != 0.0) {
            return;
        }
        VVar8 = this.direction;
        iVar5 = Raw.Read<int>(UnityEngine_Vector2_TypeInfo + 0x5c);
        fVar2 = VVar8.x - (float)Raw.Read<long>(iVar5 + 0x10);
        fVar9 = VVar8.y - (float)((ulong)Raw.Read<long>(iVar5 + 0x10) >> 0x20);
        if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
            aimDirection = Down;
            VVar8 = this.direction;
            fVar2 = VVar8.x - (float)Raw.Read<long>(iVar5 + 0x18);
            fVar9 = VVar8.y - (float)((ulong)Raw.Read<long>(iVar5 + 0x18) >> 0x20);
            if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
                aimDirection = Left;
                VVar8 = this.direction;
                fVar2 = VVar8.x - (float)Raw.Read<long>(iVar5 + 0x20);
                fVar9 = VVar8.y - (float)((ulong)Raw.Read<long>(iVar5 + 0x20) >> 0x20);
                if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
                    aimDirection = Right;
                    VVar8 = this.direction;
                    fVar2 = VVar8.x - (float)Raw.Read<long>(iVar5 + 0x28);
                    fVar9 = VVar8.y - (float)((ulong)Raw.Read<long>(iVar5 + 0x28) >> 0x20);
                    if (9.9999994e-11 <= fVar2 * fVar2 + fVar9 * fVar9) {
                        local_d0 = this.direction;
                        local_18 = 0xbf35c28fbf35c28f;
                        local_d8.x = -0.71;
                        local_d8.y = -0.71;
                        aimDirection = DownLeft;
                        local_10 = local_d0;
                        bVar1 = HelperUtilities.ApproximatelyEqual(&local_d0, &local_d8, 0.01);
                        if (CONCAT31(extraout_var,bVar1) == 0) {
                            local_e0 = this.direction;
                            local_28 = 0xbf35c28f3f35c28f;
                            local_e8.x = 0.71;
                            local_e8.y = -0.71;
                            aimDirection = DownRight;
                            local_20 = local_e0;
                            bVar1 = HelperUtilities.ApproximatelyEqual(&local_e0, &local_e8, 0.01);
                            if (CONCAT31(extraout_var_00,bVar1) == 0) {
                                local_f0 = this.direction;
                                local_38 = 0x3f35c28fbf35c28f;
                                local_f8.x = -0.71;
                                local_f8.y = 0.71;
                                aimDirection = UpLeft;
                                local_30 = local_f0;
                                bVar1 = HelperUtilities.ApproximatelyEqual(&local_f0, &local_f8, 0.01);
                                if (CONCAT31(extraout_var_01,bVar1) == 0) {
                                    local_100 = this.direction;
                                    local_48 = 0x3f35c28f3f35c28f;
                                    local_108.x = 0.71;
                                    local_108.y = 0.71;
                                    aimDirection = UpRight;
                                    local_40 = local_100;
                                    bVar1 = HelperUtilities.ApproximatelyEqual(&local_100, &local_108, 0.01);
                                    if (CONCAT31(extraout_var_02,bVar1) == 0) goto code_r0x81a3e5d4;
                                }
                            }
                        }
                    }
                }
            }
        }
        this.player.animateEvent.CallAnimateEvent(aimDirection);
        code_r0x81a3e5d4: VVar8 = this.direction;
        pMVar3 = this.player.movementByVelocityEvent;
        pMVar4 = this.player.movementDetails;
        fVar2 = pMVar4.minMoveSpeed;
        fVar9 = pMVar4.maxMoveSpeed;
        if (fVar2 != fVar9) {
            fVar2 = UnityEngine.Random.Range(fVar2,fVar9,0);
        }
        pAVar7 = pMVar3.OnMovementByVelocity;
        if (pAVar7 != (Action)0x0) {
            iVar5 = new MovementByVelocityArgs();
            Raw.Write<float>(iVar5 + 0x10, fVar2);
            Raw.Write<Vector2>(iVar5 + 8, VVar8);
            Raw.VCall((ulong)(uint)pAVar7[3]._opaque * 4) /* virtual */ (pAVar7[8]._opaque,pMVar3,iVar5,pAVar7[5]._opaque);
        }
        if (this.isRunningSoundPlaying == false) {
            iVar5 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar5 + 0x5c))).PlaySoundEffectPersistent((SoundEffectSO)this.player.spawnPosition.y, true);
            this.isRunningSoundPlaying = true;
        }
    }

    // RVA: 0x39AC Offset: 0x39AC VA: 0x39AC
    public PlayerControl()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x39AD Offset: 0x39AD VA: 0x39AD
    private void _OnEnable_b__20_0(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x39AE Offset: 0x39AE VA: 0x39AE
    private void _OnEnable_b__20_1(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x39AF Offset: 0x39AF VA: 0x39AF
    private void _OnEnable_b__20_2(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x39B0 Offset: 0x39B0 VA: 0x39B0
    private void _OnEnable_b__20_3(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x39B1 Offset: 0x39B1 VA: 0x39B1
    private void _OnDisable_b__21_0(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x39B2 Offset: 0x39B2 VA: 0x39B2
    private void _OnDisable_b__21_1(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x39B3 Offset: 0x39B3 VA: 0x39B3
    private void _OnDisable_b__21_2(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x39B4 Offset: 0x39B4 VA: 0x39B4
    private void _OnDisable_b__21_3(InputAction.CallbackContext ctx) { }

    // methods without a dump.cs skeleton stub
    public void _OnEnable_b__20_0(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.beamByPlayer.Beam();
    }
    public void _OnEnable_b__20_1(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.player.bashEvent.CallOnBashEvent(ReleaseBash);
    }
    public void _OnEnable_b__20_2(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.inventoryManager.ToggleInventory();
    }
    public void _OnEnable_b__20_3(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.useItem.UseItemFromHotBar();
    }
    public void _OnDisable_b__21_0(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.beamByPlayer.Beam();
    }
    public void _OnDisable_b__21_1(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.player.bashEvent.CallOnBashEvent(ReleaseBash);
    }
    public void _OnDisable_b__21_2(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.inventoryManager.ToggleInventory();
    }
    public void _OnDisable_b__21_3(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.useItem.UseItemFromHotBar();
    }
}
