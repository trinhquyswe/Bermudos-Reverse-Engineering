// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/BehaviorDesigner.Runtime.Tasks.Unity.SharedVariables.SharedGameObjectsToGameObjectList.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(a)(args)                  virtual call through vtable slot a
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class SharedGameObjectsToGameObjectList : Action // TypeDefIndex: 6001
{
    // Fields
    [Tooltip("The GameObjects value")]
    public SharedGameObject[] gameObjects; // 0x2C
    [RequiredField]
    [Tooltip("The SharedTransformList to set")]
    public SharedGameObjectList storedGameObjectList; // 0x30

    // Methods

    // RVA: 0x3EBB Offset: 0x3EBB VA: 0x3EBB Slot: 4
    public override void OnAwake()
    {
        int param1 = default;
        BehaviorDesigner.Runtime.SharedGameObjectList param1_00 = default;

        param1_00 = this.storedGameObjectList;
        param1 = new System_Collections_Generic_List_GameObject_();
        unnamed_function_5132(param1,DAT_ram_00563074);
        unnamed_function_61204(param1_00,param1,DAT_ram_00565c48);
    }

    // RVA: 0x3EBC Offset: 0x3EBC VA: 0x3EBC Slot: 6
    public override TaskStatus OnUpdate()
    {
        int iVar1 = default;
        int iVar2 = default;
        int param2 = default;
        int iVar3 = default;
        uint uVar4 = default;

        if ((Raw.Read<int>(this + 0x2c) != 0) && (Raw.Read<int>(Raw.Read<int>(this + 0x2c) + 0xc) != 0)) {
            iVar1 = 0;
            iVar2 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c44);
            Raw.Write<int>(iVar2 + 0x10, Raw.Read<int>(iVar2 + 0x10) + 1);
            iVar3 = Raw.Read<int>(iVar2 + 0xc);
            Raw.Write<int>(iVar2 + 0xc, 0);
            if (0 < iVar3) {
                System.Array.Clear(Raw.Read<int>(iVar2 + 8),0,iVar3,0);
            }
            if (0 < Raw.Read<int>(Raw.Read<int>(this + 0x2c) + 0xc)) {
                do {
                    iVar3 = unnamed_function_61203(Raw.Read<int>(this + 0x30),DAT_ram_00565c44);
                    param2 = unnamed_function_61203 (Raw.Read<int>(Raw.Read<int>(this + 0x2c) + iVar1 * 4 + 0x10), DAT_ram_00565c9c);
                    iVar2 = DAT_ram_00563078;
                    Raw.Write<int>(iVar3 + 0x10, Raw.Read<int>(iVar3 + 0x10) + 1);
                    uVar4 = Raw.Read<uint>(iVar3 + 0xc);
                    if (uVar4 < Raw.Read<uint>(Raw.Read<int>(iVar3 + 8) + 0xc)) {
                        Raw.Write<uint>(iVar3 + 0xc, uVar4 + 1);
                        Raw.Write<int>(Raw.Read<int>(iVar3 + 8) + uVar4 * 4 + 0x10, param2);
                    }
                    else {
                        unnamed_function_6534 (iVar3,param2,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar2 + 0x10) + 0x60) + 0x38));
                    }
                    iVar1 = iVar1 + 1;
                } while (iVar1 < Raw.Read<int>(Raw.Read<int>(this + 0x2c) + 0xc));
            }
        }
        return;
    }

    // RVA: 0x3EBD Offset: 0x3EBD VA: 0x3EBD Slot: 16
    public override void OnReset()
    {
        this.targetGameObject = (BehaviorDesigner.Runtime.SharedGameObject)0x0;
        this.storeValue = (BehaviorDesigner.Runtime.SharedTransform)0x0;
    }

    // RVA: 0x3EBE Offset: 0x3EBE VA: 0x3EBE
    public SharedGameObjectsToGameObjectList()
    {
        unnamed_function_51834(this,0);
    }
}
