// Assembly-CSharp :: EnemyAttack
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnemyAttack : MonoBehaviour // TypeDefIndex: 5589
{
	// Fields
	private Enemy enemy; // 0x10
	[SerializeField]
	private Transform shootPosition; // 0x14
	[SerializeField]
	private AmmoDetailsSO ammoDetailsSO; // 0x18
	[SerializeField]
	private float attackDistance; // 0x1C

	// Methods

	// RVA: 0x37B3 Offset: 0x37B3 VA: 0x37B3
	private void Awake() { }

	// RVA: 0x37B4 Offset: 0x37B4 VA: 0x37B4
	private void Start() { }

	// RVA: 0x37B5 Offset: 0x37B5 VA: 0x37B5
	public void Shoot() { }

	// RVA: 0x37B6 Offset: 0x37B6 VA: 0x37B6
	private void CallEnemyAttackState() { }

	// RVA: 0x37B7 Offset: 0x37B7 VA: 0x37B7
	public void .ctor() { }
}

===== C# end =====
*/

// ---- EnemyAttack$$Awake ----
// C#: void EnemyAttack__Awake (EnemyAttack_o* __this, const MethodInfo* method);

void EnemyAttack__Awake(EnemyAttack_o *__this,MethodInfo *method)

{
  Enemy_o *pEVar1;
  
  if (DAT_ram_00664af5 == '\0') {
    unnamed_function_1099(&DAT_ram_00567e78);
    DAT_ram_00664af5 = '\x01';
  }
  pEVar1 = (Enemy_o *)unnamed_function_65370(__this,DAT_ram_00567e78);
  __this->enemy = pEVar1;
  return;
}

// ---- EnemyAttack$$Start ----
// C#: void EnemyAttack__Start (EnemyAttack_o* __this, const MethodInfo* method);

void EnemyAttack__Start(EnemyAttack_o *__this,MethodInfo *method)

{
  float param4;
  
  if (DAT_ram_00664af6 == '\0') {
    unnamed_function_1099(&StringLiteral_2198 /* "CallEnemyAttackState" */);
    DAT_ram_00664af6 = '\x01';
  }
  param4 = unnamed_function_44583(2.0,3.0,0);
  unnamed_function_44717(__this,StringLiteral_2198 /* "CallEnemyAttackState" */,3.0,param4,0);
  return;
}

// ---- EnemyAttack$$Shoot ----
// C#: void EnemyAttack__Shoot (EnemyAttack_o* __this, const MethodInfo* method);

void EnemyAttack__Shoot(EnemyAttack_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *param1;
  int *param1_00;
  undefined4 param2;
  uint *puVar1;
  int iVar2;
  UnityEngine_GameObject_o *prefab;
  PoolManager_o *__this_00;
  AmmoDetailsSO_o *pAVar3;
  uint uVar4;
  Vector3_o local_60;
  Quaternion_o local_50;
  Vector3_o local_40;
  Vector3_o local_30;
  Quaternion_o local_20;
  Vector3_o local_10;
  
  if (DAT_ram_00664af7 == '\0') {
    unnamed_function_1099(&IFireable_TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d64);
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664af7 = '\x01';
  }
  iVar2 = *(int *)(DAT_ram_00565d64 + 0x10);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = unnamed_function_95087(iVar2);
  }
  prefab = (UnityEngine_GameObject_o *)__this->ammoDetailsSO->ammoPrefab;
  __this_00 = (PoolManager_o *)**(undefined4 **)(iVar2 + 0x5c);
  unnamed_function_44960(&local_10,__this->shootPosition,0);
  if (DAT_ram_006603e8 == '\0') {
    unnamed_function_1099(&UnityEngine_Quaternion_TypeInfo);
    DAT_ram_006603e8 = '\x01';
  }
  local_50._8_8_ = (*(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c))[1];
  local_50._0_8_ = **(undefined8 **)(UnityEngine_Quaternion_TypeInfo + 0x5c);
  local_40.z = local_10.z;
  local_40.x = local_10.x;
  local_40.y = local_10.y;
  local_20._0_8_ = local_50._0_8_;
  local_20._8_8_ = local_50._8_8_;
  param1 = PoolManager__ReuseComponent(__this_00,prefab,&local_40,&local_50,(MethodInfo *)0x0);
  iVar2 = IFireable_TypeInfo;
  if (param1 != (UnityEngine_Component_o *)0x0) {
    param1_00 = (int *)unnamed_function_1112(param1,IFireable_TypeInfo);
    if (param1_00 == (int *)0x0) {
      unnamed_function_1116(param1,iVar2);
      do {
        halt_trap();
      } while( true );
    }
    pAVar3 = __this->ammoDetailsSO;
    iVar2 = *(int *)(DAT_ram_00565d78 + 0x10);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = unnamed_function_95087(iVar2);
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = unnamed_function_95087(iVar2);
    }
    uVar4 = 0;
    param2 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar2 + 0x5c) + 0x10),0);
    unnamed_function_44960(&local_30,param2,0);
    local_10.z = local_30.z;
    local_10.x = local_30.x;
    local_10.y = local_30.y;
    iVar2 = *param1_00;
    if (*(ushort *)(iVar2 + 0xb6) != 0) {
      do {
        if (IFireable_TypeInfo == *(int *)(*(int *)(iVar2 + 0x58) + uVar4 * 8)) {
          puVar1 = (uint *)(iVar2 + *(int *)(*(int *)(iVar2 + 0x58) + uVar4 * 8 + 4) * 8 + 0xc0);
          goto code_r0x81a513c4;
        }
        uVar4 = uVar4 + 1;
      } while (*(ushort *)(iVar2 + 0xb6) != uVar4);
    }
    puVar1 = (uint *)unnamed_function_95091(param1_00,IFireable_TypeInfo,0);
code_r0x81a513c4:
    local_60.z = local_10.z;
    local_60.x = local_10.x;
    local_60.y = local_10.y;
    (**(code **)((ulonglong)*puVar1 * 4))(param1_00,pAVar3,&local_60,puVar1[1]);
  }
  return;
}

// ---- EnemyAttack$$CallEnemyAttackState ----
// C#: void EnemyAttack__CallEnemyAttackState (EnemyAttack_o* __this, const MethodInfo* method);

void EnemyAttack__CallEnemyAttackState(EnemyAttack_o *__this,MethodInfo *method)

{
  float4 fVar1;
  float4 fVar2;
  undefined4 uVar3;
  int iVar4;
  float4 local_10;
  float4 local_c;
  
  if (DAT_ram_00664af8 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d78);
    DAT_ram_00664af8 = '\x01';
  }
  iVar4 = *(int *)(DAT_ram_00565d78 + 0x10);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = unnamed_function_95087(iVar4);
  }
  uVar3 = unnamed_function_44643(*(undefined4 *)(**(int **)(iVar4 + 0x5c) + 0x10),0);
  unnamed_function_44960((MethodInfo *)&local_10,uVar3,0);
  fVar2 = local_c;
  fVar1 = local_10;
  uVar3 = unnamed_function_44643(__this,0);
  unnamed_function_44960((MethodInfo *)&local_10,uVar3,0);
  if (DAT_ram_0065b3eb == '\0') {
    unnamed_function_1099(&System_Math_TypeInfo);
    DAT_ram_0065b3eb = '\x01';
  }
  if (*(int *)(System_Math_TypeInfo + 0x74) == 0) {
    unnamed_function_94848(System_Math_TypeInfo);
  }
  if (SQRT(((float)fVar1 - (float)local_10) * ((float)fVar1 - (float)local_10) +
           ((float)fVar2 - (float)local_c) * ((float)fVar2 - (float)local_c)) <
      __this->attackDistance) {
    EnemyStateEvent__CallEnemyStateEvent
              (__this->enemy->enemyStateEvent,Attacking,(MethodInfo *)&local_10);
  }
  return;
}

// ---- EnemyAttack$$.ctor ----
// C#: void EnemyAttack___ctor (EnemyAttack_o* __this, const MethodInfo* method);

void EnemyAttack___ctor(EnemyAttack_o *__this,MethodInfo *method)

{
  __this->attackDistance = 8.0;
  unnamed_function_44622(__this,0);
  return;
}

