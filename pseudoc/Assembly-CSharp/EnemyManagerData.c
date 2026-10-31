// Assembly-CSharp :: EnemyManagerData
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class EnemyManagerData // TypeDefIndex: 5591
{
	// Fields
	public string enemyName; // 0x8
	public int enemyCount; // 0xC
	public List<bool> enemieStateList; // 0x10

	// Methods

	// RVA: 0x37BD Offset: 0x37BD VA: 0x37BD
	public void .ctor(string enemyName, int enemyCount, int count) { }

	// RVA: 0x37BE Offset: 0x37BE VA: 0x37BE
	public void GetEnemyList(int count) { }
}

===== C# end =====
*/

// ---- EnemyManagerData$$.ctor ----
// C#: void EnemyManagerData___ctor (EnemyManagerData_o* __this, System_String_o* enemyName, int32_t enemyCount, int32_t count, const MethodInfo* method);

void EnemyManagerData___ctor
               (EnemyManagerData_o *__this,System_String_o *enemyName,int enemyCount,int count,
               MethodInfo *method)

{
  List_o *param1;
  
  if (DAT_ram_00664afe == '\0') {
    unnamed_function_1099(&DAT_ram_00562b48);
    unnamed_function_1099(&System_Collections_Generic_List_bool__TypeInfo);
    DAT_ram_00664afe = '\x01';
  }
  param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_bool__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_00562b48);
  __this->enemieStateList = param1;
  __this->enemyCount = enemyCount;
  __this->enemyName = (string_o *)enemyName;
  EnemyManagerData__GetEnemyList(__this,count,(MethodInfo *)__this);
  return;
}

// ---- EnemyManagerData$$GetEnemyList ----
// C#: void EnemyManagerData__GetEnemyList (EnemyManagerData_o* __this, int32_t count, const MethodInfo* method);

void EnemyManagerData__GetEnemyList(EnemyManagerData_o *__this,int count,MethodInfo *method)

{
  int iVar1;
  List_o *param1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_ram_00664aff == '\0') {
    unnamed_function_1099(&DAT_ram_00562b4c);
    DAT_ram_00664aff = '\x01';
  }
  if (0 < __this->enemyCount) {
    do {
      iVar1 = DAT_ram_00562b4c;
      param1 = __this->enemieStateList;
      param1[4]._opaque = param1[4]._opaque + 1;
      uVar2 = param1[3]._opaque;
      iVar3 = param1[2]._opaque;
      if (count == iVar4) {
        if (uVar2 < *(uint *)(iVar3 + 0xc)) {
          param1[3]._opaque = uVar2 + 1;
          *(undefined1 *)(uVar2 + iVar3 + 0x10) = 0;
        }
        else {
          unnamed_function_9759
                    (param1,0,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
        }
      }
      else if (uVar2 < *(uint *)(iVar3 + 0xc)) {
        param1[3]._opaque = uVar2 + 1;
        *(undefined1 *)(uVar2 + iVar3 + 0x10) = 1;
      }
      else {
        unnamed_function_9759
                  (param1,1,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < __this->enemyCount);
  }
  return;
}

