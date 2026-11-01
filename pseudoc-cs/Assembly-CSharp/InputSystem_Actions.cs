// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/InputSystem_Actions.c by tools/c2cs.py
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

public class InputSystem_Actions : IInputActionCollection2, IInputActionCollection, IEnumerable<InputAction>, IEnumerable, IDisposable // TypeDefIndex: 5638
{
    // Fields
    [CompilerGenerated]
    private readonly InputActionAsset _asset_k__BackingField; // 0x8
    private readonly InputActionMap m_Player; // 0xC
    private List<InputSystem_Actions.IPlayerActions> m_PlayerActionsCallbackInterfaces; // 0x10
    private readonly InputAction m_Player_Move; // 0x14
    private readonly InputAction m_Player_Look; // 0x18
    private readonly InputAction m_Player_Fire; // 0x1C
    private readonly InputAction m_Player_RightClick; // 0x20
    private readonly InputAction m_Player_SpaceClick; // 0x24
    private readonly InputAction m_Player_Beam; // 0x28
    private readonly InputAction m_Player_Rest; // 0x2C
    private readonly InputActionMap m_UI; // 0x30
    private List<InputSystem_Actions.IUIActions> m_UIActionsCallbackInterfaces; // 0x34
    private readonly InputAction m_UI_Navigate; // 0x38
    private readonly InputAction m_UI_Submit; // 0x3C
    private readonly InputAction m_UI_Cancel; // 0x40
    private readonly InputAction m_UI_Point; // 0x44
    private readonly InputAction m_UI_Click; // 0x48
    private readonly InputAction m_UI_ScrollWheel; // 0x4C
    private readonly InputAction m_UI_MiddleClick; // 0x50
    private readonly InputAction m_UI_RightClick; // 0x54
    private readonly InputAction m_UI_TrackedDevicePosition; // 0x58
    private readonly InputAction m_UI_TrackedDeviceOrientation; // 0x5C
    private readonly InputAction m_UI_OpenInventory; // 0x60
    private readonly InputAction m_UI_UseItem; // 0x64
    private readonly InputAction m_UI_MenuInGame; // 0x68
    private int m_KeyboardMouseSchemeIndex; // 0x6C
    private int m_GamepadSchemeIndex; // 0x70
    private int m_TouchSchemeIndex; // 0x74
    private int m_JoystickSchemeIndex; // 0x78
    private int m_XRSchemeIndex; // 0x7C

    // Properties
    public InputActionAsset asset { get; }
    public Nullable<InputBinding> bindingMask { get; set; }
    public Nullable<ReadOnlyArray<InputDevice>> devices { get; set; }
    public ReadOnlyArray<InputControlScheme> controlSchemes { get; }
    public IEnumerable<InputBinding> bindings { get; }
    public InputSystem_Actions.PlayerActions Player { get; }
    public InputSystem_Actions.UIActions UI { get; }
    public InputControlScheme KeyboardMouseScheme { get; }
    public InputControlScheme GamepadScheme { get; }
    public InputControlScheme TouchScheme { get; }
    public InputControlScheme JoystickScheme { get; }
    public InputControlScheme XRScheme { get; }

    // Methods

    [CompilerGenerated]
    // RVA: 0x3859 Offset: 0x3859 VA: 0x3859
    public InputActionAsset get_asset()
    {
        return Raw.Read<object>(this).pad_8;
    }

    // RVA: 0x385A Offset: 0x385A VA: 0x385A
    public InputSystem_Actions()
    {
        List pLVar1 = default;
        int param1 = default;
        InputActionMap pIVar2 = default;
        InputAction pIVar3 = default;

        pLVar1 = (List) unnamed_function_95402 (System_Collections_Generic_List_InputSystem_Actions_IPlayerActions__TypeInfo);
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(pLVar1,DAT_ram_005646ec);
        this.m_PlayerActionsCallbackInterfaces = pLVar1;
        pLVar1 = (List) unnamed_function_95402 (System_Collections_Generic_List_InputSystem_Actions_IUIActions__TypeInfo);
        /* candidates: System.Collections.Generic.List<AdditionalLightsShadowCasterPass.ShadowResolutionRequest>..ctor | System.Collections.Generic.List<AnimationOutputWeightProcessor.WeightInfo>..ctor (+167) */ unnamed_function_5132(pLVar1,DAT_ram_00564704);
        this.m_KeyboardMouseSchemeIndex = -1;
        this.m_GamepadSchemeIndex = -1;
        this.m_UIActionsCallbackInterfaces = pLVar1;
        this.m_TouchSchemeIndex = -1;
        this.m_JoystickSchemeIndex = -1;
        this.m_XRSchemeIndex = -1;
        param1 = UnityEngine.InputSystem.InputActionAsset.FromJson("{\n    \"name\": \"InputSystem_Actions\",\n    \"maps\": [\n        {\n            \"name\": \"Player\",\n            \"id\": \"b9905901-cd69-4717-9b29-e6b52564100c\",\n            \"actions\": [\n                {\n                    \"name\": \"Move\",\n                    \"type\": \"Value\",\n                    \"id\": \"951cd1f4-b874-4428-b4d9-9995e96f873a\",\n                    \"expectedControlType\": \"Vector2\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": true\n                },\n                {\n                    \"name\": \"Look\",\n                    \"type\": \"Value\",\n                    \"id\": \"407f5044-e5d4-4db8-b61d-e35af2f99e29\",\n                    \"expectedControlType\": \"Vector2\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": true\n                },\n                {\n                    \"name\": \"Fire\",\n                    \"type\": \"Button\",\n                    \"id\": \"a66f6a70-6fb3-4275-b011-8e37d76fbd9d\",\n                    \"expectedControlType\": \"Button\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"RightClick\",\n                    \"type\": \"Button\",\n                    \"id\": \"043335d9-3484-40ab-8643-287930040ba2\",\n                    \"expectedControlType\": \"\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"SpaceClick\",\n                    \"type\": \"Button\",\n                    \"id\": \"86f52ed0-f037-4901-88cb-81fc7ac19496\",\n                    \"expectedControlType\": \"\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"Beam\",\n                    \"type\": \"Button\",\n                    \"id\": \"912610e2-a414-4b70-98b9-05377868cf8a\",\n                    \"expectedControlType\": \"\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"Rest\",\n                    \"type\": \"Button\",\n                    \"id\": \"a8c35ce7-9c53-4c4f-a23f-589c1b0c4dd7\",\n                    \"expectedControlType\": \"\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                }\n            ],\n            \"bindings\": [\n                {\n                    \"name\": \"\",\n                    \"id\": \"978bfe49-cc26-4a3d-ab7b-7d7a29327403\",\n                    \"path\": \"<Gamepad>/leftStick\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"WASD\",\n                    \"id\": \"00ca640b-d935-4593-8157-c05846ea39b3\",\n                    \"path\": \"Dpad\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"Move\",\n                    \"isComposite\": true,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"up\",\n                    \"id\": \"e2062cb9-1b15-46a2-838c-2f8d72a0bdd9\",\n                    \"path\": \"<Keyboard>/w\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"up\",\n                    \"id\": \"8180e8bd-4097-4f4e-ab88-4523101a6ce9\",\n                    \"path\": \"<Keyboard>/upArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"down\",\n                    \"id\": \"320bffee-a40b-4347-ac70-c210eb8bc73a\",\n                    \"path\": \"<Keyboard>/s\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"down\",\n                    \"id\": \"1c5327b5-f71c-4f60-99c7-4e737386f1d1\",\n                    \"path\": \"<Keyboard>/downArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"left\",\n                    \"id\": \"d2581a9b-1d11-4566-b27d-b92aff5fabbc\",\n                    \"path\": \"<Keyboard>/a\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"left\",\n                    \"id\": \"2e46982e-44cc-431b-9f0b-c11910bf467a\",\n                    \"path\": \"<Keyboard>/leftArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"right\",\n                    \"id\": \"fcfe95b8-67b9-4526-84b5-5d0bc98d6400\",\n                    \"path\": \"<Keyboard>/d\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"right\",\n                    \"id\": \"77bff152-3580-4b21-b6de-dcd0c7e41164\",\n                    \"path\": \"<Keyboard>/rightArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"1635d3fe-58b6-4ba9-a4e2-f4b964f6b5c8\",\n                    \"path\": \"<XRController>/{Primary2DAxis}\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"XR\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"3ea4d645-4504-4529-b061-ab81934c3752\",\n                    \"path\": \"<Joystick>/stick\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Joystick\",\n                    \"action\": \"Move\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"c1f7a91b-d0fd-4a62-997e-7fb9b69bf235\",\n                    \"path\": \"<Gamepad>/rightStick\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Look\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"8c8e490b-c610-4785-884f-f04217b23ca4\",\n                    \"path\": \"<Pointer>/delta\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse;Touch\",\n                    \"action\": \"Look\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"3e5f5442-8668-4b27-a940-df99bad7e831\",\n                    \"path\": \"<Joystick>/{Hatswitch}\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Joystick\",\n                    \"action\": \"Look\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"143bb1cd-cc10-4eca-a2f0-a3664166fe91\",\n                    \"path\": \"<Gamepad>/rightTrigger\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Fire\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"05f6913d-c316-48b2-a6bb-e225f14c7960\",\n                    \"path\": \"<Mouse>/leftButton\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Fire\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"886e731e-7071-4ae4-95c0-e61739dad6fd\",\n                    \"path\": \"<Touchscreen>/primaryTouch/tap\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Touch\",\n                    \"action\": \"Fire\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"ee3d0cd2-254e-47a7-a8cb-bc94d9658c54\",\n                    \"path\": \"<Joystick>/trigger\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Joystick\",\n                    \"action\": \"Fire\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"8255d333-5683-4943-a58a-ccb207ff1dce\",\n                    \"path\": \"<XRController>/{PrimaryAction}\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"XR\",\n                    \"action\": \"Fire\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"e99387ca-d8a4-4639-bf04-8ad32b1edec7\",\n                    \"path\": \"<Mouse>/rightButton\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"RightClick\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"9741432e-f5d2-4e51-87a9-5abc2e3d9021\",\n                    \"path\": \"<Keyboard>/space\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"SpaceClick\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"6634e183-22e1-4976-b22f-cebf3a2c5d78\",\n                    \"path\": \"<Keyboard>/ctrl\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"Beam\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"989ca2a7-9cba-4561-b346-4c0408cca74c\",\n                    \"path\": \"<Keyboard>/i\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"Rest\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                }\n            ]\n        },\n        {\n            \"name\": \"UI\",\n            \"id\": \"6a3fd0af-22ee-45f4-98fa-5f1e4c981777\",\n            \"actions\": [\n                {\n                    \"name\": \"Navigate\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"34b99b1a-4299-454f-9797-5feb4e91415f\",\n                    \"expectedControlType\": \"Vector2\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"Submit\",\n                    \"type\": \"Button\",\n                    \"id\": \"3efebf0f-f8f9-4036-9cad-34b479cb1f1c\",\n                    \"expectedControlType\": \"Button\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"Cancel\",\n                    \"type\": \"Button\",\n                    \"id\": \"a44cbf7c-5d67-49f9-8570-0d6c348ee4da\",\n                    \"expectedControlType\": \"Button\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"Point\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"ec191e26-c2c2-43ce-a089-bf7fd0cd9ea2\",\n                    \"expectedControlType\": \"Vector2\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": true\n                },\n                {\n                    \"name\": \"Click\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"8842f1d8-3f3d-4352-a928-a74292300e7d\",\n                    \"expectedControlType\": \"Button\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": true\n                },\n                {\n                    \"name\": \"ScrollWheel\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"73f60688-fcda-4d9f-a2c5-d9e2c03b3cc2\",\n                    \"expectedControlType\": \"Vector2\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"MiddleClick\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"d544f57e-874c-4718-8c91-654e2ceb59cc\",\n                    \"expectedControlType\": \"Button\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"RightClick\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"d83e8388-1c6e-48c7-9427-4a5b10a44117\",\n                    \"expectedControlType\": \"Button\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"TrackedDevicePosition\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"37353cbd-6b60-4e86-a47d-e0e6326664a1\",\n                    \"expectedControlType\": \"Vector3\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"TrackedDeviceOrientation\",\n                    \"type\": \"PassThrough\",\n                    \"id\": \"998e7eda-5502-4241-95d6-d2ccc373da13\",\n                    \"expectedControlType\": \"Quaternion\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"OpenInventory\",\n                    \"type\": \"Button\",\n                    \"id\": \"e15232ba-7eba-4196-8c23-cb7e4a305bc1\",\n                    \"expectedControlType\": \"\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"UseItem\",\n                    \"type\": \"Button\",\n                    \"id\": \"8304606b-2373-4f06-ae09-50222e281163\",\n                    \"expectedControlType\": \"\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                },\n                {\n                    \"name\": \"MenuInGame\",\n                    \"type\": \"Button\",\n                    \"id\": \"5893997d-f654-45ee-9514-03320faa6165\",\n                    \"expectedControlType\": \"\",\n                    \"processors\": \"\",\n                    \"interactions\": \"\",\n                    \"initialStateCheck\": false\n                }\n            ],\n            \"bindings\": [\n                {\n                    \"name\": \"Gamepad\",\n                    \"id\": \"809f371f-c5e2-4e7a-83a1-d867598f40dd\",\n                    \"path\": \"2DVector\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": true,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"up\",\n                    \"id\": \"14a5d6e8-4aaf-4119-a9ef-34b8c2c548bf\",\n                    \"path\": \"<Gamepad>/leftStick/up\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"up\",\n                    \"id\": \"9144cbe6-05e1-4687-a6d7-24f99d23dd81\",\n                    \"path\": \"<Gamepad>/rightStick/up\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"down\",\n                    \"id\": \"2db08d65-c5fb-421b-983f-c71163608d67\",\n                    \"path\": \"<Gamepad>/leftStick/down\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"down\",\n                    \"id\": \"58748904-2ea9-4a80-8579-b500e6a76df8\",\n                    \"path\": \"<Gamepad>/rightStick/down\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"left\",\n                    \"id\": \"8ba04515-75aa-45de-966d-393d9bbd1c14\",\n                    \"path\": \"<Gamepad>/leftStick/left\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"left\",\n                    \"id\": \"712e721c-bdfb-4b23-a86c-a0d9fcfea921\",\n                    \"path\": \"<Gamepad>/rightStick/left\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"right\",\n                    \"id\": \"fcd248ae-a788-4676-a12e-f4d81205600b\",\n                    \"path\": \"<Gamepad>/leftStick/right\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"right\",\n                    \"id\": \"1f04d9bc-c50b-41a1-bfcc-afb75475ec20\",\n                    \"path\": \"<Gamepad>/rightStick/right\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"fb8277d4-c5cd-4663-9dc7-ee3f0b506d90\",\n                    \"path\": \"<Gamepad>/dpad\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Gamepad\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"Joystick\",\n                    \"id\": \"e25d9774-381c-4a61-b47c-7b6b299ad9f9\",\n                    \"path\": \"2DVector\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": true,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"up\",\n                    \"id\": \"3db53b26-6601-41be-9887-63ac74e79d19\",\n                    \"path\": \"<Joystick>/stick/up\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Joystick\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"down\",\n                    \"id\": \"0cb3e13e-3d90-4178-8ae6-d9c5501d653f\",\n                    \"path\": \"<Joystick>/stick/down\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Joystick\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"left\",\n                    \"id\": \"0392d399-f6dd-4c82-8062-c1e9c0d34835\",\n                    \"path\": \"<Joystick>/stick/left\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Joystick\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"right\",\n                    \"id\": \"942a66d9-d42f-43d6-8d70-ecb4ba5363bc\",\n                    \"path\": \"<Joystick>/stick/right\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Joystick\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"Keyboard\",\n                    \"id\": \"ff527021-f211-4c02-933e-5976594c46ed\",\n                    \"path\": \"2DVector\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": true,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"up\",\n                    \"id\": \"563fbfdd-0f09-408d-aa75-8642c4f08ef0\",\n                    \"path\": \"<Keyboard>/w\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"up\",\n                    \"id\": \"eb480147-c587-4a33-85ed-eb0ab9942c43\",\n                    \"path\": \"<Keyboard>/upArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"down\",\n                    \"id\": \"2bf42165-60bc-42ca-8072-8c13ab40239b\",\n                    \"path\": \"<Keyboard>/s\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"down\",\n                    \"id\": \"85d264ad-e0a0-4565-b7ff-1a37edde51ac\",\n                    \"path\": \"<Keyboard>/downArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"left\",\n                    \"id\": \"74214943-c580-44e4-98eb-ad7eebe17902\",\n                    \"path\": \"<Keyboard>/a\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"left\",\n                    \"id\": \"cea9b045-a000-445b-95b8-0c171af70a3b\",\n                    \"path\": \"<Keyboard>/leftArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"right\",\n                    \"id\": \"8607c725-d935-4808-84b1-8354e29bab63\",\n                    \"path\": \"<Keyboard>/d\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"right\",\n                    \"id\": \"4cda81dc-9edd-4e03-9d7c-a71a14345d0b\",\n                    \"path\": \"<Keyboard>/rightArrow\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Navigate\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": true\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"9e92bb26-7e3b-4ec4-b06b-3c8f8e498ddc\",\n                    \"path\": \"*/{Submit}\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse;Gamepad;Touch;Joystick;XR\",\n                    \"action\": \"Submit\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"82627dcc-3b13-4ba9-841d-e4b746d6553e\",\n                    \"path\": \"*/{Cancel}\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse;Gamepad;Touch;Joystick;XR\",\n                    \"action\": \"Cancel\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"c52c8e0b-8179-41d3-b8a1-d149033bbe86\",\n                    \"path\": \"<Mouse>/position\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Point\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"e1394cbc-336e-44ce-9ea8-6007ed6193f7\",\n                    \"path\": \"<Pen>/position\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Keyboard&Mouse\",\n                    \"action\": \"Point\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"5693e57a-238a-46ed-b5ae-e64e6e574302\",\n                    \"path\": \"<Touchscreen>/touch*/position\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Touch\",\n                    \"action\": \"Point\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"4faf7dc9-b979-4210-aa8c-e808e1ef89f5\",\n                    \"path\": \"<Mouse>/leftButton\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Click\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"8d66d5ba-88d7-48e6-b1cd-198bbfef7ace\",\n                    \"path\": \"<Pen>/tip\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"Click\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"47c2a644-3ebc-4dae-a106-589b7ca75b59\",\n                    \"path\": \"<Touchscreen>/touch*/press\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"Touch\",\n                    \"action\": \"Click\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"bb9e6b34-44bf-4381-ac63-5aa15d19f677\",\n                    \"path\": \"<XRController>/trigger\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"XR\",\n                    \"action\": \"Click\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"38c99815-14ea-4617-8627-164d27641299\",\n                    \"path\": \"<Mouse>/scroll\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"ScrollWheel\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"24066f69-da47-44f3-a07e-0015fb02eb2e\",\n                    \"path\": \"<Mouse>/middleButton\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"MiddleClick\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"4c191405-5738-4d4b-a523-c6a301dbf754\",\n                    \"path\": \"<Mouse>/rightButton\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \";Keyboard&Mouse\",\n                    \"action\": \"RightClick\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"7236c0d9-6ca3-47cf-a6ee-a97f5b59ea77\",\n                    \"path\": \"<XRController>/devicePosition\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"XR\",\n                    \"action\": \"TrackedDevicePosition\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"23e01e3a-f935-4948-8d8b-9bcac77714fb\",\n                    \"path\": \"<XRController>/deviceRotation\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"XR\",\n                    \"action\": \"TrackedDeviceOrientation\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"bfd91131-b298-4cb4-a81b-4578f3fe9b3f\",\n                    \"path\": \"<Keyboard>/tab\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"OpenInventory\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"12d14c8b-bbf7-499e-b132-0b2834b3ca42\",\n                    \"path\": \"<Keyboard>/e\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"UseItem\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                },\n                {\n                    \"name\": \"\",\n                    \"id\": \"50530dc8-2ff3-41c6-8041-cec0afed42b0\",\n                    \"path\": \"<Keyboard>/escape\",\n                    \"interactions\": \"\",\n                    \"processors\": \"\",\n                    \"groups\": \"\",\n                    \"action\": \"MenuInGame\",\n                    \"isComposite\": false,\n                    \"isPartOfComposite\": false\n                }\n            ]\n        }\n    ],\n    \"controlSchemes\": [\n        {\n            \"name\": \"Keyboard&Mouse\",\n            \"bindingGroup\": \"Keyboard&Mouse\",\n            \"devices\": [\n                {\n                    \"devicePath\": \"<Keyboard>\",\n                    \"isOptional\": false,\n                    \"isOR\": false\n                },\n                {\n                    \"devicePath\": \"<Mouse>\",\n                    \"isOptional\": false,\n                    \"isOR\": false\n                }\n            ]\n        },\n        {\n            \"name\": \"Gamepad\",\n            \"bindingGroup\": \"Gamepad\",\n            \"devices\": [\n                {\n                    \"devicePath\": \"<Gamepad>\",\n                    \"isOptional\": false,\n                    \"isOR\": false\n                }\n            ]\n        },\n        {\n            \"name\": \"Touch\",\n            \"bindingGroup\": \"Touch\",\n            \"devices\": [\n                {\n                    \"devicePath\": \"<Touchscreen>\",\n                    \"isOptional\": false,\n                    \"isOR\": false\n                }\n            ]\n        },\n        {\n            \"name\": \"Joystick\",\n            \"bindingGroup\": \"Joystick\",\n            \"devices\": [\n                {\n                    \"devicePath\": \"<Joystick>\",\n                    \"isOptional\": false,\n                    \"isOR\": false\n                }\n            ]\n        },\n        {\n            \"name\": \"XR\",\n            \"bindingGroup\": \"XR\",\n            \"devices\": [\n                {\n                    \"devicePath\": \"<XRController>\",\n                    \"isOptional\": false,\n                    \"isOR\": false\n                }\n            ]\n        }\n    ]\n}",0);
        Raw.Read<int>(this).pad_8 = param1;
        pIVar2 = (InputActionMap)UnityEngine.InputSystem.InputActionAsset.FindActionMap(param1,"Player",1,0);
        this.m_Player = pIVar2;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(pIVar2,"Move",1,0);
        this.m_Player_Move = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_Player,"Look",1,0);
        this.m_Player_Look = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_Player,"Fire",1,0);
        this.m_Player_Fire = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_Player,"RightClick",1,0);
        this.m_Player_RightClick = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_Player,"SpaceClick",1,0);
        this.m_Player_SpaceClick = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_Player,"Beam",1,0);
        this.m_Player_Beam = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_Player,"Rest",1,0);
        this.m_Player_Rest = pIVar3;
        pIVar2 = (InputActionMap) UnityEngine.InputSystem.InputActionAsset.FindActionMap(Raw.Read<int>(this).pad_8,"UI",1,0);
        this.m_UI = pIVar2;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(pIVar2,"Navigate",1,0);
        this.m_UI_Navigate = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"Submit",1,0);
        this.m_UI_Submit = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"Cancel",1,0);
        this.m_UI_Cancel = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"Point",1,0);
        this.m_UI_Point = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"Click",1,0);
        this.m_UI_Click = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"ScrollWheel",1,0);
        this.m_UI_ScrollWheel = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"MiddleClick",1,0);
        this.m_UI_MiddleClick = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"RightClick",1,0);
        this.m_UI_RightClick = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"TrackedDevicePosition",1,0);
        this.m_UI_TrackedDevicePosition = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"TrackedDeviceOrientation",1,0);
        this.m_UI_TrackedDeviceOrientation = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"OpenInventory",1,0);
        this.m_UI_OpenInventory = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"UseItem",1,0);
        this.m_UI_UseItem = pIVar3;
        pIVar3 = (InputAction)UnityEngine.InputSystem.InputActionMap.FindAction(this.m_UI,"MenuInGame",1,0);
        this.m_UI_MenuInGame = pIVar3;
    }

    // RVA: 0x385B Offset: 0x385B VA: 0x385B Slot: 1
    protected override void Finalize()
    {

    }

    // RVA: 0x385C Offset: 0x385C VA: 0x385C Slot: 17
    public void Dispose()
    {
        int param1 = default;

        param1 = Raw.Read<int>(this).pad_8;
        UnityEngine.Object.Destroy(param1,0);
    }

    // RVA: 0x385D Offset: 0x385D VA: 0x385D Slot: 7
    public Nullable<InputBinding> get_bindingMask()
    {
        int iVar1 = default;

        iVar1 = Raw.Read<int>(this).pad_8;
        Raw.Write<long>(__ret, Raw.Read<long>(iVar1 + 0x1c));
        Raw.Write<long>(__ret + 10, Raw.Read<long>(iVar1 + 0x44));
        Raw.Write<long>(__ret + 8, Raw.Read<long>(iVar1 + 0x3c));
        Raw.Write<long>(__ret + 6, Raw.Read<long>(iVar1 + 0x34));
        Raw.Write<long>(__ret + 4, Raw.Read<long>(iVar1 + 0x2c));
        Raw.Write<long>(__ret + 2, Raw.Read<long>(iVar1 + 0x24));
        return;
    }

    // RVA: 0x385E Offset: 0x385E VA: 0x385E Slot: 8
    public void set_bindingMask(Nullable<InputBinding> value)
    {
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        local_8 = Raw.Read<long>(value + 10);
        local_10 = Raw.Read<long>(value + 8);
        local_18 = Raw.Read<long>(value + 6);
        local_20 = Raw.Read<long>(value + 4);
        local_28 = Raw.Read<long>(value + 2);
        local_30 = Raw.Read<long>(value);
        UnityEngine.InputSystem.InputActionAsset.set_bindingMask(Raw.Read<int>(this).pad_8,&local_30,0);
    }

    // RVA: 0x385F Offset: 0x385F VA: 0x385F Slot: 9
    public Nullable<ReadOnlyArray<InputDevice>> get_devices()
    {
        long local_10 = default;
        long local_8 = default;

        UnityEngine.InputSystem.InputActionAsset.get_devices(&local_10,Raw.Read<int>(this).pad_8,0);
        Raw.Write<long>(__ret + 2, local_8);
        Raw.Write<long>(__ret, local_10);
        return;
    }

    // RVA: 0x3860 Offset: 0x3860 VA: 0x3860 Slot: 10
    public void set_devices(Nullable<ReadOnlyArray<InputDevice>> value)
    {
        long local_10 = default;
        long local_8 = default;

        local_8 = Raw.Read<long>(value + 2);
        local_10 = Raw.Read<long>(value);
        UnityEngine.InputSystem.InputActionAsset.set_devices(Raw.Read<int>(this).pad_8,&local_10,0);
    }

    // RVA: 0x3861 Offset: 0x3861 VA: 0x3861 Slot: 11
    public ReadOnlyArray<InputControlScheme> get_controlSchemes()
    {
        long local_10 = default;
        int local_8 = default;

        UnityEngine.InputSystem.InputActionAsset.get_controlSchemes(&local_10,Raw.Read<int>(this).pad_8,0);
        __ret[2]._opaque = local_8;
        Raw.Write<long>(__ret, local_10);
        return;
    }

    // RVA: 0x3862 Offset: 0x3862 VA: 0x3862 Slot: 12
    public bool Contains(InputAction action)
    {
        int uVar1 = default;

        uVar1 = UnityEngine.InputSystem.InputActionAsset.Contains(Raw.Read<int>(this).pad_8,action,0);
        return SUB41(uVar1,0);
    }

    // RVA: 0x3863 Offset: 0x3863 VA: 0x3863 Slot: 15
    public IEnumerator<InputAction> GetEnumerator()
    {
        System.Collections.Generic.IEnumerator.InputAction pSVar1 = default;

        pSVar1 = (System.Collections.Generic.IEnumerator.InputAction) /* candidates: UnityEngine.InputSystem.InputActionAsset.GetEnumerator | UnityEngine.InputSystem.InputActionAsset.System.Collections.IEnumerable.GetEnumerator */ unnamed_function_49014(Raw.Read<int>(this).pad_8,0);
        return pSVar1;
    }

    // RVA: 0x3864 Offset: 0x3864 VA: 0x3864 Slot: 16
    private IEnumerator System.Collections.IEnumerable.GetEnumerator()
    {
        System.Collections.Generic.IEnumerator.InputAction pSVar1 = default;

        pSVar1 = (System.Collections.Generic.IEnumerator.InputAction) /* candidates: UnityEngine.InputSystem.InputActionAsset.GetEnumerator | UnityEngine.InputSystem.InputActionAsset.System.Collections.IEnumerable.GetEnumerator */ unnamed_function_49014(Raw.Read<int>(this).pad_8,0);
        return pSVar1;
    }

    // RVA: 0x3865 Offset: 0x3865 VA: 0x3865 Slot: 13
    public void Enable()
    {
        UnityEngine.InputSystem.InputActionAsset.Enable(Raw.Read<int>(this).pad_8,0);
    }

    // RVA: 0x3866 Offset: 0x3866 VA: 0x3866 Slot: 14
    public void Disable()
    {
        UnityEngine.InputSystem.InputActionAsset.Disable(Raw.Read<int>(this).pad_8,0);
    }

    // RVA: 0x3867 Offset: 0x3867 VA: 0x3867 Slot: 4
    public IEnumerable<InputBinding> get_bindings()
    {
        System.Collections.Generic.IEnumerable.InputBinding pSVar1 = default;

        pSVar1 = (System.Collections.Generic.IEnumerable.InputBinding) UnityEngine.InputSystem.InputActionAsset.get_bindings(Raw.Read<int>(this).pad_8,0);
        return pSVar1;
    }

    // RVA: 0x3868 Offset: 0x3868 VA: 0x3868 Slot: 5
    public InputAction FindAction(string actionNameOrId, bool throwIfNotFound = False)
    {
        uint in_register_20000021 = default;
        UnityEngine.InputSystem.InputAction pUVar1 = default;

        pUVar1 = (UnityEngine.InputSystem.InputAction) UnityEngine.InputSystem.InputActionAsset.FindAction(Raw.Read<int>(this).pad_8,actionNameOrId, CONCAT31(in_register_20000021,throwIfNotFound),0);
        return pUVar1;
    }

    // RVA: 0x3869 Offset: 0x3869 VA: 0x3869 Slot: 6
    public int FindBinding(InputBinding bindingMask, out InputAction action)
    {
        long local_30 = default;
        long local_28 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        InputAction local_8 = default;

        local_8 = this.m_Player_Beam;
        local_10._0_4_ = this.m_Player_RightClick;
        local_10._4_4_ = this.m_Player_SpaceClick;
        local_18._0_4_ = this.m_Player_Look;
        local_18._4_4_ = this.m_Player_Fire;
        local_20._0_4_ = this.m_PlayerActionsCallbackInterfaces;
        local_20._4_4_ = this.m_Player_Move;
        local_28._0_1_ = this.pad_8[0];
        local_28._1_1_ = this.pad_8[1];
        local_28._2_1_ = this.pad_8[2];
        local_28._3_1_ = this.pad_8[3];
        local_28._4_4_ = this.m_Player;
        local_30._0_4_ = this.klass;
        local_30._4_4_ = this.monitor;
        UnityEngine.InputSystem.InputActionAsset.FindBinding(Raw.Read<int>(__ret + 8),&local_30,bindingMask,0);
        return;
    }

    // RVA: 0x386A Offset: 0x386A VA: 0x386A
    public InputSystem_Actions.PlayerActions get_Player()
    {

    }

    // RVA: 0x386B Offset: 0x386B VA: 0x386B
    public InputSystem_Actions.UIActions get_UI()
    {

    }

    // RVA: 0x386C Offset: 0x386C VA: 0x386C
    public InputControlScheme get_KeyboardMouseScheme()
    {
        int iVar1 = default;
        long local_30 = default;
        string local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        if (this.m_KeyboardMouseSchemeIndex == -1) {
            iVar1 = UnityEngine.InputSystem.InputActionAsset.FindControlSchemeIndex(Raw.Read<int>(this).pad_8,"Keyboard&Mouse",0);
            this.m_KeyboardMouseSchemeIndex = iVar1;
        }
        UnityEngine.InputSystem.InputActionAsset.get_controlSchemes(&local_20,Raw.Read<int>(this).pad_8,0);
        local_8 = local_18;
        local_10 = local_20;
        UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>.get_Item(&local_30,&local_10,this.m_KeyboardMouseSchemeIndex,DAT_ram_0056592c);
        __ret.m_DeviceRequirements.m_ControlPath = local_28;
        __ret.m_Name = (string)(int)local_30;
        __ret.m_BindingGroup = (string)local_30._4_4_;
        return;
    }

    // RVA: 0x386D Offset: 0x386D VA: 0x386D
    public InputControlScheme get_GamepadScheme()
    {
        int iVar1 = default;
        long local_30 = default;
        string local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        if (this.m_GamepadSchemeIndex == -1) {
            iVar1 = UnityEngine.InputSystem.InputActionAsset.FindControlSchemeIndex(Raw.Read<int>(this).pad_8,"Gamepad",0);
            this.m_GamepadSchemeIndex = iVar1;
        }
        UnityEngine.InputSystem.InputActionAsset.get_controlSchemes(&local_20,Raw.Read<int>(this).pad_8,0);
        local_8 = local_18;
        local_10 = local_20;
        UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>.get_Item(&local_30,&local_10,this.m_GamepadSchemeIndex,DAT_ram_0056592c);
        __ret.m_DeviceRequirements.m_ControlPath = local_28;
        __ret.m_Name = (string)(int)local_30;
        __ret.m_BindingGroup = (string)local_30._4_4_;
        return;
    }

    // RVA: 0x386E Offset: 0x386E VA: 0x386E
    public InputControlScheme get_TouchScheme()
    {
        int iVar1 = default;
        long local_30 = default;
        string local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        if (this.m_TouchSchemeIndex == -1) {
            iVar1 = UnityEngine.InputSystem.InputActionAsset.FindControlSchemeIndex(Raw.Read<int>(this).pad_8,"Touch",0);
            this.m_TouchSchemeIndex = iVar1;
        }
        UnityEngine.InputSystem.InputActionAsset.get_controlSchemes(&local_20,Raw.Read<int>(this).pad_8,0);
        local_8 = local_18;
        local_10 = local_20;
        UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>.get_Item(&local_30,&local_10,this.m_TouchSchemeIndex,DAT_ram_0056592c);
        __ret.m_DeviceRequirements.m_ControlPath = local_28;
        __ret.m_Name = (string)(int)local_30;
        __ret.m_BindingGroup = (string)local_30._4_4_;
        return;
    }

    // RVA: 0x386F Offset: 0x386F VA: 0x386F
    public InputControlScheme get_JoystickScheme()
    {
        int iVar1 = default;
        long local_30 = default;
        string local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        if (this.m_JoystickSchemeIndex == -1) {
            iVar1 = UnityEngine.InputSystem.InputActionAsset.FindControlSchemeIndex(Raw.Read<int>(this).pad_8,"Joystick",0);
            this.m_JoystickSchemeIndex = iVar1;
        }
        UnityEngine.InputSystem.InputActionAsset.get_controlSchemes(&local_20,Raw.Read<int>(this).pad_8,0);
        local_8 = local_18;
        local_10 = local_20;
        UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>.get_Item(&local_30,&local_10,this.m_JoystickSchemeIndex,DAT_ram_0056592c);
        __ret.m_DeviceRequirements.m_ControlPath = local_28;
        __ret.m_Name = (string)(int)local_30;
        __ret.m_BindingGroup = (string)local_30._4_4_;
        return;
    }

    // RVA: 0x3870 Offset: 0x3870 VA: 0x3870
    public InputControlScheme get_XRScheme()
    {
        int iVar1 = default;
        long local_30 = default;
        string local_28 = default;
        long local_20 = default;
        int local_18 = default;
        long local_10 = default;
        int local_8 = default;

        if (this.m_XRSchemeIndex == -1) {
            iVar1 = UnityEngine.InputSystem.InputActionAsset.FindControlSchemeIndex(Raw.Read<int>(this).pad_8,"XR",0);
            this.m_XRSchemeIndex = iVar1;
        }
        UnityEngine.InputSystem.InputActionAsset.get_controlSchemes(&local_20,Raw.Read<int>(this).pad_8,0);
        local_8 = local_18;
        local_10 = local_20;
        UnityEngine.InputSystem.Utilities.ReadOnlyArray<InputControlScheme>.get_Item(&local_30,&local_10,this.m_XRSchemeIndex,DAT_ram_0056592c);
        __ret.m_DeviceRequirements.m_ControlPath = local_28;
        __ret.m_Name = (string)(int)local_30;
        __ret.m_BindingGroup = (string)local_30._4_4_;
        return;
    }
}
