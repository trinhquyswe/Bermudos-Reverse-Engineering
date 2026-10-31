// Assembly-CSharp :: HelperUtilities
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public static class HelperUtilities // TypeDefIndex: 5730
{
	// Fields
	public static Camera mainCamera; // 0x0

	// Methods

	// RVA: 0x3AA6 Offset: 0x3AA6 VA: 0x3AA6
	public static bool ValidateCheckEmptyString(Object thisObject, string fieldName, string stringToCheck) { }

	// RVA: 0x3AA7 Offset: 0x3AA7 VA: 0x3AA7
	public static bool ValidateCheckNullValue(Object thisObject, string fieldName, Object objectToCheck) { }

	// RVA: 0x3AA8 Offset: 0x3AA8 VA: 0x3AA8
	public static bool ValidateCheckEnumerableValues(Object thisObject, string fieldName, IEnumerable enumerableObjectToCheck) { }

	// RVA: 0x3AA9 Offset: 0x3AA9 VA: 0x3AA9
	public static bool ApproximatelyEqual(Vector2 v1, Vector2 v2, float epsilon) { }

	// RVA: 0x3AAA Offset: 0x3AAA VA: 0x3AAA
	public static float GetAngleFromVector(Vector3 vector) { }

	// RVA: 0x3AAB Offset: 0x3AAB VA: 0x3AAB
	public static Vector2 GetRandomDirection() { }

	// RVA: 0x3AAC Offset: 0x3AAC VA: 0x3AAC
	public static Vector3 GetDirectionVectorFromAngle(float angle) { }

	// RVA: 0x3AAD Offset: 0x3AAD VA: 0x3AAD
	public static bool ValidateCheckPositiveValue(Object thisObject, string fieldName, float valueToCheck, bool isZeroAllowed) { }

	// RVA: 0x3AAE Offset: 0x3AAE VA: 0x3AAE
	public static Vector3 GetMouseWorldPosition() { }

	// RVA: 0x3AAF Offset: 0x3AAF VA: 0x3AAF
	public static bool ValidateCheckPositiveRange(Object thisObject, string fieldNameMinimum, float valueToCheckMinimum, string fieldNameMaximum, float valueToCheckMaximum, bool isZeroAllowed) { }

	// RVA: 0x3AB0 Offset: 0x3AB0 VA: 0x3AB0
	public static Vector3 GetMousePositionInUI(RectTransform rectTransform, Camera uiCamera) { }

	// RVA: 0x3AB1 Offset: 0x3AB1 VA: 0x3AB1
	public static float LinearToDecibels(float linear) { }
}

===== C# end =====
*/

// ---- HelperUtilities$$ValidateCheckEmptyString ----
// C#: bool HelperUtilities__ValidateCheckEmptyString (UnityEngine_Object_o* thisObject, System_String_o* fieldName, System_String_o* stringToCheck, const MethodInfo* method);

bool HelperUtilities__ValidateCheckEmptyString
               (UnityEngine_Object_o *thisObject,System_String_o *fieldName,
               System_String_o *stringToCheck,MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664836 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&StringLiteral_233);
    unnamed_function_1099(&StringLiteral_1);
    DAT_ram_00664836 = '\x01';
  }
  iVar1 = unnamed_function_81494(stringToCheck,StringLiteral_1,0);
  if (iVar1 != 0) {
    piVar2 = (int *)unnamed_function_44768(thisObject,0);
    uVar3 = (**(code **)((ulonglong)*(uint *)(*piVar2 + 0xd8) * 4))
                      (piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    uVar3 = unnamed_function_81504(fieldName,StringLiteral_233,uVar3,0);
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52407(uVar3,0);
  }
  return SUB41(iVar1,0);
}

// ---- HelperUtilities$$ValidateCheckNullValue ----
// C#: bool HelperUtilities__ValidateCheckNullValue (UnityEngine_Object_o* thisObject, System_String_o* fieldName, UnityEngine_Object_o* objectToCheck, const MethodInfo* method);

bool HelperUtilities__ValidateCheckNullValue
               (UnityEngine_Object_o *thisObject,System_String_o *fieldName,
               UnityEngine_Object_o *objectToCheck,MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (DAT_ram_00664837 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&StringLiteral_245);
    DAT_ram_00664837 = '\x01';
  }
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar1 = unnamed_function_44710(objectToCheck,0,0);
  if (iVar1 != 0) {
    piVar2 = (int *)unnamed_function_44768(thisObject,0);
    uVar3 = (**(code **)((ulonglong)*(uint *)(*piVar2 + 0xd8) * 4))
                      (piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    uVar3 = unnamed_function_81504(fieldName,StringLiteral_245,uVar3,0);
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52407(uVar3,0);
  }
  return SUB41(iVar1,0);
}

// ---- HelperUtilities$$ValidateCheckEnumerableValues ----
// C#: bool HelperUtilities__ValidateCheckEnumerableValues (UnityEngine_Object_o* thisObject, System_String_o* fieldName, System_Collections_IEnumerable_o* enumerableObjectToCheck, const MethodInfo* method);

bool HelperUtilities__ValidateCheckEnumerableValues
               (UnityEngine_Object_o *thisObject,System_String_o *fieldName,
               System_Collections_IEnumerable_o *enumerableObjectToCheck,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_18;
  int **local_14;
  int *local_10;
  int local_8;
  int *local_4;
  
  iVar9 = 0;
  if (DAT_ram_00664838 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&System_IDisposable_TypeInfo);
    unnamed_function_1099(&System_Collections_IEnumerable_TypeInfo);
    unnamed_function_1099(&System_Collections_IEnumerator_TypeInfo);
    unnamed_function_1099(&StringLiteral_246);
    unnamed_function_1099(&StringLiteral_217);
    unnamed_function_1099(&StringLiteral_218);
    DAT_ram_00664838 = '\x01';
  }
  local_8 = 0;
  if (enumerableObjectToCheck == (System_Collections_IEnumerable_o *)0x0) {
    piVar8 = (int *)unnamed_function_44768(thisObject,0);
    uVar6 = (**(code **)((ulonglong)*(uint *)(*piVar8 + 0xd8) * 4))
                      (piVar8,*(undefined4 *)(*piVar8 + 0xdc));
    uVar6 = unnamed_function_81504(fieldName,StringLiteral_246,uVar6,0);
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52407(uVar6,0);
    return true;
  }
  uVar3 = 0;
  iVar11 = enumerableObjectToCheck->_opaque;
  if (*(ushort *)(iVar11 + 0xb6) != 0) {
    do {
      if (System_Collections_IEnumerable_TypeInfo == *(int *)(*(int *)(iVar11 + 0x58) + uVar3 * 8))
      {
        puVar4 = (uint *)(iVar11 + *(int *)(*(int *)(iVar11 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0);
        goto code_r0x81a22734;
      }
      uVar3 = uVar3 + 1;
    } while (*(ushort *)(iVar11 + 0xb6) != uVar3);
  }
  puVar4 = (uint *)unnamed_function_95091
                             (enumerableObjectToCheck,System_Collections_IEnumerable_TypeInfo,0);
code_r0x81a22734:
  local_4 = (int *)(**(code **)((ulonglong)*puVar4 * 4))(enumerableObjectToCheck,puVar4[1]);
  local_10 = &local_8;
  local_18 = 0;
  local_14 = &local_4;
  bVar1 = false;
code_r0x81a22773:
  do {
    bVar2 = bVar1;
    piVar8 = local_4;
    iVar11 = *local_4;
    if (*(ushort *)(iVar11 + 0xb6) != 0) {
      uVar3 = 0;
      do {
        piVar10 = (int *)(*(int *)(iVar11 + 0x58) + uVar3 * 8);
        if (System_Collections_IEnumerator_TypeInfo == *piVar10) {
          puVar5 = (undefined4 *)(iVar11 + piVar10[1] * 8 + 0xc0);
          goto code_r0x81a22810;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar11 + 0xb6) != uVar3);
    }
    DAT_ram_005ddf34 = 0;
    puVar5 = (undefined4 *)
             import::env::invoke_iiii(0x105,local_4,System_Collections_IEnumerator_TypeInfo,0);
    if (DAT_ram_005ddf34 == 1) {
code_r0x81a22a82:
      DAT_ram_005ddf34 = 0;
      uVar6 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a22a94;
    }
code_r0x81a22810:
    DAT_ram_005ddf34 = 0;
    iVar11 = import::env::invoke_iii(*puVar5,piVar8,puVar5[1]);
    piVar8 = local_4;
    if (DAT_ram_005ddf34 == 1) goto code_r0x81a22a82;
    if (iVar11 == 0) {
      iVar11 = 6;
      goto code_r0x81a22ae0;
    }
    iVar11 = *local_4;
    if (*(ushort *)(iVar11 + 0xb6) != 0) {
      uVar3 = 0;
      do {
        piVar10 = (int *)(*(int *)(iVar11 + 0x58) + uVar3 * 8);
        if (System_Collections_IEnumerator_TypeInfo == *piVar10) {
          puVar5 = (undefined4 *)(piVar10[1] * 8 + iVar11 + 200);
          goto code_r0x81a228ea;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar11 + 0xb6) != uVar3);
    }
    DAT_ram_005ddf34 = 0;
    puVar5 = (undefined4 *)
             import::env::invoke_iiii(0x105,local_4,System_Collections_IEnumerator_TypeInfo,1);
    if (DAT_ram_005ddf34 == 1) {
code_r0x81a22a8c:
      DAT_ram_005ddf34 = 0;
      uVar6 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a22a94;
    }
code_r0x81a228ea:
    DAT_ram_005ddf34 = 0;
    iVar11 = import::env::invoke_iii(*puVar5,piVar8,puVar5[1]);
    if (DAT_ram_005ddf34 == 1) goto code_r0x81a22a8c;
    if (iVar11 != 0) {
      iVar9 = iVar9 + 1;
      bVar1 = bVar2;
      goto code_r0x81a22773;
    }
    DAT_ram_005ddf34 = 0;
    piVar8 = (int *)import::env::invoke_iii(s_m_LocalPosition_z_ram_000005f3 + 1,thisObject,0);
    iVar11 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar11 == 1) {
      uVar6 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a22a94;
    }
    DAT_ram_005ddf34 = 0;
    uVar6 = import::env::invoke_iii
                      (*(undefined4 *)(*piVar8 + 0xd8),piVar8,*(undefined4 *)(*piVar8 + 0xdc));
    iVar11 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar11 == 1) {
      uVar6 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a22a94;
    }
    DAT_ram_005ddf34 = 0;
    uVar6 = import::env::invoke_iiiii
                      (s_MotionT_z_ram_00000655 + 9,fieldName,StringLiteral_218,uVar6,0);
    if (DAT_ram_005ddf34 == 1) break;
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      DAT_ram_005ddf34 = 0;
      import::env::invoke_vi(0xfc,UnityEngine_Debug_TypeInfo);
      if (DAT_ram_005ddf34 == 1) break;
    }
    DAT_ram_005ddf34 = 0;
    import::env::invoke_vii(s___Scripting__UnityEngine___Scrip_ram_00001e63 + 1,uVar6,0);
    bVar1 = true;
  } while (DAT_ram_005ddf34 != 1);
  DAT_ram_005ddf34 = 0;
  uVar6 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a22a94:
  iVar11 = import::env::getTempRet0();
  iVar7 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar11 == iVar7) {
    piVar8 = (int *)import::env::__cxa_begin_catch(uVar6);
    local_18 = *piVar8;
    iVar11 = 0;
    DAT_ram_005ddf34 = 0;
    import::env::invoke_v(0x3a);
    iVar7 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar7 != 1) {
code_r0x81a22ae0:
      DAT_ram_005ddf34 = 0;
      local_8 = unnamed_function_1112(local_4,System_IDisposable_TypeInfo);
      piVar8 = (int *)*local_10;
      if (piVar8 != (int *)0x0) {
        iVar7 = *piVar8;
        if (*(ushort *)(iVar7 + 0xb6) != 0) {
          uVar3 = 0;
          do {
            if (System_IDisposable_TypeInfo == *(int *)(*(int *)(iVar7 + 0x58) + uVar3 * 8)) {
              puVar4 = (uint *)(iVar7 + *(int *)(*(int *)(iVar7 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0)
              ;
              goto code_r0x81a22b71;
            }
            uVar3 = uVar3 + 1;
          } while (*(ushort *)(iVar7 + 0xb6) != uVar3);
        }
        puVar4 = (uint *)unnamed_function_95091(piVar8,System_IDisposable_TypeInfo,0);
code_r0x81a22b71:
        (**(code **)((ulonglong)*puVar4 * 4))(piVar8,puVar4[1]);
      }
      if (local_18 != 0) {
        unnamed_function_1088(local_18);
        do {
          halt_trap();
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
        piVar8 = (int *)unnamed_function_44768(thisObject,0);
        uVar6 = (**(code **)((ulonglong)*(uint *)(*piVar8 + 0xd8) * 4))
                          (piVar8,*(undefined4 *)(*piVar8 + 0xdc));
        uVar6 = unnamed_function_81504(fieldName,StringLiteral_217,uVar6,0);
        if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
          unnamed_function_94848(UnityEngine_Debug_TypeInfo);
        }
        unnamed_function_52407(uVar6,0);
        return true;
      }
      return bVar2;
    }
    uVar6 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x13,&local_18);
  iVar9 = DAT_ram_005ddf34;
  DAT_ram_005ddf34 = 0;
  if (iVar9 != 1) {
    import::env::__resumeException(uVar6);
    do {
      halt_trap();
    } while( true );
  }
  import::env::__cxa_find_matching_catch_3(0);
  import::env::getTempRet0();
  unnamed_function_642();
  do {
    halt_trap();
  } while( true );
}

// ---- HelperUtilities$$ApproximatelyEqual ----
// C#: bool HelperUtilities__ApproximatelyEqual (UnityEngine_Vector2_o v1, UnityEngine_Vector2_o v2, float epsilon, const MethodInfo* method);

bool HelperUtilities__ApproximatelyEqual
               (Vector2_o *v1,Vector2_o *v2,float epsilon,MethodInfo *method)

{
  bool bVar1;
  
  if (ABS(v1->x - v2->x) < epsilon) {
    bVar1 = ABS(v1->y - v2->y) < epsilon;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ---- HelperUtilities$$GetAngleFromVector ----
// C#: float HelperUtilities__GetAngleFromVector (UnityEngine_Vector3_o vector, const MethodInfo* method);

float HelperUtilities__GetAngleFromVector(Vector3_o *vector,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = unnamed_function_12077(vector->y,vector->x);
  return fVar1 * 57.29578;
}

// ---- HelperUtilities$$GetRandomDirection ----
// C#: UnityEngine_Vector2_o HelperUtilities__GetRandomDirection (const MethodInfo* method);

void HelperUtilities__GetRandomDirection(Vector2_o *__ret,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Vector2_o VVar3;
  float4 local_8;
  float4 local_4;
  
  unnamed_function_44587(&local_8,0);
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar1 = SQRT((float)local_8 * (float)local_8 + (float)local_4 * (float)local_4);
  if (1e-05 < fVar1) {
    fVar2 = (float)local_4 / fVar1;
    fVar1 = (float)local_8 / fVar1;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar2 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
    fVar1 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  VVar3.y = fVar2;
  VVar3.x = fVar1;
  *__ret = VVar3;
  return;
}

// ---- HelperUtilities$$GetDirectionVectorFromAngle ----
// C#: UnityEngine_Vector3_o HelperUtilities__GetDirectionVectorFromAngle (float angle, const MethodInfo* method);

void HelperUtilities__GetDirectionVectorFromAngle(Vector3_o *__ret,float angle,MethodInfo *method)

{
  float fVar1;
  
  __ret->z = 0.0;
  fVar1 = unnamed_function_12076(angle * 0.017453292);
  __ret->y = fVar1;
  fVar1 = unnamed_function_12075(angle * 0.017453292);
  __ret->x = fVar1;
  return;
}

// ---- HelperUtilities$$ValidateCheckPositiveValue ----
// C#: bool HelperUtilities__ValidateCheckPositiveValue (UnityEngine_Object_o* thisObject, System_String_o* fieldName, float valueToCheck, bool isZeroAllowed, const MethodInfo* method);

bool HelperUtilities__ValidateCheckPositiveValue
               (UnityEngine_Object_o *thisObject,System_String_o *fieldName,float valueToCheck,
               bool isZeroAllowed,MethodInfo *method)

{
  undefined3 in_register_20000031;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_ram_00664839 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&StringLiteral_258);
    unnamed_function_1099(&StringLiteral_257);
    DAT_ram_00664839 = '\x01';
  }
  if (CONCAT31(in_register_20000031,isZeroAllowed) == 0) {
    if (0.0 < valueToCheck) {
      return false;
    }
    piVar1 = (int *)unnamed_function_44768(thisObject,0);
    uVar2 = (**(code **)((ulonglong)*(uint *)(*piVar1 + 0xd8) * 4))
                      (piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    uVar2 = unnamed_function_81504(fieldName,StringLiteral_257,uVar2,0);
    iVar3 = *(int *)(UnityEngine_Debug_TypeInfo + 0x74);
  }
  else {
    if (0.0 <= valueToCheck) {
      return false;
    }
    piVar1 = (int *)unnamed_function_44768(thisObject,0);
    uVar2 = (**(code **)((ulonglong)*(uint *)(*piVar1 + 0xd8) * 4))
                      (piVar1,*(undefined4 *)(*piVar1 + 0xdc));
    uVar2 = unnamed_function_81504(fieldName,StringLiteral_258,uVar2,0);
    iVar3 = *(int *)(UnityEngine_Debug_TypeInfo + 0x74);
  }
  if (iVar3 == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(uVar2,0);
  return true;
}

// ---- HelperUtilities$$GetMouseWorldPosition ----
// C#: UnityEngine_Vector3_o HelperUtilities__GetMouseWorldPosition (const MethodInfo* method);

void HelperUtilities__GetMouseWorldPosition(Vector3_o *__ret,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_30;
  undefined4 local_28;
  float4 local_20;
  float4 local_1c;
  undefined4 local_18;
  undefined8 local_10 [2];
  
  if (DAT_ram_0066483a == '\0') {
    unnamed_function_1099(&HelperUtilities_TypeInfo);
    unnamed_function_1099(&DAT_ram_00562374);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_0066483a = '\x01';
  }
  uVar5 = **(undefined4 **)(HelperUtilities_TypeInfo + 0x5c);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  iVar3 = unnamed_function_44710(uVar5,0,0);
  if (iVar3 != 0) {
    uVar5 = unnamed_function_52349(0);
    **(undefined4 **)(HelperUtilities_TypeInfo + 0x5c) = uVar5;
  }
  if (DAT_ram_00662ee9 == '\0') {
    unnamed_function_1099(&UnityEngine_InputSystem_Mouse_TypeInfo);
    DAT_ram_00662ee9 = '\x01';
  }
  unnamed_function_50385
            (local_10,*(undefined4 *)
                       (**(int **)(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c) + 0x10c),
             DAT_ram_00562374);
  uVar2 = local_10[0];
  iVar3 = unnamed_function_52650(0);
  iVar4 = unnamed_function_52651(0);
  local_18 = 0;
  local_28 = 0;
  fVar1 = (float)uVar2;
  fVar6 = (float)iVar3;
  if (fVar1 <= (float)iVar3) {
    fVar6 = fVar1;
  }
  local_20 = (float4)0.0;
  if (0.0 <= fVar1) {
    local_20 = (float4)fVar6;
  }
  fVar1 = (float)((ulonglong)uVar2 >> 0x20);
  fVar6 = (float)iVar4;
  if (fVar1 <= (float)iVar4) {
    fVar6 = fVar1;
  }
  local_1c = (float4)0.0;
  if (0.0 <= fVar1) {
    local_1c = (float4)fVar6;
  }
  local_30 = CONCAT44(local_1c,local_20);
  unnamed_function_52341(local_10,**(undefined4 **)(HelperUtilities_TypeInfo + 0x5c),&local_30,0);
  __ret->z = 0.0;
  __ret->x = (float)(undefined4)local_10[0];
  __ret->y = (float)local_10[0]._4_4_;
  return;
}

// ---- HelperUtilities$$ValidateCheckPositiveRange ----
// C#: bool HelperUtilities__ValidateCheckPositiveRange (UnityEngine_Object_o* thisObject, System_String_o* fieldNameMinimum, float valueToCheckMinimum, System_String_o* fieldNameMaximum, float valueToCheckMaximum, bool isZeroAllowed, const MethodInfo* method);

bool HelperUtilities__ValidateCheckPositiveRange
               (UnityEngine_Object_o *thisObject,System_String_o *fieldNameMinimum,
               float valueToCheckMinimum,System_String_o *fieldNameMaximum,float valueToCheckMaximum
               ,bool isZeroAllowed,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int param1;
  int *piVar3;
  undefined4 uVar4;
  
  if (DAT_ram_0066483b == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_256);
    unnamed_function_1099(&StringLiteral_227);
    DAT_ram_0066483b = '\x01';
  }
  if (valueToCheckMaximum < valueToCheckMinimum) {
    param1 = unnamed_function_1050(string___TypeInfo,5);
    *(System_String_o **)(param1 + 0x10) = fieldNameMinimum;
    uVar4 = StringLiteral_256;
    *(System_String_o **)(param1 + 0x18) = fieldNameMaximum;
    *(undefined4 *)(param1 + 0x14) = uVar4;
    *(undefined4 *)(param1 + 0x1c) = StringLiteral_227;
    piVar3 = (int *)unnamed_function_44768(thisObject,0);
    uVar4 = (**(code **)((ulonglong)*(uint *)(*piVar3 + 0xd8) * 4))
                      (piVar3,*(undefined4 *)(*piVar3 + 0xdc));
    *(undefined4 *)(param1 + 0x20) = uVar4;
    uVar4 = unnamed_function_81509(param1,0);
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    unnamed_function_52407(uVar4,0);
  }
  bVar1 = HelperUtilities__ValidateCheckPositiveValue
                    (thisObject,fieldNameMinimum,valueToCheckMinimum,isZeroAllowed,
                     (MethodInfo *)thisObject);
  bVar2 = HelperUtilities__ValidateCheckPositiveValue
                    (thisObject,fieldNameMaximum,valueToCheckMaximum,isZeroAllowed,
                     (MethodInfo *)thisObject);
  return bVar2 || (bVar1 || valueToCheckMaximum < valueToCheckMinimum);
}

// ---- HelperUtilities$$GetMousePositionInUI ----
// C#: UnityEngine_Vector3_o HelperUtilities__GetMousePositionInUI (UnityEngine_RectTransform_o* rectTransform, UnityEngine_Camera_o* uiCamera, const MethodInfo* method);

void HelperUtilities__GetMousePositionInUI
               (Vector3_o *__ret,UnityEngine_RectTransform_o *rectTransform,
               UnityEngine_Camera_o *uiCamera,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  float fVar7;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  float local_18;
  ulonglong local_10;
  undefined8 local_8;
  
  if (DAT_ram_0066483c == '\0') {
    unnamed_function_1099(&DAT_ram_00562374);
    unnamed_function_1099(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_ram_0066483c = '\x01';
  }
  local_8 = 0;
  if (DAT_ram_00662ee9 == '\0') {
    unnamed_function_1099(&UnityEngine_InputSystem_Mouse_TypeInfo);
    DAT_ram_00662ee9 = '\x01';
  }
  unnamed_function_50385
            (&local_20,
             *(undefined4 *)(**(int **)(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c) + 0x10c),
             DAT_ram_00562374);
  uVar1 = local_20;
  fVar4 = (float)((ulonglong)local_20 >> 0x20);
  iVar2 = unnamed_function_52650(0);
  iVar3 = unnamed_function_52651(0);
  if (*(int *)(UnityEngine_RectTransformUtility_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_RectTransformUtility_TypeInfo);
  }
  local_38 = 0;
  fVar7 = (float)uVar1;
  fVar5 = (float)iVar2;
  if (fVar7 <= (float)iVar2) {
    fVar5 = fVar7;
  }
  if (0.0 <= fVar7) {
    local_38 = (ulonglong)(uint)fVar5;
  }
  uVar6 = 0;
  fVar7 = (float)iVar3;
  if (fVar4 <= (float)iVar3) {
    fVar7 = fVar4;
  }
  if (0.0 <= fVar4) {
    uVar6 = (ulonglong)(uint)fVar7;
  }
  local_38 = local_38 | uVar6 << 0x20;
  local_10 = local_38;
  unnamed_function_16247(rectTransform,&local_38,uiCamera,&local_8,0);
  local_28 = 0;
  local_40 = 0;
  local_30 = local_8;
  local_48 = local_8;
  unnamed_function_45004(&local_20,rectTransform,&local_48,0);
  __ret->z = local_18;
  __ret->x = (float)(undefined4)local_20;
  __ret->y = (float)local_20._4_4_;
  return;
}

// ---- HelperUtilities$$LinearToDecibels ----
// C#: float HelperUtilities__LinearToDecibels (float linear, const MethodInfo* method);

float HelperUtilities__LinearToDecibels(float linear,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = unnamed_function_12518(linear / 20.0);
  return fVar1 * 20.0;
}

