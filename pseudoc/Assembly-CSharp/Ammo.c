// Assembly-CSharp :: Ammo
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Ammo : MonoBehaviour, IFireable // TypeDefIndex: 5535
{
	// Fields
	[HideInInspector]
	public AmmoDetailsSO ammoDetailsSO; // 0x10
	private EnemyEffect enemyEffect; // 0x14
	private PlayerEffect playerEffect; // 0x18
	private DestroyedEvent destroyedEvent; // 0x1C
	private AmmoVisual ammoVisual; // 0x20
	private AmmoAnimation ammoAnimation; // 0x24
	private LayerMask enemyLayerMask; // 0x28
	private LayerMask playerLayerMask; // 0x2C
	private LayerMask bossLayerMask; // 0x30
	private Vector2 trajectoryStartPoint; // 0x34
	private Vector2 target; // 0x3C
	private Vector2 trajectoryRange; // 0x44
	private Vector2 ammoMoveDirection; // 0x4C
	private float nextYTrajectoryPosition; // 0x54
	private float nextXTrajectoryPosition; // 0x58
	private float trajectoryMaxRelativeHeight; // 0x5C
	private float nextPositionYCorrectionAbsolute; // 0x60
	private float nextPositionXCorrectionAbsolute; // 0x64
	private float speed; // 0x68
	[SerializeField]
	private int poiseAmount; // 0x6C
	[SerializeField]
	private float stunDuration; // 0x70
	public AmmoState ammoState; // 0x74
	private bool isColliding; // 0x78
	[SerializeField]
	private SoundEffectSO shootSoundEffect; // 0x7C
	private bool isFirstOnEnable; // 0x80

	// Methods

	// RVA: 0x3676 Offset: 0x3676 VA: 0x3676
	private void Awake() { }

	// RVA: 0x3677 Offset: 0x3677 VA: 0x3677
	private void OnEnable() { }

	// RVA: 0x3678 Offset: 0x3678 VA: 0x3678
	private void Start() { }

	// RVA: 0x3679 Offset: 0x3679 VA: 0x3679
	private void Update() { }

	// RVA: 0x367A Offset: 0x367A VA: 0x367A
	private void UpdateAmmoPosition() { }

	// RVA: 0x367B Offset: 0x367B VA: 0x367B
	private void UpdateAmmoXPosition() { }

	// RVA: 0x367C Offset: 0x367C VA: 0x367C
	private void UpdateAmmoYPosition() { }

	// RVA: 0x367D Offset: 0x367D VA: 0x367D
	public Vector2 GetAmmoMoveDirection() { }

	// RVA: 0x367E Offset: 0x367E VA: 0x367E
	public float GetNextYTrajectoryPosition() { }

	// RVA: 0x367F Offset: 0x367F VA: 0x367F
	public float GetNextPositionYCorrectionAbsolute() { }

	// RVA: 0x3680 Offset: 0x3680 VA: 0x3680
	private void MoveAmmoByDirection() { }

	// RVA: 0x3681 Offset: 0x3681 VA: 0x3681
	private void CalculateNextAmmoMoveSpeed(float nextPositionXNormalized) { }

	// RVA: 0x3682 Offset: 0x3682 VA: 0x3682 Slot: 4
	public void InitialiseAmmo(AmmoDetailsSO ammoDetailsSO, Vector3 target) { }

	// RVA: 0x3683 Offset: 0x3683 VA: 0x3683
	private void SetAmmoPlayer() { }

	// RVA: 0x3684 Offset: 0x3684 VA: 0x3684
	private void SetTargetPosition(Vector3 target) { }

	// RVA: 0x3685 Offset: 0x3685 VA: 0x3685
	private void SetGameObjectActive(bool isActive) { }

	// RVA: 0x3686 Offset: 0x3686 VA: 0x3686
	private void OnTriggerEnter2D(Collider2D collision) { }

	// RVA: 0x3687 Offset: 0x3687 VA: 0x3687
	private void AmmoHitEffect() { }

	// RVA: 0x3688 Offset: 0x3688 VA: 0x3688
	private void GetLayerMark() { }

	// RVA: 0x3689 Offset: 0x3689 VA: 0x3689
	private void DisableAmmo() { }

	// RVA: 0x368A Offset: 0x368A VA: 0x368A
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Ammo$$Awake ----
// C#: void Ammo__Awake (Ammo_o* __this, const MethodInfo* method);

void Ammo__Awake(Ammo_o *__this,MethodInfo *method)

{
  EnemyEffect_o *pEVar1;
  PlayerEffect_o *pPVar2;
  DestroyedEvent_o *pDVar3;
  AmmoVisual_o *pAVar4;
  AmmoAnimation_o *pAVar5;
  
  if (DAT_ram_00664a64 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e0c);
    unnamed_function_1099(&DAT_ram_00567e10);
    unnamed_function_1099(&DAT_ram_00567e70);
    unnamed_function_1099(&DAT_ram_00567e84);
    unnamed_function_1099(&DAT_ram_00567ef4);
    DAT_ram_00664a64 = '\x01';
  }
  pEVar1 = (EnemyEffect_o *)unnamed_function_65370(__this,DAT_ram_00567e84);
  __this->enemyEffect = pEVar1;
  pPVar2 = (PlayerEffect_o *)unnamed_function_65370(__this,DAT_ram_00567ef4);
  __this->playerEffect = pPVar2;
  pDVar3 = (DestroyedEvent_o *)unnamed_function_65370(__this,DAT_ram_00567e70);
  __this->destroyedEvent = pDVar3;
  pAVar4 = (AmmoVisual_o *)unnamed_function_65370(__this,DAT_ram_00567e10);
  __this->ammoVisual = pAVar4;
  pAVar5 = (AmmoAnimation_o *)unnamed_function_65370(__this,DAT_ram_00567e0c);
  __this->ammoAnimation = pAVar5;
  return;
}

// ---- Ammo$$OnEnable ----
// C#: void Ammo__OnEnable (Ammo_o* __this, const MethodInfo* method);

void Ammo__OnEnable(Ammo_o *__this,MethodInfo *method)

{
  undefined4 param2;
  int iVar1;
  Vector2_o local_10 [2];
  
  if (DAT_ram_00664a65 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664a65 = '\x01';
  }
  param2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(local_10,param2,0);
  __this->trajectoryStartPoint = local_10[0];
  if (__this->isFirstOnEnable == false) {
    iVar1 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = unnamed_function_95087(iVar1);
    }
    SoundEffectManager__PlaySoundEffect
              ((SoundEffectManager_o *)**(undefined4 **)(iVar1 + 0x5c),__this->shootSoundEffect,
               (MethodInfo *)0x0);
  }
  else {
    __this->isFirstOnEnable = false;
  }
  return;
}

// ---- Ammo$$Start ----
// C#: void Ammo__Start (Ammo_o* __this, const MethodInfo* method);

void Ammo__Start(Ammo_o *__this,MethodInfo *method)

{
  Ammo__GetLayerMark(__this,(MethodInfo *)__this);
  return;
}

// ---- Ammo$$Update ----
// C#: void Ammo__Update (Ammo_o* __this, const MethodInfo* method);

void Ammo__Update(Ammo_o *__this,MethodInfo *method)

{
  if (__this->ammoState == Linear) {
    Ammo__MoveAmmoByDirection(__this,(MethodInfo *)__this);
  }
  else if (__this->ammoState != Freeze) {
    Ammo__UpdateAmmoPosition(__this,(MethodInfo *)__this);
    return;
  }
  return;
}

// ---- Ammo$$UpdateAmmoPosition ----
// C#: void Ammo__UpdateAmmoPosition (Ammo_o* __this, const MethodInfo* method);

void Ammo__UpdateAmmoPosition(Ammo_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Vector2_o VVar3;
  float fVar4;
  
  fVar2 = (__this->target).y - (__this->trajectoryStartPoint).y;
  fVar4 = (__this->target).x - (__this->trajectoryStartPoint).x;
  VVar3.y = fVar2;
  VVar3.x = fVar4;
  __this->trajectoryRange = VVar3;
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
  if (1e-05 < fVar2) {
    fVar4 = fVar4 / fVar2;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar4 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  fVar1 = (__this->trajectoryRange).y;
  fVar2 = (__this->trajectoryRange).x;
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if (1e-05 < fVar2) {
    fVar1 = fVar1 / fVar2;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar1 = *(float *)(*(int *)(UnityEngine_Vector2_TypeInfo + 0x5c) + 4);
  }
  if (ABS(fVar4) < ABS(fVar1)) {
    if ((__this->trajectoryRange).y < 0.0) {
      __this->speed = -__this->speed;
    }
    Ammo__UpdateAmmoXPosition(__this,(MethodInfo *)__this);
    return;
  }
  if ((__this->trajectoryRange).x < 0.0) {
    __this->speed = -__this->speed;
  }
  Ammo__UpdateAmmoYPosition(__this,(MethodInfo *)__this);
  return;
}

// ---- Ammo$$UpdateAmmoXPosition ----
// C#: void Ammo__UpdateAmmoXPosition (Ammo_o* __this, const MethodInfo* method);

void Ammo__UpdateAmmoXPosition(Ammo_o *__this,MethodInfo *method)

{
  float4 fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float param2;
  Vector2_o VVar8;
  float fVar9;
  undefined8 local_30;
  undefined4 local_28;
  float4 local_20;
  float4 local_1c;
  undefined4 local_18;
  float4 local_10;
  float4 local_c;
  
  uVar2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar2,0);
  fVar1 = local_c;
  fVar5 = __this->speed;
  fVar3 = unnamed_function_44879(0);
  fVar7 = (float)fVar1 + fVar5 * fVar3;
  param2 = (fVar7 - (__this->trajectoryStartPoint).y) / (__this->trajectoryRange).y;
  fVar5 = unnamed_function_52211(__this->ammoDetailsSO->trajectoryAnimationCurve,param2,0);
  fVar4 = unnamed_function_52211(__this->ammoDetailsSO->axisCorrectionAnimationCurve,param2,0);
  fVar9 = (__this->trajectoryRange).x;
  __this->nextPositionXCorrectionAbsolute = fVar4 * fVar9;
  fVar3 = fVar5 * __this->trajectoryMaxRelativeHeight;
  __this->nextXTrajectoryPosition = fVar3;
  if ((0.0 < fVar9) && (0.0 < (__this->trajectoryRange).y)) {
    fVar3 = -fVar3;
    __this->nextXTrajectoryPosition = fVar3;
  }
  if ((fVar9 < 0.0) && ((__this->trajectoryRange).y < 0.0)) {
    fVar3 = -fVar3;
    __this->nextXTrajectoryPosition = fVar3;
  }
  fVar6 = (__this->trajectoryStartPoint).x;
  uVar2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar2,0);
  fVar4 = fVar4 * fVar9 + fVar6 + fVar3;
  VVar8.x = fVar4 - (float)local_10;
  VVar8.y = fVar7 - (float)local_c;
  __this->ammoMoveDirection = VVar8;
  fVar3 = unnamed_function_52211(__this->ammoDetailsSO->ammoSpeedAnimationCurve,fVar5,0);
  __this->speed = fVar3 * __this->ammoDetailsSO->maxSpeed;
  uVar2 = unnamed_function_44643(__this,0);
  local_18 = 0;
  local_28 = 0;
  local_30 = CONCAT44(fVar7,fVar4);
  local_20 = (float4)fVar4;
  local_1c = (float4)fVar7;
  unnamed_function_44962(uVar2,&local_30,0);
  if (0.996 < param2) {
    __this->ammoState = Linear;
  }
  return;
}

// ---- Ammo$$UpdateAmmoYPosition ----
// C#: void Ammo__UpdateAmmoYPosition (Ammo_o* __this, const MethodInfo* method);

void Ammo__UpdateAmmoYPosition(Ammo_o *__this,MethodInfo *method)

{
  float4 fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float param2;
  Vector2_o VVar7;
  float fVar8;
  undefined8 local_30;
  undefined4 local_28;
  float4 local_20;
  float4 local_1c;
  undefined4 local_18;
  float4 local_10;
  float4 local_c;
  
  uVar2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar2,0);
  fVar1 = local_10;
  fVar4 = __this->speed;
  fVar3 = unnamed_function_44879(0);
  fVar6 = (float)fVar1 + fVar4 * fVar3;
  param2 = (fVar6 - (__this->trajectoryStartPoint).x) / (__this->trajectoryRange).x;
  fVar3 = unnamed_function_52211(__this->ammoDetailsSO->trajectoryAnimationCurve,param2,0);
  fVar4 = unnamed_function_52211(__this->ammoDetailsSO->axisCorrectionAnimationCurve,param2,0);
  fVar8 = (__this->trajectoryRange).y;
  __this->nextPositionYCorrectionAbsolute = fVar4 * fVar8;
  fVar3 = fVar3 * __this->trajectoryMaxRelativeHeight;
  __this->nextYTrajectoryPosition = fVar3;
  fVar5 = (__this->trajectoryRange).x;
  if ((0.0 < fVar5) && (fVar8 < 0.0)) {
    fVar3 = -fVar3;
    __this->nextYTrajectoryPosition = fVar3;
  }
  if ((fVar5 < 0.0) && (fVar8 < 0.0)) {
    fVar3 = -fVar3;
    __this->nextYTrajectoryPosition = fVar3;
  }
  fVar5 = (__this->trajectoryStartPoint).y;
  uVar2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar2,0);
  VVar7.x = fVar6 - (float)local_10;
  fVar4 = fVar4 * fVar8 + fVar5 + fVar3;
  VVar7.y = fVar4 - (float)local_c;
  __this->ammoMoveDirection = VVar7;
  fVar3 = unnamed_function_52211(__this->ammoDetailsSO->ammoSpeedAnimationCurve,param2,0);
  __this->speed = fVar3 * __this->ammoDetailsSO->maxSpeed;
  uVar2 = unnamed_function_44643(__this,0);
  local_18 = 0;
  local_28 = 0;
  local_30 = CONCAT44(fVar4,fVar6);
  local_20 = (float4)fVar6;
  local_1c = (float4)fVar4;
  unnamed_function_44962(uVar2,&local_30,0);
  if (0.996 < param2) {
    __this->ammoState = Linear;
  }
  return;
}

// ---- Ammo$$GetAmmoMoveDirection ----
// C#: UnityEngine_Vector2_o Ammo__GetAmmoMoveDirection (Ammo_o* __this, const MethodInfo* method);

void Ammo__GetAmmoMoveDirection(Vector2_o *__ret,Ammo_o *__this,MethodInfo *method)

{
  *__ret = __this->ammoMoveDirection;
  return;
}

// ---- Ammo$$GetNextYTrajectoryPosition ----
// C#: float Ammo__GetNextYTrajectoryPosition (Ammo_o* __this, const MethodInfo* method);

float Ammo__GetNextYTrajectoryPosition(Ammo_o *__this,MethodInfo *method)

{
  return __this->nextYTrajectoryPosition;
}

// ---- Ammo$$GetNextPositionYCorrectionAbsolute ----
// C#: float Ammo__GetNextPositionYCorrectionAbsolute (Ammo_o* __this, const MethodInfo* method);

float Ammo__GetNextPositionYCorrectionAbsolute(Ammo_o *__this,MethodInfo *method)

{
  return __this->nextPositionYCorrectionAbsolute;
}

// ---- Ammo$$MoveAmmoByDirection ----
// C#: void Ammo__MoveAmmoByDirection (Ammo_o* __this, const MethodInfo* method);

void Ammo__MoveAmmoByDirection(Ammo_o *__this,MethodInfo *method)

{
  undefined4 param2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_30;
  float local_28;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  param2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,param2,0);
  fVar1 = (__this->ammoMoveDirection).y;
  fVar2 = (__this->ammoMoveDirection).x;
  if (DAT_ram_006634ad == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ad = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar3 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if (1e-05 < fVar3) {
    fVar1 = fVar1 / fVar3;
    fVar2 = fVar2 / fVar3;
  }
  else {
    if (DAT_ram_0066482a == '\0') {
      unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
      DAT_ram_0066482a = '\x01';
    }
    fVar1 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
    fVar2 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
  }
  fVar4 = __this->ammoDetailsSO->maxSpeed;
  fVar3 = unnamed_function_44879(0);
  local_28 = (float)local_8 + fVar4 * 0.0 * fVar3;
  local_1c = (float4)((float)local_c + fVar3 * fVar1 * fVar4);
  local_20 = (float4)((float)local_10 + fVar3 * fVar2 * fVar4);
  local_30 = CONCAT44(local_1c,local_20);
  local_18 = (float4)local_28;
  unnamed_function_44962(param2,&local_30,0);
  return;
}

// ---- Ammo$$CalculateNextAmmoMoveSpeed ----
// C#: void Ammo__CalculateNextAmmoMoveSpeed (Ammo_o* __this, float nextPositionXNormalized, const MethodInfo* method);

void Ammo__CalculateNextAmmoMoveSpeed
               (Ammo_o *__this,float nextPositionXNormalized,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = unnamed_function_52211
                    (__this->ammoDetailsSO->ammoSpeedAnimationCurve,nextPositionXNormalized,0);
  __this->speed = fVar1 * __this->ammoDetailsSO->maxSpeed;
  return;
}

// ---- Ammo$$InitialiseAmmo ----
// C#: void Ammo__InitialiseAmmo (Ammo_o* __this, AmmoDetailsSO_o* ammoDetailsSO, UnityEngine_Vector3_o target, const MethodInfo* method);

void Ammo__InitialiseAmmo
               (Ammo_o *__this,AmmoDetailsSO_o *ammoDetailsSO,Vector3_o *target,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 param2;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  __this->ammoDetailsSO = ammoDetailsSO;
  fVar4 = target->x;
  fVar5 = target->y;
  fVar1 = target->x;
  fVar2 = target->y;
  fVar6 = target->z;
  uVar3 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar3,0);
  if (DAT_ram_006634ae == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_006634ae = '\x01';
  }
  fVar6 = fVar6 - (float)local_8;
  fVar5 = fVar5 - (float)local_c;
  fVar4 = fVar4 - (float)local_10;
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  uVar3 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar3,0);
  fVar7 = ammoDetailsSO->trajectoryMaxHeight;
  (__this->target).x = fVar1;
  (__this->target).y = fVar2;
  __this->trajectoryMaxRelativeHeight =
       fVar7 * ABS(SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6));
  if (DAT_ram_00664a66 == '\0') {
    unnamed_function_1099(&StringLiteral_3541 /* "EnemyAmmo" */);
    DAT_ram_00664a66 = '\x01';
  }
  uVar3 = unnamed_function_44644(__this,0);
  param2 = unnamed_function_44702(StringLiteral_3541 /* "EnemyAmmo" */,0);
  unnamed_function_44685(uVar3,param2,0);
  __this->isColliding = false;
  __this->ammoState = Trajectory;
  AmmoAnimation__InitializeAmmoAnimation(__this->ammoAnimation,(MethodInfo *)__this);
  uVar3 = unnamed_function_44644(__this,0);
  unnamed_function_44686(uVar3,1,0);
  return;
}

// ---- Ammo$$SetAmmoPlayer ----
// C#: void Ammo__SetAmmoPlayer (Ammo_o* __this, const MethodInfo* method);

void Ammo__SetAmmoPlayer(Ammo_o *__this,MethodInfo *method)

{
  undefined4 param1;
  undefined4 param2;
  
  if (DAT_ram_00664a66 == '\0') {
    unnamed_function_1099(&StringLiteral_3541 /* "EnemyAmmo" */);
    DAT_ram_00664a66 = '\x01';
  }
  param1 = unnamed_function_44644(__this,0);
  param2 = unnamed_function_44702(StringLiteral_3541 /* "EnemyAmmo" */,0);
  unnamed_function_44685(param1,param2,0);
  return;
}

// ---- Ammo$$SetTargetPosition ----
// C#: void Ammo__SetTargetPosition (Ammo_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);

void Ammo__SetTargetPosition(Ammo_o *__this,Vector3_o *target,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = target->y;
  (__this->target).x = target->x;
  (__this->target).y = fVar1;
  return;
}

// ---- Ammo$$SetGameObjectActive ----
// C#: void Ammo__SetGameObjectActive (Ammo_o* __this, bool isActive, const MethodInfo* method);

void Ammo__SetGameObjectActive(Ammo_o *__this,bool isActive,MethodInfo *method)

{
  undefined3 in_register_20000011;
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,CONCAT31(in_register_20000011,isActive),0);
  return;
}

// ---- Ammo$$OnTriggerEnter2D ----
// C#: void Ammo__OnTriggerEnter2D (Ammo_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void Ammo__OnTriggerEnter2D(Ammo_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  PlayerEffect_o *__this_00;
  undefined4 param1;
  EnemyEffect_o *__this_01;
  GameResources_o *pGVar5;
  int iVar6;
  BossEffect_o *__this_02;
  uint uVar7;
  Material_o *pMVar8;
  Material_o *pMVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  Vector2_o local_40;
  float local_38;
  Vector2_o local_30;
  float local_28;
  Vector2_o local_20;
  Vector2_o local_18;
  Vector2_o local_10;
  float local_8;
  
  if (DAT_ram_00664a67 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e34);
    unnamed_function_1099(&DAT_ram_00567e84);
    unnamed_function_1099(&DAT_ram_00567ef4);
    unnamed_function_1099(&DAT_ram_00567ef8);
    unnamed_function_1099(&DAT_ram_00567f04);
    unnamed_function_1099(&DAT_ram_00567fe8);
    DAT_ram_00664a67 = '\x01';
  }
  if (__this->isColliding == false) {
    iVar2 = unnamed_function_65370(collision,DAT_ram_00567f04);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x18) == '\0')) {
      iVar13 = __this->ammoDetailsSO->damage;
      if (0 < *(int *)(iVar2 + 0x10)) {
        iVar13 = *(int *)(iVar2 + 0x10);
      }
      Health__TakeDamage(*(Health_o **)(iVar2 + 0x14),iVar13,(MethodInfo *)__this);
    }
    uVar7 = (__this->playerLayerMask).m_Mask;
    uVar3 = unnamed_function_44644(collision,0);
    uVar4 = unnamed_function_44684(uVar3,0);
    if (0 < (int)(uVar7 & 1 << (uVar4 & 0x1f))) {
      __this_00 = (PlayerEffect_o *)unnamed_function_65370(collision,DAT_ram_00567ef4);
      uVar3 = unnamed_function_44643(__this,0);
      unnamed_function_44960(&local_10,uVar3,0);
      local_18 = local_10;
      local_20 = local_10;
      PlayerEffect__DamagePushEfect(__this_00,&local_20,(MethodInfo *)__this);
      uVar3 = unnamed_function_65370(collision,DAT_ram_00567ef4);
      pGVar5 = GameResources__get_Instance((MethodInfo *)__this);
      pMVar8 = pGVar5->damegeFlashMaterial;
      pGVar5 = GameResources__get_Instance((MethodInfo *)__this);
      pMVar9 = pGVar5->litMaterial;
      uVar10 = unnamed_function_65381(collision,DAT_ram_00567fe8);
      param1 = unnamed_function_44644(uVar3,0);
      iVar2 = unnamed_function_44687(param1,0);
      if (iVar2 != 0) {
        if (DAT_ram_00664ae5 == '\0') {
          unnamed_function_1099(&PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
          DAT_ram_00664ae5 = '\x01';
        }
        iVar2 = unnamed_function_95402(PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
        *(undefined4 *)(iVar2 + 0x18) = uVar3;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(Material_o **)(iVar2 + 0x1c) = pMVar9;
        *(Material_o **)(iVar2 + 0x14) = pMVar8;
        *(undefined4 *)(iVar2 + 0x10) = uVar10;
        unnamed_function_44725(uVar3,iVar2,0);
      }
    }
    uVar7 = (__this->enemyLayerMask).m_Mask;
    uVar3 = unnamed_function_44644(collision,0);
    uVar4 = unnamed_function_44684(uVar3,0);
    if (0 < (int)(uVar7 & 1 << (uVar4 & 0x1f))) {
      __this_01 = (EnemyEffect_o *)unnamed_function_65370(collision,DAT_ram_00567e84);
      if (__this_01 != (EnemyEffect_o *)0x0) {
        uVar3 = unnamed_function_44643(__this,0);
        unnamed_function_44960(&local_10,uVar3,0);
        local_28 = local_8;
        local_30 = local_10;
        EnemyEffect__DamagePushEfect(__this_01,(Vector3_o *)&local_30,(MethodInfo *)__this);
      }
      iVar2 = unnamed_function_65370(collision,DAT_ram_00567e84);
      if (iVar2 != 0) {
        pGVar5 = GameResources__get_Instance((MethodInfo *)__this);
        pMVar8 = pGVar5->damegeFlashMaterial;
        pGVar5 = GameResources__get_Instance((MethodInfo *)__this);
        pMVar9 = pGVar5->litMaterial;
        uVar3 = unnamed_function_65381(collision,DAT_ram_00567fe8);
        uVar10 = unnamed_function_44644(iVar2,0);
        iVar13 = unnamed_function_44687(uVar10,0);
        if (iVar13 != 0) {
          if (DAT_ram_00664ade == '\0') {
            unnamed_function_1099(&EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
            DAT_ram_00664ade = '\x01';
          }
          iVar13 = unnamed_function_95402(EnemyEffect__DamageFlashCoroutine_d__9_TypeInfo);
          *(int *)(iVar13 + 0x18) = iVar2;
          *(undefined4 *)(iVar13 + 8) = 0;
          *(Material_o **)(iVar13 + 0x1c) = pMVar9;
          *(Material_o **)(iVar13 + 0x14) = pMVar8;
          *(undefined4 *)(iVar13 + 0x10) = uVar3;
          unnamed_function_44725(iVar2,iVar13,0);
        }
      }
      iVar2 = unnamed_function_65370(collision,DAT_ram_00567ef8);
      iVar13 = __this->poiseAmount;
      fVar12 = *(float *)(iVar2 + 0x18) - (float)iVar13;
      *(float *)(iVar2 + 0x18) = fVar12;
      if (fVar12 <= 0.0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x1c);
        uVar10 = *(undefined4 *)(iVar2 + 0x14);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (DAT_ram_00664b46 == '\0') {
          unnamed_function_1099(&PoiseEventArgs_TypeInfo);
          DAT_ram_00664b46 = '\x01';
        }
        iVar11 = *(int *)(iVar2 + 0x10);
        if (iVar11 != 0) {
          iVar6 = unnamed_function_95402(PoiseEventArgs_TypeInfo);
          *(undefined4 *)(iVar6 + 0x14) = uVar3;
          *(undefined4 *)(iVar6 + 0x10) = uVar10;
          *(float *)(iVar6 + 0xc) = fVar12;
          *(float *)(iVar6 + 8) = (float)iVar13;
          (**(code **)((ulonglong)*(uint *)(iVar11 + 0xc) * 4))
                    (*(undefined4 *)(iVar11 + 0x20),iVar2,iVar6,*(undefined4 *)(iVar11 + 0x14));
        }
      }
    }
    uVar7 = (__this->bossLayerMask).m_Mask;
    uVar3 = unnamed_function_44644(collision,0);
    uVar4 = unnamed_function_44684(uVar3,0);
    if (0 < (int)(uVar7 & 1 << (uVar4 & 0x1f))) {
      iVar2 = unnamed_function_65370(collision,DAT_ram_00567ef8);
      iVar13 = __this->poiseAmount;
      fVar12 = *(float *)(iVar2 + 0x18) - (float)iVar13;
      *(float *)(iVar2 + 0x18) = fVar12;
      if (fVar12 <= 0.0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x1c);
        uVar10 = *(undefined4 *)(iVar2 + 0x14);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (DAT_ram_00664b46 == '\0') {
          unnamed_function_1099(&PoiseEventArgs_TypeInfo);
          DAT_ram_00664b46 = '\x01';
        }
        iVar11 = *(int *)(iVar2 + 0x10);
        if (iVar11 != 0) {
          iVar6 = unnamed_function_95402(PoiseEventArgs_TypeInfo);
          *(undefined4 *)(iVar6 + 0x14) = uVar3;
          *(undefined4 *)(iVar6 + 0x10) = uVar10;
          *(float *)(iVar6 + 0xc) = fVar12;
          *(float *)(iVar6 + 8) = (float)iVar13;
          (**(code **)((ulonglong)*(uint *)(iVar11 + 0xc) * 4))
                    (*(undefined4 *)(iVar11 + 0x20),iVar2,iVar6,*(undefined4 *)(iVar11 + 0x14));
        }
      }
      __this_02 = (BossEffect_o *)unnamed_function_65370(collision,DAT_ram_00567e34);
      if (__this_02 != (BossEffect_o *)0x0) {
        uVar3 = unnamed_function_44643(__this,0);
        unnamed_function_44960(&local_10,uVar3,0);
        local_38 = local_8;
        local_40 = local_10;
        BossEffect__PushBossByWeapon(__this_02,(Vector3_o *)&local_40,(MethodInfo *)__this);
      }
      iVar2 = unnamed_function_65370(collision,DAT_ram_00567e34);
      if (iVar2 != 0) {
        if (DAT_ram_00664ad9 == '\0') {
          unnamed_function_1099(&Settings_TypeInfo);
          DAT_ram_00664ad9 = '\x01';
        }
        cVar1 = *(char *)(iVar2 + 0x3c);
        uVar3 = *(undefined4 *)(iVar2 + 0x40);
        if (*(int *)(Settings_TypeInfo + 0x74) == 0) {
          unnamed_function_94848(Settings_TypeInfo);
        }
        iVar2 = 0x6c;
        if (cVar1 == '\0') {
          iVar2 = 0x38;
        }
        unnamed_function_45425(uVar3,*(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + iVar2),0);
      }
    }
    Ammo__AmmoHitEffect(__this,(MethodInfo *)__this);
    uVar3 = unnamed_function_44644(__this,0);
    unnamed_function_44686(uVar3,0,0);
    __this->isColliding = true;
  }
  return;
}

// ---- Ammo$$AmmoHitEffect ----
// C#: void Ammo__AmmoHitEffect (Ammo_o* __this, const MethodInfo* method);

void Ammo__AmmoHitEffect(Ammo_o *__this,MethodInfo *method)

{
  GameResources_o *pGVar1;
  undefined4 uVar2;
  UnityEngine_Component_o *param1;
  int iVar3;
  PoolManager_o *__this_00;
  UnityEngine_GameObject_o *prefab;
  AmmoDetailsSO_o *pAVar4;
  MethodInfo MStack_d0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Quaternion_o local_88;
  Vector3_o local_78;
  Quaternion_o local_68;
  Vector3_o local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  int local_8 [2];
  
  if (DAT_ram_00664a68 == '\0') {
    unnamed_function_1099(&AmmoHitEffect_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d64);
    DAT_ram_00664a68 = '\x01';
  }
  iVar3 = *(int *)(DAT_ram_00565d64 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = unnamed_function_95087(iVar3);
  }
  __this_00 = (PoolManager_o *)**(undefined4 **)(iVar3 + 0x5c);
  pGVar1 = GameResources__get_Instance(&MStack_d0);
  prefab = (UnityEngine_GameObject_o *)pGVar1->ammoHitEffectPrefab;
  uVar2 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_58,uVar2,0);
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_88._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_88._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_78.z = local_58.z;
  local_78.x = local_58.x;
  local_78.y = local_58.y;
  local_68._0_8_ = local_88._0_8_;
  local_68._8_8_ = local_88._8_8_;
  param1 = PoolManager__ReuseComponent(__this_00,prefab,&local_78,&local_88,(MethodInfo *)0x0);
  pAVar4 = __this->ammoDetailsSO;
  local_90._0_4_ = (pAVar4->ammoEffectType).b;
  local_90._4_4_ = (pAVar4->ammoEffectType).a;
  local_98._0_4_ = (pAVar4->ammoEffectType).r;
  local_98._4_4_ = (pAVar4->ammoEffectType).g;
  if (AmmoHitEffect_TypeInfo !=
      *(int *)(*(int *)(param1->_opaque + 100) + (uint)*(byte *)(AmmoHitEffect_TypeInfo + 0xb8) * 4
              + -4)) {
    param1 = (UnityEngine_Component_o *)0x0;
  }
  local_8[0] = param1[4]._opaque;
  local_48 = local_98;
  local_40 = local_90;
  unnamed_function_86814(local_38,&local_98,0);
  local_a0 = local_10;
  local_a8 = local_18;
  local_b0 = local_20;
  MStack_d0._24_8_ = local_38[2];
  MStack_d0._16_8_ = local_38[1];
  MStack_d0._8_8_ = local_38[0];
  unnamed_function_86787(local_8,&MStack_d0.field_0x8,0);
  uVar2 = unnamed_function_44644(param1,0);
  unnamed_function_44686(uVar2,1,0);
  return;
}

// ---- Ammo$$GetLayerMark ----
// C#: void Ammo__GetLayerMark (Ammo_o* __this, const MethodInfo* method);

void Ammo__GetLayerMark(Ammo_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664a69 == '\0') {
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_3539 /* "Enemy" */);
    unnamed_function_1099(&StringLiteral_2074 /* "Boss" */);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_00664a69 = '\x01';
  }
  iVar1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_3539 /* "Enemy" */;
  iVar1 = unnamed_function_44703(iVar1,0);
  (__this->enemyLayerMask).m_Mask = iVar1;
  iVar1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_6075 /* "Player" */;
  iVar1 = unnamed_function_44703(iVar1,0);
  (__this->playerLayerMask).m_Mask = iVar1;
  iVar1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(iVar1 + 0x10) = StringLiteral_2074 /* "Boss" */;
  iVar1 = unnamed_function_44703(iVar1,0);
  (__this->bossLayerMask).m_Mask = iVar1;
  return;
}

// ---- Ammo$$DisableAmmo ----
// C#: void Ammo__DisableAmmo (Ammo_o* __this, const MethodInfo* method);

void Ammo__DisableAmmo(Ammo_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  param1 = unnamed_function_44644(__this,0);
  unnamed_function_44686(param1,0,0);
  return;
}

// ---- Ammo$$.ctor ----
// C#: void Ammo___ctor (Ammo_o* __this, const MethodInfo* method);

void Ammo___ctor(Ammo_o *__this,MethodInfo *method)

{
  __this->isFirstOnEnable = true;
  unnamed_function_44622(__this,0);
  return;
}

