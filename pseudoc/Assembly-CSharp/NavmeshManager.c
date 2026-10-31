// Assembly-CSharp :: NavmeshManager
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class NavmeshManager : MonoBehaviour // TypeDefIndex: 5684
{
	// Fields
	private NavMeshSurface navMeshSurface; // 0x10

	// Methods

	// RVA: 0x3975 Offset: 0x3975 VA: 0x3975
	private void Awake() { }

	// RVA: 0x3976 Offset: 0x3976 VA: 0x3976
	private void OnEnable() { }

	// RVA: 0x3977 Offset: 0x3977 VA: 0x3977
	private void OnDisable() { }

	// RVA: 0x3978 Offset: 0x3978 VA: 0x3978
	private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs) { }

	[IteratorStateMachine(typeof(NavmeshManager.<BuildNavMeshWhenMapChangedCoroutine>d__5))]
	// RVA: 0x3979 Offset: 0x3979 VA: 0x3979
	private IEnumerator BuildNavMeshWhenMapChangedCoroutine() { }

	// RVA: 0x397A Offset: 0x397A VA: 0x397A
	private void StaticEventHandler_OnRestInBonfire() { }

	[IteratorStateMachine(typeof(NavmeshManager.<BuildNavMeshWhenRestCoroutine>d__7))]
	// RVA: 0x397B Offset: 0x397B VA: 0x397B
	private IEnumerator BuildNavMeshWhenRestCoroutine() { }

	// RVA: 0x397C Offset: 0x397C VA: 0x397C
	public void .ctor() { }
}

===== C# end =====
*/

// ---- NavmeshManager$$Awake ----
// C#: void NavmeshManager__Awake (NavmeshManager_o* __this, const MethodInfo* method);

void NavmeshManager__Awake(NavmeshManager_o *__this,MethodInfo *method)

{
  NavMeshSurface_o *pNVar1;
  
  if (DAT_ram_00664932 == '\0') {
    unnamed_function_1099(&DAT_ram_00567ee8);
    DAT_ram_00664932 = '\x01';
  }
  pNVar1 = (NavMeshSurface_o *)unnamed_function_65370(__this,DAT_ram_00567ee8);
  __this->navMeshSurface = pNVar1;
  return;
}

// ---- NavmeshManager$$OnEnable ----
// C#: void NavmeshManager__OnEnable (NavmeshManager_o* __this, const MethodInfo* method);

void NavmeshManager__OnEnable(NavmeshManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  int param1;
  System_Action_MapChangedEventArgs__o *value;
  undefined4 param1_00;
  int *param1_01;
  int iVar2;
  
  if (DAT_ram_00664933 == '\0') {
    unnamed_function_1099(&System_Action_MapChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b40c);
    unnamed_function_1099(&DAT_ram_0056b410);
    DAT_ram_00664933 = '\x01';
  }
  value = (System_Action_MapChangedEventArgs__o *)
          unnamed_function_95402(System_Action_MapChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056b40c,0);
  StaticEventHandler__add_OnMapChanged(value,(MethodInfo *)__this);
  param1_00 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(param1_00,__this,DAT_ram_0056b410,0);
  if (DAT_ram_006649c4 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c4 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28);
  while ((param1_01 = (int *)unnamed_function_85158(param1,param1_00,0), param1_01 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_01))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_01,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- NavmeshManager$$OnDisable ----
// C#: void NavmeshManager__OnDisable (NavmeshManager_o* __this, const MethodInfo* method);

void NavmeshManager__OnDisable(NavmeshManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  int param1;
  System_Action_MapChangedEventArgs__o *value;
  undefined4 param1_00;
  int *param1_01;
  int iVar2;
  
  if (DAT_ram_00664934 == '\0') {
    unnamed_function_1099(&System_Action_MapChangedEventArgs__TypeInfo);
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&DAT_ram_0056b40c);
    unnamed_function_1099(&DAT_ram_0056b410);
    DAT_ram_00664934 = '\x01';
  }
  value = (System_Action_MapChangedEventArgs__o *)
          unnamed_function_95402(System_Action_MapChangedEventArgs__TypeInfo);
  unnamed_function_60074(value,__this,DAT_ram_0056b40c,0);
  StaticEventHandler__remove_OnMapChanged(value,(MethodInfo *)__this);
  param1_00 = unnamed_function_95402(System_Action_TypeInfo);
  unnamed_function_82700(param1_00,__this,DAT_ram_0056b410,0);
  if (DAT_ram_006649c5 == '\0') {
    unnamed_function_1099(&System_Action_TypeInfo);
    unnamed_function_1099(&StaticEventHandler_TypeInfo);
    DAT_ram_006649c5 = '\x01';
  }
  param1 = *(int *)(*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28);
  while ((param1_01 = (int *)unnamed_function_85160(param1,param1_00,0), param1_01 == (int *)0x0 ||
         (System_Action_TypeInfo == *param1_01))) {
    iVar2 = unnamed_function_1144
                      (*(int *)(StaticEventHandler_TypeInfo + 0x5c) + 0x28,param1_01,param1);
    bVar1 = param1 == iVar2;
    param1 = iVar2;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(param1_01,System_Action_TypeInfo);
  do {
    halt_trap();
  } while( true );
}

// ---- NavmeshManager$$StaticEventHandler_OnMapChanged ----
// C#: void NavmeshManager__StaticEventHandler_OnMapChanged (NavmeshManager_o* __this, MapChangedEventArgs_o* mapChangedEventArgs, const MethodInfo* method);

void NavmeshManager__StaticEventHandler_OnMapChanged
               (NavmeshManager_o *__this,MapChangedEventArgs_o *mapChangedEventArgs,
               MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664935 == '\0') {
    unnamed_function_1099(&NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5_TypeInfo);
    DAT_ram_00664935 = '\x01';
  }
  param2 = unnamed_function_95402(NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5_TypeInfo)
  ;
  *(NavmeshManager_o **)(param2 + 0x10 /* navMeshSurface */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- NavmeshManager$$BuildNavMeshWhenMapChangedCoroutine ----
// C#: System_Collections_IEnumerator_o* NavmeshManager__BuildNavMeshWhenMapChangedCoroutine (NavmeshManager_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
NavmeshManager__BuildNavMeshWhenMapChangedCoroutine(NavmeshManager_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664935 == '\0') {
    unnamed_function_1099(&NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5_TypeInfo);
    DAT_ram_00664935 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(NavmeshManager__BuildNavMeshWhenMapChangedCoroutine_d__5_TypeInfo)
  ;
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- NavmeshManager$$StaticEventHandler_OnRestInBonfire ----
// C#: void NavmeshManager__StaticEventHandler_OnRestInBonfire (NavmeshManager_o* __this, const MethodInfo* method);

void NavmeshManager__StaticEventHandler_OnRestInBonfire(NavmeshManager_o *__this,MethodInfo *method)

{
  int param2;
  
  if (DAT_ram_00664936 == '\0') {
    unnamed_function_1099(&NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7_TypeInfo);
    DAT_ram_00664936 = '\x01';
  }
  param2 = unnamed_function_95402(NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7_TypeInfo);
  *(NavmeshManager_o **)(param2 + 0x10 /* navMeshSurface */) = __this;
  *(undefined4 *)(param2 + 8) = 0;
  unnamed_function_44725(__this,param2,0);
  return;
}

// ---- NavmeshManager$$BuildNavMeshWhenRestCoroutine ----
// C#: System_Collections_IEnumerator_o* NavmeshManager__BuildNavMeshWhenRestCoroutine (NavmeshManager_o* __this, const MethodInfo* method);

System_Collections_IEnumerator_o *
NavmeshManager__BuildNavMeshWhenRestCoroutine(NavmeshManager_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  if (DAT_ram_00664936 == '\0') {
    unnamed_function_1099(&NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7_TypeInfo);
    DAT_ram_00664936 = '\x01';
  }
  pSVar1 = (System_Collections_IEnumerator_o *)
           unnamed_function_95402(NavmeshManager__BuildNavMeshWhenRestCoroutine_d__7_TypeInfo);
  pSVar1[4]._opaque = (int)__this;
  pSVar1[2]._opaque = 0;
  return pSVar1;
}

// ---- NavmeshManager$$.ctor ----
// C#: void NavmeshManager___ctor (NavmeshManager_o* __this, const MethodInfo* method);

void AmmoAnimation___ctor(AmmoAnimation_o *__this,MethodInfo *method)

{
  unnamed_function_44622(__this,0);
  return;
}

