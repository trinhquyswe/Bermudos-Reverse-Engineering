// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: DashEvent  (Assembly-CSharp)  -  3 function(s)

// ---- DashEvent::remove_OnDashEvent   [wasm func86590 -> ram:81a3e05a ; ghidra: DashEvent::remove_OnDashEvent]

void DashEvent__remove_OnDashEvent(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (cRam00664986 == '\0') {
    unnamed_function_1099(0x55a800);
    cRam00664986 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    iVar1 = unnamed_function_95402(uRam0055a800);
    if (cRam00664987 == '\0') {
      unnamed_function_1099(0x55ad18);
      cRam00664987 = '\x01';
    }
    if (*(int *)(iRam0055ad18 + 0x74) == 0) {
      unnamed_function_94848(iRam0055ad18);
    }
    *(undefined8 *)(iVar1 + 8) = *param_2;
    (**(code **)((ulonglong)*(uint *)(iVar2 + 0xc) * 4))
              (*(undefined4 *)(iVar2 + 0x20),param_1,iVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}



// ---- DashEvent::add_OnDashEvent   [wasm func86671 -> ram:81a42822 ; ghidra: DashEvent::add_OnDashEvent]

void DashEvent__add_OnDashEvent(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (cRam00664985 == '\0') {
    unnamed_function_1099(0x557abc);
    cRam00664985 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    iVar4 = 0;
    iVar5 = unnamed_function_85160(iVar3,param_2,0);
    uVar2 = uRam00557abc;
    if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557abc), iVar4 == 0)) break;
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



// ---- DashEvent::ctor   [wasm func86680 -> ram:81a42e05 ; ghidra: DashEvent::.ctor]

void DashEvent___ctor(void)

{
  if (cRam00664987 == '\0') {
    unnamed_function_1099(0x55ad18);
    cRam00664987 = '\x01';
  }
  if (*(int *)(iRam0055ad18 + 0x74) == 0) {
    unnamed_function_94848(iRam0055ad18);
  }
  return;
}



