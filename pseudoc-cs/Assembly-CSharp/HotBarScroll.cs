// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/HotBarScroll.c by tools/c2cs.py
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

public class HotBarScroll : MonoBehaviour // TypeDefIndex: 5639
{
    // Fields
    [SerializeField]
    private Image itemIcom; // 0x10
    private TextMeshProUGUI itemQuantity; // 0x14
    private int currentIndex; // 0x18
    private Sprite emptyItemSprite; // 0x1C

    // Methods

    // RVA: 0x3897 Offset: 0x3897 VA: 0x3897
    private void Awake()
    {
        TextMeshProUGUI pTVar1 = default;
        System.Action.OnInventoryItemChangedEventArgs pSVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        int iVar5 = default;
        int iVar6 = default;
        int param1 = default;

        pTVar1 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this,DAT_ram_00567f78);
        this.itemQuantity = pTVar1;
        pSVar2 = (System.Action.OnInventoryItemChangedEventArgs) new System_Action_OnInventoryItemChangedEventArgs_();
        System.Action<object>.__ctor(pSVar2,this,DAT_ram_00569e60,0);
        StaticEventHandler.add_OnItemChanged(pSVar2);
        pSVar2 = (System.Action.OnInventoryItemChangedEventArgs) new System_Action_OnInventoryItemChangedEventArgs_();
        System.Action<object>.__ctor(pSVar2,this,DAT_ram_00569e64,0);
        StaticEventHandler.add_OnMoveItemToHotBar(pSVar2);
        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar6 = Raw.Deref(Raw.Read<object>(iVar5 + 0x5c));
        param1 = Raw.Read<int>(iVar6 + 0x20);
        uVar3 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar3,this,DAT_ram_00569e5c,0);
        iVar5 = System.Delegate.Combine(param1,uVar3,0);
        uVar3 = System_Action_GameState__TypeInfo;
        if (iVar5 == 0) {
            Raw.Write<int>(iVar6 + 0x20, 0);
            return;
        }
        iVar4 = (iVar5 as System_Action_GameState_);
        if (iVar4 == 0) {
            unnamed_function_1116(iVar5,uVar3);
            do {
                throw null;
            } while( true );
        }
        Raw.Write<int>(iVar6 + 0x20, iVar4);
        uVar3 = System_Action_GameState__TypeInfo;
        iVar6 = (iVar5 as System_Action_GameState_);
        if (iVar6 != 0) {
            return;
        }
        unnamed_function_1116(iVar5,uVar3);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x3898 Offset: 0x3898 VA: 0x3898
    private void OnDestroy()
    {
        System.Action.OnInventoryItemChangedEventArgs pSVar1 = default;

        pSVar1 = (System.Action.OnInventoryItemChangedEventArgs) new System_Action_OnInventoryItemChangedEventArgs_();
        System.Action<object>.__ctor(pSVar1,this,DAT_ram_00569e60,0);
        StaticEventHandler.remove_OnItemChanged(pSVar1);
        pSVar1 = (System.Action.OnInventoryItemChangedEventArgs) new System_Action_OnInventoryItemChangedEventArgs_();
        System.Action<object>.__ctor(pSVar1,this,DAT_ram_00569e64,0);
        StaticEventHandler.remove_OnMoveItemToHotBar(pSVar1);
    }

    // RVA: 0x3899 Offset: 0x3899 VA: 0x3899
    private void OnGameStateChange_HotBar(GameState gameState)
    {
        int uVar1 = default;
        System.Collections.Generic.List.InventoryItem pSVar2 = default;
        int iVar3 = default;
        int iVar4 = default;
        Image param1 = default;
        TextMeshProUGUI pTVar5 = default;
        int iVar6 = default;
        int param1_00 = default;

        if ((gameState & ~Begin) == Instruct) {
            uVar1 = UnityEngine.Component.get_gameObject(this,0);
            UnityEngine.GameObject.SetActive(uVar1,1,0);
            this.emptyItemSprite = (Sprite)this.itemIcom[0x20]._opaque;
            iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
            }
            iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
            }
            pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar4 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
            if (pSVar2[3]._opaque != 0) {
                this.currentIndex = 0;
                param1 = this.itemIcom;
                iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                }
                iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                }
                pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar4 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
                iVar4 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar2,this.currentIndex,DAT_ram_0056342c);
                UnityEngine.UI.Image.set_sprite(param1,Raw.Read<int>(Raw.Read<int>(iVar4 + 8) + 0x14),0);
                pTVar5 = this.itemQuantity;
                iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                }
                iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                }
                pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar4 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
                iVar4 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar2,this.currentIndex,DAT_ram_0056342c);
                uVar1 = System.Int32.ToString(iVar4 + 0xc,0);
                iVar4 = pTVar5._opaque;
                Raw.VCall(iVar4, 66) /* virtual */ (pTVar5,uVar1,Raw.Read<int>(iVar4 + 0x2d4));
                iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                }
                iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
                }
                iVar6 = Raw.Deref(Raw.Read<object>(iVar4 + 0x5c));
                param1_00 = Raw.Read<int>(iVar6 + 0x20);
                uVar1 = new System_Action_GameState_();
                System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_00569e5c,0);
                iVar4 = System.Delegate.Remove(param1_00,uVar1,0);
                uVar1 = System_Action_GameState__TypeInfo;
                if (iVar4 == 0) {
                    Raw.Write<int>(iVar6 + 0x20, 0);
                    return;
                }
                iVar3 = (iVar4 as System_Action_GameState_);
                if (iVar3 == 0) {
                    unnamed_function_1116(iVar4,uVar1);
                    do {
                        throw null;
                    } while( true );
                }
                Raw.Write<int>(iVar6 + 0x20, iVar3);
                uVar1 = System_Action_GameState__TypeInfo;
                iVar6 = (iVar4 as System_Action_GameState_);
                if (iVar6 == 0) {
                    unnamed_function_1116(iVar4,uVar1);
                    do {
                        throw null;
                    } while( true );
                }
            }
        }
    }

    // RVA: 0x389A Offset: 0x389A VA: 0x389A
    private void StaticEventHandler_OnItemChanged(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
    {
        System.Collections.Generic.List.InventoryItem pSVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        MethodInfo pMVar4 = default;
        int iVar5 = default;
        TextMeshProUGUI pTVar6 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        pMVar4 = *(MethodInfo)(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((pMVar4[5].field_0x1d & 1) == 0) {
            pMVar4 = unnamed_function_95087(pMVar4);
        }
        pSVar1 = (Raw.Read<object>(Raw.Read<int>(**(object)&pMVar4[2].field_0x1c + 0x10) + 0x50)).HotBarItem;
        if (pSVar1[3]._opaque != 0) {
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            pMVar4 = *(MethodInfo)(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((pMVar4[5].field_0x1d & 1) == 0) {
                pMVar4 = unnamed_function_95087(pMVar4);
            }
            pSVar1 = (Raw.Read<object>(Raw.Read<int>(**(object)&pMVar4[2].field_0x1c + 0x10) + 0x50)).HotBarItem;
            iVar3 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar1,this.currentIndex,DAT_ram_0056342c);
            if (iVar3 != 0) {
                iVar5 = onInventoryItemChangedEventArgs.inventoryItem.hotbarSlot;
                iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
                }
                pMVar4 = *(MethodInfo)(Raw.Read<int>(iVar3 + 0x60) + 8);
                if ((pMVar4[5].field_0x1d & 1) == 0) {
                    pMVar4 = unnamed_function_95087(pMVar4);
                }
                pSVar1 = (Raw.Read<object>(Raw.Read<int>(**(object)&pMVar4[2].field_0x1c + 0x10) + 0x50)).HotBarItem;
                iVar3 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar1,this.currentIndex,DAT_ram_0056342c);
                if (iVar5 == Raw.Read<int>(iVar3 + 0x14)) {
                    UnityEngine.UI.Image.set_sprite(this.itemIcom,onInventoryItemChangedEventArgs.inventoryItem.itemSO.itemIcon ,0);
                    pTVar6 = this.itemQuantity;
                    uVar2 = System.Int32.ToString(&onInventoryItemChangedEventArgs.inventoryItem.quantity,0);
                    iVar3 = pTVar6._opaque;
                    Raw.VCall(iVar3, 66) /* virtual */ (pTVar6,uVar2,Raw.Read<int>(iVar3 + 0x2d4));
                    if (onInventoryItemChangedEventArgs.inventoryItem.quantity == 0) {
                        UnityEngine.UI.Image.set_sprite(this.itemIcom,this.emptyItemSprite,0);
                        iVar3 = this.itemQuantity._opaque;
                        Raw.VCall(iVar3, 66) /* virtual */ (this.itemQuantity,"",Raw.Read<int>(iVar3 + 0x2d4));
                    }
                }
            }
        }
    }

    // RVA: 0x389B Offset: 0x389B VA: 0x389B
    private void StaticEventHandler_OnMoveItemToHotBar(OnInventoryItemChangedEventArgs onInventoryItemChangedEventArgs)
    {
        System.Collections.Generic.List.InventoryItem pSVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        MethodInfo method_00 = default;
        TextMeshProUGUI pTVar4 = default;

        iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
        }
        method_00 = *(MethodInfo)(Raw.Read<int>(iVar3 + 0x60) + 8);
        if ((method_00[5].field_0x1d & 1) == 0) {
            method_00 = unnamed_function_95087(method_00);
        }
        pSVar1 = (Raw.Read<object>(Raw.Read<int>(**(object)&method_00[2].field_0x1c + 0x10) + 0x50)).HotBarItem;
        if (pSVar1[3]._opaque == 1) {
            UnityEngine.UI.Image.set_sprite(this.itemIcom,onInventoryItemChangedEventArgs.inventoryItem.itemSO.itemIcon,0);
            pTVar4 = this.itemQuantity;
            uVar2 = System.Int32.ToString(&onInventoryItemChangedEventArgs.inventoryItem.quantity,0);
            iVar3 = pTVar4._opaque;
            Raw.VCall(iVar3, 66) /* virtual */ (pTVar4,uVar2,Raw.Read<int>(iVar3 + 0x2d4));
        }
    }

    // RVA: 0x389C Offset: 0x389C VA: 0x389C
    private void Start()
    {
        int param1 = default;

        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }

    // RVA: 0x389D Offset: 0x389D VA: 0x389D
    private void Update()
    {
        int scrollValue = default;
        float local_4 = default;

        byte[] auStack_8 = new byte[4];
        if ((Raw.Deref(Raw.Read<object>(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c)) != 0) && (UnityEngine.InputSystem.InputControl<Vector2>.ReadValue(auStack_8, Raw.Read<int>(Raw.Deref(Raw.Read<object>(UnityEngine_InputSystem_Mouse_TypeInfo + 0x5c)) + 0x124), DAT_ram_00562374), (float)local_4 != 0.0)) {
            if (Mathf.Abs((float)local_4) < 2.1474836e+09) {
                scrollValue = (int)(float)local_4;
            }
            else {
                scrollValue = -0x80000000;
            }
            this.ChangedItem(scrollValue);
        }
    }

    // RVA: 0x389E Offset: 0x389E VA: 0x389E
    private void ChangedItem(int scrollValue)
    {
        byte bVar1 = default;
        System.Collections.Generic.List.InventoryItem pSVar2 = default;
        int uVar3 = default;
        InventoryItem pIVar4 = default;
        OnInventoryItemChangedEventArgs __this_00 = default;
        int iVar5 = default;
        Image pIVar6 = default;
        TextMeshProUGUI pTVar7 = default;
        int iVar8 = default;

        if (scrollValue < 0) {
            iVar5 = this.currentIndex + -1;
            this.currentIndex = iVar5;
            if (iVar5 < 0) {
                iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
                if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
                }
                iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
                if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
                }
                pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
                this.currentIndex = pSVar2[3]._opaque + -1;
            }
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
            if (pSVar2[3]._opaque == 0) {
                return;
            }
            pIVar6 = this.itemIcom;
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
            iVar5 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar2,this.currentIndex,DAT_ram_0056342c);
            UnityEngine.UI.Image.set_sprite(pIVar6,Raw.Read<int>(Raw.Read<int>(iVar5 + 8) + 0x14),0);
            pTVar7 = this.itemQuantity;
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            bVar1 = Raw.Read<byte>(iVar5 + 0xbd);
        }
        else {
            iVar8 = this.currentIndex + 1;
            this.currentIndex = iVar8;
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
            if (pSVar2[3]._opaque + -1 < iVar8) {
                this.currentIndex = 0;
            }
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
            if (pSVar2[3]._opaque == 0) {
                return;
            }
            pIVar6 = this.itemIcom;
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
            iVar5 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar2,this.currentIndex,DAT_ram_0056342c);
            UnityEngine.UI.Image.set_sprite(pIVar6,Raw.Read<int>(Raw.Read<int>(iVar5 + 8) + 0x14),0);
            pTVar7 = this.itemQuantity;
            iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
            }
            iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
            bVar1 = Raw.Read<byte>(iVar5 + 0xbd);
        }
        if ((bVar1 & 1) == 0) {
        }
        pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
        iVar5 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar2,this.currentIndex,DAT_ram_0056342c);
        uVar3 = System.Int32.ToString(iVar5 + 0xc,0);
        Raw.VCall(pTVar7._opaque, 66) /* virtual */ (pTVar7,uVar3,Raw.Read<int>(pTVar7._opaque + 0x2d4));
        iVar5 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar5 + 0xbd) & 1) == 0) {
        }
        pSVar2 = (Raw.Read<object>(Raw.Read<int>(Raw.Deref(Raw.Read<object>(iVar5 + 0x5c)) + 0x10) + 0x50)).HotBarItem;
        pIVar4 = (InventoryItem)/* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pSVar2,this.currentIndex,DAT_ram_0056342c);
        iVar5 = StaticEventHandler.OnHotBarScrollChanged;
        if (iVar5 != 0) {
            __this_00 = (OnInventoryItemChangedEventArgs) new OnInventoryItemChangedEventArgs();
            new OnInventoryItemChangedEventArgs();
            __this_00.inventoryItem = pIVar4;
            Raw.DelegateInvoke(iVar5) /* delegate invoke */ (Raw.Read<int>(iVar5 + 0x20),__this_00,Raw.Read<int>(iVar5 + 0x14));
        }
    }

    // RVA: 0x389F Offset: 0x389F VA: 0x389F
    public HotBarScroll()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
