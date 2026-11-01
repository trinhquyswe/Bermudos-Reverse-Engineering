// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/InputSystem_Actions.UIActions.c by tools/c2cs.py
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

public struct InputSystem_Actions_UIActions // TypeDefIndex: 5635
{
    // Fields
    private InputSystem_Actions m_Wrapper; // 0x0

    // Properties
    public InputAction Navigate { get; }
    public InputAction Submit { get; }
    public InputAction Cancel { get; }
    public InputAction Point { get; }
    public InputAction Click { get; }
    public InputAction ScrollWheel { get; }
    public InputAction MiddleClick { get; }
    public InputAction RightClick { get; }
    public InputAction TrackedDevicePosition { get; }
    public InputAction TrackedDeviceOrientation { get; }
    public InputAction OpenInventory { get; }
    public InputAction UseItem { get; }
    public InputAction MenuInGame { get; }
    public bool enabled { get; }

    // Methods

    // RVA: 0x3881 Offset: 0x3881 VA: 0x3881
    public InputSystem_Actions_UIActions(InputSystem_Actions wrapper)
    {
        this.klass = wrapper;
    }

    // RVA: 0x3882 Offset: 0x3882 VA: 0x3882
    public InputAction get_Navigate()
    {
        return Raw.Read<object>((int)this.klass + 0x38);
    }

    // RVA: 0x3883 Offset: 0x3883 VA: 0x3883
    public InputAction get_Submit()
    {
        return Raw.Read<object>((int)this.klass + 0x3c);
    }

    // RVA: 0x3884 Offset: 0x3884 VA: 0x3884
    public InputAction get_Cancel()
    {
        return Raw.Read<object>((int)this.klass + 0x40);
    }

    // RVA: 0x3885 Offset: 0x3885 VA: 0x3885
    public InputAction get_Point()
    {
        return Raw.Read<object>((int)this.klass + 0x44);
    }

    // RVA: 0x3886 Offset: 0x3886 VA: 0x3886
    public InputAction get_Click()
    {
        return Raw.Read<object>((int)this.klass + 0x48);
    }

    // RVA: 0x3887 Offset: 0x3887 VA: 0x3887
    public InputAction get_ScrollWheel()
    {
        return Raw.Read<object>((int)this.klass + 0x4c);
    }

    // RVA: 0x3888 Offset: 0x3888 VA: 0x3888
    public InputAction get_MiddleClick()
    {
        return Raw.Read<object>((int)this.klass + 0x50);
    }

    // RVA: 0x3889 Offset: 0x3889 VA: 0x3889
    public InputAction get_RightClick()
    {
        return Raw.Read<object>((int)this.klass + 0x54);
    }

    // RVA: 0x388A Offset: 0x388A VA: 0x388A
    public InputAction get_TrackedDevicePosition()
    {
        return Raw.Read<object>((int)this.klass + 0x58);
    }

    // RVA: 0x388B Offset: 0x388B VA: 0x388B
    public InputAction get_TrackedDeviceOrientation()
    {
        return Raw.Read<object>((int)this.klass + 0x5c);
    }

    // RVA: 0x388C Offset: 0x388C VA: 0x388C
    public InputAction get_OpenInventory()
    {
        return Raw.Read<object>((int)this.klass + 0x60);
    }

    // RVA: 0x388D Offset: 0x388D VA: 0x388D
    public InputAction get_UseItem()
    {
        return Raw.Read<object>((int)this.klass + 100);
    }

    // RVA: 0x388E Offset: 0x388E VA: 0x388E
    public InputAction get_MenuInGame()
    {
        return Raw.Read<object>((int)this.klass + 0x68);
    }

    // RVA: 0x388F Offset: 0x388F VA: 0x388F
    public InputActionMap Get()
    {
        return Raw.Read<object>((int)this.klass + 0x30);
    }

    // RVA: 0x3890 Offset: 0x3890 VA: 0x3890
    public void Enable()
    {
        UnityEngine.InputSystem.InputActionMap.Enable(Raw.Read<int>((int)this.klass + 0x30),0);
    }

    // RVA: 0x3891 Offset: 0x3891 VA: 0x3891
    public void Disable()
    {
        UnityEngine.InputSystem.InputActionMap.Disable(Raw.Read<int>((int)this.klass + 0x30),0);
    }

    // RVA: 0x3892 Offset: 0x3892 VA: 0x3892
    public bool get_enabled()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.InputSystem.InputActionMap.get_enabled(Raw.Read<int>((int)this.klass + 0x30),0);
        return SUB41(uVar1,0);
    }

    // RVA: 0x3893 Offset: 0x3893 VA: 0x3893
    public static InputActionMap op_Implicit(InputSystem_Actions.UIActions set)
    {
        return set[6].klass;
    }

    // RVA: 0x3894 Offset: 0x3894 VA: 0x3894
    public void AddCallbacks(InputSystem_Actions.IUIActions instance)
    {
        int iVar1 = default;
        int uVar2 = default;
        uint uVar3 = default;
        int uVar4 = default;
        int iVar5 = default;

        if ((instance != (InputSystem_Actions_IUIActions)0x0) && (iVar1 = System.Collections.Generic.List<object>.Contains(Raw.Read<int>((int)this.klass + 0x34),instance,DAT_ram_00564710), iVar5 = DAT_ram_00564708, iVar1 == 0)) {
            iVar1 = Raw.Read<int>((int)this.klass + 0x34);
            Raw.Write<int>(iVar1 + 0x10, Raw.Read<int>(iVar1 + 0x10) + 1);
            uVar3 = Raw.Read<uint>(iVar1 + 0xc);
            if (uVar3 < Raw.Read<uint>(Raw.Read<int>(iVar1 + 8) + 0xc)) {
                Raw.Write<uint>(iVar1 + 0xc, uVar3 + 1);
                Raw.Write<object>(Raw.Read<int>(iVar1 + 8) + uVar3 * 4 + 0x10, instance);
            }
            else {
                /* candidates: System.Collections.Generic.List<EasingFunction>.AddWithResize | System.Collections.Generic.List<InputEventPtr>.AddWithResize (+6) */ unnamed_function_6534 (iVar1,instance,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar5 + 0x10) + 0x60) + 0x38));
            }
            uVar4 = Raw.Read<int>((int)this.klass + 0x38);
            uVar3 = 0;
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = iVar5 + Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
                        goto code_r0x81a581e4;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
            code_r0x81a581e4: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x38);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = iVar5 + Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
                        goto code_r0x81a58285;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
            code_r0x81a58285: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x38);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = iVar5 + Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
                        goto code_r0x81a58326;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
            code_r0x81a58326: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x3c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
                        goto code_r0x81a583c7;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
            code_r0x81a583c7: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x3c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
                        goto code_r0x81a58468;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
            code_r0x81a58468: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x3c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
                        goto code_r0x81a58509;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
            code_r0x81a58509: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x40);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
                        goto code_r0x81a585aa;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
            code_r0x81a585aa: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x40);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
                        goto code_r0x81a5864b;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
            code_r0x81a5864b: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x40);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
                        goto code_r0x81a586ec;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
            code_r0x81a586ec: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x44);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
                        goto code_r0x81a5878d;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
            code_r0x81a5878d: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x44);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
                        goto code_r0x81a5882e;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
            code_r0x81a5882e: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x44);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
                        goto code_r0x81a588cf;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
            code_r0x81a588cf: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x48);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
                        goto code_r0x81a58970;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
            code_r0x81a58970: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x48);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
                        goto code_r0x81a58a11;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
            code_r0x81a58a11: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x48);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
                        goto code_r0x81a58ab2;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
            code_r0x81a58ab2: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x4c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
                        goto code_r0x81a58b53;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
            code_r0x81a58b53: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x4c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
                        goto code_r0x81a58bf4;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
            code_r0x81a58bf4: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x4c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
                        goto code_r0x81a58c95;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
            code_r0x81a58c95: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x50);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
                        goto code_r0x81a58d36;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
            code_r0x81a58d36: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x50);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
                        goto code_r0x81a58dd7;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
            code_r0x81a58dd7: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x50);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
                        goto code_r0x81a58e78;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
            code_r0x81a58e78: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x54);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
                        goto code_r0x81a58f19;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
            code_r0x81a58f19: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x54);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
                        goto code_r0x81a58fba;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
            code_r0x81a58fba: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x54);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
                        goto code_r0x81a5905b;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
            code_r0x81a5905b: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x58);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
                        goto code_r0x81a590fc;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
            code_r0x81a590fc: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x58);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
                        goto code_r0x81a5919d;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
            code_r0x81a5919d: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x58);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
                        goto code_r0x81a5923e;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
            code_r0x81a5923e: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x5c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
                        goto code_r0x81a592df;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
            code_r0x81a592df: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x5c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
                        goto code_r0x81a59380;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
            code_r0x81a59380: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x5c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
                        goto code_r0x81a59421;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
            code_r0x81a59421: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x60);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
                        goto code_r0x81a594c2;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
            code_r0x81a594c2: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x60);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
                        goto code_r0x81a59563;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
            code_r0x81a59563: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x60);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
                        goto code_r0x81a59604;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
            code_r0x81a59604: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 100);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
                        goto code_r0x81a596a5;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
            code_r0x81a596a5: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 100);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
                        goto code_r0x81a59746;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
            code_r0x81a59746: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 100);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
                        goto code_r0x81a597e7;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
            code_r0x81a597e7: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x68);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
                        goto code_r0x81a59888;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
            code_r0x81a59888: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x68);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
                        goto code_r0x81a59929;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
            code_r0x81a59929: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x68);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
                        goto code_r0x81a599ce;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
            code_r0x81a599ce: System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
        }
    }

    // RVA: 0x3672 Offset: 0x3672 VA: 0x3672
    private void UnregisterCallbacks(InputSystem_Actions.IUIActions instance)
    {
        uint uVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        int iVar4 = default;

        uVar1 = 0;
        uVar3 = Raw.Read<int>((int)this.klass + 0x38);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        if (instance == (InputSystem_Actions_IUIActions)0x0) {
            unnamed_function_1117();
            do {
                throw null;
            } while( true );
        }
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = iVar4 + Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
                    goto code_r0x81a59aa4;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
        code_r0x81a59aa4: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x38);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = iVar4 + Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
                    goto code_r0x81a59b45;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
        code_r0x81a59b45: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x38);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = iVar4 + Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
                    goto code_r0x81a59be6;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
        code_r0x81a59be6: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x3c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
                    goto code_r0x81a59c87;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
        code_r0x81a59c87: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x3c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
                    goto code_r0x81a59d28;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
        code_r0x81a59d28: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x3c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
                    goto code_r0x81a59dc9;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
        code_r0x81a59dc9: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x40);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
                    goto code_r0x81a59e6a;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
        code_r0x81a59e6a: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x40);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
                    goto code_r0x81a59f0b;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
        code_r0x81a59f0b: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x40);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
                    goto code_r0x81a59fac;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
        code_r0x81a59fac: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x44);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
                    goto code_r0x81a5a04d;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
        code_r0x81a5a04d: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x44);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
                    goto code_r0x81a5a0ee;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
        code_r0x81a5a0ee: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x44);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
                    goto code_r0x81a5a18f;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
        code_r0x81a5a18f: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x48);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
                    goto code_r0x81a5a230;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
        code_r0x81a5a230: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x48);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
                    goto code_r0x81a5a2d1;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
        code_r0x81a5a2d1: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x48);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
                    goto code_r0x81a5a372;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
        code_r0x81a5a372: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x4c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
                    goto code_r0x81a5a413;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
        code_r0x81a5a413: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x4c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
                    goto code_r0x81a5a4b4;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
        code_r0x81a5a4b4: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x4c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
                    goto code_r0x81a5a555;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
        code_r0x81a5a555: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x50);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
                    goto code_r0x81a5a5f6;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
        code_r0x81a5a5f6: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x50);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
                    goto code_r0x81a5a697;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
        code_r0x81a5a697: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x50);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
                    goto code_r0x81a5a738;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
        code_r0x81a5a738: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x54);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf8;
                    goto code_r0x81a5a7d9;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
        code_r0x81a5a7d9: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x54);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf8;
                    goto code_r0x81a5a87a;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
        code_r0x81a5a87a: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x54);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf8;
                    goto code_r0x81a5a91b;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
        code_r0x81a5a91b: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x58);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x100;
                    goto code_r0x81a5a9bc;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
        code_r0x81a5a9bc: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x58);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x100;
                    goto code_r0x81a5aa5d;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
        code_r0x81a5aa5d: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x58);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x100;
                    goto code_r0x81a5aafe;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
        code_r0x81a5aafe: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x5c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x108;
                    goto code_r0x81a5ab9f;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
        code_r0x81a5ab9f: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x5c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x108;
                    goto code_r0x81a5ac40;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
        code_r0x81a5ac40: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x5c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x108;
                    goto code_r0x81a5ace1;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
        code_r0x81a5ace1: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x60);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x110;
                    goto code_r0x81a5ad82;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
        code_r0x81a5ad82: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x60);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x110;
                    goto code_r0x81a5ae23;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
        code_r0x81a5ae23: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x60);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x110;
                    goto code_r0x81a5aec4;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
        code_r0x81a5aec4: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 100);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x118;
                    goto code_r0x81a5af65;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
        code_r0x81a5af65: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 100);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x118;
                    goto code_r0x81a5b006;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
        code_r0x81a5b006: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 100);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x118;
                    goto code_r0x81a5b0a7;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
        code_r0x81a5b0a7: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x68);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x120;
                    goto code_r0x81a5b148;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
        code_r0x81a5b148: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x68);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x120;
                    goto code_r0x81a5b1e9;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
        code_r0x81a5b1e9: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x68);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IUIActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x120;
                    goto code_r0x81a5b28e;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
        code_r0x81a5b28e: System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
    }

    // RVA: 0x3895 Offset: 0x3895 VA: 0x3895
    public void RemoveCallbacks(InputSystem_Actions.IUIActions instance)
    {
        int iVar1 = default;

        iVar1 = System.Collections.Generic.List<object>.Remove(Raw.Read<int>((int)this.klass + 0x34),instance,DAT_ram_00564718);
        if (iVar1 != 0) {
            this.UnregisterCallbacks(instance);
        }
    }

    // RVA: 0x3896 Offset: 0x3896 VA: 0x3896
    public void SetCallbacks(InputSystem_Actions.IUIActions instance)
    {
        int iVar1 = default;
        int param1 = default;
        int iVar2 = default;
        object piVar3 = default; // int*
        long local_10 = default;
        long local_8 = default;

        byte[] auStack_20 = new byte[16];
        local_8 = 0;
        local_10 = 0;
        /* candidates: System.Collections.Generic.List<Color32>.GetEnumerator | System.Collections.Generic.List<EasingFunction>.GetEnumerator (+9) */ unnamed_function_6549(&local_10,Raw.Read<int>((int)this.klass + 0x34),DAT_ram_00564714);
        auStack_20._8_4_ = 0;
        auStack_20._12_4_ = &local_10;
        do {
            iVar1 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10, DAT_ram_00561720);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 == 1) {
                param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a5b46f;
            }
            if (iVar1 == 0) goto code_r0x81a5b4c4;
            import_env_invoke_viii (s___Scripting__UnityEngine__Capsul_ram_00003670 + 2,this,local_8._4_4_, auStack_20);
            iVar2 = DAT_ram_005ddf34;
        } while (iVar2 != 1);
        param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a5b46f: iVar2 = import_env_getTempRet0();
        iVar1 = import_env_llvm_eh_typeid_for(&DAT_ram_004a99ec);
        if (iVar2 == iVar1) {
            piVar3 = (object)import_env___cxa_begin_catch(param1);
            iVar1 = *piVar3;
            auStack_20._8_4_ = iVar1;
            import_env_invoke_v(0x3a);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 != 1) {
                if (iVar1 != 0) {
                    unnamed_function_1088(iVar1);
                    do {
                        throw null;
                    } while( true );
                }
                code_r0x81a5b4c4: DAT_ram_005ddf34 = 0;
                iVar2 = Raw.Read<int>((int)this.klass + 0x34);
                iVar1 = Raw.Read<int>(iVar2 + 0xc);
                Raw.Write<int>(iVar2 + 0xc, 0);
                Raw.Write<int>(iVar2 + 0x10, Raw.Read<int>(iVar2 + 0x10) + 1);
                if (0 < iVar1) {
                    System.Array.Clear(Raw.Read<int>(iVar2 + 8),0,iVar1,0);
                }
                this.AddCallbacks(instance);
                return;
            }
            param1 = import_env___cxa_find_matching_catch_2();
            import_env_getTempRet0();
        }
        import_env_invoke_ii(s___Scripting__UnityEngine__Capsul_ram_00003670 + 3,auStack_20 + 8);
        iVar2 = DAT_ram_005ddf34;
        if (iVar2 == 1) {
            import_env___cxa_find_matching_catch_3(0);
            import_env_getTempRet0();
            unnamed_function_642();
            do {
                throw null;
            } while( true );
        }
        import_env___resumeException(param1);
        do {
            throw null;
        } while( true );
    }
}
