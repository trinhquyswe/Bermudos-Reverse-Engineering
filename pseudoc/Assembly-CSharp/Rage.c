// Assembly-CSharp :: Rage
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Rage : MonoBehaviour // TypeDefIndex: 5627
{
	// Fields
	[HideInInspector]
	public float maxRage; // 0x10
	[HideInInspector]
	public float currentRage; // 0x14

	// Methods

	// RVA: 0x3843 Offset: 0x3843 VA: 0x3843
	public void IncreaseRage(float amount) { }

	// RVA: 0x3844 Offset: 0x3844 VA: 0x3844
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Rage$$IncreaseRage ----
// C#: void Rage__IncreaseRage (Rage_o* __this, float amount, const MethodInfo* method);

void Rage__IncreaseRage(Rage_o *__this,float amount,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = __this->currentRage + amount;
  __this->currentRage = fVar4;
  fVar2 = __this->maxRage;
  if (fVar2 < fVar4) {
    __this->currentRage = fVar2;
    fVar4 = fVar2;
  }
  if (DAT_ram_00664b49 == '\0') {
    unnamed_function_1099(&RageEventArgs_TypeInfo);
    unnamed_function_1099(&RageEvent_TypeInfo);
    DAT_ram_00664b49 = '\x01';
  }
  iVar3 = **(int **)(RageEvent_TypeInfo + 0x5c);
  if (iVar3 != 0) {
    iVar1 = unnamed_function_95402(RageEventArgs_TypeInfo);
    *(float *)(iVar1 + 0x10) = fVar2;
    *(float *)(iVar1 + 0xc) = fVar2;
    *(float *)(iVar1 + 8) = fVar4 / fVar2;
    (**(code **)((ulonglong)*(uint *)(iVar3 + 0xc) * 4))
              (*(undefined4 *)(iVar3 + 0x20),iVar1,*(undefined4 *)(iVar3 + 0x14));
  }
  return;
}

// ---- Rage$$.ctor ----
// C#: void Rage___ctor (Rage_o* __this, const MethodInfo* method);

void Rage___ctor(Rage_o *__this,MethodInfo *method)

{
  __this->maxRage = 10.0;
  unnamed_function_44622(__this,0);
  return;
}

