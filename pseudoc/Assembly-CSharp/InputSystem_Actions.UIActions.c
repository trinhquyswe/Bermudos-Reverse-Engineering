// Assembly-CSharp :: InputSystem_Actions.UIActions
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public struct InputSystem_Actions.UIActions // TypeDefIndex: 5635
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
	public void .ctor(InputSystem_Actions wrapper) { }

	// RVA: 0x3882 Offset: 0x3882 VA: 0x3882
	public InputAction get_Navigate() { }

	// RVA: 0x3883 Offset: 0x3883 VA: 0x3883
	public InputAction get_Submit() { }

	// RVA: 0x3884 Offset: 0x3884 VA: 0x3884
	public InputAction get_Cancel() { }

	// RVA: 0x3885 Offset: 0x3885 VA: 0x3885
	public InputAction get_Point() { }

	// RVA: 0x3886 Offset: 0x3886 VA: 0x3886
	public InputAction get_Click() { }

	// RVA: 0x3887 Offset: 0x3887 VA: 0x3887
	public InputAction get_ScrollWheel() { }

	// RVA: 0x3888 Offset: 0x3888 VA: 0x3888
	public InputAction get_MiddleClick() { }

	// RVA: 0x3889 Offset: 0x3889 VA: 0x3889
	public InputAction get_RightClick() { }

	// RVA: 0x388A Offset: 0x388A VA: 0x388A
	public InputAction get_TrackedDevicePosition() { }

	// RVA: 0x388B Offset: 0x388B VA: 0x388B
	public InputAction get_TrackedDeviceOrientation() { }

	// RVA: 0x388C Offset: 0x388C VA: 0x388C
	public InputAction get_OpenInventory() { }

	// RVA: 0x388D Offset: 0x388D VA: 0x388D
	public InputAction get_UseItem() { }

	// RVA: 0x388E Offset: 0x388E VA: 0x388E
	public InputAction get_MenuInGame() { }

	// RVA: 0x388F Offset: 0x388F VA: 0x388F
	public InputActionMap Get() { }

	// RVA: 0x3890 Offset: 0x3890 VA: 0x3890
	public void Enable() { }

	// RVA: 0x3891 Offset: 0x3891 VA: 0x3891
	public void Disable() { }

	// RVA: 0x3892 Offset: 0x3892 VA: 0x3892
	public bool get_enabled() { }

	// RVA: 0x3893 Offset: 0x3893 VA: 0x3893
	public static InputActionMap op_Implicit(InputSystem_Actions.UIActions set) { }

	// RVA: 0x3894 Offset: 0x3894 VA: 0x3894
	public void AddCallbacks(InputSystem_Actions.IUIActions instance) { }

	// RVA: 0x3672 Offset: 0x3672 VA: 0x3672
	private void UnregisterCallbacks(InputSystem_Actions.IUIActions instance) { }

	// RVA: 0x3895 Offset: 0x3895 VA: 0x3895
	public void RemoveCallbacks(InputSystem_Actions.IUIActions instance) { }

	// RVA: 0x3896 Offset: 0x3896 VA: 0x3896
	public void SetCallbacks(InputSystem_Actions.IUIActions instance) { }
}

===== C# end =====
*/

// ---- InputSystem_Actions.UIActions$$UnregisterCallbacks ----
// C#: void InputSystem_Actions_UIActions__UnregisterCallbacks (InputSystem_Actions_UIActions_o __this, InputSystem_Actions_IUIActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_UIActions__UnregisterCallbacks
               (InputSystem_Actions_UIActions_o *__this,InputSystem_Actions_IUIActions_o *instance,
               MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = 0;
  if (DAT_ram_00664b5d == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&InputSystem_Actions_IUIActions_TypeInfo);
    DAT_ram_00664b5d = '\x01';
  }
  uVar3 = *(undefined4 *)((int)__this->klass + 0x38);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  if (instance == (InputSystem_Actions_IUIActions_o *)0x0) {
    unnamed_function_1117();
    do {
      halt_trap();
    } while( true );
  }
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
        goto code_r0x81a59aa4;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
code_r0x81a59aa4:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x38);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
        goto code_r0x81a59b45;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
code_r0x81a59b45:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x38);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
        goto code_r0x81a59be6;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
code_r0x81a59be6:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x3c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
        goto code_r0x81a59c87;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
code_r0x81a59c87:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x3c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
        goto code_r0x81a59d28;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
code_r0x81a59d28:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x3c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
        goto code_r0x81a59dc9;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
code_r0x81a59dc9:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x40);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
        goto code_r0x81a59e6a;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
code_r0x81a59e6a:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x40);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
        goto code_r0x81a59f0b;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
code_r0x81a59f0b:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x40);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
        goto code_r0x81a59fac;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
code_r0x81a59fac:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x44);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
        goto code_r0x81a5a04d;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
code_r0x81a5a04d:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x44);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
        goto code_r0x81a5a0ee;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
code_r0x81a5a0ee:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x44);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
        goto code_r0x81a5a18f;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
code_r0x81a5a18f:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x48);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
        goto code_r0x81a5a230;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
code_r0x81a5a230:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x48);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
        goto code_r0x81a5a2d1;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
code_r0x81a5a2d1:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x48);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
        goto code_r0x81a5a372;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
code_r0x81a5a372:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x4c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
        goto code_r0x81a5a413;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
code_r0x81a5a413:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x4c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
        goto code_r0x81a5a4b4;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
code_r0x81a5a4b4:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x4c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
        goto code_r0x81a5a555;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
code_r0x81a5a555:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x50);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
        goto code_r0x81a5a5f6;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
code_r0x81a5a5f6:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x50);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
        goto code_r0x81a5a697;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
code_r0x81a5a697:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x50);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
        goto code_r0x81a5a738;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
code_r0x81a5a738:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x54);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf8;
        goto code_r0x81a5a7d9;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
code_r0x81a5a7d9:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x54);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf8;
        goto code_r0x81a5a87a;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
code_r0x81a5a87a:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x54);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf8;
        goto code_r0x81a5a91b;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
code_r0x81a5a91b:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x58);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x100;
        goto code_r0x81a5a9bc;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
code_r0x81a5a9bc:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x58);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x100;
        goto code_r0x81a5aa5d;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
code_r0x81a5aa5d:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x58);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x100;
        goto code_r0x81a5aafe;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
code_r0x81a5aafe:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x5c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x108;
        goto code_r0x81a5ab9f;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
code_r0x81a5ab9f:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x5c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x108;
        goto code_r0x81a5ac40;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
code_r0x81a5ac40:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x5c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x108;
        goto code_r0x81a5ace1;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
code_r0x81a5ace1:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x60);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x110;
        goto code_r0x81a5ad82;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
code_r0x81a5ad82:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x60);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x110;
        goto code_r0x81a5ae23;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
code_r0x81a5ae23:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x60);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x110;
        goto code_r0x81a5aec4;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
code_r0x81a5aec4:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 100);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x118;
        goto code_r0x81a5af65;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
code_r0x81a5af65:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 100);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x118;
        goto code_r0x81a5b006;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
code_r0x81a5b006:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 100);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x118;
        goto code_r0x81a5b0a7;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
code_r0x81a5b0a7:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x68);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x120;
        goto code_r0x81a5b148;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
code_r0x81a5b148:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x68);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x120;
        goto code_r0x81a5b1e9;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
code_r0x81a5b1e9:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x68);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0x120;
        goto code_r0x81a5b28e;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
code_r0x81a5b28e:
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  return;
}

// ---- InputSystem_Actions.UIActions$$.ctor ----
// C#: void InputSystem_Actions_UIActions___ctor (InputSystem_Actions_UIActions_o __this, InputSystem_Actions_o* wrapper, const MethodInfo* method);

void InputSystem_Actions_PlayerActions___ctor
               (InputSystem_Actions_PlayerActions_o *__this,InputSystem_Actions_o *wrapper,
               MethodInfo *method)

{
  __this->klass = wrapper;
  return;
}

// ---- InputSystem_Actions.UIActions$$get_Navigate ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_Navigate (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_Navigate
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x38);
}

// ---- InputSystem_Actions.UIActions$$get_Submit ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_Submit (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_Submit
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x3c);
}

// ---- InputSystem_Actions.UIActions$$get_Cancel ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_Cancel (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_Cancel
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x40);
}

// ---- InputSystem_Actions.UIActions$$get_Point ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_Point (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_Point(InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x44);
}

// ---- InputSystem_Actions.UIActions$$get_Click ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_Click (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_Click(InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x48);
}

// ---- InputSystem_Actions.UIActions$$get_ScrollWheel ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_ScrollWheel (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_ScrollWheel
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x4c);
}

// ---- InputSystem_Actions.UIActions$$get_MiddleClick ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_MiddleClick (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_MiddleClick
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x50);
}

// ---- InputSystem_Actions.UIActions$$get_RightClick ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_RightClick (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_RightClick
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x54);
}

// ---- InputSystem_Actions.UIActions$$get_TrackedDevicePosition ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_TrackedDevicePosition (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_TrackedDevicePosition
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x58);
}

// ---- InputSystem_Actions.UIActions$$get_TrackedDeviceOrientation ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_TrackedDeviceOrientation (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_TrackedDeviceOrientation
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x5c);
}

// ---- InputSystem_Actions.UIActions$$get_OpenInventory ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_OpenInventory (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_OpenInventory
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x60);
}

// ---- InputSystem_Actions.UIActions$$get_UseItem ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_UseItem (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_UseItem
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 100);
}

// ---- InputSystem_Actions.UIActions$$get_MenuInGame ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_UIActions__get_MenuInGame (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_UIActions__get_MenuInGame
          (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x68);
}

// ---- InputSystem_Actions.UIActions$$Get ----
// C#: UnityEngine_InputSystem_InputActionMap_o* InputSystem_Actions_UIActions__Get (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputActionMap_o *
InputSystem_Actions_UIActions__Get(InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputActionMap_o **)((int)__this->klass + 0x30);
}

// ---- InputSystem_Actions.UIActions$$Enable ----
// C#: void InputSystem_Actions_UIActions__Enable (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

void InputSystem_Actions_UIActions__Enable
               (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  unnamed_function_49010(*(undefined4 *)((int)__this->klass + 0x30),0);
  return;
}

// ---- InputSystem_Actions.UIActions$$Disable ----
// C#: void InputSystem_Actions_UIActions__Disable (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

void InputSystem_Actions_UIActions__Disable
               (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  unnamed_function_49012(*(undefined4 *)((int)__this->klass + 0x30),0);
  return;
}

// ---- InputSystem_Actions.UIActions$$get_enabled ----
// C#: bool InputSystem_Actions_UIActions__get_enabled (InputSystem_Actions_UIActions_o __this, const MethodInfo* method);

bool InputSystem_Actions_UIActions__get_enabled
               (InputSystem_Actions_UIActions_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_48976(*(undefined4 *)((int)__this->klass + 0x30),0);
  return SUB41(uVar1,0);
}

// ---- InputSystem_Actions.UIActions$$op_Implicit ----
// C#: UnityEngine_InputSystem_InputActionMap_o* InputSystem_Actions_UIActions__op_Implicit (InputSystem_Actions_UIActions_o set, const MethodInfo* method);

UnityEngine_InputSystem_InputActionMap_o *
InputSystem_Actions_UIActions__op_Implicit(InputSystem_Actions_UIActions_o *set,MethodInfo *method)

{
  return set[6].klass;
}

// ---- InputSystem_Actions.UIActions$$AddCallbacks ----
// C#: void InputSystem_Actions_UIActions__AddCallbacks (InputSystem_Actions_UIActions_o __this, InputSystem_Actions_IUIActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_UIActions__AddCallbacks
               (InputSystem_Actions_UIActions_o *__this,InputSystem_Actions_IUIActions_o *instance,
               MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (DAT_ram_00664b5c == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&InputSystem_Actions_IUIActions_TypeInfo);
    unnamed_function_1099(&DAT_ram_00564708);
    unnamed_function_1099(&DAT_ram_00564710);
    DAT_ram_00664b5c = '\x01';
  }
  if ((instance != (InputSystem_Actions_IUIActions_o *)0x0) &&
     (iVar1 = unnamed_function_67444
                        (*(undefined4 *)((int)__this->klass + 0x34),instance,DAT_ram_00564710),
     iVar5 = DAT_ram_00564708, iVar1 == 0)) {
    iVar1 = *(int *)((int)__this->klass + 0x34);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (uVar3 < *(uint *)(*(int *)(iVar1 + 8) + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar3 + 1;
      *(InputSystem_Actions_IUIActions_o **)(*(int *)(iVar1 + 8) + uVar3 * 4 + 0x10) = instance;
    }
    else {
      unnamed_function_6534
                (iVar1,instance,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
    }
    uVar4 = *(undefined4 *)((int)__this->klass + 0x38);
    uVar3 = 0;
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a581e4;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
code_r0x81a581e4:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x38);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a58285;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
code_r0x81a58285:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x38);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a58326;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0);
code_r0x81a58326:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x3c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a583c7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
code_r0x81a583c7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x3c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a58468;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
code_r0x81a58468:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x3c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a58509;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,1);
code_r0x81a58509:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x40);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a585aa;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
code_r0x81a585aa:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x40);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a5864b;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
code_r0x81a5864b:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x40);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a586ec;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,2);
code_r0x81a586ec:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x44);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a5878d;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
code_r0x81a5878d:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x44);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a5882e;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
code_r0x81a5882e:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x44);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a588cf;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,3);
code_r0x81a588cf:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x48);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a58970;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
code_r0x81a58970:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x48);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a58a11;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
code_r0x81a58a11:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x48);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a58ab2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,4);
code_r0x81a58ab2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x4c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a58b53;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
code_r0x81a58b53:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x4c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a58bf4;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
code_r0x81a58bf4:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x4c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a58c95;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,5);
code_r0x81a58c95:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x50);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a58d36;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
code_r0x81a58d36:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x50);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a58dd7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
code_r0x81a58dd7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x50);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a58e78;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,6);
code_r0x81a58e78:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x54);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
          goto code_r0x81a58f19;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
code_r0x81a58f19:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x54);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
          goto code_r0x81a58fba;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
code_r0x81a58fba:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x54);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf8;
          goto code_r0x81a5905b;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,7);
code_r0x81a5905b:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x58);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
          goto code_r0x81a590fc;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
code_r0x81a590fc:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x58);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
          goto code_r0x81a5919d;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
code_r0x81a5919d:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x58);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x100;
          goto code_r0x81a5923e;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,8);
code_r0x81a5923e:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x5c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
          goto code_r0x81a592df;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
code_r0x81a592df:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x5c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
          goto code_r0x81a59380;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
code_r0x81a59380:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x5c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x108;
          goto code_r0x81a59421;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,9);
code_r0x81a59421:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x60);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
          goto code_r0x81a594c2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
code_r0x81a594c2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x60);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
          goto code_r0x81a59563;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
code_r0x81a59563:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x60);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x110;
          goto code_r0x81a59604;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,10);
code_r0x81a59604:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 100);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
          goto code_r0x81a596a5;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
code_r0x81a596a5:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 100);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
          goto code_r0x81a59746;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
code_r0x81a59746:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 100);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x118;
          goto code_r0x81a597e7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xb);
code_r0x81a597e7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x68);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
          goto code_r0x81a59888;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
code_r0x81a59888:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x68);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
          goto code_r0x81a59929;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
code_r0x81a59929:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x68);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IUIActions_TypeInfo == *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8))
        {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0x120;
          goto code_r0x81a599ce;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IUIActions_TypeInfo,0xc);
code_r0x81a599ce:
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
  }
  return;
}

// ---- InputSystem_Actions.UIActions$$RemoveCallbacks ----
// C#: void InputSystem_Actions_UIActions__RemoveCallbacks (InputSystem_Actions_UIActions_o __this, InputSystem_Actions_IUIActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_UIActions__RemoveCallbacks
               (InputSystem_Actions_UIActions_o *__this,InputSystem_Actions_IUIActions_o *instance,
               MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664b5e == '\0') {
    unnamed_function_1099(&DAT_ram_00564718);
    DAT_ram_00664b5e = '\x01';
  }
  iVar1 = unnamed_function_67450
                    (*(undefined4 *)((int)__this->klass + 0x34),instance,DAT_ram_00564718);
  if (iVar1 != 0) {
    InputSystem_Actions_UIActions__UnregisterCallbacks(__this,instance,(MethodInfo *)__this);
  }
  return;
}

// ---- InputSystem_Actions.UIActions$$SetCallbacks ----
// C#: void InputSystem_Actions_UIActions__SetCallbacks (InputSystem_Actions_UIActions_o __this, InputSystem_Actions_IUIActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_UIActions__SetCallbacks
               (InputSystem_Actions_UIActions_o *__this,InputSystem_Actions_IUIActions_o *instance,
               MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664b5f == '\0') {
    unnamed_function_1099(&DAT_ram_0056171c);
    unnamed_function_1099(&DAT_ram_00561720);
    unnamed_function_1099(&DAT_ram_00561724);
    unnamed_function_1099(&DAT_ram_0056470c);
    unnamed_function_1099(&DAT_ram_00564714);
    DAT_ram_00664b5f = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  unnamed_function_6549(&local_10,*(undefined4 *)((int)__this->klass + 0x34),DAT_ram_00564714);
  auStack_20._8_4_ = 0;
  auStack_20._12_4_ = &local_10;
  do {
    DAT_ram_005ddf34 = 0;
    iVar1 = import::env::invoke_iii
                      (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10,
                       DAT_ram_00561720);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 == 1) {
      param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a5b46f;
    }
    if (iVar1 == 0) goto code_r0x81a5b4c4;
    DAT_ram_005ddf34 = 0;
    import::env::invoke_viii
              (s___Scripting__UnityEngine__Capsul_ram_00003670 + 2,__this,local_8._4_4_,
               (MethodInfo *)auStack_20);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
  } while (iVar2 != 1);
  param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a5b46f:
  iVar2 = import::env::getTempRet0();
  iVar1 = import::env::llvm_eh_typeid_for(&DAT_ram_004a99ec);
  if (iVar2 == iVar1) {
    piVar3 = (int *)import::env::__cxa_begin_catch(param1);
    iVar1 = *piVar3;
    DAT_ram_005ddf34 = 0;
    auStack_20._8_4_ = iVar1;
    import::env::invoke_v(0x3a);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 != 1) {
      if (iVar1 != 0) {
        unnamed_function_1088(iVar1);
        do {
          halt_trap();
        } while( true );
      }
code_r0x81a5b4c4:
      DAT_ram_005ddf34 = 0;
      iVar2 = *(int *)((int)__this->klass + 0x34);
      iVar1 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (0 < iVar1) {
        unnamed_function_84588(*(undefined4 *)(iVar2 + 8),0,iVar1,0);
      }
      InputSystem_Actions_UIActions__AddCallbacks(__this,instance,(MethodInfo *)auStack_20);
      return;
    }
    param1 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Capsul_ram_00003670 + 3,auStack_20 + 8);
  iVar2 = DAT_ram_005ddf34;
  DAT_ram_005ddf34 = 0;
  if (iVar2 == 1) {
    import::env::__cxa_find_matching_catch_3(0);
    import::env::getTempRet0();
    unnamed_function_642();
    do {
      halt_trap();
    } while( true );
  }
  import::env::__resumeException(param1);
  do {
    halt_trap();
  } while( true );
}

