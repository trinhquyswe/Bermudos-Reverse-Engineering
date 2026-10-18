// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: Poise  (Assembly-CSharp)  -  3 function(s)

// ---- Poise::Start   [wasm func86843 -> ram:81a475f8 ; ghidra: Poise::Start]

void Poise__Start(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x18) - (float)param_2;
  *(float *)(param_1 + 0x18) = fVar6;
  if (fVar6 <= 0.0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x10);
    if (cRam00664b46 == '\0') {
      unnamed_function_1099(0x55c07c);
      cRam00664b46 = '\x01';
    }
    iVar5 = *(int *)(iVar4 + 0x10);
    if (iVar5 != 0) {
      iVar1 = unnamed_function_95402(uRam0055c07c);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      *(float *)(iVar1 + 0xc) = fVar6;
      *(float *)(iVar1 + 8) = (float)param_2;
      (**(code **)((ulonglong)*(uint *)(iVar5 + 0xc) * 4))
                (*(undefined4 *)(iVar5 + 0x20),iVar4,iVar1,*(undefined4 *)(iVar5 + 0x14));
    }
  }
  return;
}



// ---- Poise::ctor   [wasm func86898 -> ram:81a4a348 ; ghidra: Poise::.ctor]

void Poise___ctor(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664b44 == '\0') {
    unnamed_function_1099(0x557b08);
    cRam00664b44 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85158(iVar3,param_2,0);
    uVar2 = uRam00557b08;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557b08), iVar4 == 0)) break;
    iVar4 = System_Net_WebOperation___ctor(param_1 + 0x10,iVar4,iVar3);
    bVar1 = iVar3 == iVar4;
    iVar3 = iVar4;
    if (bVar1) {
      return;
    }
  }
  unnamed_function_1116(iVar5,uVar2);
  do {
    halt_trap();
  } while( true );
}



// ---- Poise::Awake   [wasm func87162 -> ram:81a55375 ; ghidra: Poise::Awake]

void Poise__Awake(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  return;
}



