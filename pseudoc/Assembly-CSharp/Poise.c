// Assembly-CSharp :: Poise
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Poise : MonoBehaviour // TypeDefIndex: 5624
{
	// Fields
	private PoiseEvent poiseEvent; // 0x10
	public float maxPoise; // 0x14
	public float currentPoise; // 0x18
	public float stunTime; // 0x1C

	// Methods

	// RVA: 0x383A Offset: 0x383A VA: 0x383A
	private void Awake() { }

	// RVA: 0x383B Offset: 0x383B VA: 0x383B
	private void Start() { }

	// RVA: 0x383C Offset: 0x383C VA: 0x383C
	public void TakePoise(int poiseAmount) { }

	// RVA: 0x383D Offset: 0x383D VA: 0x383D
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Poise$$Awake ----
// C#: void Poise__Awake (Poise_o* __this, const MethodInfo* method);

void Poise__Awake(Poise_o *__this,MethodInfo *method)

{
  PoiseEvent_o *pPVar1;
  
  if (DAT_ram_00664b43 == '\0') {
    unnamed_function_1099(&DAT_ram_00567efc);
    DAT_ram_00664b43 = '\x01';
  }
  pPVar1 = (PoiseEvent_o *)unnamed_function_65370(__this,DAT_ram_00567efc);
  __this->poiseEvent = pPVar1;
  return;
}

// ---- Poise$$Start ----
// C#: void Poise__Start (Poise_o* __this, const MethodInfo* method);

void Poise__Start(Poise_o *__this,MethodInfo *method)

{
  __this->currentPoise = __this->maxPoise;
  return;
}

// ---- Poise$$TakePoise ----
// C#: void Poise__TakePoise (Poise_o* __this, int32_t poiseAmount, const MethodInfo* method);

void Poise__TakePoise(Poise_o *__this,int poiseAmount,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  PoiseEvent_o *pPVar4;
  Action_o *pAVar5;
  float fVar6;
  
  fVar6 = __this->currentPoise - (float)poiseAmount;
  __this->currentPoise = fVar6;
  if (fVar6 <= 0.0) {
    fVar2 = __this->stunTime;
    fVar3 = __this->maxPoise;
    pPVar4 = __this->poiseEvent;
    if (DAT_ram_00664b46 == '\0') {
      unnamed_function_1099(&PoiseEventArgs_TypeInfo);
      DAT_ram_00664b46 = '\x01';
    }
    pAVar5 = pPVar4->OnPoise;
    if (pAVar5 != (Action_o *)0x0) {
      iVar1 = unnamed_function_95402(PoiseEventArgs_TypeInfo);
      *(float *)(iVar1 + 0x14) = fVar2;
      *(float *)(iVar1 + 0x10) = fVar3;
      *(float *)(iVar1 + 0xc) = fVar6;
      *(float *)(iVar1 + 8) = (float)poiseAmount;
      (**(code **)((ulonglong)(uint)pAVar5[3]._opaque * 4))
                (pAVar5[8]._opaque,pPVar4,iVar1,pAVar5[5]._opaque);
    }
  }
  return;
}

// ---- Poise$$.ctor ----
// C#: void Poise___ctor (Poise_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

