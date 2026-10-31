// Assembly-CSharp :: InputSystem_Actions.PlayerActions
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public struct InputSystem_Actions.PlayerActions // TypeDefIndex: 5634
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
	public void .ctor(InputSystem_Actions wrapper) { }

	// RVA: 0x3872 Offset: 0x3872 VA: 0x3872
	public InputAction get_Move() { }

	// RVA: 0x3873 Offset: 0x3873 VA: 0x3873
	public InputAction get_Look() { }

	// RVA: 0x3874 Offset: 0x3874 VA: 0x3874
	public InputAction get_Fire() { }

	// RVA: 0x3875 Offset: 0x3875 VA: 0x3875
	public InputAction get_RightClick() { }

	// RVA: 0x3876 Offset: 0x3876 VA: 0x3876
	public InputAction get_SpaceClick() { }

	// RVA: 0x3877 Offset: 0x3877 VA: 0x3877
	public InputAction get_Beam() { }

	// RVA: 0x3878 Offset: 0x3878 VA: 0x3878
	public InputAction get_Rest() { }

	// RVA: 0x3879 Offset: 0x3879 VA: 0x3879
	public InputActionMap Get() { }

	// RVA: 0x387A Offset: 0x387A VA: 0x387A
	public void Enable() { }

	// RVA: 0x387B Offset: 0x387B VA: 0x387B
	public void Disable() { }

	// RVA: 0x387C Offset: 0x387C VA: 0x387C
	public bool get_enabled() { }

	// RVA: 0x387D Offset: 0x387D VA: 0x387D
	public static InputActionMap op_Implicit(InputSystem_Actions.PlayerActions set) { }

	// RVA: 0x387E Offset: 0x387E VA: 0x387E
	public void AddCallbacks(InputSystem_Actions.IPlayerActions instance) { }

	// RVA: 0x3670 Offset: 0x3670 VA: 0x3670
	private void UnregisterCallbacks(InputSystem_Actions.IPlayerActions instance) { }

	// RVA: 0x387F Offset: 0x387F VA: 0x387F
	public void RemoveCallbacks(InputSystem_Actions.IPlayerActions instance) { }

	// RVA: 0x3880 Offset: 0x3880 VA: 0x3880
	public void SetCallbacks(InputSystem_Actions.IPlayerActions instance) { }
}

===== C# end =====
*/

// ---- InputSystem_Actions.PlayerActions$$UnregisterCallbacks ----
// C#: void InputSystem_Actions_PlayerActions__UnregisterCallbacks (InputSystem_Actions_PlayerActions_o __this, InputSystem_Actions_IPlayerActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_PlayerActions__UnregisterCallbacks
               (InputSystem_Actions_PlayerActions_o *__this,
               InputSystem_Actions_IPlayerActions_o *instance,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = 0;
  if (DAT_ram_00664b59 == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&InputSystem_Actions_IPlayerActions_TypeInfo);
    DAT_ram_00664b59 = '\x01';
  }
  uVar3 = *(undefined4 *)((int)__this->klass + 0x14);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  if (instance == (InputSystem_Actions_IPlayerActions_o *)0x0) {
    unnamed_function_1117();
    do {
      halt_trap();
    } while( true );
  }
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
        goto code_r0x81a56ffe;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
code_r0x81a56ffe:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x14);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
        goto code_r0x81a5709f;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
code_r0x81a5709f:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x14);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = iVar4 + *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + 0xc0;
        goto code_r0x81a57140;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
code_r0x81a57140:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x18);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
        goto code_r0x81a571e1;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
code_r0x81a571e1:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x18);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
        goto code_r0x81a57282;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
code_r0x81a57282:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x18);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 200;
        goto code_r0x81a57323;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
code_r0x81a57323:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x1c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
        goto code_r0x81a573c4;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
code_r0x81a573c4:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x1c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
        goto code_r0x81a57465;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
code_r0x81a57465:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x1c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd0;
        goto code_r0x81a57506;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
code_r0x81a57506:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x20);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
        goto code_r0x81a575a7;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
code_r0x81a575a7:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x20);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
        goto code_r0x81a57648;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
code_r0x81a57648:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x20);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xd8;
        goto code_r0x81a576e9;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
code_r0x81a576e9:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x24);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
        goto code_r0x81a5778a;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
code_r0x81a5778a:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x24);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
        goto code_r0x81a5782b;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
code_r0x81a5782b:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x24);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe0;
        goto code_r0x81a578cc;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
code_r0x81a578cc:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x28);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
        goto code_r0x81a5796d;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
code_r0x81a5796d:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x28);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
        goto code_r0x81a57a0e;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
code_r0x81a57a0e:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x28);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xe8;
        goto code_r0x81a57aaf;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
code_r0x81a57aaf:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x2c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
        goto code_r0x81a57b50;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
code_r0x81a57b50:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48900(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x2c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
        goto code_r0x81a57bf1;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
code_r0x81a57bf1:
  uVar1 = 0;
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48904(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)((int)__this->klass + 0x2c);
  uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
  iVar4 = instance->_opaque;
  if (*(ushort *)(iVar4 + 0xb6) != 0) {
    do {
      if (InputSystem_Actions_IPlayerActions_TypeInfo ==
          *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8)) {
        iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + uVar1 * 8 + 4) * 8 + iVar4 + 0xf0;
        goto code_r0x81a57c96;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(iVar4 + 0xb6) != uVar1);
  }
  iVar4 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
code_r0x81a57c96:
  unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar4 + 4),0);
  unnamed_function_48902(uVar3,uVar2,0);
  return;
}

// ---- InputSystem_Actions.PlayerActions$$.ctor ----
// C#: void InputSystem_Actions_PlayerActions___ctor (InputSystem_Actions_PlayerActions_o __this, InputSystem_Actions_o* wrapper, const MethodInfo* method);

void InputSystem_Actions_PlayerActions___ctor
               (InputSystem_Actions_PlayerActions_o *__this,InputSystem_Actions_o *wrapper,
               MethodInfo *method)

{
  __this->klass = wrapper;
  return;
}

// ---- InputSystem_Actions.PlayerActions$$get_Move ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_PlayerActions__get_Move (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_PlayerActions__get_Move
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x14);
}

// ---- InputSystem_Actions.PlayerActions$$get_Look ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_PlayerActions__get_Look (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_PlayerActions__get_Look
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x18);
}

// ---- InputSystem_Actions.PlayerActions$$get_Fire ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_PlayerActions__get_Fire (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_PlayerActions__get_Fire
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x1c);
}

// ---- InputSystem_Actions.PlayerActions$$get_RightClick ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_PlayerActions__get_RightClick (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_PlayerActions__get_RightClick
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x20);
}

// ---- InputSystem_Actions.PlayerActions$$get_SpaceClick ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_PlayerActions__get_SpaceClick (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_PlayerActions__get_SpaceClick
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x24);
}

// ---- InputSystem_Actions.PlayerActions$$get_Beam ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_PlayerActions__get_Beam (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_PlayerActions__get_Beam
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x28);
}

// ---- InputSystem_Actions.PlayerActions$$get_Rest ----
// C#: UnityEngine_InputSystem_InputAction_o* InputSystem_Actions_PlayerActions__get_Rest (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputAction_o *
InputSystem_Actions_PlayerActions__get_Rest
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputAction_o **)((int)__this->klass + 0x2c);
}

// ---- InputSystem_Actions.PlayerActions$$Get ----
// C#: UnityEngine_InputSystem_InputActionMap_o* InputSystem_Actions_PlayerActions__Get (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

UnityEngine_InputSystem_InputActionMap_o *
InputSystem_Actions_PlayerActions__Get
          (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  return *(UnityEngine_InputSystem_InputActionMap_o **)((int)__this->klass + 0xc);
}

// ---- InputSystem_Actions.PlayerActions$$Enable ----
// C#: void InputSystem_Actions_PlayerActions__Enable (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

void InputSystem_Actions_PlayerActions__Enable
               (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  unnamed_function_49010(*(undefined4 *)((int)__this->klass + 0xc),0);
  return;
}

// ---- InputSystem_Actions.PlayerActions$$Disable ----
// C#: void InputSystem_Actions_PlayerActions__Disable (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

void InputSystem_Actions_PlayerActions__Disable
               (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  unnamed_function_49012(*(undefined4 *)((int)__this->klass + 0xc),0);
  return;
}

// ---- InputSystem_Actions.PlayerActions$$get_enabled ----
// C#: bool InputSystem_Actions_PlayerActions__get_enabled (InputSystem_Actions_PlayerActions_o __this, const MethodInfo* method);

bool InputSystem_Actions_PlayerActions__get_enabled
               (InputSystem_Actions_PlayerActions_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = unnamed_function_48976(*(undefined4 *)((int)__this->klass + 0xc),0);
  return SUB41(uVar1,0);
}

// ---- InputSystem_Actions.PlayerActions$$op_Implicit ----
// C#: UnityEngine_InputSystem_InputActionMap_o* InputSystem_Actions_PlayerActions__op_Implicit (InputSystem_Actions_PlayerActions_o set, const MethodInfo* method);

UnityEngine_InputSystem_InputActionMap_o *
InputSystem_Actions_PlayerActions__op_Implicit
          (InputSystem_Actions_PlayerActions_o *set,MethodInfo *method)

{
  return set[1].monitor;
}

// ---- InputSystem_Actions.PlayerActions$$AddCallbacks ----
// C#: void InputSystem_Actions_PlayerActions__AddCallbacks (InputSystem_Actions_PlayerActions_o __this, InputSystem_Actions_IPlayerActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_PlayerActions__AddCallbacks
               (InputSystem_Actions_PlayerActions_o *__this,
               InputSystem_Actions_IPlayerActions_o *instance,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (DAT_ram_00664b58 == '\0') {
    unnamed_function_1099(&System_Action_InputAction_CallbackContext__TypeInfo);
    unnamed_function_1099(&InputSystem_Actions_IPlayerActions_TypeInfo);
    unnamed_function_1099(&DAT_ram_005646f0);
    unnamed_function_1099(&DAT_ram_005646f8);
    DAT_ram_00664b58 = '\x01';
  }
  if ((instance != (InputSystem_Actions_IPlayerActions_o *)0x0) &&
     (iVar1 = unnamed_function_67444
                        (*(undefined4 *)((int)__this->klass + 0x10),instance,DAT_ram_005646f8),
     iVar5 = DAT_ram_005646f0, iVar1 == 0)) {
    iVar1 = *(int *)((int)__this->klass + 0x10);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (uVar3 < *(uint *)(*(int *)(iVar1 + 8) + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar3 + 1;
      *(InputSystem_Actions_IPlayerActions_o **)(*(int *)(iVar1 + 8) + uVar3 * 4 + 0x10) = instance;
    }
    else {
      unnamed_function_6534
                (iVar1,instance,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
    }
    uVar4 = *(undefined4 *)((int)__this->klass + 0x14);
    uVar3 = 0;
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a56290;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
code_r0x81a56290:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x14);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a56331;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
code_r0x81a56331:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x14);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = iVar5 + *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + 0xc0;
          goto code_r0x81a563d2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,0);
code_r0x81a563d2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x18);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a56473;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
code_r0x81a56473:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x18);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a56514;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
code_r0x81a56514:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x18);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 200;
          goto code_r0x81a565b5;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,1);
code_r0x81a565b5:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x1c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a56656;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
code_r0x81a56656:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x1c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a566f7;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
code_r0x81a566f7:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x1c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd0;
          goto code_r0x81a56798;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,2);
code_r0x81a56798:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x20);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a56839;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
code_r0x81a56839:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x20);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a568da;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
code_r0x81a568da:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x20);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xd8;
          goto code_r0x81a5697b;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,3);
code_r0x81a5697b:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x24);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a56a1c;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
code_r0x81a56a1c:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x24);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a56abd;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
code_r0x81a56abd:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x24);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe0;
          goto code_r0x81a56b5e;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,4);
code_r0x81a56b5e:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x28);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a56bff;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
code_r0x81a56bff:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x28);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a56ca0;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
code_r0x81a56ca0:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x28);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xe8;
          goto code_r0x81a56d41;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,5);
code_r0x81a56d41:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x2c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a56de2;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
code_r0x81a56de2:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48899(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x2c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a56e83;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
code_r0x81a56e83:
    uVar3 = 0;
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48903(uVar4,uVar2,0);
    uVar4 = *(undefined4 *)((int)__this->klass + 0x2c);
    uVar2 = unnamed_function_95402(System_Action_InputAction_CallbackContext__TypeInfo);
    iVar5 = instance->_opaque;
    if (*(ushort *)(iVar5 + 0xb6) != 0) {
      do {
        if (InputSystem_Actions_IPlayerActions_TypeInfo ==
            *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8)) {
          iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + uVar3 * 8 + 4) * 8 + iVar5 + 0xf0;
          goto code_r0x81a56f28;
        }
        uVar3 = uVar3 + 1;
      } while (*(ushort *)(iVar5 + 0xb6) != uVar3);
    }
    iVar5 = unnamed_function_95091(instance,InputSystem_Actions_IPlayerActions_TypeInfo,6);
code_r0x81a56f28:
    unnamed_function_60160(uVar2,instance,*(undefined4 *)(iVar5 + 4),0);
    unnamed_function_48901(uVar4,uVar2,0);
  }
  return;
}

// ---- InputSystem_Actions.PlayerActions$$RemoveCallbacks ----
// C#: void InputSystem_Actions_PlayerActions__RemoveCallbacks (InputSystem_Actions_PlayerActions_o __this, InputSystem_Actions_IPlayerActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_PlayerActions__RemoveCallbacks
               (InputSystem_Actions_PlayerActions_o *__this,
               InputSystem_Actions_IPlayerActions_o *instance,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_ram_00664b5a == '\0') {
    unnamed_function_1099(&DAT_ram_00564700);
    DAT_ram_00664b5a = '\x01';
  }
  iVar1 = unnamed_function_67450
                    (*(undefined4 *)((int)__this->klass + 0x10),instance,DAT_ram_00564700);
  if (iVar1 != 0) {
    InputSystem_Actions_PlayerActions__UnregisterCallbacks(__this,instance,(MethodInfo *)__this);
  }
  return;
}

// ---- InputSystem_Actions.PlayerActions$$SetCallbacks ----
// C#: void InputSystem_Actions_PlayerActions__SetCallbacks (InputSystem_Actions_PlayerActions_o __this, InputSystem_Actions_IPlayerActions_o* instance, const MethodInfo* method);

void InputSystem_Actions_PlayerActions__SetCallbacks
               (InputSystem_Actions_PlayerActions_o *__this,
               InputSystem_Actions_IPlayerActions_o *instance,MethodInfo *method)

{
  int iVar1;
  undefined4 param1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  undefined8 local_8;
  
  if (DAT_ram_00664b5b == '\0') {
    unnamed_function_1099(&DAT_ram_00561710);
    unnamed_function_1099(&DAT_ram_00561714);
    unnamed_function_1099(&DAT_ram_00561718);
    unnamed_function_1099(&DAT_ram_005646f4);
    unnamed_function_1099(&DAT_ram_005646fc);
    DAT_ram_00664b5b = '\x01';
  }
  local_8 = 0;
  local_10 = 0;
  unnamed_function_6549(&local_10,*(undefined4 *)((int)__this->klass + 0x10),DAT_ram_005646fc);
  auStack_20._8_4_ = 0;
  auStack_20._12_4_ = &local_10;
  do {
    DAT_ram_005ddf34 = 0;
    iVar1 = import::env::invoke_iii
                      (s_Allocator__0___Blocksize__1__mus_ram_00000446 + 0x3d,&local_10,
                       DAT_ram_00561714);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
    if (iVar2 == 1) {
      param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
      goto code_r0x81a57e77;
    }
    if (iVar1 == 0) goto code_r0x81a57ecc;
    DAT_ram_005ddf34 = 0;
    import::env::invoke_viii
              (s___Scripting__UnityEngine__Capsul_ram_00003670,__this,local_8._4_4_,
               (MethodInfo *)auStack_20);
    iVar2 = DAT_ram_005ddf34;
    DAT_ram_005ddf34 = 0;
  } while (iVar2 != 1);
  param1 = import::env::__cxa_find_matching_catch_3(&DAT_ram_004a99ec);
code_r0x81a57e77:
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
code_r0x81a57ecc:
      DAT_ram_005ddf34 = 0;
      iVar2 = *(int *)((int)__this->klass + 0x10);
      iVar1 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (0 < iVar1) {
        unnamed_function_84588(*(undefined4 *)(iVar2 + 8),0,iVar1,0);
      }
      InputSystem_Actions_PlayerActions__AddCallbacks(__this,instance,(MethodInfo *)auStack_20);
      return;
    }
    param1 = import::env::__cxa_find_matching_catch_2();
    import::env::getTempRet0();
  }
  DAT_ram_005ddf34 = 0;
  import::env::invoke_ii(s___Scripting__UnityEngine__Capsul_ram_00003670 + 1,auStack_20 + 8);
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

