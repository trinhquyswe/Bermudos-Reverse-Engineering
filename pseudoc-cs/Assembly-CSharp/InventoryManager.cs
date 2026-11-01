// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/InventoryManager.c by tools/c2cs.py
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

public class InventoryManager : MonoBehaviour // TypeDefIndex: 5643
{
    // Fields
    public List<InventoryItem> inventoryItemList; // 0x10
    public List<ItemSO> itemSOList; // 0x14
    private Inventory inventory; // 0x18
    private SaveFileSetup saveFileSetup; // 0x1C
    private SaveFile saveFile; // 0x20
    public Image inventoryInstructionImg; // 0x24
    private string instructionText; // 0x28
    private bool isInstruction; // 0x2C

    // Properties
    public List<InventoryItem> HotBarItem { get; }

    // Methods

    // RVA: 0x38B3 Offset: 0x38B3 VA: 0x38B3
    public List<InventoryItem> get_HotBarItem()
    {
        int uVar1 = default;
        System.Collections.Generic.List.InventoryItem pSVar2 = default;
        List param1 = default;
        int iVar3 = default;
        int param2 = default;

        param1 = this.inventoryItemList;
        iVar3 = Raw.Read<int>(Raw.Read<int>(InventoryManager___c_TypeInfo + 0x5c) + 4);
        if (iVar3 == 0) {
            uVar1 = Raw.Deref(Raw.Read<object>(InventoryManager___c_TypeInfo + 0x5c));
            iVar3 = new System_Func_InventoryItem__bool_();
            System.Func<object, bool>.__ctor(iVar3,uVar1,DAT_ram_0056f490,0);
            Raw.Write<int>(Raw.Read<int>(InventoryManager___c_TypeInfo + 0x5c) + 4, iVar3);
        }
        uVar1 = System.Linq.Enumerable.Where<object>(param1,iVar3,DAT_ram_00569384);
        iVar3 = Raw.Read<int>(Raw.Read<int>(InventoryManager___c_TypeInfo + 0x5c) + 8);
        if (iVar3 == 0) {
            param2 = Raw.Deref(Raw.Read<object>(InventoryManager___c_TypeInfo + 0x5c));
            iVar3 = new System_Func_InventoryItem__int_();
            System.Func<object, int>.__ctor(iVar3,param2,DAT_ram_0056f494,0);
            Raw.Write<int>(Raw.Read<int>(InventoryManager___c_TypeInfo + 0x5c) + 8, iVar3);
        }
        uVar1 = System.Linq.Enumerable.OrderBy<object, int>(uVar1,iVar3,DAT_ram_00569184);
        pSVar2 = (System.Collections.Generic.List.InventoryItem) System.Linq.Enumerable.ToList<object>(uVar1,DAT_ram_0056931c);
        return pSVar2;
    }

    // RVA: 0x38B4 Offset: 0x38B4 VA: 0x38B4
    private void Awake()
    {
        SaveFileSetup param1 = default;
        SaveFile pSVar1 = default;

        param1 = (SaveFileSetup)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f1c);
        this.saveFileSetup = param1;
        pSVar1 = (SaveFile)Esper.ESave.SaveFileSetup.GetSaveFile(param1,0);
        this.saveFile = pSVar1;
    }

    // RVA: 0x38B5 Offset: 0x38B5 VA: 0x38B5
    private void OnEnable()
    {
        bool bVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        System.Action.OnInventoryChangedEventArgs value = default;
        object param1 = default; // int*
        int iVar4 = default;
        int iVar5 = default;
        int param1_00 = default;

        iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Deref(Raw.Read<object>(iVar4 + 0x5c));
        param1_00 = Raw.Read<int>(iVar5 + 0x20);
        uVar2 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar2,this,DAT_ram_0056a778,0);
        iVar4 = System.Delegate.Combine(param1_00,uVar2,0);
        uVar2 = System_Action_GameState__TypeInfo;
        if (iVar4 == 0) {
            Raw.Write<int>(iVar5 + 0x20, 0);
        }
        else {
            iVar3 = (iVar4 as System_Action_GameState_);
            if (iVar3 == 0) {
                unnamed_function_1116(iVar4,uVar2);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar5 + 0x20, iVar3);
            uVar2 = System_Action_GameState__TypeInfo;
            iVar5 = (iVar4 as System_Action_GameState_);
            if (iVar5 == 0) {
                unnamed_function_1116(iVar4,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
        value = (System.Action.OnInventoryChangedEventArgs) new System_Action_OnInventoryChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056a780,0);
        StaticEventHandler.add_OnInventoryChanged(value);
        uVar2 = new System_Action();
        System.Action.__ctor(uVar2,this,DAT_ram_0056a77c,0);
        iVar4 = StaticEventHandler.OnExit;
        while ((param1 = (object)System.Delegate.Combine(iVar4,uVar2,0), param1 == (object)0x0 || (System_Action_TypeInfo == *param1))) {
            iVar5 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1,iVar4);
            bVar1 = iVar4 == iVar5;
            iVar4 = iVar5;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x38B6 Offset: 0x38B6 VA: 0x38B6
    private void OnDisable()
    {
        bool bVar1 = default;
        int uVar2 = default;
        int iVar3 = default;
        System.Action.OnInventoryChangedEventArgs value = default;
        object param1 = default; // int*
        int iVar4 = default;
        int iVar5 = default;
        int param1_00 = default;

        iVar4 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x60) + 8);
        if ((Raw.Read<byte>(iVar4 + 0xbd) & 1) == 0) {
        }
        iVar5 = Raw.Deref(Raw.Read<object>(iVar4 + 0x5c));
        param1_00 = Raw.Read<int>(iVar5 + 0x20);
        uVar2 = new System_Action_GameState_();
        System.Action<Int32Enum>.__ctor(uVar2,this,DAT_ram_0056a778,0);
        iVar4 = System.Delegate.Remove(param1_00,uVar2,0);
        uVar2 = System_Action_GameState__TypeInfo;
        if (iVar4 == 0) {
            Raw.Write<int>(iVar5 + 0x20, 0);
        }
        else {
            iVar3 = (iVar4 as System_Action_GameState_);
            if (iVar3 == 0) {
                unnamed_function_1116(iVar4,uVar2);
                do {
                    throw null;
                } while( true );
            }
            Raw.Write<int>(iVar5 + 0x20, iVar3);
            uVar2 = System_Action_GameState__TypeInfo;
            iVar5 = (iVar4 as System_Action_GameState_);
            if (iVar5 == 0) {
                unnamed_function_1116(iVar4,uVar2);
                do {
                    throw null;
                } while( true );
            }
        }
        value = (System.Action.OnInventoryChangedEventArgs) new System_Action_OnInventoryChangedEventArgs_();
        System.Action<object>.__ctor(value,this,DAT_ram_0056a780,0);
        StaticEventHandler.remove_OnInventoryChanged(value);
        uVar2 = new System_Action();
        System.Action.__ctor(uVar2,this,DAT_ram_0056a77c,0);
        iVar4 = StaticEventHandler.OnExit;
        while ((param1 = (object)System.Delegate.Remove(iVar4,uVar2,0), param1 == (object)0x0 || (System_Action_TypeInfo == *param1))) {
            iVar5 = unnamed_function_1144(Raw.Read<int>(StaticEventHandler_TypeInfo + 0x5c) + 0x2c,param1,iVar4);
            bVar1 = iVar4 == iVar5;
            iVar4 = iVar5;
            if (bVar1) {
                return;
            }
        }
        unnamed_function_1116(param1,System_Action_TypeInfo);
        do {
            throw null;
        } while( true );
    }

    // RVA: 0x38B7 Offset: 0x38B7 VA: 0x38B7
    private void Instance_OnGameStateChange(GameState gameState)
    {
        int uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        int uVar4 = default;
        object piVar5 = default; // int*

        if (gameState == Instruct) {
            this.isInstruction = true;
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
            uVar4 = Raw.Read<int>(iVar3 + 0x20);
            uVar1 = new System_Action_GameState_();
            System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_0056a778,0);
            piVar5 = (object)(iVar3 + 0x20);
            iVar3 = System.Delegate.Remove(uVar4,uVar1,0);
            uVar1 = System_Action_GameState__TypeInfo;
            if (iVar3 != 0) {
                iVar2 = (iVar3 as System_Action_GameState_);
                if (iVar2 == 0) {
                    unnamed_function_1116(iVar3,uVar1);
                    do {
                        throw null;
                    } while( true );
                }
                *piVar5 = iVar2;
                uVar1 = System_Action_GameState__TypeInfo;
                iVar2 = (iVar3 as System_Action_GameState_);
                if (iVar2 != 0) {
                    return;
                }
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
        }
        else {
            if (gameState != Play) {
                return;
            }
            this.LoadItemFromJson();
            iVar3 = Raw.Read<int>(DAT_ram_00565d78 + 0x10);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Read<int>(Raw.Read<int>(iVar3 + 0x60) + 8);
            if ((Raw.Read<byte>(iVar3 + 0xbd) & 1) == 0) {
            }
            iVar3 = Raw.Deref(Raw.Read<object>(iVar3 + 0x5c));
            uVar4 = Raw.Read<int>(iVar3 + 0x20);
            uVar1 = new System_Action_GameState_();
            System.Action<Int32Enum>.__ctor(uVar1,this,DAT_ram_0056a778,0);
            piVar5 = (object)(iVar3 + 0x20);
            iVar3 = System.Delegate.Remove(uVar4,uVar1,0);
            uVar1 = System_Action_GameState__TypeInfo;
            if (iVar3 != 0) {
                iVar2 = (iVar3 as System_Action_GameState_);
                if (iVar2 == 0) {
                    unnamed_function_1116(iVar3,uVar1);
                    do {
                        throw null;
                    } while( true );
                }
                *piVar5 = iVar2;
                uVar1 = System_Action_GameState__TypeInfo;
                iVar2 = (iVar3 as System_Action_GameState_);
                if (iVar2 != 0) {
                    return;
                }
                unnamed_function_1116(iVar3,uVar1);
                do {
                    throw null;
                } while( true );
            }
        }
        *piVar5 = 0;
    }

    // RVA: 0x38B8 Offset: 0x38B8 VA: 0x38B8
    private void StaticEventHandler_OnInventoryChanged(OnInventoryChangedEventArgs onInventoryChangedEventArgs)
    {
        int param1 = default;
        Inventory param1_00 = default;

        param1_00 = onInventoryChangedEventArgs.inventory;
        this.inventory = param1_00;
        param1 = UnityEngine.Component.get_gameObject(param1_00,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
        this.inventory.InitializeInventorySlotList(0x46);
        this.inventory.InitializeHotBarSlotList(10);
    }

    // RVA: 0x38B9 Offset: 0x38B9 VA: 0x38B9
    private void Start()
    {

    }

    // RVA: 0x38BA Offset: 0x38BA VA: 0x38BA
    public void ToggleInventory()
    {
        int uVar1 = default;
        int iVar2 = default;
        System.Collections.Generic.List.InventoryItem pSVar3 = default;
        string psVar4 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this.inventory,0);
        iVar2 = UnityEngine.GameObject.get_activeSelf(uVar1,0);
        if (iVar2 == 0) {
            this.inventory.ResetInventory((System.Collections.Generic.List.InventoryItem)this.inventoryItemList);
            this.LoadItemsToInventory();
            if ((this.isInstruction != false) && (0 < this.inventoryItemList[3]._opaque)) {
                psVar4 = this.instructionText;
                iVar2 = StaticEventHandler.OnInstructionChanged;
                if (iVar2 != 0) {
                    Raw.DelegateInvoke(iVar2) /* delegate invoke */ (Raw.Read<int>(iVar2 + 0x20),psVar4,0xffffffff,1,Raw.Read<int>(iVar2 + 0x14));
                }
            }
            uVar1 = UnityEngine.Component.get_gameObject(this.inventory,0);
            UnityEngine.GameObject.SetActive(uVar1,1,0);
        }
        else {
            uVar1 = UnityEngine.Component.get_gameObject(this.inventory,0);
            UnityEngine.GameObject.SetActive(uVar1,0,0);
            pSVar3 = this.HotBarItem;
            if (0 < pSVar3[3]._opaque) {
                this.isInstruction = false;
            }
            uVar1 = "";
            iVar2 = StaticEventHandler.OnInstructionChanged;
            if (iVar2 != 0) {
                Raw.DelegateInvoke(iVar2) /* delegate invoke */ (Raw.Read<int>(iVar2 + 0x20),uVar1,0xfffffff7,0,Raw.Read<int>(iVar2 + 0x14));
                return;
            }
        }
    }

    // RVA: 0x38BB Offset: 0x38BB VA: 0x38BB
    private void LoadItemsToInventory()
    {
        int iVar1 = default;
        int iVar2 = default;
        int uVar3 = default;
        int iVar4 = default;
        object piVar5 = default; // int*
        List pLVar6 = default;
        int iVar7 = default;
        int local_20 = default;
        object puStack_1c = default; // long*
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        iVar7 = 0;
        local_8 = 0;
        local_10 = 0;
        pLVar6 = this.inventoryItemList;
        if (0 < pLVar6[3]._opaque) {
            do {
                iVar1 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pLVar6,iVar7,DAT_ram_0056342c);
                pLVar6 = this.inventory.inventorySlotList;
                if (Raw.Read<int>(iVar1 + 0x10) < 0) {
                    /* candidates: System.Collections.Generic.List<Color32>.GetEnumerator | System.Collections.Generic.List<EasingFunction>.GetEnumerator (+9) */ unnamed_function_6549(&local_20,pLVar6,DAT_ram_00563448);
                    local_8 = local_18;
                    local_10 = CONCAT44(puStack_1c,local_20);
                    local_20 = 0;
                    puStack_1c = &local_10;
                    do {
                        iVar2 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10, DAT_ram_00561294);
                        iVar4 = DAT_ram_005ddf34;
                        if (iVar4 == 1) goto code_r0x81a33e9c;
                        if (iVar2 == 0) goto code_r0x81a33ef8;
                        iVar4 = local_8._4_4_;
                    } while (Raw.Read<sbyte>(local_8._4_4_ + 0x30) != '\0');
                    uVar3 = import_env_invoke_iii (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x1b, Raw.Read<int>(local_8._4_4_ + 0x18),0);
                    if (DAT_ram_005ddf34 != 1) {
                        import_env_invoke_viii(s___Scripting__UnityEngine__XR__Me_ram_00001f0e + 0x24,uVar3,1,0);
                        if (DAT_ram_005ddf34 != 1) {
                            uVar3 = import_env_invoke_iii (s___Scripting__UnityEngine__GUILay_ram_00000868 + 0x1b, Raw.Read<int>(iVar4 + 0x1c),0);
                            if (DAT_ram_005ddf34 != 1) {
                                import_env_invoke_viii (s___Scripting__UnityEngine__XR__Me_ram_00001f0e + 0x24,uVar3,1,0);
                                if (DAT_ram_005ddf34 != 1) {
                                    import_env_invoke_viii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1a, Raw.Read<int>(iVar4 + 0x18),Raw.Read<int>(Raw.Read<int>(iVar1 + 8) + 0x14) ,0);
                                    if (DAT_ram_005ddf34 != 1) {
                                        piVar5 = Raw.Read<object>(iVar4 + 0x1c);
                                        uVar3 = import_env_invoke_iii (s___Scripting__Unity__Profiling__P_ram_000008ea + 0x31, iVar1 + 0xc,0);
                                        if (DAT_ram_005ddf34 != 1) {
                                            iVar2 = *piVar5;
                                            import_env_invoke_viii (Raw.Read<int>(iVar2 + 0x2d0),piVar5,uVar3, Raw.Read<int>(iVar2 + 0x2d4));
                                            iVar2 = DAT_ram_005ddf34;
                                            if (iVar2 != 1) {
                                                Raw.Write<byte>(iVar4 + 0x30, 1);
                                                Raw.Write<int>(iVar4 + 0x20, iVar1);
                                                Raw.Write<int>(iVar1 + 0x10, Raw.Read<int>(iVar4 + 0x10));
                                                goto code_r0x81a33ef8;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    code_r0x81a33e9c: DAT_ram_005ddf34 = 0;
                    uVar3 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    iVar4 = import_env_getTempRet0();
                    iVar2 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
                    if (iVar4 != iVar2) {
                        code_r0x81a33fb3: DAT_ram_005ddf34 = 0;
                        import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x1b,&local_20);
                        iVar7 = DAT_ram_005ddf34;
                        if (iVar7 == 1) {
                            import_env___cxa_find_matching_catch_3(0);
                            import_env_getTempRet0();
                            unnamed_function_642();
                            do {
                                throw null;
                            } while( true );
                        }
                        import_env___resumeException(uVar3);
                        do {
                            throw null;
                        } while( true );
                    }
                    piVar5 = (object)import_env___cxa_begin_catch(uVar3);
                    iVar2 = *piVar5;
                    local_20 = iVar2;
                    import_env_invoke_v(0x3a);
                    iVar4 = DAT_ram_005ddf34;
                    if (iVar4 == 1) {
                        uVar3 = import_env___cxa_find_matching_catch_2();
                        import_env_getTempRet0();
                        goto code_r0x81a33fb3;
                    }
                    if (iVar2 != 0) {
                        unnamed_function_1088(iVar2);
                        do {
                            throw null;
                        } while( true );
                    }
                }
                else {
                    iVar4 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pLVar6,Raw.Read<int>(iVar1 + 0x10),DAT_ram_0056344c);
                    uVar3 = UnityEngine.Component.get_gameObject(Raw.Read<int>(iVar4 + 0x18),0);
                    UnityEngine.GameObject.SetActive(uVar3,1,0);
                    uVar3 = UnityEngine.Component.get_gameObject(Raw.Read<int>(iVar4 + 0x1c),0);
                    UnityEngine.GameObject.SetActive(uVar3,1,0);
                    UnityEngine.UI.Image.set_sprite(Raw.Read<int>(iVar4 + 0x18),Raw.Read<int>(Raw.Read<int>(iVar1 + 8) + 0x14),0);
                    piVar5 = Raw.Read<object>(iVar4 + 0x1c);
                    uVar3 = System.Int32.ToString(iVar1 + 0xc,0);
                    iVar2 = *piVar5;
                    Raw.VCall(iVar2, 66) /* virtual */ (piVar5,uVar3,Raw.Read<int>(iVar2 + 0x2d4));
                    Raw.Write<byte>(iVar4 + 0x30, 1);
                    Raw.Write<int>(iVar4 + 0x20, iVar1);
                }
                code_r0x81a33ef8: if (-1 < Raw.Read<int>(iVar1 + 0x14)) {
                    iVar4 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529 (this.inventory.hotBarSlotList,Raw.Read<int>(iVar1 + 0x14),DAT_ram_0056344c );
                    uVar3 = UnityEngine.Component.get_gameObject(Raw.Read<int>(iVar4 + 0x18),0);
                    UnityEngine.GameObject.SetActive(uVar3,1,0);
                    uVar3 = UnityEngine.Component.get_gameObject(Raw.Read<int>(iVar4 + 0x1c),0);
                    UnityEngine.GameObject.SetActive(uVar3,1,0);
                    UnityEngine.UI.Image.set_sprite(Raw.Read<int>(iVar4 + 0x18),Raw.Read<int>(Raw.Read<int>(iVar1 + 8) + 0x14),0);
                    piVar5 = Raw.Read<object>(iVar4 + 0x1c);
                    uVar3 = System.Int32.ToString(iVar1 + 0xc,0);
                    iVar2 = *piVar5;
                    Raw.VCall(iVar2, 66) /* virtual */ (piVar5,uVar3,Raw.Read<int>(iVar2 + 0x2d4));
                    Raw.Write<byte>(iVar4 + 0x30, 1);
                    Raw.Write<int>(iVar4 + 0x20, iVar1);
                }
                iVar7 = iVar7 + 1;
                pLVar6 = this.inventoryItemList;
            } while (iVar7 < pLVar6[3]._opaque);
        }
    }

    // RVA: 0x38BC Offset: 0x38BC VA: 0x38BC
    private void SetInventorySlot(ItemUI slot, InventoryItem item)
    {
        int uVar1 = default;
        TextMeshProUGUI pTVar2 = default;
        int iVar3 = default;

        uVar1 = UnityEngine.Component.get_gameObject(slot.ItemImg,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        uVar1 = UnityEngine.Component.get_gameObject(slot.quantityText,0);
        UnityEngine.GameObject.SetActive(uVar1,1,0);
        UnityEngine.UI.Image.set_sprite(slot.ItemImg,item.itemSO.itemIcon,0);
        pTVar2 = slot.quantityText;
        uVar1 = System.Int32.ToString(&item.quantity,0);
        iVar3 = pTVar2._opaque;
        Raw.VCall(iVar3, 66) /* virtual */ (pTVar2,uVar1,Raw.Read<int>(iVar3 + 0x2d4));
        slot.isHasItem = true;
        slot.inventoryItem = item;
    }

    // RVA: 0x38BD Offset: 0x38BD VA: 0x38BD
    public void CollectIntentoryItem(ItemSO itemSO)
    {
        int iVar1 = default;
        InventoryItem pIVar2 = default;
        OnInventoryItemChangedEventArgs __this_00 = default;
        int iVar3 = default;
        List pLVar4 = default;
        ItemSO param1 = default;
        uint uVar5 = default;

        pLVar4 = this.inventoryItemList;
        if (0 < pLVar4[3]._opaque) {
            iVar1 = 0;
            do {
                pIVar2 = (InventoryItem)/* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pLVar4,iVar1,DAT_ram_0056342c);
                param1 = pIVar2.itemSO;
                iVar3 = UnityEngine.Object.op_Equality(param1,itemSO,0);
                if (iVar3 != 0) {
                    if (9 < pIVar2.quantity) {
                        return;
                    }
                    pIVar2.quantity = pIVar2.quantity + 1;
                    iVar1 = StaticEventHandler.OnItemChanged;
                    if (iVar1 == 0) {
                        return;
                    }
                    __this_00 = (OnInventoryItemChangedEventArgs) new OnInventoryItemChangedEventArgs();
                    new OnInventoryItemChangedEventArgs();
                    __this_00.inventoryItem = pIVar2;
                    Raw.DelegateInvoke(iVar1) /* delegate invoke */ (Raw.Read<int>(iVar1 + 0x20),__this_00,Raw.Read<int>(iVar1 + 0x14));
                    return;
                }
                iVar1 = iVar1 + 1;
                pLVar4 = this.inventoryItemList;
            } while (iVar1 < pLVar4[3]._opaque);
        }
        iVar3 = new InventoryItem();
        Raw.Write<int>(iVar3 + 0x14, 0xffffffff);
        Raw.Write<long>(iVar3 + 0xc, 0xffffffff00000001);
        Raw.Write<object>(iVar3 + 8, itemSO);
        iVar1 = DAT_ram_00563418;
        pLVar4 = this.inventoryItemList;
        pLVar4[4]._opaque = pLVar4[4]._opaque + 1;
        uVar5 = pLVar4[3]._opaque;
        if (Raw.Read<uint>(pLVar4[2]._opaque + 0xc) <= uVar5) {
            /* candidates: System.Collections.Generic.List<EasingFunction>.AddWithResize | System.Collections.Generic.List<InputEventPtr>.AddWithResize (+6) */ unnamed_function_6534 (pLVar4,iVar3,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
            return;
        }
        pLVar4[3]._opaque = uVar5 + 1;
        Raw.Write<int>(pLVar4[2]._opaque + uVar5 * 4 + 0x10, iVar3);
    }

    // RVA: 0x38BE Offset: 0x38BE VA: 0x38BE
    public void LoadItemFromJson()
    {
        int iVar1 = default;
        int iVar2 = default;
        int param1 = default;
        int iVar3 = default;
        object piVar4 = default; // int*
        List param2 = default;
        uint uVar5 = default;
        int local_18 = default;
        object local_14 = default; // long*
        long local_10 = default;
        long local_8 = default;

        local_8 = 0;
        local_10 = 0;
        /* candidates: System.Collections.Generic.List<Color32>.GetEnumerator | System.Collections.Generic.List<EasingFunction>.GetEnumerator (+9) */ unnamed_function_6549(&local_10,this.itemSOList,DAT_ram_00563434);
        local_18 = 0;
        local_14 = &local_10;
        while( true ) {
            do {
                iVar1 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10, DAT_ram_00561288);
                iVar3 = DAT_ram_005ddf34;
                if (iVar3 == 1) {
                    param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a338c3;
                }
                iVar3 = local_18;
                if (iVar1 == 0) goto code_r0x81a3390b;
                iVar1 = local_8._4_4_;
                iVar2 = import_env_invoke_iiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x17,this.saveFile, Raw.Read<int>(local_8._4_4_ + 0xc),0);
                iVar3 = DAT_ram_005ddf34;
                if (iVar3 == 1) {
                    param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    goto code_r0x81a338c3;
                }
            } while (iVar2 == 0);
            iVar2 = import_env_invoke_iiiii (s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x18,this.saveFile, Raw.Read<int>(iVar1 + 0xc),0,DAT_ram_0056c1c0);
            iVar3 = DAT_ram_005ddf34;
            if (iVar3 == 1) break;
            iVar3 = import_env_invoke_ii(0x10c,InventoryItem_TypeInfo);
            if (DAT_ram_005ddf34 == 1) {
                param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a338c3;
            }
            Raw.Write<int>(iVar3 + 8, iVar1);
            Raw.Write<int>(iVar3 + 0xc, Raw.Read<int>(iVar2 + 8));
            Raw.Write<int>(iVar3 + 0x10, Raw.Read<int>(iVar2 + 0xc));
            Raw.Write<int>(iVar3 + 0x14, Raw.Read<int>(iVar2 + 0x10));
            Raw.Write<byte>(iVar3 + 0x18, Raw.Read<byte>(iVar2 + 0x14));
            iVar1 = DAT_ram_00563418;
            param2 = this.inventoryItemList;
            param2[4]._opaque = param2[4]._opaque + 1;
            uVar5 = param2[3]._opaque;
            if (uVar5 < Raw.Read<uint>(param2[2]._opaque + 0xc)) {
                param2[3]._opaque = uVar5 + 1;
                Raw.Write<int>(param2[2]._opaque + uVar5 * 4 + 0x10, iVar3);
            }
            else {
                import_env_invoke_viii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3b,param2,iVar3, Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar1 + 0x10) + 0x60) + 0x38));
                iVar3 = DAT_ram_005ddf34;
                if (iVar3 == 1) {
                    param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                    code_r0x81a338c3: iVar3 = import_env_getTempRet0();
                    iVar1 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
                    if (iVar3 == iVar1) {
                        piVar4 = (object)import_env___cxa_begin_catch(param1);
                        iVar3 = *piVar4;
                        local_18 = iVar3;
                        import_env_invoke_v(0x3a);
                        iVar1 = DAT_ram_005ddf34;
                        if (iVar1 != 1) {
                            code_r0x81a3390b: DAT_ram_005ddf34 = 0;
                            if (iVar3 != 0) {
                                unnamed_function_1088(iVar3);
                                do {
                                    throw null;
                                } while( true );
                            }
                            return;
                        }
                        param1 = import_env___cxa_find_matching_catch_2();
                        import_env_getTempRet0();
                    }
                    import_env_invoke_ii(s___Scripting__UnityEngine__Sphere_ram_00003642 + 0x19,&local_18);
                    iVar3 = DAT_ram_005ddf34;
                    if (iVar3 != 1) {
                        import_env___resumeException(param1);
                        do {
                            throw null;
                        } while( true );
                    }
                    import_env___cxa_find_matching_catch_3(0);
                    import_env_getTempRet0();
                    unnamed_function_642();
                    do {
                        throw null;
                    } while( true );
                }
            }
        }
        param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        goto code_r0x81a338c3;
    }

    // RVA: 0x38BF Offset: 0x38BF VA: 0x38BF
    private void SaveItemToJson()
    {
        byte uVar1 = default;
        int iVar2 = default;
        int iVar3 = default;
        List pLVar4 = default;
        int uVar5 = default;
        int iVar6 = default;
        long uVar7 = default;

        iVar6 = 0;
        Esper.ESave.SaveFile.DeleteFile(this.saveFile,0);
        pLVar4 = this.inventoryItemList;
        if (0 < pLVar4[3]._opaque) {
            do {
                iVar2 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pLVar4,iVar6,DAT_ram_0056342c);
                uVar7 = Raw.Read<long>(iVar2 + 0xc);
                uVar5 = Raw.Read<int>(iVar2 + 0x14);
                uVar1 = Raw.Read<byte>(iVar2 + 0x18);
                iVar3 = new ItemJson();
                Raw.Write<byte>(iVar3 + 0x14, uVar1);
                Raw.Write<int>(iVar3 + 0x10, uVar5);
                Raw.Write<long>(iVar3 + 8, uVar7);
                Esper.ESave.SaveFile.AddOrUpdateData<object>(this.saveFile,Raw.Read<int>(Raw.Read<int>(iVar2 + 8) + 0xc),iVar3,DAT_ram_0056c1a4);
                iVar6 = iVar6 + 1;
                pLVar4 = this.inventoryItemList;
            } while (iVar6 < pLVar4[3]._opaque);
        }
        iVar6 = 0;
        Esper.ESave.SaveFile.Save(this.saveFile,0,0);
        pLVar4 = this.inventoryItemList;
        if (0 < pLVar4[3]._opaque) {
            do {
                iVar2 = /* candidates: System.Collections.Generic.List<EasingFunction>.get_Item | System.Collections.Generic.List<InputEventPtr>.get_Item (+7) */ unnamed_function_6529(pLVar4,iVar6,DAT_ram_0056342c);
                uVar7 = Raw.Read<long>(iVar2 + 0xc);
                uVar5 = Raw.Read<int>(iVar2 + 0x14);
                uVar1 = Raw.Read<byte>(iVar2 + 0x18);
                iVar3 = new ItemJson();
                Raw.Write<byte>(iVar3 + 0x14, uVar1);
                Raw.Write<int>(iVar3 + 0x10, uVar5);
                Raw.Write<long>(iVar3 + 8, uVar7);
                uVar5 = UnityEngine.JsonUtility.ToJson(iVar3,0);
                UnityEngine.PlayerPrefs.SetString(Raw.Read<int>(Raw.Read<int>(iVar2 + 8) + 0xc),uVar5,0);
                iVar6 = iVar6 + 1;
                pLVar4 = this.inventoryItemList;
            } while (iVar6 < pLVar4[3]._opaque);
        }
    }

    // RVA: 0x38C0 Offset: 0x38C0 VA: 0x38C0
    private void OnApplicationQuit()
    {
        this.SaveItemToJson();
    }

    // RVA: 0x38C1 Offset: 0x38C1 VA: 0x38C1
    private void StaticEventHandler_OnExit()
    {
        this.SaveItemToJson();
    }

    // RVA: 0x38C2 Offset: 0x38C2 VA: 0x38C2
    public InventoryManager()
    {
        List pLVar1 = default;

        pLVar1 = (List)new System_Collections_Generic_List_InventoryItem_();
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(pLVar1,DAT_ram_00563414);
        this.inventoryItemList = pLVar1;
        pLVar1 = (List)new System_Collections_Generic_List_ItemSO_();
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(pLVar1,DAT_ram_00563430);
        this.itemSOList = pLVar1;
        this.instructionText = "Drag the item to the hotbar to use it.";
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
