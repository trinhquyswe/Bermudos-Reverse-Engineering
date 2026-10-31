// Assembly-CSharp :: Spinny
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Spinny : Action // TypeDefIndex: 5573
{
	// Fields
	private Animator animator; // 0x2C
	private Vector2 direction; // 0x30
	private Weapon weapon; // 0x38
	private DealContactDamage dealContactDamage; // 0x3C
	private Rigidbody2D rb; // 0x40
	[SerializeField]
	private float speed; // 0x44
	[SerializeField]
	private int damage; // 0x48
	private bool isColliding; // 0x4C
	private MeleeSkills meleeSkills; // 0x50
	private BoxCollider2D boxCollider2D; // 0x54
	[SerializeField]
	private SoundEffectSO spinnySoundEffect; // 0x58
	[SerializeField]
	private float spinnyTime; // 0x5C

	// Methods

	// RVA: 0x3747 Offset: 0x3747 VA: 0x3747 Slot: 4
	public override void OnAwake() { }

	// RVA: 0x3748 Offset: 0x3748 VA: 0x3748 Slot: 5
	public override void OnStart() { }

	// RVA: 0x3749 Offset: 0x3749 VA: 0x3749 Slot: 8
	public override void OnFixedUpdate() { }

	// RVA: 0x374A Offset: 0x374A VA: 0x374A Slot: 6
	public override TaskStatus OnUpdate() { }

	// RVA: 0x374B Offset: 0x374B VA: 0x374B Slot: 7
	public override void OnLateUpdate() { }

	// RVA: 0x374C Offset: 0x374C VA: 0x374C Slot: 23
	public override void OnCollisionEnter2D(Collision2D collision) { }

	// RVA: 0x374D Offset: 0x374D VA: 0x374D Slot: 9
	public override void OnEnd() { }

	// RVA: 0x374E Offset: 0x374E VA: 0x374E
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Spinny$$OnAwake ----
// C#: void Spinny__OnAwake (Spinny_o* __this, const MethodInfo* method);

void Spinny__OnAwake(Spinny_o *__this,MethodInfo *method)

{
  Animator_o *pAVar1;
  Rigidbody2D_o *pRVar2;
  MeleeSkills_o *pMVar3;
  Weapon_o *pWVar4;
  DealContactDamage_o *pDVar5;
  BoxCollider2D_o *pBVar6;
  
  if (DAT_ram_00664ad1 == '\0') {
    unnamed_function_1099(&DAT_ram_0056cec0);
    unnamed_function_1099(&DAT_ram_0056cecc);
    unnamed_function_1099(&DAT_ram_0056ced0);
    unnamed_function_1099(&DAT_ram_0056cedc);
    unnamed_function_1099(&DAT_ram_0056cee8);
    unnamed_function_1099(&DAT_ram_0056ceec);
    DAT_ram_00664ad1 = '\x01';
  }
  pAVar1 = (Animator_o *)unnamed_function_69916(__this,DAT_ram_0056cec0);
  __this->animator = pAVar1;
  pRVar2 = (Rigidbody2D_o *)unnamed_function_69916(__this,DAT_ram_0056cee8);
  __this->rb = pRVar2;
  pMVar3 = (MeleeSkills_o *)unnamed_function_69916(__this,DAT_ram_0056cedc);
  __this->meleeSkills = pMVar3;
  pWVar4 = (Weapon_o *)unnamed_function_69916(__this,DAT_ram_0056ceec);
  __this->weapon = pWVar4;
  pDVar5 = (DealContactDamage_o *)unnamed_function_69916(__this,DAT_ram_0056ced0);
  __this->dealContactDamage = pDVar5;
  pBVar6 = (BoxCollider2D_o *)unnamed_function_69916(__this,DAT_ram_0056cecc);
  __this->boxCollider2D = pBVar6;
  return;
}

// ---- Spinny$$OnStart ----
// C#: void Spinny__OnStart (Spinny_o* __this, const MethodInfo* method);

void Spinny__OnStart(Spinny_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  undefined4 uVar4;
  BoxCollider2D_o *param1;
  int iVar5;
  Animator_o *param1_00;
  float fVar6;
  float fVar7;
  float fVar8;
  Vector2_o VVar9;
  undefined8 local_30;
  undefined4 local_28;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (DAT_ram_00664ad2 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e38);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&Settings_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664ad2 = '\x01';
  }
  unnamed_function_16398(__this->rb,0.0,0);
  param1 = __this->boxCollider2D;
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  uVar4 = unnamed_function_65370(*(undefined4 *)(**(int **)(iVar5 + 0x5c) + 0x10),DAT_ram_00567e38);
  if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
  }
  unnamed_function_16344(param1,uVar4,0);
  uVar4 = unnamed_function_44683(*(undefined4 *)__this->pad_8,0);
  local_8 = 0x3fc00000;
  local_28 = 0x3fc00000;
  local_10 = 0x3fc000003fc00000;
  local_30 = 0x3fc000003fc00000;
  unnamed_function_44982(uVar4,&local_30,0);
  __this->dealContactDamage->isRemoved = false;
  __this->isColliding = false;
  param1_00 = __this->animator;
  if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(Settings_TypeInfo);
  }
  unnamed_function_45425(param1_00,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x98),0);
  iVar5 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  uVar4 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar5 + 0x5c) + 0x10),0);
  unnamed_function_44960(&local_20,uVar4,0);
  fVar3 = local_18;
  fVar2 = local_1c;
  fVar1 = local_20;
  unnamed_function_44960(&local_20,*(undefined4 *)(__this->pad_8 + 4),0);
  if (DAT_ram_0066482c == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0066482c = '\x01';
  }
  fVar6 = (float)fVar2 - (float)local_1c;
  fVar7 = (float)fVar1 - (float)local_20;
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 +
               ((float)fVar3 - (float)local_18) * ((float)fVar3 - (float)local_18));
  if (1e-05 < fVar8) {
    fVar6 = fVar6 / fVar8;
    fVar7 = fVar7 / fVar8;
  }
  else {
    if (DAT_ram_00664829 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00664829 = '\x01';
    }
    fVar6 = (*(float **)(UnityEngine_Vector3_TypeInfo + 0x5c))[1];
    fVar7 = **(float **)(UnityEngine_Vector3_TypeInfo + 0x5c);
  }
  VVar9.y = fVar6;
  VVar9.x = fVar7;
  __this->direction = VVar9;
  __this->dealContactDamage->contactDamageAmount = __this->damage;
  iVar5 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = unnamed_function_95087(iVar5);
  }
  SoundEffectManager__PlaySoundEffectPersistent
            ((SoundEffectManager_o *)**(undefined4 **)(iVar5 + 0x5c),__this->spinnySoundEffect,true,
             (MethodInfo *)0x0);
  __this->spinnyTime = 5.0;
  return;
}

// ---- Spinny$$OnFixedUpdate ----
// C#: void Spinny__OnFixedUpdate (Spinny_o* __this, const MethodInfo* method);

void Spinny__OnFixedUpdate(Spinny_o *__this,MethodInfo *method)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = CONCAT44(__this->speed * (__this->direction).y,__this->speed * (__this->direction).x);
  local_8 = local_10;
  unnamed_function_16392(__this->rb,&local_10,0);
  return;
}

// ---- Spinny$$OnUpdate ----
// C#: int32_t Spinny__OnUpdate (Spinny_o* __this, const MethodInfo* method);

void Spinny__OnUpdate(BehaviorDesigner_Runtime_Tasks_TaskStatus __ret,Spinny_o *__this,
                     MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((*(char *)(__ret + 0x4c) == '\0') && (fVar2 = *(float *)(__ret + 0x5c), 0.0 <= fVar2)) {
    fVar1 = unnamed_function_44879(0);
    *(float *)(__ret + 0x5c) = fVar2 - fVar1;
  }
  return;
}

// ---- Spinny$$OnLateUpdate ----
// C#: void Spinny__OnLateUpdate (Spinny_o* __this, const MethodInfo* method);

void Spinny__OnLateUpdate(Spinny_o *__this,MethodInfo *method)

{
  Weapon__GetWeaponCollider(__this->weapon,(MethodInfo *)0x0);
  return;
}

// ---- Spinny$$OnCollisionEnter2D ----
// C#: void Spinny__OnCollisionEnter2D (Spinny_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Spinny__OnCollisionEnter2D
               (Spinny_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  int iVar2;
  
  if (DAT_ram_00664ad3 == '\0') {
    unnamed_function_1099(&StringLiteral_2717 /* "Collision" */);
    DAT_ram_00664ad3 = '\x01';
  }
  param1 = unnamed_function_16380(collision,0);
  iVar1 = unnamed_function_44684(param1,0);
  iVar2 = unnamed_function_44702(StringLiteral_2717 /* "Collision" */,0);
  if (iVar1 == iVar2) {
    __this->isColliding = true;
  }
  return;
}

// ---- Spinny$$OnEnd ----
// C#: void Spinny__OnEnd (Spinny_o* __this, const MethodInfo* method);

void Spinny__OnEnd(Spinny_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  BoxCollider2D_o *param1;
  Rigidbody2D_o *param1_00;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664ad4 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e38);
    unnamed_function_1099(&UnityEngine_Physics2D_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664ad4 = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d6c + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  SoundEffectManager__StopSoundEffectLoop
            ((SoundEffectManager_o *)**(undefined4 **)(iVar2 + 0x5c),__this->spinnySoundEffect,
             (MethodInfo *)0x0);
  unnamed_function_16398(__this->rb,100000.0,0);
  param1 = __this->boxCollider2D;
  iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  uVar1 = unnamed_function_65370(*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x10),DAT_ram_00567e38);
  if (*(int *)(UnityEngine_Physics2D_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Physics2D_TypeInfo);
  }
  unnamed_function_16345(param1,uVar1,0,0);
  param1_00 = __this->rb;
  if (DAT_ram_0066482a == '\0') {
    unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
    DAT_ram_0066482a = '\x01';
  }
  local_20 = **(undefined8 **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  local_8 = local_20;
  unnamed_function_16392(param1_00,&local_20,0);
  __this->dealContactDamage->isRemoved = true;
  uVar1 = unnamed_function_44683(*(undefined4 *)__this->pad_8,0);
  local_10 = 0x40400000;
  local_28 = 0x40400000;
  local_18 = 0x4040000040400000;
  local_30 = 0x4040000040400000;
  unnamed_function_44982(uVar1,&local_30,0);
  return;
}

// ---- Spinny$$.ctor ----
// C#: void Spinny___ctor (Spinny_o* __this, const MethodInfo* method);

void Spinny___ctor(Spinny_o *__this,MethodInfo *method)

{
  __this->spinnyTime = 5.0;
  __this->speed = 5.0;
  __this->damage = 10;
  unnamed_function_51834(__this,0);
  return;
}

