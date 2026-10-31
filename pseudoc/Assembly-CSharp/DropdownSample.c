// Assembly-CSharp :: DropdownSample
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
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
	public void OnButtonClick() { }

	// RVA: 0x3ABB Offset: 0x3ABB VA: 0x3ABB
	public void .ctor() { }
}

===== C# end =====
*/

// ---- DropdownSample$$OnButtonClick ----
// C#: void DropdownSample__OnButtonClick (DropdownSample_o* __this, const MethodInfo* method);

void DropdownSample__OnButtonClick(DropdownSample_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param4;
  TextMeshProUGUI_o *pTVar2;
  int iVar3;
  int local_4;
  
  if (DAT_ram_00664843 == '\0') {
    unnamed_function_1099(&StringLiteral_6639 /* "Selected values:\n" */);
    unnamed_function_1099(&StringLiteral_120 /* " - " */);
    unnamed_function_1099(&StringLiteral_3659 /* "Error: Please make a selection" */);
    DAT_ram_00664843 = '\x01';
  }
  local_4 = 0;
  pTVar2 = __this->text;
  uVar1 = StringLiteral_3659 /* "Error: Please make a selection" */;
  if (-1 < __this->dropdownWithPlaceholder[0x33]._opaque) {
    local_4 = __this->dropdownWithoutPlaceholder[0x33]._opaque;
    uVar1 = unnamed_function_83644(&local_4,0);
    local_4 = __this->dropdownWithPlaceholder[0x33]._opaque;
    param4 = unnamed_function_83644(&local_4,0);
    uVar1 = unnamed_function_81508(StringLiteral_6639 /* "Selected values:\n" */,uVar1,StringLiteral_120 /* " - " */,param4,0);
  }
  iVar3 = pTVar2->_opaque;
  (**(code **)((ulonglong)*(uint *)(iVar3 + 0x2d0) * 4))
            (pTVar2,uVar1,*(undefined4 *)(iVar3 + 0x2d4));
  return;
}

// ---- DropdownSample$$.ctor ----
// C#: void DropdownSample___ctor (DropdownSample_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

