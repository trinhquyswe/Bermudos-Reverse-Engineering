// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.Examples.VertexShakeA.c by tools/c2cs.py
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

public class VertexShakeA : MonoBehaviour // TypeDefIndex: 5790
{
    // Fields
    public float AngleMultiplier; // 0x10
    public float SpeedMultiplier; // 0x14
    public float ScaleMultiplier; // 0x18
    public float RotationMultiplier; // 0x1C
    private TMP_Text m_TextComponent; // 0x20
    private bool hasTextChanged; // 0x24

    // Methods

    // RVA: 0x3B8D Offset: 0x3B8D VA: 0x3B8D
    private void Awake()
    {
        TMP_Text pTVar1 = default;

        pTVar1 = (TMP_Text)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f3c);
        this.m_TextComponent = pTVar1;
    }

    // RVA: 0x3B8E Offset: 0x3B8E VA: 0x3B8E
    private void OnEnable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056da2c,0);
        unnamed_function_75545(param1_00,param1,DAT_ram_00561d98);
    }

    // RVA: 0x3B8F Offset: 0x3B8F VA: 0x3B8F
    private void OnDisable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = TMPro.TMPro_EventManager.TEXT_CHANGED_EVENT;
        param1 = new System_Action_Object_();
        System.Action<object>.__ctor(param1,this,DAT_ram_0056da2c,0);
        unnamed_function_75546(param1_00,param1,DAT_ram_00561da0);
    }

    // RVA: 0x3B90 Offset: 0x3B90 VA: 0x3B90
    private void Start()
    {
        int param2 = default;

        param2 = new TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11();
        Raw.Write<object>(param2 + 0x10 /* AngleMultiplier */, this);
        Raw.Write<int>(param2 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
    }

    // RVA: 0x3B91 Offset: 0x3B91 VA: 0x3B91
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

    [IteratorStateMachine(typeof(VertexShakeA._AnimateVertexColors_d__11))]
    // RVA: 0x3B92 Offset: 0x3B92 VA: 0x3B92
    private IEnumerator AnimateVertexColors()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3B93 Offset: 0x3B93 VA: 0x3B93
    public VertexShakeA()
    {
        this.ScaleMultiplier = 1.0;
        this.RotationMultiplier = 1.0;
        this.AngleMultiplier = 1.0;
        this.SpeedMultiplier = 1.0;
        unnamed_function_44622(this,0);
    }
}
