// Assembly-CSharp :: Dash
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Dash : MonoBehaviour // TypeDefIndex: 5705
{
	// Fields
	private Player player; // 0x10
	private Coroutine dashCoroutine; // 0x14
	private WaitForFixedUpdate waitForFixedUpdate; // 0x18
	private float dashCooldownTimer; // 0x1C
	private int dashCost; // 0x20

	// Methods

	// RVA: 0x3A09 Offset: 0x3A09 VA: 0x3A09
	private void Awake() { }

	// RVA: 0x3A0A Offset: 0x3A0A VA: 0x3A0A
	private void OnEnable() { }

	// RVA: 0x3A0B Offset: 0x3A0B VA: 0x3A0B
	private void OnDisable() { }

	// RVA: 0x3A0C Offset: 0x3A0C VA: 0x3A0C
	private void DashEvent_OnDashEvent(DashEvent dashEvent, DashEventArgs dashEventArgs) { }

	// RVA: 0x3A0D Offset: 0x3A0D VA: 0x3A0D
	public void PlayDash(Vector2 direction) { }

	[IteratorStateMachine(typeof(Dash.<DashCoroutine>d__10))]
	// RVA: 0x3A0E Offset: 0x3A0E VA: 0x3A0E
	private IEnumerator DashCoroutine(Vector2 direction) { }

	// RVA: 0x3A0F Offset: 0x3A0F VA: 0x3A0F
	private void OnCollisionEnter2D(Collision2D collision) { }

	// RVA: 0x3A10 Offset: 0x3A10 VA: 0x3A10
	private void OnCollisionStay2D(Collision2D collision) { }

	// RVA: 0x3A11 Offset: 0x3A11 VA: 0x3A11
	private void OnTriggerEnter2D(Collider2D collision) { }

	// RVA: 0x3A12 Offset: 0x3A12 VA: 0x3A12
	private void StopPlayerDashRoutine() { }

	// RVA: 0x3A13 Offset: 0x3A13 VA: 0x3A13
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Dash$$Awake ----
// C#: void Dash__Awake (Dash_o* __this, const MethodInfo* method);

void Dash__Awake(Dash_o *__this,MethodInfo *method)

{
  Player_o *pPVar1;
  
  if (DAT_ram_0066497e == '\0') {
    unnamed_function_1099(&DAT_ram_00567ef0);
    DAT_ram_0066497e = '\x01';
  }
  pPVar1 = (Player_o *)unnamed_function_65370(__this,DAT_ram_00567ef0);
  __this->player = pPVar1;
  return;
}

// ---- Dash$$OnEnable ----
// C#: void Dash__OnEnable (Dash_o* __this, const MethodInfo* method);

void Dash__OnEnable(Dash_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  DashEvent_o *pDVar3;
  
  if (DAT_ram_0066497f == '\0') {
    unnamed_function_1099(&System_Action_DashEvent__DashEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_005684e0);
    DAT_ram_0066497f = '\x01';
  }
  pDVar3 = __this->player->dashEvent;
  param1_00 = unnamed_function_95402(System_Action_DashEvent__DashEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_005684e0,0);
  if (DAT_ram_00664984 == '\0') {
    unnamed_function_1099(&System_Action_DashEvent__DashEventArgs__TypeInfo);
    DAT_ram_00664984 = '\x01';
  }
  param1 = pDVar3->OnDashEvent;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85158(param1,param1_00,0);
    param2 = System_Action_DashEvent__DashEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_DashEvent__DashEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pDVar3->OnDashEvent,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- Dash$$OnDisable ----
// C#: void Dash__OnDisable (Dash_o* __this, const MethodInfo* method);

void Dash__OnDisable(Dash_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined4 param2;
  Action_o *param1;
  int param2_00;
  undefined4 param1_00;
  int param1_01;
  Action_o *pAVar2;
  DashEvent_o *pDVar3;
  
  if (DAT_ram_00664980 == '\0') {
    unnamed_function_1099(&System_Action_DashEvent__DashEventArgs__TypeInfo);
    unnamed_function_1099(&DAT_ram_005684e0);
    DAT_ram_00664980 = '\x01';
  }
  pDVar3 = __this->player->dashEvent;
  param1_00 = unnamed_function_95402(System_Action_DashEvent__DashEventArgs__TypeInfo);
  unnamed_function_60334(param1_00,__this,DAT_ram_005684e0,0);
  if (DAT_ram_00664985 == '\0') {
    unnamed_function_1099(&System_Action_DashEvent__DashEventArgs__TypeInfo);
    DAT_ram_00664985 = '\x01';
  }
  param1 = pDVar3->OnDashEvent;
  while( true ) {
    param2_00 = 0;
    param1_01 = unnamed_function_85160(param1,param1_00,0);
    param2 = System_Action_DashEvent__DashEventArgs__TypeInfo;
    if ((param1_01 != 0) &&
       (param2_00 = unnamed_function_1112
                              (param1_01,System_Action_DashEvent__DashEventArgs__TypeInfo),
       param2_00 == 0)) break;
    pAVar2 = (Action_o *)unnamed_function_1144(&pDVar3->OnDashEvent,param2_00,param1);
    bVar1 = param1 == pAVar2;
    param1 = pAVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,param2);
  do {
    halt_trap();
  } while( true );
}

// ---- Dash$$DashEvent_OnDashEvent ----
// C#: void Dash__DashEvent_OnDashEvent (Dash_o* __this, DashEvent_o* dashEvent, DashEventArgs_o* dashEventArgs, const MethodInfo* method);

void Dash__DashEvent_OnDashEvent
               (Dash_o *__this,DashEvent_o *dashEvent,DashEventArgs_o *dashEventArgs,
               MethodInfo *method)

{
  float fVar1;
  Coroutine_o *pCVar2;
  int iVar3;
  Vector2_o VVar4;
  
  if (DAT_ram_00664981 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_00664981 = '\x01';
  }
  fVar1 = unnamed_function_44878(0);
  if ((__this->dashCooldownTimer < fVar1) &&
     ((float)__this->dashCost < __this->player->stamina->currentStamina)) {
    iVar3 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = unnamed_function_95087(iVar3);
    }
    SoundEffectManager__PlaySoundEffect
              ((SoundEffectManager_o *)**(undefined4 **)(iVar3 + 0x5c),
               __this->player->dashSoundEffect,(MethodInfo *)__this);
    VVar4 = dashEventArgs->direction;
    if (__this->dashCoroutine != (Coroutine_o *)0x0) {
      unnamed_function_44730(__this,__this->dashCoroutine,0);
    }
    if (DAT_ram_00664982 == '\0') {
      unnamed_function_1099(&Dash__DashCoroutine_d__10_TypeInfo);
      DAT_ram_00664982 = '\x01';
    }
    iVar3 = unnamed_function_95402(Dash__DashCoroutine_d__10_TypeInfo);
    *(Vector2_o *)(iVar3 + 0x14) = VVar4;
    *(Dash_o **)(iVar3 + 0x10) = __this;
    *(undefined4 *)(iVar3 + 8) = 0;
    pCVar2 = (Coroutine_o *)unnamed_function_44725(__this,iVar3,0);
    __this->dashCoroutine = pCVar2;
    __this->player->playerEffect->isDashing = true;
    fVar1 = unnamed_function_44878(0);
    __this->dashCooldownTimer = fVar1 + __this->player->movementDetails->dashCooldownTime;
    Stamina__UseStamina(__this->player->stamina,__this->dashCost,(MethodInfo *)0x0);
  }
  return;
}

// ---- Dash$$PlayDash ----
// C#: void Dash__PlayDash (Dash_o* __this, UnityEngine_Vector2_o direction, const MethodInfo* method);

void Dash__PlayDash(Dash_o *__this,Vector2_o *direction,MethodInfo *method)

{
  int param2;
  Coroutine_o *pCVar1;
  Vector2_o VVar2;
  
  if (__this->dashCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->dashCoroutine,0);
  }
  VVar2 = *direction;
  if (DAT_ram_00664982 == '\0') {
    unnamed_function_1099(&Dash__DashCoroutine_d__10_TypeInfo);
    DAT_ram_00664982 = '\x01';
  }
  param2 = unnamed_function_95402(Dash__DashCoroutine_d__10_TypeInfo);
  *(Vector2_o *)(param2 + 0x14 /* dashCoroutine */) = VVar2;
  *(Dash_o **)(param2 + 0x10 /* player */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  pCVar1 = (Coroutine_o *)unnamed_function_44725(__this,param2,0);
  __this->dashCoroutine = pCVar1;
  __this->player->playerEffect->isDashing = true;
  return;
}

// ---- Dash$$DashCoroutine ----
// C#: System_Collections_IEnumerator_o* Dash__DashCoroutine (Dash_o* __this, UnityEngine_Vector2_o direction, const MethodInfo* method);

System_Collections_IEnumerator_o *
Dash__DashCoroutine(Dash_o *__this,Vector2_o *direction,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664982 == '\0') {
    unnamed_function_1099(&Dash__DashCoroutine_d__10_TypeInfo);
    DAT_ram_00664982 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(Dash__DashCoroutine_d__10_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  *(Vector2_o *)(pSVar1 + 5) = *direction;
  return pSVar1;
}

// ---- Dash$$OnCollisionEnter2D ----
// C#: void Dash__OnCollisionEnter2D (Dash_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Dash__OnCollisionEnter2D
               (Dash_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  __this->player->playerEffect->isDashing = false;
  if (__this->dashCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->dashCoroutine,0);
  }
  return;
}

// ---- Dash$$OnCollisionStay2D ----
// C#: void Dash__OnCollisionStay2D (Dash_o* __this, UnityEngine_Collision2D_o* collision, const MethodInfo* method);

void Dash__OnCollisionEnter2D
               (Dash_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  __this->player->playerEffect->isDashing = false;
  if (__this->dashCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->dashCoroutine,0);
  }
  return;
}

// ---- Dash$$OnTriggerEnter2D ----
// C#: void Dash__OnTriggerEnter2D (Dash_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void Dash__OnCollisionEnter2D
               (Dash_o *__this,UnityEngine_Collision2D_o *collision,MethodInfo *method)

{
  __this->player->playerEffect->isDashing = false;
  if (__this->dashCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->dashCoroutine,0);
  }
  return;
}

// ---- Dash$$StopPlayerDashRoutine ----
// C#: void Dash__StopPlayerDashRoutine (Dash_o* __this, const MethodInfo* method);

void Dash__StopPlayerDashRoutine(Dash_o *__this,MethodInfo *method)

{
  if (__this->dashCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->dashCoroutine,0);
  }
  return;
}

// ---- Dash$$.ctor ----
// C#: void Dash___ctor (Dash_o* __this, const MethodInfo* method);

void Dash___ctor(Dash_o *__this,MethodInfo *method)

{
  WaitForFixedUpdate_o *pWVar1;
  
  if (DAT_ram_00664983 == '\0') {
    unnamed_function_1099(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    DAT_ram_00664983 = '\x01';
  }
  pWVar1 = (WaitForFixedUpdate_o *)unnamed_function_95402(UnityEngine_WaitForFixedUpdate_TypeInfo);
  __this->dashCost = 10;
  __this->waitForFixedUpdate = pWVar1;
  unnamed_function_44622(__this,0);
  return;
}

