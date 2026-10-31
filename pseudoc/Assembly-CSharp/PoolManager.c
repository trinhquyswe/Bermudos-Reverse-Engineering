// Assembly-CSharp :: PoolManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class PoolManager : SingletonMonobehaviourPersistent<PoolManager> // TypeDefIndex: 5692
{
	// Fields
	[SerializeField]
	[Tooltip("Populate this array with prefabs that you want to add to the pool, and specify the number of gameobjects to be created for each.")]
	private PoolManager.Pool[] poolArray; // 0x10
	private Transform objectPoolTransform; // 0x14
	private Dictionary<int, Queue<Component>> poolDictionary; // 0x18

	// Methods

	// RVA: 0x39B9 Offset: 0x39B9 VA: 0x39B9 Slot: 4
	protected override void Awake() { }

	// RVA: 0x39BA Offset: 0x39BA VA: 0x39BA
	private void CreatePool(GameObject prefab, int poolSize, string componentType) { }

	// RVA: 0x39BB Offset: 0x39BB VA: 0x39BB
	public Component ReuseComponent(GameObject prefab, Vector3 position, Quaternion rotation) { }

	// RVA: 0x39BC Offset: 0x39BC VA: 0x39BC
	private Component GetComponentFromPool(int poolKey) { }

	// RVA: 0x39BD Offset: 0x39BD VA: 0x39BD
	private void ResetObject(Vector3 position, Quaternion rotation, Component componentToReuse, GameObject prefab) { }

	// RVA: 0x39BE Offset: 0x39BE VA: 0x39BE
	public void .ctor() { }
}

===== C# end =====
*/

// ---- PoolManager$$Awake ----
// C#: void PoolManager__Awake (PoolManager_o* __this, const MethodInfo* method);

void PoolManager__Awake(PoolManager_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  undefined4 param1;
  RuleTile_TilingRuleOutput_Transform RVar1;
  int iVar2;
  
  method_00 = (MethodInfo *)0x0;
  if (DAT_ram_00664951 == '\0') {
    unnamed_function_1099(&DAT_ram_00565d60);
    DAT_ram_00664951 = '\x01';
  }
  unnamed_function_61265(__this,DAT_ram_00565d60);
  param1 = unnamed_function_44644(__this,0);
  RVar1 = unnamed_function_44683(param1,0);
  __this->objectPoolTransform = RVar1;
  iVar2 = *(int *)__this->poolArray;
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      iVar2 = iVar2 + (int)method_00 * 0xc;
      PoolManager__CreatePool
                (__this,*(UnityEngine_GameObject_o **)(iVar2 + 0x14),*(int *)(iVar2 + 0x10),
                 *(System_String_o **)(iVar2 + 0x18),method_00);
      method_00 = (MethodInfo *)((int)&method_00->_opaque0 + 1);
      iVar2 = *(int *)__this->poolArray;
    } while ((int)method_00 < *(int *)(iVar2 + 0xc));
  }
  return;
}

// ---- PoolManager$$CreatePool ----
// C#: void PoolManager__CreatePool (PoolManager_o* __this, UnityEngine_GameObject_o* prefab, int32_t poolSize, System_String_o* componentType, const MethodInfo* method);

void PoolManager__CreatePool
               (PoolManager_o *__this,UnityEngine_GameObject_o *prefab,int poolSize,
               System_String_o *componentType,MethodInfo *method)

{
  undefined4 param2;
  undefined4 uVar1;
  undefined4 param1;
  int iVar2;
  undefined4 param1_00;
  undefined4 param2_00;
  Dictionary_o *param1_01;
  
  if (DAT_ram_00664952 == '\0') {
    unnamed_function_1099(&DAT_ram_00560010);
    unnamed_function_1099(&DAT_ram_00560014);
    unnamed_function_1099(&DAT_ram_00560018);
    unnamed_function_1099(&UnityEngine_GameObject_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b53c);
    unnamed_function_1099(&UnityEngine_Object_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b9bc);
    unnamed_function_1099(&DAT_ram_005657d0);
    unnamed_function_1099(&DAT_ram_005657c8);
    unnamed_function_1099(&System_Collections_Generic_Queue_Component__TypeInfo);
    unnamed_function_1099(&DAT_ram_0056d44c);
    unnamed_function_1099(&System_Type_TypeInfo);
    unnamed_function_1099(&StringLiteral_140 /* " Anchor" */);
    DAT_ram_00664952 = '\x01';
  }
  param2 = unnamed_function_44764(prefab,0);
  uVar1 = unnamed_function_44768(prefab,0);
  uVar1 = unnamed_function_81364(uVar1,StringLiteral_140 /* " Anchor" */,0);
  param1 = unnamed_function_95402(UnityEngine_GameObject_TypeInfo);
  unnamed_function_44695(param1,uVar1,0);
  uVar1 = unnamed_function_44683(param1,0);
  unnamed_function_44984(uVar1,__this->objectPoolTransform,0);
  iVar2 = unnamed_function_17516(__this->poolDictionary,param2,DAT_ram_00560014);
  if (iVar2 == 0) {
    param1_01 = __this->poolDictionary;
    uVar1 = unnamed_function_95402(System_Collections_Generic_Queue_Component__TypeInfo);
    unnamed_function_30856(uVar1,DAT_ram_005657c8);
    unnamed_function_78474(param1_01,param2,uVar1,DAT_ram_00560010);
    if (0 < poolSize) {
      iVar2 = 0;
      do {
        uVar1 = unnamed_function_44683(param1,0);
        if (*(int *)(UnityEngine_Object_TypeInfo + 0x74) == 0) {
          unnamed_function_94848(UnityEngine_Object_TypeInfo);
        }
        uVar1 = unnamed_function_51908(prefab,uVar1,DAT_ram_0056b53c);
        unnamed_function_44686(uVar1,0,0);
        param1_00 = unnamed_function_78417(__this->poolDictionary,param2,DAT_ram_00560018);
        if (*(int *)(System_Type_TypeInfo + 0x74) == 0) {
          unnamed_function_94848(System_Type_TypeInfo);
        }
        param2_00 = unnamed_function_1131(componentType,DAT_ram_0056d44c,DAT_ram_0056b9bc);
        uVar1 = unnamed_function_44646(uVar1,param2_00,0);
        unnamed_function_30872(param1_00,uVar1,DAT_ram_005657d0);
        iVar2 = iVar2 + 1;
      } while (iVar2 != poolSize);
    }
  }
  return;
}

// ---- PoolManager$$ReuseComponent ----
// C#: UnityEngine_Component_o* PoolManager__ReuseComponent (PoolManager_o* __this, UnityEngine_GameObject_o* prefab, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);

UnityEngine_Component_o *
PoolManager__ReuseComponent
          (PoolManager_o *__this,UnityEngine_GameObject_o *prefab,Vector3_o *position,
          Quaternion_o *rotation,MethodInfo *method)

{
  UnityEngine_Component_o *param1;
  int poolKey;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MethodInfo local_50;
  undefined8 local_30;
  float local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  if (DAT_ram_00664953 == '\0') {
    unnamed_function_1099(&UnityEngine_Debug_TypeInfo);
    unnamed_function_1099(&DAT_ram_00560014);
    unnamed_function_1099(&StringLiteral_5623 /* "No object pool for " */);
    DAT_ram_00664953 = '\x01';
  }
  poolKey = unnamed_function_44764(prefab,0);
  iVar1 = unnamed_function_17516(__this->poolDictionary,poolKey,DAT_ram_00560014);
  uVar3 = StringLiteral_5623 /* "No object pool for " */;
  if (iVar1 == 0) {
    if (prefab == (UnityEngine_GameObject_o *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)((ulonglong)*(uint *)(prefab->_opaque + 0xd8) * 4))
                        (prefab,*(undefined4 *)(prefab->_opaque + 0xdc));
    }
    uVar3 = unnamed_function_81364(uVar3,uVar2,0);
    if (*(int *)(UnityEngine_Debug_TypeInfo + 0x74) == 0) {
      unnamed_function_94848(UnityEngine_Debug_TypeInfo);
    }
    param1 = (UnityEngine_Component_o *)0x0;
    unnamed_function_52407(uVar3,0);
  }
  else {
    param1 = PoolManager__GetComponentFromPool(__this,poolKey,&local_50);
    local_18._0_4_ = rotation->z;
    local_18._4_4_ = rotation->w;
    local_20._0_4_ = rotation->x;
    local_20._4_4_ = rotation->y;
    uVar3 = unnamed_function_44643(param1,0);
    local_28 = position->z;
    local_30._0_4_ = position->x;
    local_30._4_4_ = position->y;
    unnamed_function_44962(uVar3,&local_30,0);
    uVar3 = unnamed_function_44643(param1,0);
    local_50._24_8_ = local_18;
    local_50._16_8_ = local_20;
    unnamed_function_44967(uVar3,&local_50.field_0x10,0);
    uVar3 = unnamed_function_44644(param1,0);
    uVar3 = unnamed_function_44683(uVar3,0);
    uVar2 = unnamed_function_44683(prefab,0);
    unnamed_function_44980(local_10,uVar2,0);
    local_50._8_4_ = (undefined4)local_10[1];
    local_50._opaque0 = (int)local_10[0];
    local_50._opaque1 = local_10[0]._4_4_;
    unnamed_function_44982(uVar3,&local_50,0);
  }
  return param1;
}

// ---- PoolManager$$GetComponentFromPool ----
// C#: UnityEngine_Component_o* PoolManager__GetComponentFromPool (PoolManager_o* __this, int32_t poolKey, const MethodInfo* method);

UnityEngine_Component_o *
PoolManager__GetComponentFromPool(PoolManager_o *__this,int poolKey,MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Component_o *param2;
  int iVar2;
  
  if (DAT_ram_00664954 == '\0') {
    unnamed_function_1099(&DAT_ram_00560018);
    unnamed_function_1099(&DAT_ram_005657cc);
    unnamed_function_1099(&DAT_ram_005657d0);
    DAT_ram_00664954 = '\x01';
  }
  uVar1 = unnamed_function_78417(__this->poolDictionary,poolKey,DAT_ram_00560018);
  param2 = (UnityEngine_Component_o *)unnamed_function_30873(uVar1,DAT_ram_005657cc);
  uVar1 = unnamed_function_78417(__this->poolDictionary,poolKey,DAT_ram_00560018);
  unnamed_function_30872(uVar1,param2,DAT_ram_005657d0);
  uVar1 = unnamed_function_44644(param2,0);
  iVar2 = unnamed_function_44687(uVar1,0);
  if (iVar2 != 0) {
    uVar1 = unnamed_function_44644(param2,0);
    unnamed_function_44686(uVar1,0,0);
  }
  return param2;
}

// ---- PoolManager$$ResetObject ----
// C#: void PoolManager__ResetObject (PoolManager_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Component_o* componentToReuse, UnityEngine_GameObject_o* prefab, const MethodInfo* method);

void PoolManager__ResetObject
               (PoolManager_o *__this,Vector3_o *position,Quaternion_o *rotation,
               UnityEngine_Component_o *componentToReuse,UnityEngine_GameObject_o *prefab,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 param2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  uVar1 = unnamed_function_44643(componentToReuse,0);
  local_18 = position->z;
  local_20._0_4_ = position->x;
  local_20._4_4_ = position->y;
  unnamed_function_44962(uVar1,&local_20,0);
  uVar1 = unnamed_function_44643(componentToReuse,0);
  local_28._0_4_ = rotation->z;
  local_28._4_4_ = rotation->w;
  local_30._0_4_ = rotation->x;
  local_30._4_4_ = rotation->y;
  unnamed_function_44967(uVar1,&local_30,0);
  uVar1 = unnamed_function_44644(componentToReuse,0);
  uVar1 = unnamed_function_44683(uVar1,0);
  param2 = unnamed_function_44683(prefab,0);
  unnamed_function_44980(&local_10,param2,0);
  local_38 = local_8;
  local_40 = local_10;
  unnamed_function_44982(uVar1,&local_40,0);
  return;
}

// ---- PoolManager$$.ctor ----
// C#: void PoolManager___ctor (PoolManager_o* __this, const MethodInfo* method);

void PoolManager___ctor(PoolManager_o *__this,MethodInfo *method)

{
  Dictionary_o *param1;
  
  if (DAT_ram_00664955 == '\0') {
    unnamed_function_1099(&DAT_ram_0056000c);
    unnamed_function_1099(&System_Collections_Generic_Dictionary_int__Queue_Component___TypeInfo);
    unnamed_function_1099(&DAT_ram_00565d5c);
    DAT_ram_00664955 = '\x01';
  }
  param1 = (Dictionary_o *)
           unnamed_function_95402
                     (System_Collections_Generic_Dictionary_int__Queue_Component___TypeInfo);
  unnamed_function_17497(param1,DAT_ram_0056000c);
  __this->poolDictionary = param1;
  AmmoAnimation___ctor((AmmoAnimation_o *)__this,DAT_ram_00565d5c);
  return;
}

