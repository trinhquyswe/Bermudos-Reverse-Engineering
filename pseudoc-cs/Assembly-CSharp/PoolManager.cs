// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/PoolManager.c by tools/c2cs.py
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

public class PoolManager : SingletonMonobehaviourPersistent<PoolManager> // TypeDefIndex: 5692
{
    // Fields
    [SerializeField]
    [Tooltip("Populate this array with prefabs that you want to add to the pool, and specify the number of gameobjects to be created for each.")]
    private PoolManager.Pool[] poolArray; // 0x10
    private Transform objectPoolTransform; // 0x14
    private Dictionary<int, Queue<Component>> poolDictionary; // 0x18

    // Methods

    // RVA: 0x39B9 Offset: 0x39B9 VA: 0x39B9 Slot: 4
    protected override void Awake()
    {
        MethodInfo method_00 = default;
        int param1 = default;
        RuleTile_TilingRuleOutput_Transform RVar1 = default;
        int iVar2 = default;

        method_00 = null;
        SingletonMonobehaviourPersistent<object>.Awake(this,DAT_ram_00565d60);
        param1 = UnityEngine.Component.get_gameObject(this,0);
        RVar1 = UnityEngine.GameObject.get_transform(param1,0);
        this.objectPoolTransform = RVar1;
        iVar2 = Raw.Read<int>(this).poolArray;
        if (0 < Raw.Read<int>(iVar2 + 0xc)) {
            do {
                iVar2 = iVar2 + (int)method_00 * 0xc;
                this.CreatePool(Raw.Read<object>(iVar2 + 0x14), Raw.Read<int>(iVar2 + 0x10), Raw.Read<object>(iVar2 + 0x18), method_00);
                method_00 = ((int)&method_00._opaque0 + 1);
                iVar2 = Raw.Read<int>(this).poolArray;
            } while ((int)method_00 < Raw.Read<int>(iVar2 + 0xc));
        }
    }

    // RVA: 0x39BA Offset: 0x39BA VA: 0x39BA
    private void CreatePool(GameObject prefab, int poolSize, string componentType)
    {
        int param2 = default;
        int uVar1 = default;
        int param1 = default;
        int iVar2 = default;
        int param1_00 = default;
        int param2_00 = default;
        Dictionary param1_01 = default;

        param2 = UnityEngine.Object.GetInstanceID(prefab,0);
        uVar1 = UnityEngine.Object.get_name(prefab,0);
        uVar1 = System.String.Concat(uVar1," Anchor",0);
        param1 = new UnityEngine_GameObject();
        UnityEngine.GameObject.__ctor(param1,uVar1,0);
        uVar1 = UnityEngine.GameObject.get_transform(param1,0);
        unnamed_function_44984(uVar1,this.objectPoolTransform,0);
        iVar2 = unnamed_function_17516(this.poolDictionary,param2,DAT_ram_00560014);
        if (iVar2 == 0) {
            param1_01 = this.poolDictionary;
            uVar1 = new System_Collections_Generic_Queue_Component_();
            unnamed_function_30856(uVar1,DAT_ram_005657c8);
            System.Collections.Generic.Dictionary<int, object>.Add(param1_01,param2,uVar1,DAT_ram_00560010);
            if (0 < poolSize) {
                iVar2 = 0;
                do {
                    uVar1 = UnityEngine.GameObject.get_transform(param1,0);
                    uVar1 = UnityEngine.Object.Instantiate<object>(prefab,uVar1,DAT_ram_0056b53c);
                    UnityEngine.GameObject.SetActive(uVar1,0,0);
                    param1_00 = unnamed_function_78417(this.poolDictionary,param2,DAT_ram_00560018);
                    param2_00 = unnamed_function_1131(componentType,DAT_ram_0056d44c,DAT_ram_0056b9bc);
                    uVar1 = UnityEngine.GameObject.GetComponent(uVar1,param2_00,0);
                    System.Collections.Generic.Queue<object>.Enqueue(param1_00,uVar1,DAT_ram_005657d0);
                    iVar2 = iVar2 + 1;
                } while (iVar2 != poolSize);
            }
        }
    }

    // RVA: 0x39BB Offset: 0x39BB VA: 0x39BB
    public Component ReuseComponent(GameObject prefab, Vector3 position, Quaternion rotation)
    {
        UnityEngine.Component param1 = default;
        int poolKey = default;
        int iVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        MethodInfo local_50 = default;
        long local_30 = default;
        float local_28 = default;
        long local_20 = default;
        long local_18 = default;

        long[] local_10 = new long[2];
        poolKey = UnityEngine.Object.GetInstanceID(prefab,0);
        iVar1 = unnamed_function_17516(this.poolDictionary,poolKey,DAT_ram_00560014);
        uVar3 = "No object pool for ";
        if (iVar1 == 0) {
            if (prefab == (UnityEngine.GameObject)0x0) {
                uVar2 = 0;
            }
            else {
                uVar2 = Raw.VCall((ulong)Raw.Read<uint>(prefab._opaque + 0xd8) * 4) /* virtual */ (prefab,Raw.Read<int>(prefab._opaque + 0xdc));
            }
            uVar3 = System.String.Concat(uVar3,uVar2,0);
            param1 = (UnityEngine.Component)0x0;
            UnityEngine.Debug.Log(uVar3,0);
        }
        else {
            param1 = this.GetComponentFromPool(poolKey, &local_50);
            local_18._0_4_ = rotation.z;
            local_18._4_4_ = rotation.w;
            local_20._0_4_ = rotation.x;
            local_20._4_4_ = rotation.y;
            uVar3 = UnityEngine.Component.get_transform(param1,0);
            local_28 = position.z;
            local_30._0_4_ = position.x;
            local_30._4_4_ = position.y;
            unnamed_function_44962(uVar3,&local_30,0);
            uVar3 = UnityEngine.Component.get_transform(param1,0);
            local_50._24_8_ = local_18;
            local_50._16_8_ = local_20;
            unnamed_function_44967(uVar3,&local_50.field_0x10,0);
            uVar3 = UnityEngine.Component.get_gameObject(param1,0);
            uVar3 = UnityEngine.GameObject.get_transform(uVar3,0);
            uVar2 = UnityEngine.GameObject.get_transform(prefab,0);
            UnityEngine.Transform.get_localScale(local_10,uVar2,0);
            local_50._8_4_ = (int)local_10[1];
            local_50._opaque0 = (int)local_10[0];
            local_50._opaque1 = local_10[0]._4_4_;
            unnamed_function_44982(uVar3,&local_50,0);
        }
        return param1;
    }

    // RVA: 0x39BC Offset: 0x39BC VA: 0x39BC
    private Component GetComponentFromPool(int poolKey)
    {
        int uVar1 = default;
        UnityEngine.Component param2 = default;
        int iVar2 = default;

        uVar1 = unnamed_function_78417(this.poolDictionary,poolKey,DAT_ram_00560018);
        param2 = (UnityEngine.Component)System.Collections.Generic.Queue<object>.Dequeue(uVar1,DAT_ram_005657cc);
        uVar1 = unnamed_function_78417(this.poolDictionary,poolKey,DAT_ram_00560018);
        System.Collections.Generic.Queue<object>.Enqueue(uVar1,param2,DAT_ram_005657d0);
        uVar1 = UnityEngine.Component.get_gameObject(param2,0);
        iVar2 = UnityEngine.GameObject.get_activeSelf(uVar1,0);
        if (iVar2 != 0) {
            uVar1 = UnityEngine.Component.get_gameObject(param2,0);
            UnityEngine.GameObject.SetActive(uVar1,0,0);
        }
        return param2;
    }

    // RVA: 0x39BD Offset: 0x39BD VA: 0x39BD
    private void ResetObject(Vector3 position, Quaternion rotation, Component componentToReuse, GameObject prefab)
    {
        int uVar1 = default;
        int param2 = default;
        long local_40 = default;
        int local_38 = default;
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        float local_18 = default;
        long local_10 = default;
        int local_8 = default;

        uVar1 = UnityEngine.Component.get_transform(componentToReuse,0);
        local_18 = position.z;
        local_20._0_4_ = position.x;
        local_20._4_4_ = position.y;
        unnamed_function_44962(uVar1,&local_20,0);
        uVar1 = UnityEngine.Component.get_transform(componentToReuse,0);
        local_28._0_4_ = rotation.z;
        local_28._4_4_ = rotation.w;
        local_30._0_4_ = rotation.x;
        local_30._4_4_ = rotation.y;
        unnamed_function_44967(uVar1,&local_30,0);
        uVar1 = UnityEngine.Component.get_gameObject(componentToReuse,0);
        uVar1 = UnityEngine.GameObject.get_transform(uVar1,0);
        param2 = UnityEngine.GameObject.get_transform(prefab,0);
        UnityEngine.Transform.get_localScale(&local_10,param2,0);
        local_38 = local_8;
        local_40 = local_10;
        unnamed_function_44982(uVar1,&local_40,0);
    }

    // RVA: 0x39BE Offset: 0x39BE VA: 0x39BE
    public PoolManager()
    {
        Dictionary param1 = default;

        param1 = (Dictionary) unnamed_function_95402 (System_Collections_Generic_Dictionary_int__Queue_Component___TypeInfo);
        unnamed_function_17497(param1,DAT_ram_0056000c);
        this.poolDictionary = param1;
        new AmmoAnimation(DAT_ram_00565d5c);
    }
}
