// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.VertexShakeB.c by tools/c2cs.py
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

public class VertexShakeB : MonoBehaviour // TypeDefIndex: 5792
{
    // Fields
    public float AngleMultiplier; // 0x10
    public float SpeedMultiplier; // 0x14
    public float CurveScale; // 0x18
    private TMP_Text m_TextComponent; // 0x1C
    private bool hasTextChanged; // 0x20

    // Methods

    // RVA: 0x3B9A Offset: 0x3B9A VA: 0x3B9A
    private void Awake()
    {
        TMP_Text pTVar1 = default;

        pTVar1 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f3c);
        this.m_TextComponent = pTVar1;
    }

    // RVA: 0x3B9B Offset: 0x3B9B VA: 0x3B9B
    private void OnEnable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056da30,0);
        unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
    }

    // RVA: 0x3B9C Offset: 0x3B9C VA: 0x3B9C
    private void OnDisable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056da30,0);
        unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
    }

    // RVA: 0x3B9D Offset: 0x3B9D VA: 0x3B9D
    private void Start()
    {
        int param2 = default;

        param2 = new TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10();
        Raw.Write<object>(param2 + 0x10 /* AngleMultiplier */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    // RVA: 0x3B9E Offset: 0x3B9E VA: 0x3B9E
    private void ON_TEXT_CHANGED(Object obj)
    {
        int iVar1 = default;
        TMP_Text param1 = default;

        param1 = this.m_TextComponent;
        iVar1 = UnityEngine.Object.op_Implicit(param1,0);
        if (iVar1 != 0) {
            this.hasTextChanged = true;
        }
    }

    [IteratorStateMachine(typeof(VertexShakeB._AnimateVertexColors_d__10))]
    // RVA: 0x3B9F Offset: 0x3B9F VA: 0x3B9F
    private IEnumerator AnimateVertexColors()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3BA0 Offset: 0x3BA0 VA: 0x3BA0
    public VertexShakeB()
    {
        this.CurveScale = 1.0;
        this.AngleMultiplier = 1.0;
        this.SpeedMultiplier = 1.0;
        unnamed_function_44622(this,0);
    }
}
