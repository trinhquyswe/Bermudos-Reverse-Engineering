// Assembly-CSharp :: TMPro.TMP_PhoneNumberValidator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_PhoneNumberValidator : TMP_InputValidator // TypeDefIndex: 5739
{
	// Methods

	// RVA: 0x3AC9 Offset: 0x3AC9 VA: 0x3AC9 Slot: 4
	public override char Validate(ref string text, ref int pos, char ch) { }

	// RVA: 0x3ACA Offset: 0x3ACA VA: 0x3ACA
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.TMP_PhoneNumberValidator$$Validate ----
// C#: uint16_t TMPro_TMP_PhoneNumberValidator__Validate (TMPro_TMP_PhoneNumberValidator_o* __this, System_String_o** text, int32_t* pos, uint16_t ch, const MethodInfo* method);

void TMPro_TMP_PhoneNumberValidator__Validate
               (ushort __ret,TMPro_TMP_PhoneNumberValidator_o *__this,System_String_o__o *text,
               int32_t_o *pos,ushort ch,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *param1;
  uint uVar5;
  ushort local_2;
  
  local_2 = (ushort)pos;
  if (DAT_ram_0066484a == '\0') {
    unnamed_function_1099(&char_TypeInfo);
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&StringLiteral_92);
    unnamed_function_1099(&StringLiteral_747);
    unnamed_function_1099(&StringLiteral_633);
    unnamed_function_1099(&StringLiteral_681);
    unnamed_function_1099(&StringLiteral_8122);
    DAT_ram_0066484a = '\x01';
  }
  if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Debug_TypeInfo);
  }
  unnamed_function_52407(StringLiteral_8122,0);
  param1 = __this->klass;
  uVar5 = *(uint *)((int)param1 + 8);
  if (uVar5 < 0x7fffffff) {
    uVar3 = 0;
    do {
      if (uVar3 == 0) {
        iVar2 = 2;
        if (uVar5 == 0) {
          if (*(int *)(char_TypeInfo + 0x74) == 0) {
            unnamed_function_94848(char_TypeInfo);
          }
          uVar4 = unnamed_function_82584(&local_2,0);
          param1 = (void *)unnamed_function_81364(StringLiteral_633,uVar4,0);
          iVar2 = 2;
code_r0x81a2410c:
          __this->klass = param1;
        }
code_r0x81a24116:
        text->_opaque = iVar2;
      }
      else {
        if (uVar3 == 1) {
          iVar2 = 2;
          if (uVar5 == 1) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
            iVar2 = 2;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 2) {
          iVar2 = 3;
          if (uVar5 == 2) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
            iVar2 = 3;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 3) {
          iVar2 = 6;
          if (uVar5 == 3) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81504(param1,uVar4,StringLiteral_681,0);
            iVar2 = 6;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 4) {
          iVar2 = 7;
          if (uVar5 == 4) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81504(param1,StringLiteral_681,uVar4,0);
            iVar2 = 7;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 5) {
          iVar2 = 7;
          if (uVar5 == 5) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81504(param1,StringLiteral_92,uVar4,0);
            iVar2 = 7;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 6) {
          iVar2 = 7;
          if (uVar5 == 6) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
            iVar2 = 7;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 7) {
          iVar2 = 8;
          if (uVar5 == 7) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
            iVar2 = 8;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 8) {
          iVar2 = 10;
          if (uVar5 == 8) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81504(param1,uVar4,StringLiteral_747,0);
            iVar2 = 10;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 9) {
          iVar2 = 0xb;
          if (uVar5 == 9) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81504(param1,StringLiteral_747,uVar4,0);
            iVar2 = 0xb;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 10) {
          iVar2 = 0xb;
          if (uVar5 == 10) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
            iVar2 = 0xb;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 0xb) {
          iVar2 = 0xc;
          if (uVar5 == 0xb) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
            iVar2 = 0xc;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 0xc) {
          iVar2 = 0xd;
          if (uVar5 == 0xc) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
            iVar2 = 0xd;
            goto code_r0x81a2410c;
          }
          goto code_r0x81a24116;
        }
        if (uVar3 == 0xd) {
          iVar2 = 0xe;
          if (uVar5 == 0xd) {
            if (*(int *)(char_TypeInfo + 0x74) == 0) {
              unnamed_function_94848(char_TypeInfo);
            }
            uVar4 = unnamed_function_82584(&local_2,0);
            param1 = (void *)unnamed_function_81364(param1,uVar4,0);
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
  return;
}

// ---- TMPro.TMP_PhoneNumberValidator$$.ctor ----
// C#: void TMPro_TMP_PhoneNumberValidator___ctor (TMPro_TMP_PhoneNumberValidator_o* __this, const MethodInfo* method);

void TMPro_TMP_DigitValidator___ctor(TMPro_TMP_DigitValidator_o *__this,MethodInfo *method)

{
  AmmoDetailsSO___ctor((AmmoDetailsSO_o *)__this,(MethodInfo *)0x0);
  return;
}

