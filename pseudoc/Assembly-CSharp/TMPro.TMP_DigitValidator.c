// Assembly-CSharp :: TMPro.TMP_DigitValidator
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class TMP_DigitValidator : TMP_InputValidator // TypeDefIndex: 5738
{
	// Methods

	// RVA: 0x3AC7 Offset: 0x3AC7 VA: 0x3AC7 Slot: 4
	public override char Validate(ref string text, ref int pos, char ch) { }

	// RVA: 0x3AC8 Offset: 0x3AC8 VA: 0x3AC8
	public void .ctor() { }
}

===== C# end =====
*/

// ---- TMPro.TMP_DigitValidator$$Validate ----
// C#: uint16_t TMPro_TMP_DigitValidator__Validate (TMPro_TMP_DigitValidator_o* __this, System_String_o** text, int32_t* pos, uint16_t ch, const MethodInfo* method);

void TMPro_TMP_DigitValidator__Validate
               (ushort __ret,TMPro_TMP_DigitValidator_o *__this,System_String_o__o *text,
               int32_t_o *pos,ushort ch,MethodInfo *method)

{
  undefined4 param2;
  void *pvVar1;
  ushort local_2;
  
  local_2 = (ushort)pos;
  if (DAT_ram_00664849 == '\0') {
    unnamed_function_1099(&char_TypeInfo);
    DAT_ram_00664849 = '\x01';
  }
  if (s_androidMinimumWindowHeight_ram_0000ffe8 + 0xd <
      (char *)((uint)((int)&pos[-0xf]._opaque + 2) & 0xffff)) {
    pvVar1 = __this->klass;
    if (*(int *)(char_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(char_TypeInfo);
    }
    param2 = unnamed_function_82584(&local_2,0);
    pvVar1 = (void *)unnamed_function_81364(pvVar1,param2,0);
    __this->klass = pvVar1;
    text->_opaque = text->_opaque + 1;
  }
  return;
}

// ---- TMPro.TMP_DigitValidator$$.ctor ----
// C#: void TMPro_TMP_DigitValidator___ctor (TMPro_TMP_DigitValidator_o* __this, const MethodInfo* method);

void TMPro_TMP_DigitValidator___ctor(TMPro_TMP_DigitValidator_o *__this,MethodInfo *method)

{
  AmmoDetailsSO___ctor((AmmoDetailsSO_o *)__this,(MethodInfo *)0x0);
  return;
}

