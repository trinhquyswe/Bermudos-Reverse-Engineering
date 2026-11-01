// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/InputSystem_Actions.PlayerActions.c by tools/c2cs.py
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

public struct InputSystem_Actions_PlayerActions // TypeDefIndex: 5634
{
    // Fields
    private InputSystem_Actions m_Wrapper; // 0x0

    // Properties
    public InputAction Move { get; }
    public InputAction Look { get; }
    public InputAction Fire { get; }
    public InputAction RightClick { get; }
    public InputAction SpaceClick { get; }
    public InputAction Beam { get; }
    public InputAction Rest { get; }
    public bool enabled { get; }

    // Methods

    // RVA: 0x3871 Offset: 0x3871 VA: 0x3871
    public InputSystem_Actions_PlayerActions(InputSystem_Actions wrapper)
    {
        this.klass = wrapper;
    }

    // RVA: 0x3872 Offset: 0x3872 VA: 0x3872
    public InputAction get_Move()
    {
        return Raw.Read<object>((int)this.klass + 0x14);
    }

    // RVA: 0x3873 Offset: 0x3873 VA: 0x3873
    public InputAction get_Look()
    {
        return Raw.Read<object>((int)this.klass + 0x18);
    }

    // RVA: 0x3874 Offset: 0x3874 VA: 0x3874
    public InputAction get_Fire()
    {
        return Raw.Read<object>((int)this.klass + 0x1c);
    }

    // RVA: 0x3875 Offset: 0x3875 VA: 0x3875
    public InputAction get_RightClick()
    {
        return Raw.Read<object>((int)this.klass + 0x20);
    }

    // RVA: 0x3876 Offset: 0x3876 VA: 0x3876
    public InputAction get_SpaceClick()
    {
        return Raw.Read<object>((int)this.klass + 0x24);
    }

    // RVA: 0x3877 Offset: 0x3877 VA: 0x3877
    public InputAction get_Beam()
    {
        return Raw.Read<object>((int)this.klass + 0x28);
    }

    // RVA: 0x3878 Offset: 0x3878 VA: 0x3878
    public InputAction get_Rest()
    {
        return Raw.Read<object>((int)this.klass + 0x2c);
    }

    // RVA: 0x3879 Offset: 0x3879 VA: 0x3879
    public InputActionMap Get()
    {
        return Raw.Read<object>((int)this.klass + 0xc);
    }

    // RVA: 0x387A Offset: 0x387A VA: 0x387A
    public void Enable()
    {
        UnityEngine.InputSystem.InputActionMap.Enable(Raw.Read<int>((int)this.klass + 0xc),0);
    }

    // RVA: 0x387B Offset: 0x387B VA: 0x387B
    public void Disable()
    {
        UnityEngine.InputSystem.InputActionMap.Disable(Raw.Read<int>((int)this.klass + 0xc),0);
    }

    // RVA: 0x387C Offset: 0x387C VA: 0x387C
    public bool get_enabled()
    {
        int uVar1 = default;

        uVar1 = UnityEngine.InputSystem.InputActionMap.get_enabled(Raw.Read<int>((int)this.klass + 0xc),0);
        return SUB41(uVar1,0);
    }

    // RVA: 0x387D Offset: 0x387D VA: 0x387D
    public static InputActionMap op_Implicit(InputSystem_Actions.PlayerActions set)
    {
        return set[1].monitor;
    }

    // RVA: 0x387E Offset: 0x387E VA: 0x387E
    public void AddCallbacks(InputSystem_Actions.IPlayerActions instance)
    {
        int iVar1 = default;
        int uVar2 = default;
        uint uVar3 = default;
        int uVar4 = default;
        int iVar5 = default;

        if ((instance != (InputSystem_Actions_IPlayerActions)0x0) && (iVar1 = System.Collections.Generic.List<object>.Contains(Raw.Read<int>((int)this.klass + 0x10),instance,DAT_ram_005646f8), iVar5 = DAT_ram_005646f0, iVar1 == 0)) {
            iVar1 = Raw.Read<int>((int)this.klass + 0x10);
            Raw.Write<int>(iVar1 + 0x10, Raw.Read<int>(iVar1 + 0x10) + 1);
            uVar3 = Raw.Read<uint>(iVar1 + 0xc);
            if (uVar3 < Raw.Read<uint>(Raw.Read<int>(iVar1 + 8) + 0xc)) {
                Raw.Write<uint>(iVar1 + 0xc, uVar3 + 1);
                Raw.Write<object>(Raw.Read<int>(iVar1 + 8) + uVar3 * 4 + 0x10, instance);
            }
            else {
                /* candidates: System.Collections.Generic.List<EasingFunction>.AddWithResize | System.Collections.Generic.List<InputEventPtr>.AddWithResize (+6) */ unnamed_function_6534 (iVar1,instance,Raw.Read<int>(Raw.Read<int>(Raw.Read<int>(iVar5 + 0x10) + 0x60) + 0x38));
            }
            uVar4 = Raw.Read<int>((int)this.klass + 0x14);
            uVar3 = 0;
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = iVar5 + Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
                        goto code_r0x81a56290;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
            code_r0x81a56290: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x14);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = iVar5 + Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
                        goto code_r0x81a56331;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
            code_r0x81a56331: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x14);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = iVar5 + Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
                        goto code_r0x81a563d2;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
            code_r0x81a563d2: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x18);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
                        goto code_r0x81a56473;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
            code_r0x81a56473: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x18);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
                        goto code_r0x81a56514;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
            code_r0x81a56514: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x18);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
                        goto code_r0x81a565b5;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
            code_r0x81a565b5: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x1c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
                        goto code_r0x81a56656;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
            code_r0x81a56656: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x1c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
                        goto code_r0x81a566f7;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
            code_r0x81a566f7: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x1c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
                        goto code_r0x81a56798;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
            code_r0x81a56798: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x20);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
                        goto code_r0x81a56839;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
            code_r0x81a56839: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x20);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
                        goto code_r0x81a568da;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
            code_r0x81a568da: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x20);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
                        goto code_r0x81a5697b;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
            code_r0x81a5697b: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x24);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
                        goto code_r0x81a56a1c;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
            code_r0x81a56a1c: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x24);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
                        goto code_r0x81a56abd;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
            code_r0x81a56abd: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x24);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
                        goto code_r0x81a56b5e;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
            code_r0x81a56b5e: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x28);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
                        goto code_r0x81a56bff;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
            code_r0x81a56bff: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x28);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
                        goto code_r0x81a56ca0;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
            code_r0x81a56ca0: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x28);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
                        goto code_r0x81a56d41;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
            code_r0x81a56d41: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x2c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
                        goto code_r0x81a56de2;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
            code_r0x81a56de2: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_started(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x2c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
                        goto code_r0x81a56e83;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
            code_r0x81a56e83: uVar3 = 0;
            System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_performed(uVar4,uVar2,0);
            uVar4 = Raw.Read<int>((int)this.klass + 0x2c);
            uVar2 = new System_Action_InputAction_CallbackContext_();
            iVar5 = instance._opaque;
            if (Raw.Read<ushort>(iVar5 + 0xb6) != 0) {
                do {
                    if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8)) {
                        iVar5 = Raw.Read<int>(Raw.Read<int>(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
                        goto code_r0x81a56f28;
                    }
                    uVar3 = uVar3 + 1;
                } while (Raw.Read<ushort>(iVar5 + 0xb6) != uVar3);
            }
            iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
            code_r0x81a56f28: System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar5 + 4),0);
            UnityEngine.InputSystem.InputAction.add_canceled(uVar4,uVar2,0);
        }
    }

    // RVA: 0x3670 Offset: 0x3670 VA: 0x3670
    private void UnregisterCallbacks(InputSystem_Actions.IPlayerActions instance)
    {
        uint uVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        int iVar4 = default;

        uVar1 = 0;
        uVar3 = Raw.Read<int>((int)this.klass + 0x14);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        if (instance == (InputSystem_Actions_IPlayerActions)0x0) {
            unnamed_function_1117();
            do {
                throw null;
            } while( true );
        }
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = iVar4 + Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
                    goto code_r0x81a56ffe;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
        code_r0x81a56ffe: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x14);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = iVar4 + Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
                    goto code_r0x81a5709f;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
        code_r0x81a5709f: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x14);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = iVar4 + Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
                    goto code_r0x81a57140;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
        code_r0x81a57140: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x18);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
                    goto code_r0x81a571e1;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
        code_r0x81a571e1: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x18);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
                    goto code_r0x81a57282;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
        code_r0x81a57282: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x18);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
                    goto code_r0x81a57323;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
        code_r0x81a57323: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x1c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
                    goto code_r0x81a573c4;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
        code_r0x81a573c4: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x1c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
                    goto code_r0x81a57465;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
        code_r0x81a57465: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x1c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
                    goto code_r0x81a57506;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
        code_r0x81a57506: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x20);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
                    goto code_r0x81a575a7;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
        code_r0x81a575a7: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x20);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
                    goto code_r0x81a57648;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
        code_r0x81a57648: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x20);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
                    goto code_r0x81a576e9;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
        code_r0x81a576e9: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x24);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
                    goto code_r0x81a5778a;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
        code_r0x81a5778a: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x24);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
                    goto code_r0x81a5782b;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
        code_r0x81a5782b: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x24);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
                    goto code_r0x81a578cc;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
        code_r0x81a578cc: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x28);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
                    goto code_r0x81a5796d;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
        code_r0x81a5796d: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x28);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
                    goto code_r0x81a57a0e;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
        code_r0x81a57a0e: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x28);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
                    goto code_r0x81a57aaf;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
        code_r0x81a57aaf: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x2c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
                    goto code_r0x81a57b50;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
        code_r0x81a57b50: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_started(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x2c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
                    goto code_r0x81a57bf1;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
        code_r0x81a57bf1: uVar1 = 0;
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_performed(uVar3,uVar2,0);
        uVar3 = Raw.Read<int>((int)this.klass + 0x2c);
        uVar2 = new System_Action_InputAction_CallbackContext_();
        iVar4 = instance._opaque;
        if (Raw.Read<ushort>(iVar4 + 0xb6) != 0) {
            do {
                if (InputSystem_Actions_IPlayerActions_TypeInfo == Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8)) {
                    iVar4 = Raw.Read<int>(Raw.Read<int>(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
                    goto code_r0x81a57c96;
                }
                uVar1 = uVar1 + 1;
            } while (Raw.Read<ushort>(iVar4 + 0xb6) != uVar1);
        }
        iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
        code_r0x81a57c96: System.Action<InputAction.CallbackContext>.__ctor(uVar2,instance,Raw.Read<int>(iVar4 + 4),0);
        UnityEngine.InputSystem.InputAction.remove_canceled(uVar3,uVar2,0);
    }

    // RVA: 0x387F Offset: 0x387F VA: 0x387F
    public void RemoveCallbacks(InputSystem_Actions.IPlayerActions instance)
    {
        int iVar1 = default;

        iVar1 = System.Collections.Generic.List<object>.Remove(Raw.Read<int>((int)this.klass + 0x10),instance,DAT_ram_00564700);
        if (iVar1 != 0) {
            this.UnregisterCallbacks(instance);
        }
    }

    // RVA: 0x3880 Offset: 0x3880 VA: 0x3880
    public void SetCallbacks(InputSystem_Actions.IPlayerActions instance)
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
        /* candidates: System.Collections.Generic.List<Color32>.GetEnumerator | System.Collections.Generic.List<EasingFunction>.GetEnumerator (+9) */ unnamed_function_6549(&local_10,Raw.Read<int>((int)this.klass + 0x10),DAT_ram_005646fc);
        auStack_20._8_4_ = 0;
        auStack_20._12_4_ = &local_10;
        do {
            iVar1 = import_env_invoke_iii (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10, DAT_ram_00561714);
            iVar2 = DAT_ram_005ddf34;
            if (iVar2 == 1) {
                param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
                goto code_r0x81a57e77;
            }
            if (iVar1 == 0) goto code_r0x81a57ecc;
            import_env_invoke_viii (s___Scripting__UnityEngine__Capsul_ram_00003670,this,local_8._4_4_, auStack_20);
            iVar2 = DAT_ram_005ddf34;
        } while (iVar2 != 1);
        param1 = import_env___cxa_find_matching_catch_3(&DAT_ram_004a99ec);
        code_r0x81a57e77: iVar2 = import_env_getTempRet0();
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
                code_r0x81a57ecc: DAT_ram_005ddf34 = 0;
                iVar2 = Raw.Read<int>((int)this.klass + 0x10);
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
        import_env_invoke_ii(s___Scripting__UnityEngine__Capsul_ram_00003670 + 1,auStack_20 + 8);
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
