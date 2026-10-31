// Assembly-CSharp :: Item
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Item : MonoBehaviour // TypeDefIndex: 5645
{
	// Fields
	private float timeToDestroy; // 0x10
	private LayerMask playerLayerMark; // 0x14
	public ItemSO itemSO; // 0x18
	private float jumDuration; // 0x1C
	private int numJumps; // 0x20
	private float jumpPower; // 0x24
	private float shakeDuration; // 0x28
	private float shakeStrength; // 0x2C
	private int shakeVibrato; // 0x30
	private bool isColliding; // 0x34
	[SerializeField]
	private SoundEffectSO dropItemSoundEffect; // 0x38

	// Methods

	// RVA: 0x38C8 Offset: 0x38C8 VA: 0x38C8
	private void Start() { }

	// RVA: 0x38C9 Offset: 0x38C9 VA: 0x38C9
	private void Update() { }

	// RVA: 0x38CA Offset: 0x38CA VA: 0x38CA
	private void OnDestroy() { }

	// RVA: 0x38CB Offset: 0x38CB VA: 0x38CB
	private void OnTriggerEnter2D(Collider2D collision) { }

	// RVA: 0x38CC Offset: 0x38CC VA: 0x38CC
	public void DropItemEffect() { }

	// RVA: 0x38CD Offset: 0x38CD VA: 0x38CD
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38CE Offset: 0x38CE VA: 0x38CE
	private void <DropItemEffect>b__15_0() { }
}

===== C# end =====
*/

// ---- Item$$Start ----
// C#: void Item__Start (Item_o* __this, const MethodInfo* method);

void Item__Start(Item_o *__this,MethodInfo *method)

{
  int param1;
  InputSystem_Actions_o *wrapper;
  
  if (DAT_ram_006648cd == '\0') {
    unnamed_function_1099(&string___TypeInfo);
    unnamed_function_1099(&StringLiteral_6075 /* "Player" */);
    DAT_ram_006648cd = '\x01';
  }
  param1 = unnamed_function_1050(string___TypeInfo,1);
  *(undefined4 *)(param1 + 0x10 /* timeToDestroy */) = StringLiteral_6075 /* "Player" */;
  wrapper = (InputSystem_Actions_o *)unnamed_function_44703(param1,0);
  InputSystem_Actions_PlayerActions___ctor
            ((InputSystem_Actions_PlayerActions_o *)&__this->playerLayerMark,wrapper,
             (MethodInfo *)0x0);
  Item__DropItemEffect(__this,(MethodInfo *)__this);
  return;
}

// ---- Item$$Update ----
// C#: void Item__Update (Item_o* __this, const MethodInfo* method);

void Item__Update(Item_o *__this,MethodInfo *method)

{
  undefined4 param1;
  float fVar1;
  float fVar2;
  
  if (DAT_ram_006648ce == '\0') {
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648ce = '\x01';
  }
  fVar2 = __this->timeToDestroy;
  if (fVar2 <= 0.0) {
    param1 = unnamed_function_44644(__this,0);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    unnamed_function_44782(param1,0);
    return;
  }
  fVar1 = unnamed_function_44879(0);
  __this->timeToDestroy = fVar2 - fVar1;
  return;
}

// ---- Item$$OnDestroy ----
// C#: void Item__OnDestroy (Item_o* __this, const MethodInfo* method);

void Item__OnDestroy(Item_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  if (DAT_ram_006648cf == '\0') {
    unnamed_function_1099(&DG_Tweening_DOTween_TypeInfo);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    DAT_ram_006648cf = '\x01';
  }
  uVar1 = unnamed_function_44644(__this,0);
  if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(UnityEngine_Object_TypeInfo);
  }
  uVar1 = unnamed_function_44767(uVar1,0);
  if (*(int *)(DG_Tweening_DOTween_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(DG_Tweening_DOTween_TypeInfo);
  }
  unnamed_function_13715(uVar1,0);
  return;
}

// ---- Item$$OnTriggerEnter2D ----
// C#: void Item__OnTriggerEnter2D (Item_o* __this, UnityEngine_Collider2D_o* collision, const MethodInfo* method);

void Item__OnTriggerEnter2D(Item_o *__this,UnityEngine_Collider2D_o *collision,MethodInfo *method)

{
  undefined4 uVar1;
  uint uVar2;
  InventoryManager_o *__this_00;
  uint uVar3;
  int iVar4;
  
  if (DAT_ram_006648d0 == '\0') {
    unnamed_function_1099(&DAT_ram_00567eb4);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d6c);
    DAT_ram_006648d0 = '\x01';
  }
  uVar3 = (__this->playerLayerMark).m_Mask;
  uVar1 = unnamed_function_44644(collision,0);
  uVar2 = unnamed_function_44684(uVar1,0);
  if ((0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) && (__this->isColliding != false)) {
    iVar4 = *(int *)(DAT_ram_00565d6c + 0x10);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = unnamed_function_95087(iVar4);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = unnamed_function_95087(iVar4);
    }
    SoundEffectManager__PlaySoundEffect
              ((SoundEffectManager_o *)**(undefined4 **)(iVar4 + 0x5c),__this->dropItemSoundEffect,
               (MethodInfo *)__this);
    __this_00 = (InventoryManager_o *)unnamed_function_65370(collision,DAT_ram_00567eb4);
    if (__this_00 != (InventoryManager_o *)0x0) {
      InventoryManager__CollectIntentoryItem(__this_00,__this->itemSO,(MethodInfo *)__this);
    }
    uVar1 = unnamed_function_44644(__this,0);
    if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Object_TypeInfo);
    }
    unnamed_function_44782(uVar1,0);
    __this->isColliding = false;
  }
  return;
}

// ---- Item$$DropItemEffect ----
// C#: void Item__DropItemEffect (Item_o* __this, const MethodInfo* method);

void Item__DropItemEffect(Item_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float4 fVar4;
  float4 fVar5;
  float4 fVar6;
  undefined4 uVar7;
  undefined4 param1;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  int iVar13;
  undefined8 local_30;
  float local_28;
  float4 local_20;
  float4 local_1c;
  float4 local_18;
  float4 local_10;
  float4 local_c;
  float4 local_8;
  
  if (DAT_ram_006648d1 == '\0') {
    unnamed_function_1099(&DAT_ram_0056a7c0);
    unnamed_function_1099(&DAT_ram_00565d78);
    unnamed_function_1099(&DG_Tweening_TweenCallback_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d348);
    DAT_ram_006648d1 = '\x01';
  }
  uVar7 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar7,0);
  fVar5 = local_8;
  fVar3 = local_c;
  fVar1 = local_10;
  iVar13 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar13 + 0xbd) & 1) == 0) {
    iVar13 = unnamed_function_95087(iVar13);
  }
  iVar13 = *(int *)(*(int *)(iVar13 + 0x60) + 8);
  if ((*(byte *)(iVar13 + 0xbd) & 1) == 0) {
    iVar13 = unnamed_function_95087(iVar13);
  }
  uVar7 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar13 + 0x5c) + 0x10),0);
  unnamed_function_44960(&local_10,uVar7,0);
  fVar6 = local_8;
  fVar4 = local_c;
  fVar2 = local_10;
  if (DAT_ram_0066482c == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0066482c = '\x01';
  }
  fVar8 = (float)fVar5 - (float)fVar6;
  fVar9 = (float)fVar3 - (float)fVar4;
  fVar10 = (float)fVar1 - (float)fVar2;
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  fVar11 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
  if (1e-05 < fVar11) {
    fVar8 = fVar8 / fVar11;
    fVar10 = fVar10 / fVar11;
    fVar9 = fVar9 / fVar11;
  }
  else {
    if (DAT_ram_00664829 == '\0') {
      unnamed_function_1099(&UnityEngine_Vector3_TypeInfo);
      DAT_ram_00664829 = '\x01';
    }
    pfVar12 = *(float **)(UnityEngine_Vector3_TypeInfo + 0x5c);
    fVar8 = pfVar12[2];
    fVar10 = *pfVar12;
    fVar9 = pfVar12[1];
  }
  uVar7 = unnamed_function_44643(__this,0);
  unnamed_function_44960(&local_10,uVar7,0);
  uVar7 = unnamed_function_44643(__this,0);
  local_28 = (float)local_8 + fVar8 + fVar8;
  local_1c = (float4)((float)local_c + fVar9 + fVar9);
  local_20 = (float4)((float)local_10 + fVar10 + fVar10);
  local_30 = CONCAT44(local_1c,local_20);
  local_18 = (float4)local_28;
  uVar7 = unnamed_function_13902
                    (uVar7,&local_30,__this->jumpPower,__this->numJumps,__this->jumDuration,0,0);
  param1 = unnamed_function_95402(DG_Tweening_TweenCallback_TypeInfo);
  unnamed_function_13649(param1,__this,DAT_ram_0056a7c0,0);
  unnamed_function_70015(uVar7,param1,DAT_ram_0056d348);
  return;
}

// ---- Item$$.ctor ----
// C#: void Item___ctor (Item_o* __this, const MethodInfo* method);

void Item___ctor(Item_o *__this,MethodInfo *method)

{
  __this->isColliding = true;
  __this->shakeStrength = 0.5;
  __this->shakeVibrato = 3;
  __this->jumpPower = 1.0;
  __this->shakeDuration = 0.46;
  __this->jumDuration = 0.5;
  __this->numJumps = 2;
  __this->timeToDestroy = 10.0;
  unnamed_function_44622(__this,0);
  return;
}

// ---- Item$$<DropItemEffect>b__15_0 ----
// C#: void Item___DropItemEffect_b__15_0 (Item_o* __this, const MethodInfo* method);

void Item___DropItemEffect_b__15_0(Item_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_10;
  float4 local_c;
  undefined4 local_8;
  
  if (DAT_ram_006648d2 == '\0') {
    unnamed_function_1099(&DAT_ram_0056d38c);
    DAT_ram_006648d2 = '\x01';
  }
  uVar1 = unnamed_function_44643(__this,0);
  local_c = (float4)__this->shakeStrength;
  local_8 = 0;
  local_18 = 0;
  local_10 = 0;
  local_20 = (ulonglong)(uint)local_c << 0x20;
  uVar1 = unnamed_function_13897
                    (uVar1,__this->shakeDuration,&local_20,__this->shakeVibrato,0.0,0,1,0,0);
  unnamed_function_70042(uVar1,0xffffffff,DAT_ram_0056d38c);
  return;
}

