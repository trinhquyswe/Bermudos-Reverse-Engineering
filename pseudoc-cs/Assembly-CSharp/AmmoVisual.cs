// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/AmmoVisual.c by tools/c2cs.py
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

public class AmmoVisual : MonoBehaviour // TypeDefIndex: 5539
{
    // Fields
    private Ammo ammo; // 0x10
    private Vector2 target; // 0x14

    // Methods

    // RVA: 0x3692 Offset: 0x3692 VA: 0x3692
    private void Awake()
    {
        Ammo pAVar1 = default;

        pAVar1 = (Ammo)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e08);
        this.ammo = pAVar1;
    }

    // RVA: 0x3693 Offset: 0x3693 VA: 0x3693
    private void Start()
    {

    }

    // RVA: 0x3694 Offset: 0x3694 VA: 0x3694
    private void Update()
    {
        float fVar1 = default;
        int param1 = default;
        Ammo param1_00 = default;
        Vector2 VVar2 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        float local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        float local_8 = default;

        param1_00 = this.ammo;
        VVar2 = param1_00.ammoMoveDirection;
        fVar1 = unnamed_function_12077(VVar2.y,VVar2.x);
        param1 = UnityEngine.Component.get_transform(param1_00,0);
        local_28 = fVar1 * 57.29578 * 0.017453292;
        local_30 = 0;
        local_10 = 0;
        local_8 = (float)local_28;
        UnityEngine.Quaternion.Internal_FromEulerRad(&local_20,&local_30,0);
        local_38 = local_18;
        local_40 = local_20;
        unnamed_function_44967(param1,&local_40,0);
    }

    // RVA: 0x3695 Offset: 0x3695 VA: 0x3695
    private void UpdateAmmoRotation()
    {
        float fVar1 = default;
        int param1 = default;
        Ammo param1_00 = default;
        Vector2 VVar2 = default;
        long local_40 = default;
        long local_38 = default;
        long local_30 = default;
        float local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        float local_8 = default;

        param1_00 = this.ammo;
        VVar2 = param1_00.ammoMoveDirection;
        fVar1 = unnamed_function_12077(VVar2.y,VVar2.x);
        param1 = UnityEngine.Component.get_transform(param1_00,0);
        local_28 = fVar1 * 57.29578 * 0.017453292;
        local_30 = 0;
        local_10 = 0;
        local_8 = (float)local_28;
        UnityEngine.Quaternion.Internal_FromEulerRad(&local_20,&local_30,0);
        local_38 = local_18;
        local_40 = local_20;
        unnamed_function_44967(param1,&local_40,0);
    }

    // RVA: 0x3696 Offset: 0x3696 VA: 0x3696
    public void SetTarget(Vector2 target)
    {
        this.target = *target;
    }

    // RVA: 0x3697 Offset: 0x3697 VA: 0x3697
    public AmmoVisual()
    {
        unnamed_function_44622(this,0);
    }
}
