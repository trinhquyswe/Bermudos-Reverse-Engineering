// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/TMPro.TMP_PhoneNumberValidator.c by tools/c2cs.py
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

public class TMP_PhoneNumberValidator : TMP_InputValidator // TypeDefIndex: 5739
{
    // Methods

    // RVA: 0x3AC9 Offset: 0x3AC9 VA: 0x3AC9 Slot: 4
    public override char Validate(ref string text, ref int pos, char ch)
    {
        bool bVar1 = default;
        int iVar2 = default;
        uint uVar3 = default;
        int uVar4 = default;
        object param1 = default; // object*
        uint uVar5 = default;
        ushort local_2 = default;

        local_2 = (ushort)pos;
        UnityEngine.Debug.Log("Trying to validate...",0);
        param1 = this.klass;
        uVar5 = Raw.Read<uint>((int)param1 + 8);
        if (uVar5 < 0x7fffffff) {
            uVar3 = 0;
            do {
                if (uVar3 == 0) {
                    iVar2 = 2;
                    if (uVar5 == 0) {
                        uVar4 = System.Char.ToString(&local_2,0);
                        param1 = (object)System.String.Concat("(",uVar4,0);
                        iVar2 = 2;
                        code_r0x81a2410c: this.klass = param1;
                    }
                    code_r0x81a24116: text._opaque = iVar2;
                }
                else {
                    if (uVar3 == 1) {
                        iVar2 = 2;
                        if (uVar5 == 1) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 2;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 2) {
                        iVar2 = 3;
                        if (uVar5 == 2) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 3;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 3) {
                        iVar2 = 6;
                        if (uVar5 == 3) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,") ",0);
                            iVar2 = 6;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 4) {
                        iVar2 = 7;
                        if (uVar5 == 4) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,") ",uVar4,0);
                            iVar2 = 7;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 5) {
                        iVar2 = 7;
                        if (uVar5 == 5) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1," ",uVar4,0);
                            iVar2 = 7;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 6) {
                        iVar2 = 7;
                        if (uVar5 == 6) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 7;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 7) {
                        iVar2 = 8;
                        if (uVar5 == 7) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 8;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 8) {
                        iVar2 = 10;
                        if (uVar5 == 8) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,"-",0);
                            iVar2 = 10;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 9) {
                        iVar2 = 0xb;
                        if (uVar5 == 9) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,"-",uVar4,0);
                            iVar2 = 0xb;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 10) {
                        iVar2 = 0xb;
                        if (uVar5 == 10) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 0xb;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 0xb) {
                        iVar2 = 0xc;
                        if (uVar5 == 0xb) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 0xc;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 0xc) {
                        iVar2 = 0xd;
                        if (uVar5 == 0xc) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 0xd;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                    if (uVar3 == 0xd) {
                        iVar2 = 0xe;
                        if (uVar5 == 0xd) {
                            uVar4 = System.Char.ToString(&local_2,0);
                            param1 = (object)System.String.Concat(param1,uVar4,0);
                            iVar2 = 0xe;
                            goto code_r0x81a2410c;
                        }
                        goto code_r0x81a24116;
                    }
                }
                bVar1 = uVar3 != uVar5;
                uVar3 = uVar3 + 1;
            } while (bVar1);
        }
    }

    // RVA: 0x3ACA Offset: 0x3ACA VA: 0x3ACA
    public TMP_PhoneNumberValidator()
    {
        new AmmoDetailsSO();
    }
}
