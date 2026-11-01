// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/DropdownSample.c by tools/c2cs.py
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

public class DropdownSample : MonoBehaviour // TypeDefIndex: 5733
{
    // Fields
    [SerializeField]
    private TextMeshProUGUI text; // 0x10
    [SerializeField]
    private TMP_Dropdown dropdownWithoutPlaceholder; // 0x14
    [SerializeField]
    private TMP_Dropdown dropdownWithPlaceholder; // 0x18

    // Methods

    // RVA: 0x3ABA Offset: 0x3ABA VA: 0x3ABA
    public void OnButtonClick()
    {
        int uVar1 = default;
        int param4 = default;
        TextMeshProUGUI pTVar2 = default;
        int iVar3 = default;
        int local_4 = default;

        local_4 = 0;
        pTVar2 = this.text;
        uVar1 = "Error: Please make a selection";
        if (-1 < this.dropdownWithPlaceholder[0x33]._opaque) {
            local_4 = this.dropdownWithoutPlaceholder[0x33]._opaque;
            uVar1 = System.Int32.ToString(&local_4,0);
            local_4 = this.dropdownWithPlaceholder[0x33]._opaque;
            param4 = System.Int32.ToString(&local_4,0);
            uVar1 = System.String.Concat("Selected values:\n",uVar1," - ",param4,0);
        }
        iVar3 = pTVar2._opaque;
        Raw.VCall(iVar3, 66) /* virtual */ (pTVar2,uVar1,Raw.Read<int>(iVar3 + 0x2d4));
    }

    // RVA: 0x3ABB Offset: 0x3ABB VA: 0x3ABB
    public DropdownSample()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
