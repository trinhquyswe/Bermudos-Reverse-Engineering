// Assembly-CSharp :: Weapon
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class Weapon : MonoBehaviour // TypeDefIndex: 5731
{
	// Fields
	private SpriteRenderer spriteRenderer; // 0x10
	[HideInInspector]
	public PolygonCollider2D polygonCollider2D; // 0x14
	private List<Vector2> spritePhysicsShapePointsList; // 0x18

	// Methods

	// RVA: 0x3AB2 Offset: 0x3AB2 VA: 0x3AB2
	private void Awake() { }

	// RVA: 0x3AB3 Offset: 0x3AB3 VA: 0x3AB3
	private void Start() { }

	// RVA: 0x3AB4 Offset: 0x3AB4 VA: 0x3AB4
	public void GetWeaponCollider() { }

	// RVA: 0x3AB5 Offset: 0x3AB5 VA: 0x3AB5
	public void .ctor() { }
}

===== C# end =====
*/

// ---- Weapon$$Awake ----
// C#: void Weapon__Awake (Weapon_o* __this, const MethodInfo* method);

void Weapon__Awake(Weapon_o *__this,MethodInfo *method)

{
  SpriteRenderer_o *pSVar1;
  undefined4 param1;
  PolygonCollider2D_o *pPVar2;
  
  if (DAT_ram_0066483d == '\0') {
    unnamed_function_1099(&DAT_ram_00567f24);
    unnamed_function_1099(&DAT_ram_005699dc);
    DAT_ram_0066483d = '\x01';
  }
  pSVar1 = (SpriteRenderer_o *)unnamed_function_65370(__this,DAT_ram_00567f24);
  __this->spriteRenderer = pSVar1;
  param1 = unnamed_function_44644(__this,0);
  pPVar2 = (PolygonCollider2D_o *)unnamed_function_73837(param1,DAT_ram_005699dc);
  __this->polygonCollider2D = pPVar2;
  return;
}

// ---- Weapon$$Start ----
// C#: void Weapon__Start (Weapon_o* __this, const MethodInfo* method);

void Weapon__Start(Weapon_o *__this,MethodInfo *method)

{
  unnamed_function_16433(__this->polygonCollider2D,1,0);
  unnamed_function_16417(__this->polygonCollider2D,1,0);
  return;
}

// ---- Weapon$$GetWeaponCollider ----
// C#: void Weapon__GetWeaponCollider (Weapon_o* __this, const MethodInfo* method);

void Weapon__GetWeaponCollider(Weapon_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  int iVar2;
  PolygonCollider2D_o *param1;
  
  if (DAT_ram_0066483e == '\0') {
    unnamed_function_1099(&DAT_ram_00564114);
    DAT_ram_0066483e = '\x01';
  }
  uVar1 = unnamed_function_45022(__this->spriteRenderer,0);
  iVar2 = unnamed_function_45061(uVar1,0,__this->spritePhysicsShapePointsList,0);
  if (0 < iVar2) {
    param1 = __this->polygonCollider2D;
    uVar1 = unnamed_function_5184(__this->spritePhysicsShapePointsList,DAT_ram_00564114);
    unnamed_function_16435(param1,uVar1,0);
  }
  return;
}

// ---- Weapon$$.ctor ----
// C#: void Weapon___ctor (Weapon_o* __this, const MethodInfo* method);

void Weapon___ctor(Weapon_o *__this,MethodInfo *method)

{
  List_o *param1;
  
  if (DAT_ram_0066483f == '\0') {
    unnamed_function_1099(&DAT_ram_0056410c);
    unnamed_function_1099(&System_Collections_Generic_List_Vector2__TypeInfo);
    DAT_ram_0066483f = '\x01';
  }
  param1 = (List_o *)unnamed_function_95402(System_Collections_Generic_List_Vector2__TypeInfo);
  unnamed_function_5132(param1,DAT_ram_0056410c);
  __this->spritePhysicsShapePointsList = param1;
  unnamed_function_44622(__this,0);
  return;
}

