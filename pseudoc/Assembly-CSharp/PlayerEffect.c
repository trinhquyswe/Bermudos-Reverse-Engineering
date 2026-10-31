// Assembly-CSharp :: PlayerEffect
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PlayerEffect : Effect // TypeDefIndex: 5583
{
	// Fields
	private Player player; // 0x3C
	private Coroutine pushPlayerByEnemyCoroutine; // 0x40
	[HideInInspector]
	public bool isDashing; // 0x44
	private float dashEffectDuration; // 0x48

	// Methods

	// RVA: 0x377E Offset: 0x377E VA: 0x377E
	private void OnEnable() { }

	// RVA: 0x377F Offset: 0x377F VA: 0x377F
	private void OnDisable() { }

	// RVA: 0x3780 Offset: 0x3780 VA: 0x3780
	private void OnSceneLoaded(Scene scene, LoadSceneMode mode) { }

	// RVA: 0x3781 Offset: 0x3781 VA: 0x3781
	private void Awake() { }

	// RVA: 0x3782 Offset: 0x3782 VA: 0x3782
	private void Update() { }

	// RVA: 0x3783 Offset: 0x3783 VA: 0x3783
	public void CallDamageFlashEffect(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers) { }

	[IteratorStateMachine(typeof(PlayerEffect.<DamageFlashCoroutine>d__10))]
	// RVA: 0x3784 Offset: 0x3784 VA: 0x3784
	private IEnumerator DamageFlashCoroutine(Material damageFlash, Material defaultMaterial, SpriteRenderer[] spriteRenderers) { }

	// RVA: 0x3785 Offset: 0x3785 VA: 0x3785
	public void DamagePushEfect(Vector2 damageSource) { }

	[IteratorStateMachine(typeof(PlayerEffect.<PushPlayerByEnemy>d__12))]
	// RVA: 0x3786 Offset: 0x3786 VA: 0x3786
	private IEnumerator PushPlayerByEnemy(Vector3 targetPosition) { }

	// RVA: 0x3787 Offset: 0x3787 VA: 0x3787
	private void DashShadowPlayerEffect() { }

	// RVA: 0x3788 Offset: 0x3788 VA: 0x3788
	public void .ctor() { }
}

===== C# end =====
*/

// ---- PlayerEffect$$OnEnable ----
// C#: void PlayerEffect__OnEnable (PlayerEffect_o* __this, const MethodInfo* method);

void PlayerEffect__OnEnable(PlayerEffect_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664ae2 == '\0') {
    unnamed_function_1099(&DAT_ram_0056b930);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    DAT_ram_00664ae2 = '\x01';
  }
  param1 = unnamed_function_95402(UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
  unnamed_function_71914(param1,__this,DAT_ram_0056b930,0);
  if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  unnamed_function_45260(param1,0);
  return;
}

// ---- PlayerEffect$$OnDisable ----
// C#: void PlayerEffect__OnDisable (PlayerEffect_o* __this, const MethodInfo* method);

void PlayerEffect__OnDisable(PlayerEffect_o *__this,MethodInfo *method)

{
  undefined4 param1;
  
  if (DAT_ram_00664ae3 == '\0') {
    unnamed_function_1099(&DAT_ram_0056b930);
    unnamed_function_1099(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    unnamed_function_1099(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    DAT_ram_00664ae3 = '\x01';
  }
  param1 = unnamed_function_95402(UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
  unnamed_function_71914(param1,__this,DAT_ram_0056b930,0);
  if (*(int *)(UnityEngine_SceneManagement_SceneManager_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_SceneManagement_SceneManager_TypeInfo);
  }
  unnamed_function_45261(param1,0);
  return;
}

// ---- PlayerEffect$$OnSceneLoaded ----
// C#: void PlayerEffect__OnSceneLoaded (PlayerEffect_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);

void PlayerEffect__OnSceneLoaded
               (PlayerEffect_o *__this,UnityEngine_SceneManagement_Scene_o *scene,
               UnityEngine_SceneManagement_LoadSceneMode mode,MethodInfo *method)

{
  if (__this->pushPlayerByEnemyCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->pushPlayerByEnemyCoroutine,0);
  }
  return;
}

// ---- PlayerEffect$$Awake ----
// C#: void PlayerEffect__Awake (PlayerEffect_o* __this, const MethodInfo* method);

void PlayerEffect__Awake(PlayerEffect_o *__this,MethodInfo *method)

{
  Player_o *pPVar1;
  undefined4 uVar2;
  
  if (DAT_ram_00664ae4 == '\0') {
    unnamed_function_1099(&DAT_ram_00567ef0);
    unnamed_function_1099(&DAT_ram_00567f18);
    DAT_ram_00664ae4 = '\x01';
  }
  pPVar1 = (Player_o *)unnamed_function_65370(__this,DAT_ram_00567ef0);
  __this->player = pPVar1;
  uVar2 = unnamed_function_65370(__this,DAT_ram_00567f18);
  *(undefined4 *)(__this->pad_8 + 0x18) = uVar2;
  return;
}

// ---- PlayerEffect$$Update ----
// C#: void PlayerEffect__Update (PlayerEffect_o* __this, const MethodInfo* method);

void PlayerEffect__Update(PlayerEffect_o *__this,MethodInfo *method)

{
  if (__this->isDashing != false) {
    PlayerEffect__DashShadowPlayerEffect(__this,(MethodInfo *)__this);
  }
  return;
}

// ---- PlayerEffect$$CallDamageFlashEffect ----
// C#: void PlayerEffect__CallDamageFlashEffect (PlayerEffect_o* __this, UnityEngine_Material_o* damageFlash, UnityEngine_Material_o* defaultMaterial, UnityEngine_SpriteRenderer_array* spriteRenderers, const MethodInfo* method);

void PlayerEffect__CallDamageFlashEffect
               (PlayerEffect_o *__this,UnityEngine_Material_o *damageFlash,
               UnityEngine_Material_o *defaultMaterial,
               UnityEngine_SpriteRenderer_array *spriteRenderers,MethodInfo *method)

{
  undefined4 param1;
  int iVar1;
  
  param1 = unnamed_function_44644(__this,0);
  iVar1 = unnamed_function_44687(param1,0);
  if (iVar1 != 0) {
    if (DAT_ram_00664ae5 == '\0') {
      unnamed_function_1099(&PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
      DAT_ram_00664ae5 = '\x01';
    }
    iVar1 = unnamed_function_95402(PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
    *(PlayerEffect_o **)(iVar1 + 0x18) = __this;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(UnityEngine_Material_o **)(iVar1 + 0x1c) = defaultMaterial;
    *(UnityEngine_Material_o **)(iVar1 + 0x14) = damageFlash;
    *(UnityEngine_SpriteRenderer_array **)(iVar1 + 0x10) = spriteRenderers;
    unnamed_function_44725(__this,iVar1,0);
  }
  return;
}

// ---- PlayerEffect$$DamageFlashCoroutine ----
// C#: System_Collections_IEnumerator_o* PlayerEffect__DamageFlashCoroutine (PlayerEffect_o* __this, UnityEngine_Material_o* damageFlash, UnityEngine_Material_o* defaultMaterial, UnityEngine_SpriteRenderer_array* spriteRenderers, const MethodInfo* method);

System_Collections_IEnumerator_o *
PlayerEffect__DamageFlashCoroutine
          (PlayerEffect_o *__this,UnityEngine_Material_o *damageFlash,
          UnityEngine_Material_o *defaultMaterial,UnityEngine_SpriteRenderer_array *spriteRenderers,
          MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664ae5 == '\0') {
    unnamed_function_1099(&PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
    DAT_ram_00664ae5 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(PlayerEffect__DamageFlashCoroutine_d__10_TypeInfo);
  pSVar1[6]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  pSVar1[7]._opaque = (int)defaultMaterial;
  pSVar1[5]._opaque = (int)damageFlash;
  pSVar1[4]._opaque = (int)spriteRenderers;
  return pSVar1;
}

// ---- PlayerEffect$$DamagePushEfect ----
// C#: void PlayerEffect__DamagePushEfect (PlayerEffect_o* __this, UnityEngine_Vector2_o damageSource, const MethodInfo* method);

void PlayerEffect__DamagePushEfect
               (PlayerEffect_o *__this,Vector2_o *damageSource,MethodInfo *method)

{
  undefined1 auVar1 [8];
  undefined4 param1;
  int iVar2;
  Coroutine_o *pCVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Vector2_o VVar8;
  undefined1 local_8 [8];
  
  if (__this->pushPlayerByEnemyCoroutine != (Coroutine_o *)0x0) {
    unnamed_function_44730(__this,__this->pushPlayerByEnemyCoroutine,0);
  }
  param1 = unnamed_function_44644(__this,0);
  iVar2 = unnamed_function_44687(param1,0);
  if (iVar2 != 0) {
    unnamed_function_16384(local_8,*(undefined4 *)(__this->pad_8 + 0x18),0);
    auVar1 = local_8;
    fVar4 = *(float *)(__this->pad_8 + 0x24);
    unnamed_function_16384(local_8,*(undefined4 *)(__this->pad_8 + 0x18),0);
    VVar8 = *damageSource;
    if (DAT_ram_006634ad == '\0') {
      unnamed_function_1099(&System_Math_TypeInfo);
      DAT_ram_006634ad = '\x01';
    }
    fVar5 = local_8._4_4_ - VVar8.y;
    fVar6 = local_8._0_4_ - VVar8.x;
    if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(System_Math_TypeInfo);
    }
    fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    if (1e-05 < fVar7) {
      fVar5 = fVar5 / fVar7;
      fVar6 = fVar6 / fVar7;
    }
    else {
      if (DAT_ram_0066482a == '\0') {
        unnamed_function_1099(&UnityEngine_Vector2_TypeInfo);
        DAT_ram_0066482a = '\x01';
      }
      fVar5 = (*(float **)(UnityEngine_Vector2_TypeInfo + 0x5c))[1];
      fVar6 = **(float **)(UnityEngine_Vector2_TypeInfo + 0x5c);
    }
    if (DAT_ram_00664ae6 == '\0') {
      unnamed_function_1099(&PlayerEffect__PushPlayerByEnemy_d__12_TypeInfo);
      DAT_ram_00664ae6 = '\x01';
    }
    iVar2 = unnamed_function_95402(PlayerEffect__PushPlayerByEnemy_d__12_TypeInfo);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(float *)(iVar2 + 0x18) = fVar4 * fVar5 + auVar1._4_4_;
    *(float *)(iVar2 + 0x14) = fVar4 * fVar6 + auVar1._0_4_;
    *(PlayerEffect_o **)(iVar2 + 0x10) = __this;
    *(undefined4 *)(iVar2 + 8) = 0;
    pCVar3 = (Coroutine_o *)unnamed_function_44725(__this,iVar2,0);
    __this->pushPlayerByEnemyCoroutine = pCVar3;
  }
  return;
}

// ---- PlayerEffect$$PushPlayerByEnemy ----
// C#: System_Collections_IEnumerator_o* PlayerEffect__PushPlayerByEnemy (PlayerEffect_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);

System_Collections_IEnumerator_o *
PlayerEffect__PushPlayerByEnemy(PlayerEffect_o *__this,Vector3_o *targetPosition,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664ae6 == '\0') {
    unnamed_function_1099(&PlayerEffect__PushPlayerByEnemy_d__12_TypeInfo);
    DAT_ram_00664ae6 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(PlayerEffect__PushPlayerByEnemy_d__12_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  *(undefined8 *)(pSVar1 + 5) = *(undefined8 *)targetPosition;
  pSVar1[7]._opaque = (int)targetPosition->z;
  return pSVar1;
}

// ---- PlayerEffect$$DashShadowPlayerEffect ----
// C#: void PlayerEffect__DashShadowPlayerEffect (PlayerEffect_o* __this, const MethodInfo* method);

void PlayerEffect__DashShadowPlayerEffect(PlayerEffect_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_array *playerSpriteRenderers;
  float fVar1;
  GameResources_o *pGVar2;
  undefined4 uVar3;
  PlayerShadow_o *__this_00;
  float fVar4;
  int iVar5;
  PoolManager_o *__this_01;
  UnityEngine_GameObject_o *prefab;
  undefined1 local_40 [32];
  MethodInfo local_20;
  
  if (DAT_ram_00664ae7 == '\0') {
    unnamed_function_1099(&DAT_ram_00567fe8);
    unnamed_function_1099(&PlayerShadow_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d64);
    DAT_ram_00664ae7 = '\x01';
  }
  playerSpriteRenderers =
       (UnityEngine_SpriteRenderer_array *)unnamed_function_65381(__this,DAT_ram_00567fe8);
  fVar4 = __this->dashEffectDuration;
  if (0.0 < fVar4) {
    fVar1 = unnamed_function_44879(0);
    __this->dashEffectDuration = fVar4 - fVar1;
  }
  else {
    iVar5 = *(int *)(DAT_ram_00565d64 + 0x10);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
    if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = unnamed_function_95087(iVar5);
    }
    __this_01 = (PoolManager_o *)**(undefined4 **)(iVar5 + 0x5c);
    pGVar2 = GameResources__get_Instance((MethodInfo *)local_40);
    prefab = (UnityEngine_GameObject_o *)pGVar2->playerShadowPrefab;
    uVar3 = unnamed_function_44643(__this->player,0);
    unnamed_function_44960(&local_20.field_0x10,uVar3,0);
    if (DAT_ram_006603e8 == '\0') {
      unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
      DAT_ram_006603e8 = '\x01';
    }
    local_40._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
    local_40._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
    local_40._24_4_ = local_20._24_4_;
    local_40._16_8_ = local_20._16_8_;
    local_20._0_8_ = local_40._0_8_;
    local_20._8_8_ = local_40._8_8_;
    __this_00 = (PlayerShadow_o *)
                PoolManager__ReuseComponent
                          (__this_01,prefab,(Vector3_o *)(local_40 + 0x10),(Quaternion_o *)local_40,
                           (MethodInfo *)0x0);
    if (__this_00 != (PlayerShadow_o *)0x0) {
      if (((uint)*(byte *)((int)__this_00->klass + 0xb8) <
           (uint)*(byte *)(PlayerShadow_TypeInfo + 0xb8)) ||
         (*(int *)(*(int *)((int)__this_00->klass + 100) +
                   (uint)*(byte *)(PlayerShadow_TypeInfo + 0xb8) * 4 + -4) != PlayerShadow_TypeInfo)
         ) {
        unnamed_function_1116(__this_00,PlayerShadow_TypeInfo);
        do {
          halt_trap();
        } while( true );
      }
    }
    uVar3 = unnamed_function_44644(__this_00,0);
    unnamed_function_44686(uVar3,1,0);
    PlayerShadow__InitialiseSprite(__this_00,playerSpriteRenderers,(MethodInfo *)local_40);
    __this->dashEffectDuration = 0.035;
  }
  return;
}

// ---- PlayerEffect$$.ctor ----
// C#: void PlayerEffect___ctor (PlayerEffect_o* __this, const MethodInfo* method);

void PlayerEffect___ctor(PlayerEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  __this->dashEffectDuration = 0.05;
  if (DAT_ram_00664ada == '\0') {
    unnamed_function_1099(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    DAT_ram_00664ada = '\x01';
  }
  uVar1 = unnamed_function_95402(UnityEngine_WaitForFixedUpdate_TypeInfo);
  __this->pad_8[0x28] = 0;
  __this->pad_8[0x29] = 0;
  __this->pad_8[0x2a] = 0x80;
  __this->pad_8[0x2b] = 0x3e;
  *(undefined4 *)(__this->pad_8 + 0x20) = uVar1;
  unnamed_function_44622(__this,0);
  return;
}

