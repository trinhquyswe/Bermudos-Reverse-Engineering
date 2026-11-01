// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Weapon.c by tools/c2cs.py
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

public class Weapon : MonoBehaviour // TypeDefIndex: 5731
{
    // Fields
    private SpriteRenderer spriteRenderer; // 0x10
    [HideInInspector]
    public PolygonCollider2D polygonCollider2D; // 0x14
    private List<Vector2> spritePhysicsShapePointsList; // 0x18

    // Methods

    // RVA: 0x3AB2 Offset: 0x3AB2 VA: 0x3AB2
    private void Awake()
    {
        SpriteRenderer pSVar1 = default;
        int param1 = default;
        PolygonCollider2D pPVar2 = default;

        pSVar1 = (SpriteRenderer)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f24);
        this.spriteRenderer = pSVar1;
        param1 = UnityEngine.Component.get_gameObject(this,0);
        pPVar2 = (PolygonCollider2D)UnityEngine.GameObject.AddComponent<object>(param1,DAT_ram_005699dc);
        this.polygonCollider2D = pPVar2;
    }

    // RVA: 0x3AB3 Offset: 0x3AB3 VA: 0x3AB3
    private void Start()
    {
        UnityEngine.PolygonCollider2D.set_useDelaunayMesh(this.polygonCollider2D,1,0);
        UnityEngine.Collider2D.set_isTrigger(this.polygonCollider2D,1,0);
    }

    // RVA: 0x3AB4 Offset: 0x3AB4 VA: 0x3AB4
    public void GetWeaponCollider()
    {
        int uVar1 = default;
        int iVar2 = default;
        PolygonCollider2D param1 = default;

        uVar1 = UnityEngine.SpriteRenderer.get_sprite(this.spriteRenderer,0);
        iVar2 = UnityEngine.Sprite.GetPhysicsShape(uVar1,0,this.spritePhysicsShapePointsList,0);
        if (0 < iVar2) {
            param1 = this.polygonCollider2D;
            uVar1 = /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>.ToArray | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>.ToArray (+165) */ unnamed_function_5184(this.spritePhysicsShapePointsList,DAT_ram_00564114);
            UnityEngine.PolygonCollider2D.set_points(param1,uVar1,0);
        }
    }

    // RVA: 0x3AB5 Offset: 0x3AB5 VA: 0x3AB5
    public Weapon()
    {
        List param1 = default;

        param1 = (List)new System_Collections_Generic_List_Vector2_();
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(param1,DAT_ram_0056410c);
        this.spritePhysicsShapePointsList = param1;
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
