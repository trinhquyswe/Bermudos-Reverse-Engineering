// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/HelperUtilities.c by tools/c2cs.py
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

public static class HelperUtilities // TypeDefIndex: 5730
{
    // Fields
    public static Camera mainCamera; // 0x0

    // Methods

    // RVA: 0x3AA6 Offset: 0x3AA6 VA: 0x3AA6
    public static bool ValidateCheckEmptyString(Object thisObject, string fieldName, string stringToCheck)
    {
        int iVar1 = default;
        object piVar2 = default; // int*
        int uVar3 = default;

        iVar1 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(stringToCheck,"",0);
        if (iVar1 != 0) {
            piVar2 = (object)UnityEngine.Object.get_name(thisObject,0);
            uVar3 = Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0xd8) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0xdc));
            uVar3 = System.String.Concat(fieldName," is empty and must contain a value in object ",uVar3,0);
            UnityEngine.Debug.Log(uVar3,0);
        }
        return SUB41(iVar1,0);
    }

    // RVA: 0x3AA7 Offset: 0x3AA7 VA: 0x3AA7
    public static bool ValidateCheckNullValue(Object thisObject, string fieldName, Object objectToCheck)
    {
        int iVar1 = default;
        object piVar2 = default; // int*
        int uVar3 = default;

        iVar1 = UnityEngine.Object.op_Equality(objectToCheck,0,0);
        if (iVar1 != 0) {
            piVar2 = (object)UnityEngine.Object.get_name(thisObject,0);
            uVar3 = Raw.VCall((ulong)Raw.Read<uint>(*piVar2 + 0xd8) * 4) /* virtual */ (piVar2,Raw.Read<int>(*piVar2 + 0xdc));
            uVar3 = System.String.Concat(fieldName," is null and must contain a value in object ",uVar3,0);
            UnityEngine.Debug.Log(uVar3,0);
        }
        return SUB41(iVar1,0);
    }

    // RVA: 0x3AA8 Offset: 0x3AA8 VA: 0x3AA8
    public static bool ValidateCheckEnumerableValues(Object thisObject, string fieldName, IEnumerable enumerableObjectToCheck)
    {
        bool bVar1 = default;
        bool bVar2 = default;
        uint uVar3 = default;
        object puVar4 = default; // uint*
        object puVar5 = default; // int*
        int uVar6 = default;
        int iVar7 = default;
        object piVar8 = default; // int*
        int iVar9 = default;
        object piVar10 = default; // int*
        int iVar11 = default;
        int local_18 = default;
        object local_14 = default; // int*
        object local_10 = default; // int*
        int local_8 = default;
        object local_4 = default; // int*

        iVar9 = 0;
        local_8 = 0;
        if (enumerableObjectToCheck == (System.Collections.IEnumerable)0x0) {
            piVar8 = (object)UnityEngine.Object.get_name(thisObject,0);
            uVar6 = Raw.VCall((ulong)Raw.Read<uint>(*piVar8 + 0xd8) * 4) /* virtual */ (piVar8,Raw.Read<int>(*piVar8 + 0xdc));
            uVar6 = System.String.Concat(fieldName," is null in object ",uVar6,0);
            UnityEngine.Debug.Log(uVar6,0);
            return true;
        }
        uVar3 = 0;
        iVar11 = enumerableObjectToCheck._opaque;
        if (Raw.Read<ushort>(iVar11 + 0xb6) != 0) {
            do {
                if (System_Collections_IEnumerable_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar11 + 0x58) + uVar3 * 8)) {
                    puVar4 = (object)(iVar11 + Raw.Read<int>(Raw.Read<int>(iVar11 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0);
                    goto code_r0x81a22734;
                }
                uVar3 = uVar3 + 1;
            } while (Raw.Read<ushort>(iVar11 + 0xb6) != uVar3);
        }
        puVar4 = (object)unnamed_function_95091 (enumerableObjectToCheck,System_Collections_IEnumerable_TypeInfo,0);
        code_r0x81a22734: local_4 = (object)Raw.VCall((ulong)*puVar4 * 4) /* virtual */(enumerableObjectToCheck,puVar4[1]);
        local_10 = &local_8;
        local_18 = 0;
        local_14 = &local_4;
        bVar1 = false;
        code_r0x81a22773: do {
            bVar2 = bVar1;
            piVar8 = local_4;
            iVar11 = *local_4;
            if (Raw.Read<ushort>(iVar11 + 0xb6) != 0) {
                uVar3 = 0;
                do {
                    piVar10 = (object)(Raw.Read<int>(iVar11 + 0x58) + uVar3 * 8);
                    if (System_Collections_IEnumerator_TypeInfo == *piVar10) {
                        puVar5 = (object)(iVar11 + piVar10[1] * 8 + 0xc0);
                        goto code_r0x81a22810;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar11 + 0xb6) != uVar3);
            }
            puVar5 = (object) import_env_invoke_iiii(0x105,local_4,System_Collections_IEnumerator_TypeInfo,0);
            if (DAT_ram_005ddf34 == 1) {
                code_r0x81a22a82: DAT_ram_005ddf34 = 0;
                uVar6 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a22a94;
            }
            code_r0x81a22810: DAT_ram_005ddf34 = 0;
            iVar11 = import_env_invoke_iii(*puVar5,piVar8,puVar5[1]);
            piVar8 = local_4;
            if (DAT_ram_005ddf34 == 1) goto code_r0x81a22a82;
            if (iVar11 == 0) {
                iVar11 = 6;
                goto code_r0x81a22ae0;
            }
            iVar11 = *local_4;
            if (Raw.Read<ushort>(iVar11 + 0xb6) != 0) {
                uVar3 = 0;
                do {
                    piVar10 = (object)(Raw.Read<int>(iVar11 + 0x58) + uVar3 * 8);
                    if (System_Collections_IEnumerator_TypeInfo == *piVar10) {
                        puVar5 = (object)(piVar10[1] * 8 + iVar11 + 200);
                        goto code_r0x81a228ea;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar11 + 0xb6) != uVar3);
            }
            puVar5 = (object) import_env_invoke_iiii(0x105,local_4,System_Collections_IEnumerator_TypeInfo,1);
            if (DAT_ram_005ddf34 == 1) {
                code_r0x81a22a8c: DAT_ram_005ddf34 = 0;
                uVar6 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a22a94;
            }
            code_r0x81a228ea: DAT_ram_005ddf34 = 0;
            iVar11 = import_env_invoke_iii(*puVar5,piVar8,puVar5[1]);
            if (DAT_ram_005ddf34 == 1) goto code_r0x81a22a8c;
            if (iVar11 != 0) {
                iVar9 = iVar9 + 1;
                bVar1 = bVar2;
                goto code_r0x81a22773;
            }
            piVar8 = (object)import_env_invoke_iii(s_m_LocalPosition_z_ram_000005f3 + 1,thisObject,0);
            iVar11 = DAT_ram_005ddf34;
            if (iVar11 == 1) {
                uVar6 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a22a94;
            }
            uVar6 = import_env_invoke_iii (Raw.Read<int>(*piVar8 + 0xd8),piVar8,Raw.Read<int>(*piVar8 + 0xdc));
            iVar11 = DAT_ram_005ddf34;
            if (iVar11 == 1) {
                uVar6 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a22a94;
            }
            uVar6 = import_env_invoke_iiiii (s_MotionT_z_ram_00000655 + 9,fieldName," has null values in object ",uVar6,0);
            if (DAT_ram_005ddf34 == 1) break;
            if (Raw.Read<int>(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
                import_env_invoke_vi(0xfc,UnityEngine_Debug_TypeInfo);
                if (DAT_ram_005ddf34 == 1) break;
            }
            import_env_invoke_vii(s___Scripting__UnityEngine___Scrip_ram_00001e63 + 1,uVar6,0);
            bVar1 = true;
        } while (DAT_ram_005ddf34 != 1);
        uVar6 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a22a94: iVar11 = import_env_getTempRet0();
        iVar7 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar11 == iVar7) {
            piVar8 = (object)import_env___cxa_begin_catch(uVar6);
            local_18 = *piVar8;
            iVar11 = 0;
            import_env_invoke_v(0x3a);
            iVar7 = DAT_ram_005ddf34;
            if (iVar7 != 1) {
                code_r0x81a22ae0: DAT_ram_005ddf34 = 0;
                local_8 = (local_4 as System_IDisposable);
                piVar8 = (object)*local_10;
                if (piVar8 != (object)0x0) {
                    iVar7 = *piVar8;
                    if (Raw.Read<ushort>(iVar7 + 0xb6) != 0) {
                        uVar3 = 0;
                        do {
                            if (System_IDisposable_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar7 + 0x58) + uVar3 * 8)) {
                                puVar4 = (object)(iVar7 + Raw.Read<int>(Raw.Read<int>(iVar7 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0);
                                goto code_r0x81a22b71;
                            }
                            uVar3 = uVar3 + 1;
                        } while (Raw.Read<ushort>(iVar7 + 0xb6) != uVar3);
                    }
                    puVar4 = (object)unnamed_function_95091(piVar8,System_IDisposable_TypeInfo,0);
                    code_r0x81a22b71: Raw.VCall((ulong)*puVar4 * 4) /* virtual */(piVar8,puVar4[1]);
                }
                if (local_18 != 0) {
                    unnamed_function_1088(local_18);
                    do {
                        throw null;
                    } while( true );
                }
                if (iVar11 != 0) {
                    if (iVar11 == 1) {
                        return bVar2;
                    }
                    if (iVar11 == 2) {
                        return bVar2;
                    }
                    if (iVar11 == 3) {
                        return bVar2;
                    }
                    if (iVar11 == 4) {
                        return bVar2;
                    }
                    if (iVar11 == 5) {
                        return bVar2;
                    }
                    if (iVar11 != 6) {
                        return bVar2;
                    }
                }
                if (iVar9 == 0) {
                    piVar8 = (object)UnityEngine.Object.get_name(thisObject,0);
                    uVar6 = Raw.VCall((ulong)Raw.Read<uint>(*piVar8 + 0xd8) * 4) /* virtual */ (piVar8,Raw.Read<int>(*piVar8 + 0xdc));
                    uVar6 = System.String.Concat(fieldName," has no values in object ",uVar6,0);
                    UnityEngine.Debug.Log(uVar6,0);
                    return true;
                }
                return bVar2;
            }
            uVar6 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
        }
        import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x13,&local_18);
        iVar9 = DAT_ram_005ddf34;
        if (iVar9 != 1) {
            import_env___resumeException(uVar6);
            do {
                throw null;
            } while( true );
        }
        import_env___cxa_find_matching_catch_3(0);
        import_env_getTempRet0();
        unnamed_function_642();
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3AA9 Offset: 0x3AA9 VA: 0x3AA9
    public static bool ApproximatelyEqual(Vector2 v1, Vector2 v2, float epsilon)
    {
        bool bVar1 = default;

        if (Mathf.Abs(v1.x - v2.x) < epsilon) {
            bVar1 = Mathf.Abs(v1.y - v2.y) < epsilon;
        }
        else {
            bVar1 = false;
        }
        return bVar1;
    }

    // RVA: 0x3AAA Offset: 0x3AAA VA: 0x3AAA
    public static float GetAngleFromVector(Vector3 vector)
    {
        float fVar1 = default;

        fVar1 = unnamed_function_12077(vector.y,vector.x);
        return fVar1 * 57.29578;
    }

    // RVA: 0x3AAB Offset: 0x3AAB VA: 0x3AAB
    public static Vector2 GetRandomDirection()
    {
        float fVar1 = default;
        float fVar2 = default;
        Vector2 VVar3 = default;
        float local_8 = default;
        float local_4 = default;

        UnityEngine.Random.get_insideUnitCircle(&local_8,0);
        fVar1 = Mathf.Sqrt((float)local_8 * (float)local_8 + (float)local_4 * (float)local_4);
        if (1e-05 < fVar1) {
            fVar2 = (float)local_4 / fVar1;
            fVar1 = (float)local_8 / fVar1;
        }
        else {
            fVar2 = (Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
            fVar1 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
        }
        VVar3.y = fVar2;
        VVar3.x = fVar1;
        return VVar3;
    }

    // RVA: 0x3AAC Offset: 0x3AAC VA: 0x3AAC
    public static Vector3 GetDirectionVectorFromAngle(float angle)
    {
        float fVar1 = default;

        __ret.z = 0.0;
        fVar1 = unnamed_function_12076(angle * 0.017453292);
        __ret.y = fVar1;
        fVar1 = unnamed_function_12075(angle * 0.017453292);
        __ret.x = fVar1;
        return;
    }

    // RVA: 0x3AAD Offset: 0x3AAD VA: 0x3AAD
    public static bool ValidateCheckPositiveValue(Object thisObject, string fieldName, float valueToCheck, bool isZeroAllowed)
    {
        uint in_register_20000031 = default;
        object piVar1 = default; // int*
        int uVar2 = default;
        int iVar3 = default;

        if (CONCAT31(in_register_20000031,isZeroAllowed) == 0) {
            if (0.0 < valueToCheck) {
                return false;
            }
            piVar1 = (object)UnityEngine.Object.get_name(thisObject,0);
            uVar2 = Raw.VCall((ulong)Raw.Read<uint>(*piVar1 + 0xd8) * 4) /* virtual */ (piVar1,Raw.Read<int>(*piVar1 + 0xdc));
            uVar2 = System.String.Concat(fieldName," must contain a positive value in object ",uVar2,0);
            iVar3 = Raw.Read<int>(UnityEngine_Debug_TypeInfo + 0x74);
        }
        else {
            if (0.0 <= valueToCheck) {
                return false;
            }
            piVar1 = (object)UnityEngine.Object.get_name(thisObject,0);
            uVar2 = Raw.VCall((ulong)Raw.Read<uint>(*piVar1 + 0xd8) * 4) /* virtual */ (piVar1,Raw.Read<int>(*piVar1 + 0xdc));
            uVar2 = System.String.Concat(fieldName," must contain a positive value or zero in object ",uVar2,0);
            iVar3 = Raw.Read<int>(UnityEngine_Debug_TypeInfo + 0x74);
        }
        if (iVar3 == 0) {
        }
        UnityEngine.Debug.Log(uVar2,0);
        return true;
    }

    // RVA: 0x3AAE Offset: 0x3AAE VA: 0x3AAE
    public static Vector3 GetMouseWorldPosition()
    {
        float fVar1 = default;
        long uVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        int uVar5 = default;
        float fVar6 = default;
        long local_30 = default;
        int local_28 = default;
        float local_20 = default;
        float local_1c = default;
        int local_18 = default;

        long[] local_10 = new long[2];
        uVar5 = Raw.Deref(Raw.Read<object>(HelperUtilities_TypeInfo + 0x5c));
        iVar3 = UnityEngine.Object.op_Equality(uVar5,0,0);
        if (iVar3 != 0) {
            uVar5 = UnityEngine.Camera.get_main(0);
            HelperUtilities.mainCamera = uVar5;
        }
        UnityEngine.InputSystem.InputControl<Vector2>.ReadValue(local_10,Raw.Read<int>(Raw.Deref(Raw.Read<object>(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c)) + 0x10c), DAT_ram_00562374);
        uVar2 = local_10[0];
        iVar3 = UnityEngine.Screen.get_width(0);
        iVar4 = UnityEngine.Screen.get_height(0);
        local_18 = 0;
        local_28 = 0;
        fVar1 = (float)uVar2;
        fVar6 = (float)iVar3;
        if (fVar1 <= (float)iVar3) {
            fVar6 = fVar1;
        }
        local_20 = (float)0.0;
        if (0.0 <= fVar1) {
            local_20 = (float)fVar6;
        }
        fVar1 = (float)((ulong)uVar2 >> 0x20);
        fVar6 = (float)iVar4;
        if (fVar1 <= (float)iVar4) {
            fVar6 = fVar1;
        }
        local_1c = (float)0.0;
        if (0.0 <= fVar1) {
            local_1c = (float)fVar6;
        }
        local_30 = CONCAT44(local_1c,local_20);
        UnityEngine.Camera.ScreenToWorldPoint(local_10,Raw.Deref(Raw.Read<object>(HelperUtilities_TypeInfo + 0x5c)),&local_30,0);
        __ret.z = 0.0;
        __ret.x = (float)(int)local_10[0];
        __ret.y = (float)local_10[0]._4_4_;
        return;
    }

    // RVA: 0x3AAF Offset: 0x3AAF VA: 0x3AAF
    public static bool ValidateCheckPositiveRange(Object thisObject, string fieldNameMinimum, float valueToCheckMinimum, string fieldNameMaximum, float valueToCheckMaximum, bool isZeroAllowed)
    {
        bool bVar1 = default;
        bool bVar2 = default;
        int param1 = default;
        object piVar3 = default; // int*
        int uVar4 = default;

        if (valueToCheckMaximum < valueToCheckMinimum) {
            param1 = unnamed_function_1050(string___TypeInfo,5);
            Raw.Write<object>(param1 + 0x10, fieldNameMinimum);
            uVar4 = " must be less than or equal to ";
            Raw.Write<object>(param1 + 0x18, fieldNameMaximum);
            Raw.Write<int>(param1 + 0x14, uVar4);
            Raw.Write<object>(param1 + 0x1c, " in object ");
            piVar3 = (object)UnityEngine.Object.get_name(thisObject,0);
            uVar4 = Raw.VCall((ulong)Raw.Read<uint>(*piVar3 + 0xd8) * 4) /* virtual */ (piVar3,Raw.Read<int>(*piVar3 + 0xdc));
            Raw.Write<int>(param1 + 0x20, uVar4);
            uVar4 = System.String.Concat(param1,0);
            UnityEngine.Debug.Log(uVar4,0);
        }
        bVar1 = HelperUtilities.ValidateCheckPositiveValue(thisObject, fieldNameMinimum, valueToCheckMinimum, isZeroAllowed);
        bVar2 = HelperUtilities.ValidateCheckPositiveValue(thisObject, fieldNameMaximum, valueToCheckMaximum, isZeroAllowed);
        return bVar2 || (bVar1 || valueToCheckMaximum < valueToCheckMinimum);
    }

    // RVA: 0x3AB0 Offset: 0x3AB0 VA: 0x3AB0
    public static Vector3 GetMousePositionInUI(RectTransform rectTransform, Camera uiCamera)
    {
        long uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        float fVar4 = default;
        float fVar5 = default;
        ulong uVar6 = default;
        float fVar7 = default;
        long local_48 = default;
        int local_40 = default;
        ulong local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        float local_18 = default;
        ulong local_10 = default;
        long local_8 = default;

        local_8 = 0;
        UnityEngine.InputSystem.InputControl<Vector2>.ReadValue(&local_20, Raw.Read<int>(Raw.Deref(Raw.Read<object>(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c)) + 0x10c), DAT_ram_00562374);
        uVar1 = local_20;
        fVar4 = (float)((ulong)local_20 >> 0x20);
        iVar2 = UnityEngine.Screen.get_width(0);
        iVar3 = UnityEngine.Screen.get_height(0);
        local_38 = 0;
        fVar7 = (float)uVar1;
        fVar5 = (float)iVar2;
        if (fVar7 <= (float)iVar2) {
            fVar5 = fVar7;
        }
        if (0.0 <= fVar7) {
            local_38 = (ulong)(uint)fVar5;
        }
        uVar6 = 0;
        fVar7 = (float)iVar3;
        if (fVar4 <= (float)iVar3) {
            fVar7 = fVar4;
        }
        if (0.0 <= fVar4) {
            uVar6 = (ulong)(uint)fVar7;
        }
        local_38 = local_38 | uVar6 << 0x20;
        local_10 = local_38;
        UnityEngine.RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform,&local_38,uiCamera,&local_8,0);
        local_28 = 0;
        local_40 = 0;
        local_30 = local_8;
        local_48 = local_8;
        UnityEngine.Transform.TransformPoint(&local_20,rectTransform,&local_48,0);
        __ret.z = local_18;
        __ret.x = (float)(int)local_20;
        __ret.y = (float)local_20._4_4_;
        return;
    }

    // RVA: 0x3AB1 Offset: 0x3AB1 VA: 0x3AB1
    public static float LinearToDecibels(float linear)
    {
        float fVar1 = default;

        fVar1 = unnamed_function_12518(linear / 20.0);
        return fVar1 * 20.0;
    }
}
