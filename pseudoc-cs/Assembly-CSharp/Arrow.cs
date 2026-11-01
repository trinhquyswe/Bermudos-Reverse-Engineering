// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Arrow.c by tools/c2cs.py
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

public class Arrow : MonoBehaviour // TypeDefIndex: 5699
{
    // Fields
    private LineRenderer lineRenderer; // 0x10

    // Methods

    // RVA: 0x39EA Offset: 0x39EA VA: 0x39EA
    private void Awake()
    {
        LineRenderer pLVar1 = default;

        pLVar1 = (LineRenderer)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ec8);
        this.lineRenderer = pLVar1;
    }

    // RVA: 0x39EB Offset: 0x39EB VA: 0x39EB
    public void MakeArrow(Vector2 startPosition, Vector2 endPosition)
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        float fVar6 = default;
        float fVar7 = default;
        float fVar8 = default;
        float fVar9 = default;
        Vector2 VVar10 = default;
        long local_a0 = default;
        int local_98 = default;
        long local_90 = default;
        int local_88 = default;
        long local_80 = default;
        int local_78 = default;
        long local_70 = default;
        int local_68 = default;
        Vector2 local_60 = default;
        int local_58 = default;
        float local_50 = default;
        float local_4c = default;
        int local_48 = default;
        float local_40 = default;
        float local_3c = default;
        int local_38 = default;
        float local_30 = default;
        float local_2c = default;
        int local_28 = default;
        float local_20 = default;
        float local_1c = default;
        int local_18 = default;
        float local_10 = default;
        float local_c = default;
        int local_8 = default;

        VVar10 = *startPosition;
        fVar8 = (*endPosition).y;
        fVar9 = (*endPosition).x;
        fVar1 = fVar8 - VVar10.y;
        fVar2 = fVar9 - VVar10.x;
        fVar3 = Mathf.Sqrt(fVar2 * fVar2 + fVar1 * fVar1);
        if (1e-05 < fVar3) {
            fVar4 = fVar2 / fVar3;
            fVar5 = -fVar1 / fVar3;
        }
        else {
            fVar4 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
            fVar5 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        }
        if (1e-05 < fVar3) {
            fVar6 = fVar1 / fVar3;
            fVar7 = fVar2 / fVar3;
        }
        else {
            fVar6 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
            fVar7 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        }
        fVar8 = fVar1 + fVar8;
        fVar9 = fVar2 + fVar9;
        if (1e-05 < fVar3) {
            fVar1 = fVar1 / fVar3;
            fVar2 = fVar2 / fVar3;
        }
        else {
            fVar1 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
            fVar2 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        }
        UnityEngine.LineRenderer.set_positionCount(this.lineRenderer,5,0);
        local_8 = 0;
        local_58 = 0;
        local_60 = VVar10;
        local_10 = VVar10.x;
        local_c = VVar10.y;
        /* candidates: UnityEngine.LineRenderer.SetPosition | UnityEngine.LineRenderer.SetPosition_Injected */ unnamed_function_52759(this.lineRenderer,0,&local_60,0);
        local_18 = 0;
        local_68 = 0;
        local_70 = CONCAT44(fVar8,fVar9);
        local_20 = (float)fVar9;
        local_1c = (float)fVar8;
        /* candidates: UnityEngine.LineRenderer.SetPosition | UnityEngine.LineRenderer.SetPosition_Injected */ unnamed_function_52759(this.lineRenderer,1,&local_70,0);
        local_28 = 0;
        local_78 = 0;
        local_2c = (float)(fVar4 + (fVar8 - fVar6));
        local_30 = (float)(fVar5 + (fVar9 - fVar7));
        local_80 = CONCAT44(local_2c,local_30);
        /* candidates: UnityEngine.LineRenderer.SetPosition | UnityEngine.LineRenderer.SetPosition_Injected */ unnamed_function_52759(this.lineRenderer,2,&local_80,0);
        local_38 = 0;
        local_88 = 0;
        local_90 = CONCAT44(fVar8,fVar9);
        local_40 = (float)fVar9;
        local_3c = (float)fVar8;
        /* candidates: UnityEngine.LineRenderer.SetPosition | UnityEngine.LineRenderer.SetPosition_Injected */ unnamed_function_52759(this.lineRenderer,3,&local_90,0);
        local_48 = 0;
        local_98 = 0;
        local_4c = (float)((fVar8 - fVar1) - fVar4);
        local_50 = (float)((fVar9 - fVar2) - fVar5);
        local_a0 = CONCAT44(local_4c,local_50);
        /* candidates: UnityEngine.LineRenderer.SetPosition | UnityEngine.LineRenderer.SetPosition_Injected */ unnamed_function_52759(this.lineRenderer,4,&local_a0,0);
    }

    // RVA: 0x39EC Offset: 0x39EC VA: 0x39EC
    public void ClearArrow()
    {
        UnityEngine.LineRenderer.set_positionCount(this.lineRenderer,0,0);
    }

    // RVA: 0x39ED Offset: 0x39ED VA: 0x39ED
    public Arrow()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
