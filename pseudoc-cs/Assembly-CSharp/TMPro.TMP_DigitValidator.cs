// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.TMP_DigitValidator.c by tools/c2cs.py
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

public class TMP_DigitValidator : TMP_InputValidator // TypeDefIndex: 5738
{
    // Methods

    // RVA: 0x3AC7 Offset: 0x3AC7 VA: 0x3AC7 Slot: 4
    public override char Validate(ref string text, ref int pos, char ch)
    {
        int param2 = default;
        object pvVar1 = default; // object*
        ushort local_2 = default;

        local_2 = (ushort)pos;
        if (s_androidMinimumWindowHeight_ram_0000ffe8 + 0xd < (object)((uint)((int)&pos[-0xf]._opaque + 2) & 0xffff)) {
            pvVar1 = this.klass;
            param2 = System.Char.ToString(&local_2,0);
            pvVar1 = (object)System.String.Concat(pvVar1,param2,0);
            this.klass = pvVar1;
            text._opaque = text._opaque + 1;
        }
    }

    // RVA: 0x3AC8 Offset: 0x3AC8 VA: 0x3AC8
    public TMP_DigitValidator()
    {
        new AmmoDetailsSO();
    }
}
