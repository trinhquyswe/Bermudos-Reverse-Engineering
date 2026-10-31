// Assembly-CSharp :: Stamina
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Stamina : MonoBehaviour // TypeDefIndex: 5630
{
	// Fields
	[SerializeField]
	private int maxStamina; // 0x10
	[HideInInspector]
	public float currentStamina; // 0x14
	private Player player; // 0x18
	private float staminaRecoveryTimer; // 0x1C
	private float staminaRecoveryRate; // 0x20
	private float staminaRegenAmount; // 0x24

	// Methods

	// RVA: 0x3849 Offset: 0x3849 VA: 0x3849
	private void Awake() { }

	// RVA: 0x384A Offset: 0x384A VA: 0x384A
	private void Start() { }

	// RVA: 0x384B Offset: 0x384B VA: 0x384B
	private void Update() { }

	// RVA: 0x384C Offset: 0x384C VA: 0x384C
	public void UseStamina(int staminaAmount) { }

	// RVA: 0x384D Offset: 0x384D VA: 0x384D
	private void RegenerateStamina() { }

	// RVA: 0x384E Offset: 0x384E VA: 0x384E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Stamina$$Awake ----
// C#: void Stamina__Awake (Stamina_o* __this, const MethodInfo* method);

void Stamina__Awake(Stamina_o *__this,MethodInfo *method)

{
  Player_o *pPVar1;
  
  if (DAT_ram_00664b4a == '\0') {
    unnamed_function_1099(&DAT_ram_00567ef0);
    DAT_ram_00664b4a = '\x01';
  }
  pPVar1 = (Player_o *)unnamed_function_65370(__this,DAT_ram_00567ef0);
  __this->player = pPVar1;
  return;
}

// ---- Stamina$$Start ----
// C#: void Stamina__Start (Stamina_o* __this, const MethodInfo* method);

void Stamina__Start(Stamina_o *__this,MethodInfo *method)

{
  float currentStamina;
  
  currentStamina = (float)__this->maxStamina;
  __this->currentStamina = currentStamina;
  StaminaEvent__CallStaminaChangedEvent
            (__this->player->staminaEvent,currentStamina / currentStamina,currentStamina,0.0,
             (MethodInfo *)__this);
  return;
}

// ---- Stamina$$Update ----
// C#: void Stamina__Update (Stamina_o* __this, const MethodInfo* method);

void Stamina__Update(Stamina_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __this->currentStamina;
  if (fVar2 < (float)__this->maxStamina) {
    fVar3 = __this->staminaRegenAmount;
    fVar1 = unnamed_function_44879(0);
    fVar2 = fVar2 + fVar3 * fVar1;
    __this->currentStamina = fVar2;
    StaminaEvent__CallStaminaChangedEvent
              (__this->player->staminaEvent,fVar2 / (float)__this->maxStamina,fVar2,0.0,
               (MethodInfo *)__this);
  }
  fVar2 = unnamed_function_44878(0);
  __this->staminaRecoveryTimer = fVar2 + __this->staminaRecoveryRate;
  return;
}

// ---- Stamina$$UseStamina ----
// C#: void Stamina__UseStamina (Stamina_o* __this, int32_t staminaAmount, const MethodInfo* method);

void Stamina__UseStamina(Stamina_o *__this,int staminaAmount,MethodInfo *method)

{
  float currentStamina;
  
  if (0.0 < __this->currentStamina) {
    currentStamina = __this->currentStamina - (float)staminaAmount;
    __this->currentStamina = currentStamina;
    StaminaEvent__CallStaminaChangedEvent
              (__this->player->staminaEvent,currentStamina / (float)__this->maxStamina,
               currentStamina,(float)staminaAmount,(MethodInfo *)__this);
  }
  return;
}

// ---- Stamina$$RegenerateStamina ----
// C#: void Stamina__RegenerateStamina (Stamina_o* __this, const MethodInfo* method);

void Stamina__RegenerateStamina(Stamina_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __this->currentStamina;
  if (fVar2 < (float)__this->maxStamina) {
    fVar3 = __this->staminaRegenAmount;
    fVar1 = unnamed_function_44879(0);
    fVar2 = fVar2 + fVar3 * fVar1;
    __this->currentStamina = fVar2;
    StaminaEvent__CallStaminaChangedEvent
              (__this->player->staminaEvent,fVar2 / (float)__this->maxStamina,fVar2,0.0,
               (MethodInfo *)__this);
  }
  return;
}

// ---- Stamina$$.ctor ----
// C#: void Stamina___ctor (Stamina_o* __this, const MethodInfo* method);

void Stamina___ctor(Stamina_o *__this,MethodInfo *method)

{
  __this->staminaRecoveryRate = 1.0;
  __this->staminaRegenAmount = 5.0;
  unnamed_function_44622(__this,0);
  return;
}

