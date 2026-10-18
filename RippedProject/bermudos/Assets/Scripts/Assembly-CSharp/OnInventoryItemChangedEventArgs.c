// Bermudos - Game code recovered from Build/webgl.wasm (Unity IL2CPP -> WebAssembly)
// Decompiler: Ghidra 12.1.4 + ghidra-wasm-plugin 2.4.0 (PyGhidra, CPython)
// Program imported from Decompiled/build.named.wasm, so functions carry the
// IL2CPP method names recovered by Cpp2IL from global-metadata.dat.
// This is decompiler pseudo-C (control flow, calls, constants and field offsets
// are real); it is not the original C# and types/locals are decompiler-inferred.
// Object field access appears as this->fieldNNNN; see Dump/dump.cs for offsets.
// Type: OnInventoryItemChangedEventArgs  (Assembly-CSharp)  -  1 function(s)

// ---- OnInventoryItemChangedEventArgs::ctor   [wasm func86404 -> ram:81a356b3 ; ghidra: OnInventoryItemChangedEventArgs::.ctor]

int * OnInventoryItemChangedEventArgs___ctor(int *param_1)

{
  if (*param_1 == 0) {
    return param_1;
  }
  System_Net_CommandStream__ReceiveCommandResponseCallback(*param_1);
  do {
    halt_trap();
  } while( true );
}



