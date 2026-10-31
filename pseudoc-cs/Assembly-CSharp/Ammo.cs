// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Ammo.c by tools/c2cs.py
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

public class Ammo : MonoBehaviour, IFireable // TypeDefIndex: 5535
{
    // Fields
    [HideInInspector]
    public AmmoDetailsSO ammoDetailsSO; // 0x10
    private EnemyEffect enemyEffect; // 0x14
    private PlayerEffect playerEffect; // 0x18
    private DestroyedEvent destroyedEvent; // 0x1C
    private AmmoVisual ammoVisual; // 0x20
    private AmmoAnimation ammoAnimation; // 0x24
    private LayerMask enemyLayerMask; // 0x28
    private LayerMask playerLayerMask; // 0x2C
    private LayerMask bossLayerMask; // 0x30
    private Vector2 trajectoryStartPoint; // 0x34
    private Vector2 target; // 0x3C
    private Vector2 trajectoryRange; // 0x44
    private Vector2 ammoMoveDirection; // 0x4C
    private float nextYTrajectoryPosition; // 0x54
    private float nextXTrajectoryPosition; // 0x58
    private float trajectoryMaxRelativeHeight; // 0x5C
    private float nextPositionYCorrectionAbsolute; // 0x60
    private float nextPositionXCorrectionAbsolute; // 0x64
    private float speed; // 0x68
    [SerializeField]
    private int poiseAmount; // 0x6C
    [SerializeField]
    private float stunDuration; // 0x70
    public AmmoState ammoState; // 0x74
    private bool isColliding; // 0x78
    [SerializeField]
    private SoundEffectSO shootSoundEffect; // 0x7C
    private bool isFirstOnEnable; // 0x80

    // Methods

    // RVA: 0x3676 Offset: 0x3676 VA: 0x3676
    private void Awake()
    {
        EnemyEffect pEVar1 = default;
        PlayerEffect pPVar2 = default;
        DestroyedEvent pDVar3 = default;
        AmmoVisual pAVar4 = default;
        AmmoAnimation pAVar5 = default;

        pEVar1 = (EnemyEffect)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e84);
        this.enemyEffect = pEVar1;
        pPVar2 = (PlayerEffect)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef4);
        this.playerEffect = pPVar2;
        pDVar3 = (DestroyedEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        this.destroyedEvent = pDVar3;
        pAVar4 = (AmmoVisual)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e10);
        this.ammoVisual = pAVar4;
        pAVar5 = (AmmoAnimation)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e0c);
        this.ammoAnimation = pAVar5;
    }

    // RVA: 0x3677 Offset: 0x3677 VA: 0x3677
    private void OnEnable()
    {
        int param2 = default;
        int iVar1 = default;

        Vector2[] local_10 = new Vector2[2];
        param2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(local_10,param2,0);
        this.trajectoryStartPoint = local_10[0];
        if (this.isFirstOnEnable == false) {
            iVar1 = Raw.Read<int>(DAT_ram_00565d6c + 0x10);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = unnamed_function_95087(iVar1);
            }
            iVar1 = Raw.Read<int>(Raw.Read<int>(iVar1 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = unnamed_function_95087(iVar1);
            }
            ((SoundEffectManager)Raw.Deref(Raw.Read<object>(iVar1 + 0x5c))).PlaySoundEffect(this.shootSoundEffect);
        }
        else {
            this.isFirstOnEnable = false;
        }
    }

    // RVA: 0x3678 Offset: 0x3678 VA: 0x3678
    private void Start()
    {
        this.GetLayerMark();
    }

    // RVA: 0x3679 Offset: 0x3679 VA: 0x3679
    private void Update()
    {
        if (this.ammoState == Linear) {
            this.MoveAmmoByDirection();
        }
        else if (this.ammoState != Freeze) {
            this.UpdateAmmoPosition();
            return;
        }
    }

    // RVA: 0x367A Offset: 0x367A VA: 0x367A
    private void UpdateAmmoPosition()
    {
        float fVar1 = default;
        float fVar2 = default;
        Vector2 VVar3 = default;
        float fVar4 = default;

        fVar2 = this.target.y - this.trajectoryStartPoint.y;
        fVar4 = this.target.x - this.trajectoryStartPoint.x;
        VVar3.y = fVar2;
        VVar3.x = fVar4;
        this.trajectoryRange = VVar3;
        fVar2 = Mathf.Sqrt(fVar4 * fVar4 + fVar2 * fVar2);
        if (1e-05 < fVar2) {
            fVar4 = fVar4 / fVar2;
        }
        else {
            fVar4 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        }
        fVar1 = this.trajectoryRange.y;
        fVar2 = this.trajectoryRange.x;
        fVar2 = Mathf.Sqrt(fVar2 * fVar2 + fVar1 * fVar1);
        if (1e-05 < fVar2) {
            fVar1 = fVar1 / fVar2;
        }
        else {
            fVar1 = Raw.Read<float>(Raw.Read<int>(UnityEngine_Vector2_TypeInfo + 0x5c) + 4);
        }
        if (Mathf.Abs(fVar4) < Mathf.Abs(fVar1)) {
            if (this.trajectoryRange.y < 0.0) {
                this.speed = -this.speed;
            }
            this.UpdateAmmoXPosition();
            return;
        }
        if (this.trajectoryRange.x < 0.0) {
            this.speed = -this.speed;
        }
        this.UpdateAmmoYPosition();
    }

    // RVA: 0x367B Offset: 0x367B VA: 0x367B
    private void UpdateAmmoXPosition()
    {
        float fVar1 = default;
        int uVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;
        float param2 = default;
        Vector2 VVar8 = default;
        float fVar9 = default;
        long local_30 = default;
        int local_28 = default;
        float local_20 = default;
        float local_1c = default;
        int local_18 = default;
        float local_10 = default;
        float local_c = default;

        uVar2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar2,0);
        fVar1 = local_c;
        fVar5 = this.speed;
        fVar3 = UnityEngine.Time.get_deltaTime(0);
        fVar7 = (float)fVar1 + fVar5 * fVar3;
        param2 = (fVar7 - this.trajectoryStartPoint.y) / this.trajectoryRange.y;
        fVar5 = UnityEngine.AnimationCurve.Evaluate(this.ammoDetailsSO.trajectoryAnimationCurve,param2,0);
        fVar4 = UnityEngine.AnimationCurve.Evaluate(this.ammoDetailsSO.axisCorrectionAnimationCurve,param2,0);
        fVar9 = this.trajectoryRange.x;
        this.nextPositionXCorrectionAbsolute = fVar4 * fVar9;
        fVar3 = fVar5 * this.trajectoryMaxRelativeHeight;
        this.nextXTrajectoryPosition = fVar3;
        if ((0.0 < fVar9) && (0.0 < this.trajectoryRange.y)) {
            fVar3 = -fVar3;
            this.nextXTrajectoryPosition = fVar3;
        }
        if ((fVar9 < 0.0) && (this.trajectoryRange.y < 0.0)) {
            fVar3 = -fVar3;
            this.nextXTrajectoryPosition = fVar3;
        }
        fVar6 = this.trajectoryStartPoint.x;
        uVar2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar2,0);
        fVar4 = fVar4 * fVar9 + fVar6 + fVar3;
        VVar8.x = fVar4 - (float)local_10;
        VVar8.y = fVar7 - (float)local_c;
        this.ammoMoveDirection = VVar8;
        fVar3 = UnityEngine.AnimationCurve.Evaluate(this.ammoDetailsSO.ammoSpeedAnimationCurve,fVar5,0);
        this.speed = fVar3 * this.ammoDetailsSO.maxSpeed;
        uVar2 = UnityEngine.Component.get_transform(this,0);
        local_18 = 0;
        local_28 = 0;
        local_30 = CONCAT44(fVar7,fVar4);
        local_20 = (float)fVar4;
        local_1c = (float)fVar7;
        unnamed_function_44962(uVar2,&local_30,0);
        if (0.996 < param2) {
            this.ammoState = Linear;
        }
    }

    // RVA: 0x367C Offset: 0x367C VA: 0x367C
    private void UpdateAmmoYPosition()
    {
        float fVar1 = default;
        int uVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        float param2 = default;
        Vector2 VVar7 = default;
        float fVar8 = default;
        long local_30 = default;
        int local_28 = default;
        float local_20 = default;
        float local_1c = default;
        int local_18 = default;
        float local_10 = default;
        float local_c = default;

        uVar2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar2,0);
        fVar1 = local_10;
        fVar4 = this.speed;
        fVar3 = UnityEngine.Time.get_deltaTime(0);
        fVar6 = (float)fVar1 + fVar4 * fVar3;
        param2 = (fVar6 - this.trajectoryStartPoint.x) / this.trajectoryRange.x;
        fVar3 = UnityEngine.AnimationCurve.Evaluate(this.ammoDetailsSO.trajectoryAnimationCurve,param2,0);
        fVar4 = UnityEngine.AnimationCurve.Evaluate(this.ammoDetailsSO.axisCorrectionAnimationCurve,param2,0);
        fVar8 = this.trajectoryRange.y;
        this.nextPositionYCorrectionAbsolute = fVar4 * fVar8;
        fVar3 = fVar3 * this.trajectoryMaxRelativeHeight;
        this.nextYTrajectoryPosition = fVar3;
        fVar5 = this.trajectoryRange.x;
        if ((0.0 < fVar5) && (fVar8 < 0.0)) {
            fVar3 = -fVar3;
            this.nextYTrajectoryPosition = fVar3;
        }
        if ((fVar5 < 0.0) && (fVar8 < 0.0)) {
            fVar3 = -fVar3;
            this.nextYTrajectoryPosition = fVar3;
        }
        fVar5 = this.trajectoryStartPoint.y;
        uVar2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar2,0);
        VVar7.x = fVar6 - (float)local_10;
        fVar4 = fVar4 * fVar8 + fVar5 + fVar3;
        VVar7.y = fVar4 - (float)local_c;
        this.ammoMoveDirection = VVar7;
        fVar3 = UnityEngine.AnimationCurve.Evaluate(this.ammoDetailsSO.ammoSpeedAnimationCurve,param2,0);
        this.speed = fVar3 * this.ammoDetailsSO.maxSpeed;
        uVar2 = UnityEngine.Component.get_transform(this,0);
        local_18 = 0;
        local_28 = 0;
        local_30 = CONCAT44(fVar4,fVar6);
        local_20 = (float)fVar6;
        local_1c = (float)fVar4;
        unnamed_function_44962(uVar2,&local_30,0);
        if (0.996 < param2) {
            this.ammoState = Linear;
        }
    }

    // RVA: 0x367D Offset: 0x367D VA: 0x367D
    public Vector2 GetAmmoMoveDirection()
    {
        return this.ammoMoveDirection;
    }

    // RVA: 0x367E Offset: 0x367E VA: 0x367E
    public float GetNextYTrajectoryPosition()
    {
        return this.nextYTrajectoryPosition;
    }

    // RVA: 0x367F Offset: 0x367F VA: 0x367F
    public float GetNextPositionYCorrectionAbsolute()
    {
        return this.nextPositionYCorrectionAbsolute;
    }

    // RVA: 0x3680 Offset: 0x3680 VA: 0x3680
    private void MoveAmmoByDirection()
    {
        int param2 = default;
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        long local_30 = default;
        float local_28 = default;
        float local_20 = default;
        float local_1c = default;
        float local_18 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        param2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,param2,0);
        fVar1 = this.ammoMoveDirection.y;
        fVar2 = this.ammoMoveDirection.x;
        fVar3 = Mathf.Sqrt(fVar2 * fVar2 + fVar1 * fVar1);
        if (1e-05 < fVar3) {
            fVar1 = fVar1 / fVar3;
            fVar2 = fVar2 / fVar3;
        }
        else {
            fVar1 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
            fVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        }
        fVar4 = this.ammoDetailsSO.maxSpeed;
        fVar3 = UnityEngine.Time.get_deltaTime(0);
        local_28 = (float)local_8 + fVar4 * 0.0 * fVar3;
        local_1c = (float)((float)local_c + fVar3 * fVar1 * fVar4);
        local_20 = (float)((float)local_10 + fVar3 * fVar2 * fVar4);
        local_30 = CONCAT44(local_1c,local_20);
        local_18 = (float)local_28;
        unnamed_function_44962(param2,&local_30,0);
    }

    // RVA: 0x3681 Offset: 0x3681 VA: 0x3681
    private void CalculateNextAmmoMoveSpeed(float nextPositionXNormalized)
    {
        float fVar1 = default;

        fVar1 = UnityEngine.AnimationCurve.Evaluate(this.ammoDetailsSO.ammoSpeedAnimationCurve,nextPositionXNormalized,0);
        this.speed = fVar1 * this.ammoDetailsSO.maxSpeed;
    }

    // RVA: 0x3682 Offset: 0x3682 VA: 0x3682 Slot: 4
    public void InitialiseAmmo(AmmoDetailsSO ammoDetailsSO, Vector3 target)
    {
        float fVar1 = default;
        float fVar2 = default;
        int uVar3 = default;
        int param2 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;
        float local_10 = default;
        float local_c = default;
        float local_8 = default;

        this.ammoDetailsSO = ammoDetailsSO;
        fVar4 = target.x;
        fVar5 = target.y;
        fVar1 = target.x;
        fVar2 = target.y;
        fVar6 = target.z;
        uVar3 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar3,0);
        fVar6 = fVar6 - (float)local_8;
        fVar5 = fVar5 - (float)local_c;
        fVar4 = fVar4 - (float)local_10;
        uVar3 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar3,0);
        fVar7 = ammoDetailsSO.trajectoryMaxHeight;
        this.target.x = fVar1;
        this.target.y = fVar2;
        this.trajectoryMaxRelativeHeight = fVar7 * Mathf.Abs(Mathf.Sqrt(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6));
        uVar3 = UnityEngine.Component.get_gameObject(this,0);
        param2 = UnityEngine.LayerMask.NameToLayer("EnemyAmmo",0);
        UnityEngine.GameObject.set_layer(uVar3,param2,0);
        this.isColliding = false;
        this.ammoState = Trajectory;
        this.ammoAnimation.InitializeAmmoAnimation();
        uVar3 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(uVar3,1,0);
    }

    // RVA: 0x3683 Offset: 0x3683 VA: 0x3683
    private void SetAmmoPlayer()
    {
        int param1 = default;
        int param2 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        param2 = UnityEngine.LayerMask.NameToLayer("EnemyAmmo",0);
        UnityEngine.GameObject.set_layer(param1,param2,0);
    }

    // RVA: 0x3684 Offset: 0x3684 VA: 0x3684
    private void SetTargetPosition(Vector3 target)
    {
        float fVar1 = default;

        fVar1 = target.y;
        this.target.x = target.x;
        this.target.y = fVar1;
    }

    // RVA: 0x3685 Offset: 0x3685 VA: 0x3685
    private void SetGameObjectActive(bool isActive)
    {
        uint in_register_20000011 = default;
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,CONCAT31(in_register_20000011,isActive),0);
    }

    // RVA: 0x3686 Offset: 0x3686 VA: 0x3686
    private void OnTriggerEnter2D(Collider2D collision)
    {
        sbyte cVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        uint uVar4 = default;
        PlayerEffect __this_00 = default;
        int param1 = default;
        EnemyEffect __this_01 = default;
        GameResources pGVar5 = default;
        int iVar6 = default;
        BossEffect __this_02 = default;
        uint uVar7 = default;
        Material pMVar8 = default;
        Material pMVar9 = default;
        int uVar10 = default;
        int iVar11 = default;
        float fVar12 = default;
        int iVar13 = default;
        Vector2 local_40 = default;
        float local_38 = default;
        Vector2 local_30 = default;
        float local_28 = default;
        Vector2 local_20 = default;
        Vector2 local_18 = default;
        Vector2 local_10 = default;
        float local_8 = default;

        if (this.isColliding == false) {
            iVar2 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567f04);
            if ((iVar2 != 0) && (Raw.Read<sbyte>(iVar2 + 0x18) == '\0')) {
                iVar13 = this.ammoDetailsSO.damage;
                if (0 < Raw.Read<int>(iVar2 + 0x10)) {
                    iVar13 = Raw.Read<int>(iVar2 + 0x10);
                }
                (Raw.Read<object>(iVar2 + 0x14)).TakeDamage(iVar13);
            }
            uVar7 = this.playerLayerMask.m_Mask;
            uVar3 = UnityEngine.Component.get_gameObject(collision,0);
            uVar4 = UnityEngine.GameObject.get_layer(uVar3,0);
            if (0 < (int)(uVar7 & 1 << (uVar4 & 0x1f))) {
                __this_00 = (PlayerEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef4);
                uVar3 = UnityEngine.Component.get_transform(this,0);
                UnityEngine.Transform.get_position(&local_10,uVar3,0);
                local_18 = local_10;
                local_20 = local_10;
                __this_00.DamagePushEfect(&local_20);
                uVar3 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef4);
                pGVar5 = GameResources.Instance;
                pMVar8 = pGVar5.damegeFlashMaterial;
                pGVar5 = GameResources.Instance;
                pMVar9 = pGVar5.litMaterial;
                uVar10 = UnityEngine.Component.GetComponentsInChildren<object>(collision,DAT_ram_00567fe8);
                param1 = UnityEngine.Component.get_gameObject(uVar3,0);
                iVar2 = UnityEngine.GameObject.get_activeSelf(param1,0);
                if (iVar2 != 0) {
                    iVar2 = new PlayerEffect__DamageFlashCoroutine_d__10();
                    Raw.Write<int>(iVar2 + 0x18, uVar3);
                    Raw.Write<int>(iVar2 + 8, 0);
                    Raw.Write<object>(iVar2 + 0x1c, pMVar9);
                    Raw.Write<object>(iVar2 + 0x14, pMVar8);
                    Raw.Write<int>(iVar2 + 0x10, uVar10);
                    UnityEngine.MonoBehaviour.StartCoroutine(uVar3,iVar2,0);
                }
            }
            uVar7 = this.enemyLayerMask.m_Mask;
            uVar3 = UnityEngine.Component.get_gameObject(collision,0);
            uVar4 = UnityEngine.GameObject.get_layer(uVar3,0);
            if (0 < (int)(uVar7 & 1 << (uVar4 & 0x1f))) {
                __this_01 = (EnemyEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e84);
                if (__this_01 != (EnemyEffect)0x0) {
                    uVar3 = UnityEngine.Component.get_transform(this,0);
                    UnityEngine.Transform.get_position(&local_10,uVar3,0);
                    local_28 = local_8;
                    local_30 = local_10;
                    __this_01.DamagePushEfect((Vector3)&local_30);
                }
                iVar2 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e84);
                if (iVar2 != 0) {
                    pGVar5 = GameResources.Instance;
                    pMVar8 = pGVar5.damegeFlashMaterial;
                    pGVar5 = GameResources.Instance;
                    pMVar9 = pGVar5.litMaterial;
                    uVar3 = UnityEngine.Component.GetComponentsInChildren<object>(collision,DAT_ram_00567fe8);
                    uVar10 = UnityEngine.Component.get_gameObject(iVar2,0);
                    iVar13 = UnityEngine.GameObject.get_activeSelf(uVar10,0);
                    if (iVar13 != 0) {
                        iVar13 = new EnemyEffect__DamageFlashCoroutine_d__9();
                        Raw.Write<int>(iVar13 + 0x18, iVar2);
                        Raw.Write<int>(iVar13 + 8, 0);
                        Raw.Write<object>(iVar13 + 0x1c, pMVar9);
                        Raw.Write<object>(iVar13 + 0x14, pMVar8);
                        Raw.Write<int>(iVar13 + 0x10, uVar3);
                        UnityEngine.MonoBehaviour.StartCoroutine(iVar2,iVar13,0);
                    }
                }
                iVar2 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef8);
                iVar13 = this.poiseAmount;
                fVar12 = Raw.Read<float>(iVar2 + 0x18) - (float)iVar13;
                Raw.Write<float>(iVar2 + 0x18, fVar12);
                if (fVar12 <= 0.0) {
                    uVar3 = Raw.Read<int>(iVar2 + 0x1c);
                    uVar10 = Raw.Read<int>(iVar2 + 0x14);
                    iVar2 = Raw.Read<int>(iVar2 + 0x10);
                    iVar11 = Raw.Read<int>(iVar2 + 0x10);
                    if (iVar11 != 0) {
                        iVar6 = new PoiseEventArgs();
                        Raw.Write<int>(iVar6 + 0x14, uVar3);
                        Raw.Write<int>(iVar6 + 0x10, uVar10);
                        Raw.Write<float>(iVar6 + 0xc, fVar12);
                        Raw.Write<float>(iVar6 + 8, (float)iVar13);
                        Raw.VCall((ulong)Raw.Read<uint>(iVar11 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar11 + 0x20),iVar2,iVar6,Raw.Read<int>(iVar11 + 0x14));
                    }
                }
            }
            uVar7 = this.bossLayerMask.m_Mask;
            uVar3 = UnityEngine.Component.get_gameObject(collision,0);
            uVar4 = UnityEngine.GameObject.get_layer(uVar3,0);
            if (0 < (int)(uVar7 & 1 << (uVar4 & 0x1f))) {
                iVar2 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567ef8);
                iVar13 = this.poiseAmount;
                fVar12 = Raw.Read<float>(iVar2 + 0x18) - (float)iVar13;
                Raw.Write<float>(iVar2 + 0x18, fVar12);
                if (fVar12 <= 0.0) {
                    uVar3 = Raw.Read<int>(iVar2 + 0x1c);
                    uVar10 = Raw.Read<int>(iVar2 + 0x14);
                    iVar2 = Raw.Read<int>(iVar2 + 0x10);
                    iVar11 = Raw.Read<int>(iVar2 + 0x10);
                    if (iVar11 != 0) {
                        iVar6 = new PoiseEventArgs();
                        Raw.Write<int>(iVar6 + 0x14, uVar3);
                        Raw.Write<int>(iVar6 + 0x10, uVar10);
                        Raw.Write<float>(iVar6 + 0xc, fVar12);
                        Raw.Write<float>(iVar6 + 8, (float)iVar13);
                        Raw.VCall((ulong)Raw.Read<uint>(iVar11 + 0xc) * 4) /* virtual */ (Raw.Read<int>(iVar11 + 0x20),iVar2,iVar6,Raw.Read<int>(iVar11 + 0x14));
                    }
                }
                __this_02 = (BossEffect)UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e34);
                if (__this_02 != (BossEffect)0x0) {
                    uVar3 = UnityEngine.Component.get_transform(this,0);
                    UnityEngine.Transform.get_position(&local_10,uVar3,0);
                    local_38 = local_8;
                    local_40 = local_10;
                    __this_02.PushBossByWeapon((Vector3)&local_40);
                }
                iVar2 = UnityEngine.Component.GetComponent<object>(collision,DAT_ram_00567e34);
                if (iVar2 != 0) {
                    cVar1 = Raw.Read<sbyte>(iVar2 + 0x3c);
                    uVar3 = Raw.Read<int>(iVar2 + 0x40);
                    iVar2 = 0x6c;
                    if (cVar1 == '\0') {
                        iVar2 = 0x38;
                    }
                    unnamed_function_45425(uVar3,Raw.Read<int>(Raw.Read<int>(Settings_TypeInfo + 0x5c) + iVar2),0);
                }
            }
            this.AmmoHitEffect();
            uVar3 = UnityEngine.Component.get_gameObject(this,0);
            UnityEngine.GameObject.SetActive(uVar3,0,0);
            this.isColliding = true;
        }
    }

    // RVA: 0x3687 Offset: 0x3687 VA: 0x3687
    private void AmmoHitEffect()
    {
        GameResources pGVar1 = default;
        int uVar2 = default;
        UnityEngine.Component param1 = default;
        int iVar3 = default;
        PoolManager __this_00 = default;
        UnityEngine.GameObject prefab = default;
        AmmoDetailsSO pAVar4 = default;
        MethodInfo MStack_d0 = default;
        long local_b0 = default;
        long local_a8 = default;
        int local_a0 = default;
        long local_98 = default;
        long local_90 = default;
        Quaternion local_88 = default;
        Vector3 local_78 = default;
        Quaternion local_68 = default;
        Vector3 local_58 = default;
        long local_48 = default;
        long local_40 = default;
        long local_20 = default;
        long local_18 = default;
        int local_10 = default;

        long[] local_38 = new long[3];
        int[] local_8 = new int[2];
        iVar3 = Raw.Read<int>(DAT_ram_00565d64 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = unnamed_function_95087(iVar3);
        }
        __this_00 = (PoolManager)Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
        pGVar1 = GameResources.get_Instance(&MStack_d0);
        prefab = (UnityEngine.GameObject)pGVar1.ammoHitEffectPrefab;
        uVar2 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_58,uVar2,0);
        local_88._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_88._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_78.z = local_58.z;
        local_78.x = local_58.x;
        local_78.y = local_58.y;
        local_68._0_8_ = local_88._0_8_;
        local_68._8_8_ = local_88._8_8_;
        param1 = __this_00.ReuseComponent(prefab, &local_78, &local_88);
        pAVar4 = this.ammoDetailsSO;
        local_90._0_4_ = pAVar4.ammoEffectType.b;
        local_90._4_4_ = pAVar4.ammoEffectType.a;
        local_98._0_4_ = pAVar4.ammoEffectType.r;
        local_98._4_4_ = pAVar4.ammoEffectType.g;
        if (AmmoHitEffect_TypeInfo != Raw.Read<int>(Raw.Read<int>(param1._opaque + 100) + (uint)Raw.Read<byte>(AmmoHitEffect_TypeInfo + 0xb8) * 4 + -4)) {
            param1 = (UnityEngine.Component)0x0;
        }
        local_8[0] = param1[4]._opaque;
        local_48 = local_98;
        local_40 = local_90;
        unnamed_function_86814(local_38,&local_98,0);
        local_a0 = local_10;
        local_a8 = local_18;
        local_b0 = local_20;
        MStack_d0._24_8_ = local_38[2];
        MStack_d0._16_8_ = local_38[1];
        MStack_d0._8_8_ = local_38[0];
        unnamed_function_86787(local_8,&MStack_d0.field_0x8,0);
        uVar2 = UnityEngine.Component.get_gameObject(param1,0);
        UnityEngine.GameObject.SetActive(uVar2,1,0);
    }

    // RVA: 0x3688 Offset: 0x3688 VA: 0x3688
    private void GetLayerMark()
    {
        int iVar1 = default;

        iVar1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar1 + 0x10, "Enemy");
        iVar1 = UnityEngine.LayerMask.GetMask(iVar1,0);
        this.enemyLayerMask.m_Mask = iVar1;
        iVar1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar1 + 0x10, "Player");
        iVar1 = UnityEngine.LayerMask.GetMask(iVar1,0);
        this.playerLayerMask.m_Mask = iVar1;
        iVar1 = unnamed_function_1050(string___TypeInfo,1);
        Raw.Write<object>(iVar1 + 0x10, "Boss");
        iVar1 = UnityEngine.LayerMask.GetMask(iVar1,0);
        this.bossLayerMask.m_Mask = iVar1;
    }

    // RVA: 0x3689 Offset: 0x3689 VA: 0x3689
    private void DisableAmmo()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }

    // RVA: 0x368A Offset: 0x368A VA: 0x368A
    public Ammo()
    {
        this.isFirstOnEnable = true;
        unnamed_function_44622(this,0);
    }
}
