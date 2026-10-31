// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/EnemyAttack.c by tools/c2cs.py
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

public class EnemyAttack : MonoBehaviour // TypeDefIndex: 5589
{
    // Fields
    private Enemy enemy; // 0x10
    [SerializeField]
    private Transform shootPosition; // 0x14
    [SerializeField]
    private AmmoDetailsSO ammoDetailsSO; // 0x18
    [SerializeField]
    private float attackDistance; // 0x1C

    // Methods

    // RVA: 0x37B3 Offset: 0x37B3 VA: 0x37B3
    private void Awake()
    {
        Enemy pEVar1 = default;

        pEVar1 = (Enemy)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e78);
        this.enemy = pEVar1;
    }

    // RVA: 0x37B4 Offset: 0x37B4 VA: 0x37B4
    private void Start()
    {
        float param4 = default;

        param4 = UnityEngine.Random.Range(2.0,3.0,0);
        UnityEngine.MonoBehaviour.InvokeRepeating(this,"CallEnemyAttackState",3.0,param4,0);
    }

    // RVA: 0x37B5 Offset: 0x37B5 VA: 0x37B5
    public void Shoot()
    {
        UnityEngine.Component param1 = default;
        object param1_00 = default; // int*
        int param2 = default;
        object puVar1 = default; // uint*
        int iVar2 = default;
        UnityEngine.GameObject prefab = default;
        PoolManager __this_00 = default;
        AmmoDetailsSO pAVar3 = default;
        uint uVar4 = default;
        Vector3 local_60 = default;
        Quaternion local_50 = default;
        Vector3 local_40 = default;
        Vector3 local_30 = default;
        Quaternion local_20 = default;
        Vector3 local_10 = default;

        iVar2 = Raw.Read<int>(DAT_ram_00565d64 + 0x10);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = unnamed_function_95087(iVar2);
        }
        prefab = (UnityEngine.GameObject)this.ammoDetailsSO.ammoPrefab;
        __this_00 = (PoolManager)Raw.Deref(Raw.Read<object>(iVar2 + 0x5c));
        UnityEngine.Transform.get_position(&local_10,this.shootPosition,0);
        local_50._8_8_ = (Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
        local_50._0_8_ = Raw.Deref(Raw.Read<object>(UnityEngine_Quaternion_TypeInfo + 0x5c));
        local_40.z = local_10.z;
        local_40.x = local_10.x;
        local_40.y = local_10.y;
        local_20._0_8_ = local_50._0_8_;
        local_20._8_8_ = local_50._8_8_;
        param1 = __this_00.ReuseComponent(prefab, &local_40, &local_50);
        iVar2 = IFireable_TypeInfo;
        if (param1 != (UnityEngine.Component)0x0) {
            param1_00 = (object)unnamed_function_1112(param1,IFireable_TypeInfo);
            if (param1_00 == (object)0x0) {
                unnamed_function_1116(param1,iVar2);
                do {
                    throw null;
                } while( true );
            }
            pAVar3 = this.ammoDetailsSO;
            iVar2 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = unnamed_function_95087(iVar2);
            }
            iVar2 = Raw.Read<int>(Raw.Read<int>(iVar2 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = unnamed_function_95087(iVar2);
            }
            uVar4 = 0;
            param2 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar2 + 0x5c)) + 0x10),0);
            UnityEngine.Transform.get_position(&local_30,param2,0);
            local_10.z = local_30.z;
            local_10.x = local_30.x;
            local_10.y = local_30.y;
            iVar2 = *param1_00;
            if (Raw.Read<ushort>(iVar2 + 0xb6) != 0) {
                do {
                    if (IFireable_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar2 + 0x58) + uVar4 * 8)) {
                        puVar1 = (object)(iVar2 + Raw.Read<int>(Raw.Read<int>(iVar2 + 0x58) + uVar4 * 8 + 4) * 8 + 0xc0);
                        goto code_r0x81a513c4;
                    }
                    uVar4 = uVar4 + 1;
                } while (Raw.Read<ushort>(iVar2 + 0xb6) != uVar4);
            }
            puVar1 = (object)unnamed_function_95091(param1_00,IFireable_TypeInfo,0);
            code_r0x81a513c4: local_60.z = local_10.z;
            local_60.x = local_10.x;
            local_60.y = local_10.y;
            Raw.VCall((ulong)*puVar1 * 4) /* virtual */(param1_00,pAVar3,&local_60,puVar1[1]);
        }
    }

    // RVA: 0x37B6 Offset: 0x37B6 VA: 0x37B6
    private void CallEnemyAttackState()
    {
        float fVar1 = default;
        float fVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        float local_10 = default;
        float local_c = default;

        iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = unnamed_function_95087(iVar4);
        }
        iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = unnamed_function_95087(iVar4);
        }
        uVar3 = UnityEngine.Component.get_transform(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar4 + 0x5c)) + 0x10),0);
        UnityEngine.Transform.get_position(&local_10,uVar3,0);
        fVar2 = local_c;
        fVar1 = local_10;
        uVar3 = UnityEngine.Component.get_transform(this,0);
        UnityEngine.Transform.get_position(&local_10,uVar3,0);
        if (Mathf.Sqrt(((float)fVar1 - (float)local_10) * ((float)fVar1 - (float)local_10) + ((float)fVar2 - (float)local_c) * ((float)fVar2 - (float)local_c)) < this.attackDistance) {
            this.enemy.enemyStateEvent.CallEnemyStateEvent(Attacking);
        }
    }

    // RVA: 0x37B7 Offset: 0x37B7 VA: 0x37B7
    public EnemyAttack()
    {
        this.attackDistance = 8.0;
        unnamed_function_44622(this,0);
    }
}
