// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Destroyed.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(k, s)(args)               virtual call: vtable slot s of class k (k+0xc0+8*s)
//   Raw.VCallAt(e)(args)                virtual call: vtable entry at address e (interface)
//   Raw.DelegateInvoke(d)(args)         delegate invoke: target from d+0xc, this d+0x20
//   Raw.IndirectCall(a)(args)           unresolved indirect call (function-table offset a)
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class Destroyed : MonoBehaviour // TypeDefIndex: 5616
{
    // Fields
    private DestroyedEvent destroyedEvent; // 0x10
    private Player player; // 0x14
    private DieEvent dieEvent; // 0x18

    // Methods

    // RVA: 0x3811 Offset: 0x3811 VA: 0x3811
    private void Awake()
    {
        DestroyedEvent pDVar1 = default;
        Player pPVar2 = default;
        DieEvent pDVar3 = default;

        pDVar1 = (DestroyedEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e70);
        this.destroyedEvent = pDVar1;
        pPVar2 = (Player)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        this.player = pPVar2;
        pDVar3 = (DieEvent)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e74);
        this.dieEvent = pDVar3;
    }

    // RVA: 0x3812 Offset: 0x3812 VA: 0x3812
    private void OnEnable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        DestroyedEvent pDVar3 = default;

        pDVar3 = this.destroyedEvent;
        param1_00 = new System_Action_DestroyedEvent__DestroyedEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568cb4,0);
        param1 = pDVar3.OnDestroyed;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Combine(param1,param1_00,0);
            param2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo) , param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pDVar3.OnDestroyed, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3813 Offset: 0x3813 VA: 0x3813
    private void OnDisable()
    {
        bool bVar1 = default;
        int param2 = default;
        Action param1 = default;
        int param2_00 = default;
        int param1_00 = default;
        int param1_01 = default;
        Action pAVar2 = default;
        DestroyedEvent pDVar3 = default;

        pDVar3 = this.destroyedEvent;
        param1_00 = new System_Action_DestroyedEvent__DestroyedEventArgs_();
        System.Action<object, object>.__ctor(param1_00,this,DAT_ram_00568cb4,0);
        param1 = pDVar3.OnDestroyed;
        while( true ) {
            param2_00 = 0;
            param1_01 = System.Delegate.Remove(param1,param1_00,0);
            param2 = System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo;
            if ((param1_01 != 0) && (param2_00 = unnamed_function_1112 (param1_01,System_Action_DestroyedEvent__DestroyedEventArgs__TypeInfo) , param2_00 == 0)) break;
            pAVar2 = (Action)Interlocked.CompareExchange(ref pDVar3.OnDestroyed, param2_00, param1);
            bVar1 = param1 == pAVar2;
            param1 = pAVar2;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1_01,param2);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3814 Offset: 0x3814 VA: 0x3814
    private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
    {
        int param2 = default;
        int param1 = default;

        if (destroyedEventArgs.playerDied != false) {
            param2 = new Destroyed__Die_d__7();
            Raw.Write<object>(param2 + 0x10 /* destroyedEvent */, this);
            Raw.Write<int>(param2 + 8, 0);
            UnityEngine.MonoBehaviour.StartCoroutine(this,param2,0);
            return;
        }
        if (destroyedEventArgs.bossDied == false) {
            this.MarkEnemyAsDead();
            param1 = UnityEngine.Component.get_gameObject(this,0);
            UnityEngine.Object.Destroy(param1,0);
        }
    }

    [IteratorStateMachine(typeof(Destroyed._Die_d__7))]
    // RVA: 0x3815 Offset: 0x3815 VA: 0x3815
    private IEnumerator Die()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator)new Destroyed__Die_d__7();
        pSVar1[4]._opaque = (int)this;
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3816 Offset: 0x3816 VA: 0x3816
    private void MarkEnemyAsDead()
    {
        int iVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int uVar4 = default;
        int iVar5 = default;
        int iVar6 = default;
        int iVar7 = default;

        iVar2 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567e78);
        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x14);
        if (0 < Raw.Read<int>(iVar5 + 0xc)) {
            iVar1 = 0;
            do {
                iVar7 = Raw.Read<int>(iVar5 + iVar1 * 4 + 0x10);
                iVar3 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(Raw.Read<int>(iVar2 + 0x44),Raw.Read<int>(iVar7 + 0x18),0);
                if (iVar3 != 0) {
                    iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                    if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                    }
                    iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
                    if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                    }
                    uVar4 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x18),0);
                    iVar3 = Esper.ESave.SaveFile.HasData(uVar4,Raw.Read<int>(iVar7 + 0x18),0);
                    if (iVar3 != 0) {
                        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                        }
                        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
                        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                        }
                        uVar4 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x18),0);
                        iVar3 = Esper.ESave.SaveFile.GetData<object>(uVar4,Raw.Read<int>(iVar7 + 0x18),0,DAT_ram_0056c1bc);
                        /* candidates: System.Collections.Generic.List<bool>.set_Item | System.Collections.Generic.List<byte>.set_Item (+1) */ unnamed_function_9755 (Raw.Read<int>(iVar3 + 0x10),Raw.Read<int>(iVar2 + 0x48),0,DAT_ram_00562b68);
                        iVar6 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                        if ((Raw.Read<byte>(iVar6 + 0xbd) & 1) == 0) {
                        }
                        iVar6 = Raw.Read<int>(Raw.Read<int>(iVar6 + 0x60) + 8);
                        if ((Raw.Read<byte>(iVar6 + 0xbd) & 1) == 0) {
                        }
                        uVar4 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar6 + 0x5c)) + 0x18),0);
                        Esper.ESave.SaveFile.AddOrUpdateData<object>(uVar4,Raw.Read<int>(iVar7 + 0x18),iVar3,DAT_ram_0056c1a0);
                        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                        }
                        iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
                        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                        }
                        uVar4 = Esper.ESave.SaveFileSetup.GetSaveFile(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar3 + 0x5c)) + 0x18),0);
                        Esper.ESave.SaveFile.Save(uVar4,0,0);
                        uVar4 = System.Int32.ToString((object)(iVar2 + 0x48),0);
                        uVar4 = System.String.Concat("Enemy Marked as dead",uVar4,0);
                        UnityEngine.Debug.Log(uVar4,0);
                    }
                }
                iVar1 = iVar1 + 1;
            } while (iVar1 < Raw.Read<int>(iVar5 + 0xc));
        }
    }

    // RVA: 0x3817 Offset: 0x3817 VA: 0x3817
    public Destroyed()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
