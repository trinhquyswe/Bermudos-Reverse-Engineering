// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Weapon  (Assembly-CSharp)  -  4 function(s)

// ---- Weapon::Awake   [wasm func86169 -> ram:81a232cc ; ghidra: Weapon::Awake]

void Weapon__Awake(int param_1)

{
  UnityEngine_BoxCollider2D__set_size_Injected(*(undefined4 *)(param_1 + 0x14),1,0);
  UnityEngine_Rigidbody2D__AddForceAtPosition_Injected(*(undefined4 *)(param_1 + 0x14),1,0);
  return;
}



// ---- Weapon::Start   [wasm func86170 -> ram:81a232e9 ; ghidra: Weapon::Start]

void Weapon__Start(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (cRam0066483e == '\0') {
    unnamed_function_1099(0x564114);
    cRam0066483e = '\x01';
  }
  uVar1 = UnityEngine_U2D_Animation_SpriteSkin__GetSpriteBonesTransforms
                    (*(undefined4 *)(param_1 + 0x10),0);
  iVar2 = UnityEngine_Sprite__GetPhysicsShapeCount(uVar1,0,*(undefined4 *)(param_1 + 0x18),0);
  if (0 < iVar2) {
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = multiple_3_System_Collections_Generic_List_1__System_Collections_IList_set_Item
                      (*(undefined4 *)(param_1 + 0x18),uRam00564114);
    UnityEngine_PolygonCollider2D__GetTotalPointCount(uVar3,uVar1,0);
  }
  return;
}



// ---- Weapon::GetWeaponCollider   [wasm func86171 -> ram:81a23343 ; ghidra: Weapon::GetWeaponCollider]

void Weapon__GetWeaponCollider(int param_1)

{
  undefined4 uVar1;
  
  if (cRam0066483f == '\0') {
    unnamed_function_1099(0x56410c);
    unnamed_function_1099(0x5591dc);
    cRam0066483f = '\x01';
  }
  uVar1 = unnamed_function_95402(uRam005591dc);
  multiple_2_System_Collections_Generic_List_1___cctor(uVar1,uRam0056410c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  multiple_4_UnityEngine_Behaviour__set_enabled(param_1,0);
  return;
}



// ---- Weapon::ctor   [wasm func86172 -> ram:81a23394 ; ghidra: Weapon::.ctor]

void Weapon___ctor(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (cRam00664840 == '\0') {
    unnamed_function_1099(0x567b4c);
    unnamed_function_1099(0x55982c);
    unnamed_function_1099(0x5667f8);
    cRam00664840 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 300);
  uVar1 = unnamed_function_95402(uRam0055982c);
  unnamed_function_71904(uVar1,param_1,uRam00567b4c,0);
  UnityEngine_Events_UnityEvent_1___ctor(uVar2,uVar1,uRam005667f8);
  return;
}



