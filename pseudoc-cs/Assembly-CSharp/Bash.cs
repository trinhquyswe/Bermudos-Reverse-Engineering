// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Bash.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(k, s)(args)               virtual call: vtable slot s of class k (k+0xc0+8*s)
//   Raw.VCallAt(e)(args)                virtual call: vtable entry at address e (interface)
//   Raw.DelegateInvoke(d)(args)         delegate invoke: target from d+0xc, this d+0x20
//   Raw.IndirectCall(a)(args)           unresolved indirect call (function-table offset a)
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class Bash : MonoBehaviour // TypeDefIndex: 5700
{
    // Fields
    private Collider2D collider2d; // 0x10
    private LayerMask layerMask; // 0x14
    private Player player; // 0x18
    private Arrow arrow; // 0x1C
    private BashState bashState; // 0x20
    [SerializeField]
    private SoundEffectSO duringBashSoundEffect; // 0x24
    [SerializeField]
    private SoundEffectSO releaseBashSoundEffect; // 0x28
    [SerializeField]
    [TextArea]
    private string instructionBash; // 0x2C
    private bool isDuring; // 0x30
    private bool isRelease; // 0x31
    private bool isDuringSoundPlaying; // 0x32
    private float aimCountdown; // 0x34
    private float bashForce; // 0x38
    private int bashCost; // 0x3C
    private float bashRadius; // 0x40
    private int displayCount; // 0x44

    // Methods

    // RVA: 0x39EE Offset: 0x39EE VA: 0x39EE
    private void Awake()
    {
        Player pPVar1 = default;
        Arrow pAVar2 = default;

        pPVar1 = (Player)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        this.player = pPVar1;
        pAVar2 = (Arrow)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e1c);
        this.bashState = None;
        this.arrow = pAVar2;
    }

    // RVA: 0x39EF Offset: 0x39EF VA: 0x39EF
    private void OnEnable()
    {
        bool bVar1 = default;
        Action param1 = default;
        int uVar2 = default;
        int iVar3 = default;
        Action pAVar4 = default;
        int iVar5 = default;
        int iVar6 = default;
        int uVar7 = default;
        BashEvent pBVar8 = default;

        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar6 = Raw.Deref(Raw.Read<object>(iVar5 + 0x5c));
        uVar7 = Raw.Read<int>(iVar6 + 0x20);
        uVar2 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar2,this,DAT_ram_00567694,0);
        iVar5 = System.Delegate.Combine(uVar7,uVar2,0);
        uVar2 = System_Action_GameState__TypeInfo;
        if (iVar5 == 0) {
            Raw.Write<int>(iVar6 + 0x20, 0);
        }
        else {
            iVar3 = (iVar5 as System_Action_GameState_);
            if (iVar3 == 0) {
                unnamed_function_1116(iVar5,uVar2);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar6 + 0x20, iVar3);
            uVar2 = System_Action_GameState__TypeInfo;
            iVar6 = (iVar5 as System_Action_GameState_);
            if (iVar6 == 0) {
                unnamed_function_1116(iVar5,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
        pBVar8 = this.player.bashEvent;
        uVar2 = new System_Action_BashEvent__BashEventArgs_();
        System.Action<object, object>.__ctor(uVar2,this,DAT_ram_00567698,0);
        param1 = pBVar8.OnBash;
        while( true ) {
            iVar5 = 0;
            iVar6 = System.Delegate.Combine(param1,uVar2,0);
            uVar7 = System_Action_BashEvent__BashEventArgs__TypeInfo;
            if ((iVar6 != 0) && (iVar5 = (iVar6 as System_Action_BashEvent__BashEventArgs_), iVar5 == 0)) break;
            pAVar4 = (Action)Interlocked.CompareExchange(ref pBVar8.OnBash, iVar5, param1);
            bVar1 = param1 == pAVar4;
            param1 = pAVar4;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(iVar6,uVar7);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x39F0 Offset: 0x39F0 VA: 0x39F0
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        BashEvent pBVar3 = default;

        pBVar3 = this.player.bashEvent;
        param1_00 = new System_Action_BashEvent__BashEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00567698,0);
        param1 = pBVar3.OnBash;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_BashEvent__BashEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_BashEvent__BashEventArgs__TypeInfo), param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pBVar3.OnBash, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x39F1 Offset: 0x39F1 VA: 0x39F1
    private void GameStateChanged_OnBash(GameState gameState)
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int param1 = default;

        if (gameState == Instruct) {
            UnityEngine.MonoBehaviour.InvokeRepeating(this,"InstructBash",0.0,0.15,0);
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar4 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
            param1 = Raw.Read<int>(iVar4 + 0x20);
            uVar1 = new System_Action_GameState_();
            System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_00567694,0);
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

    // RVA: 0x39F2 Offset: 0x39F2 VA: 0x39F2
    public void InstructBash()
    {
        int uVar1 = default;
        Collider2D param1 = default;
        int iVar2 = default;
        float param2 = default;
        string psVar3 = default;
        int iVar4 = default;
        long local_20 = default;
        long local_18 = default;

        long[] local_10 = new long[2];
        iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
        }
        if (Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x1c) == 2) {
            uVar1 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(local_10,uVar1,0);
            param2 = this.bashRadius;
            iVar2 = this.layerMask.m_Mask;
            local_20 = local_10[0];
            local_18 = local_10[0];
            param1 = (Collider2D)UnityEngine.Physics2D.OverlapCircle(&local_20,param2,iVar2,0);
            this.collider2d = param1;
            iVar2 = UnityEngine.Object.op_Equality(param1,0,0);
            if (iVar2 == 0) {
                uVar1 = UnityEngine.Component.GetComponent<object>(this.collider2d,DAT_ram_00567e08);
                iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
                if (iVar2 == 0) {
                    UnityEngine.Time.set_timeScale(0.0,0);
                    this.aimCountdown = 10.0;
                    this.isDuring = true;
                    iVar2 = this.displayCount;
                    psVar3 = this.instructionBash;
                    iVar4 = StaticEventHandler.OnInstructionChanged;
                    if (iVar4 != 0) {
                        Raw.DelegateInvoke(iVar4) /* delegate invoke */ (Raw.Read<int>(iVar4 + 0x20),psVar3,iVar2,1,Raw.Read<int>(iVar4 + 0x14));
                    }
                }
            }
        }
    }

    // RVA: 0x39F3 Offset: 0x39F3 VA: 0x39F3
    private void OnBashEvent_OnBash(BashEvent bashEvent, BashEventArgs bashEventArgs)
    {
        this.enemyState = enemyStateEventArgs.enemyState;
    }

    // RVA: 0x39F4 Offset: 0x39F4 VA: 0x39F4
    private void Start()
    {
        int iVar1 = default;

        iVar1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar1 + 0x10, "EnemyAmmo");
        iVar1 = UnityEngine.LayerMask.GetMask(iVar1,0);
        this.layerMask.m_Mask = iVar1;
    }

    // RVA: 0x39F5 Offset: 0x39F5 VA: 0x39F5
    private void Update()
    {
        BashState BVar1 = default;

        BVar1 = this.bashState;
        if (BVar1 == ActiveBash) {
            this.Prepare();
            return;
        }
        if (BVar1 == DuringBash) {
            if (this.isDuring != false) {
                this.During();
                return;
            }
        }
        else if (BVar1 == ReleaseBash) {
            if (this.isRelease != false) {
                this.Release();
                return;
            }
        }
        else if (BVar1 == None) {
            this.isDuring = false;
            this.isRelease = false;
        }
    }

    // RVA: 0x39F6 Offset: 0x39F6 VA: 0x39F6
    private void Prepare()
    {
        int uVar1 = default;
        Collider2D param1 = default;
        Stamina __this_00 = default;
        float param2 = default;
        int iVar2 = default;
        long local_20 = default;
        long local_18 = default;

        long[] local_10 = new long[2];
        __this_00 = this.player.stamina;
        if ((float)this.bashCost <= __this_00.currentStamina) {
            __this_00.UseStamina(this.bashCost);
            uVar1 = UnityEngine.Component.get_transform(this,0);
            UnityEngine.Transform.get_position(local_10,uVar1,0);
            param2 = this.bashRadius;
            iVar2 = this.layerMask.m_Mask;
            local_20 = local_10[0];
            local_18 = local_10[0];
            param1 = (Collider2D)UnityEngine.Physics2D.OverlapCircle(&local_20,param2,iVar2,0);
            this.collider2d = param1;
            iVar2 = UnityEngine.Object.op_Equality(param1,0,0);
            if (iVar2 == 0) {
                uVar1 = UnityEngine.Component.GetComponent<object>(this.collider2d,DAT_ram_00567e08);
                iVar2 = UnityEngine.Object.op_Equality(uVar1,0,0);
                if ((iVar2 == 0) && ((float)this.bashCost <= this.player.stamina.currentStamina)) {
                    UnityEngine.Time.set_timeScale(0.0,0);
                    this.aimCountdown = 2.0;
                    this.isDuring = true;
                }
            }
        }
    }

    // RVA: 0x39F7 Offset: 0x39F7 VA: 0x39F7
    private void During()
    {
        long uVar1 = default;
        long uVar2 = default;
        float fVar3 = default;
        int iVar4 = default;
        int param2 = default;
        Collider2D param1 = default;
        Arrow __this_00 = default;
        float fVar5 = default;
        Vector2 local_30 = default;
        Vector2 local_28 = default;
        Vector2 local_20 = default;
        Vector2 local_18 = default;
        Vector3 local_10 = default;

        fVar5 = this.aimCountdown;
        fVar3 = UnityEngine.Time.get_unscaledDeltaTime(0);
        fVar5 = fVar5 - fVar3;
        this.aimCountdown = fVar5;
        if (fVar5 <= 0.0) {
            UnityEngine.LineRenderer.set_positionCount(this.arrow.lineRenderer,0,0);
            UnityEngine.Time.set_timeScale(1.0,0);
            this.isDuring = false;
        }
        else {
            this.isRelease = true;
            param1 = this.collider2d;
            iVar4 = (param1 != null);
            if (iVar4 != 0) {
                if (this.isDuringSoundPlaying == false) {
                    iVar4 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
                    if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                    }
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
                    if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                    }
                    ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar4 + 0x5c))).PlaySoundEffect(this.duringBashSoundEffect);
                    this.isDuringSoundPlaying = true;
                }
                __this_00 = this.arrow;
                HelperUtilities.GetMouseWorldPosition(&local_10);
                uVar1 = local_10._0_8_;
                param2 = UnityEngine.Component.get_transform(this.collider2d,0);
                UnityEngine.Transform.get_position(&local_10,param2,0);
                uVar2 = local_10._0_8_;
                local_10.x = (float)uVar1;
                local_10.y = SUB84(uVar1,4);
                local_18.x = local_10.x;
                local_18.y = local_10.y;
                local_10.x = (float)uVar1;
                local_10.y = SUB84(uVar1,4);
                local_28.x = local_10.x;
                local_28.y = local_10.y;
                local_10.x = (float)uVar2;
                local_10.y = SUB84(uVar2,4);
                local_20.x = local_10.x;
                local_20.y = local_10.y;
                local_10.x = (float)uVar2;
                local_10.y = SUB84(uVar2,4);
                local_30.x = local_10.x;
                local_30.y = local_10.y;
                __this_00.MakeArrow(&local_28, &local_30);
            }
        }
    }

    // RVA: 0x39F8 Offset: 0x39F8 VA: 0x39F8
    private void Release()
    {
        int iVar1 = default;
        int param1 = default;
        int param2 = default;
        Collider2D param1_00 = default;

        UnityEngine.Time.set_timeScale(1.0,0);
        param1_00 = this.collider2d;
        iVar1 = (param1_00 != null);
        if ((iVar1 != 0) && (this.isRelease != false)) {
            iVar1 = UnityEngine.Component.GetComponent<object>(this.collider2d,DAT_ram_00567e08);
            Raw.Write<int>(iVar1 + 0x74, 2);
            param1 = UnityEngine.Component.get_gameObject(this.collider2d,0);
            param2 = UnityEngine.LayerMask.NameToLayer("BashAmmo",0);
            UnityEngine.GameObject.set_layer(param1,param2,0);
            this.MoveAmmoByBash();
            UnityEngine.LineRenderer.set_positionCount(this.arrow.lineRenderer,0,0);
            if (this.isDuringSoundPlaying != false) {
                iVar1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
                if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                }
                iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                }
                ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c))).PlaySoundEffect(this.releaseBashSoundEffect);
                this.isDuringSoundPlaying = false;
            }
            this.ProcessInstructionBashInRealseState();
        }
        this.bashState = None;
    }

    // RVA: 0x39F9 Offset: 0x39F9 VA: 0x39F9
    private void InitializeFlagVarible()
    {
        this.isDuring = false;
        this.isRelease = false;
    }

    // RVA: 0x39FA Offset: 0x39FA VA: 0x39FA
    private void MoveAmmoByBash()
    {
        float fVar1 = default;
        float fVar2 = default;
        int param1 = default;
        int param2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        long local_20 = default;
        long local_18 = default;
        float local_10 = default;
        float local_c = default;

        param1 = UnityEngine.Component.GetComponent<object>(this.collider2d,DAT_ram_00567f18);
        param2 = UnityEngine.Component.get_transform(this.collider2d,0);
        UnityEngine.Transform.get_position(&local_10,param2,0);
        fVar2 = local_c;
        fVar1 = local_10;
        HelperUtilities.GetMouseWorldPosition((Vector3)&local_10);
        fVar3 = (float)fVar2 - (float)local_c;
        fVar4 = (float)fVar1 - (float)local_10;
        fVar5 = Mathf.Sqrt(fVar4 * fVar4 + fVar3 * fVar3);
        if (1e-05 < fVar5) {
            fVar3 = fVar3 / fVar5;
            fVar4 = fVar4 / fVar5;
        }
        else {
            fVar3 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
            fVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        }
        local_20 = CONCAT44(fVar3 * this.bashForce,fVar4 * this.bashForce);
        local_18 = local_20;
        /* candidates: UnityEngine.Rigidbody2D.AddForce | UnityEngine.Rigidbody2D.AddForce_Injected */ unnamed_function_16412(param1,&local_20,1,0);
    }

    // RVA: 0x39FB Offset: 0x39FB VA: 0x39FB
    private void ProcessInstructionBashInRealseState()
    {
        int iVar1 = default;
        string psVar2 = default;
        int iVar3 = default;

        iVar1 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
        }
        if (Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar1 + 0x5c)) + 0x1c) == 2) {
            iVar1 = this.displayCount;
            if (iVar1 == 2) {
                UnityEngine.MonoBehaviour.CancelInvoke(this,"InstructBash",0);
                iVar1 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                }
                iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                }
                ((GameManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c))).HandleGameState(Play);
                iVar1 = this.displayCount;
            }
            this.displayCount = iVar1 + 1;
            psVar2 = this.instructionBash;
            iVar3 = StaticEventHandler.OnInstructionChanged;
            if (iVar3 != 0) {
                Raw.DelegateInvoke(iVar3) /* delegate invoke */ (Raw.Read<int>(iVar3 + 0x20),psVar2,iVar1 + 1,1,Raw.Read<int>(iVar3 + 0x14));
            }
        }
    }

    // RVA: 0x39FC Offset: 0x39FC VA: 0x39FC
    public Bash()
    {
        this.bashRadius = 2.5;
        this.bashForce = 10.0;
        this.bashCost = 10;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
