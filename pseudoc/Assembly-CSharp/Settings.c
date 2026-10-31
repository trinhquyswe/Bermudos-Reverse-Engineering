// Assembly-CSharp :: Settings
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public static class Settings // TypeDefIndex: 5669
{
	// Fields
	public static int isIdle; // 0x0
	public static int isMoving; // 0x4
	public static int isAttack; // 0x8
	public static int isFaint; // 0xC
	public static int aimUp; // 0x10
	public static int aimUp1; // 0x14
	public static int aimDown; // 0x18
	public static int aimUpRight; // 0x1C
	public static int aimUpLeft; // 0x20
	public static int aimRight; // 0x24
	public static int aimLeft; // 0x28
	public static int aimDownRight; // 0x2C
	public static int aimDownLeft; // 0x30
	public static int Idle; // 0x34
	public static int ouch; // 0x38
	public static int OpenMouth; // 0x3C
	public static int eyeAttack; // 0x40
	public static int eyeLoop; // 0x44
	public static int Hop; // 0x48
	public static int EyeLoopDeath; // 0x4C
	public static int Base; // 0x50
	public static int Walk; // 0x54
	public static int swipe; // 0x58
	public static int mouthOpenLoop; // 0x5C
	public static int spearAtk; // 0x60
	public static int spinny; // 0x64
	public static int Idle2; // 0x68
	public static int ouch2; // 0x6C
	public static int OpenMouth2; // 0x70
	public static int eyeAttack2; // 0x74
	public static int eyeLoop2; // 0x78
	public static int Hop2; // 0x7C
	public static int EyeLoopDeath2; // 0x80
	public static int Base2; // 0x84
	public static int Walk2; // 0x88
	public static int swipe2; // 0x8C
	public static int mouthOpenLoop2; // 0x90
	public static int spearAtk2; // 0x94
	public static int spinny2; // 0x98
	public const float epsilon = 0.01;
	public const float contactDamageCollisionResetDelay = 0.5;
	public const float dashCooldown = 1;
	public const float rageAmount = 1;
	public const float bashCooldown = 0.5;
	public const float beamRotationOffset = 90;
	public const int inventorySlotQuantity = 70;
	public const int hotBarSlotQuantity = 10;
	public const int maxStack = 10;
	public const float orthoSize = 8.4375;
	public const float musicFadeOutTime = 0.5;
	public const float musicFadeInTime = 0.5;
	public const int attackCost = 10;

	// Methods

	// RVA: 0x394B Offset: 0x394B VA: 0x394B
	private static void .cctor() { }
}

===== C# end =====
*/

// ---- Settings$$.cctor ----
// C#: void Settings___cctor (const MethodInfo* method);

void Settings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  
  if (DAT_ram_00664919 == '\0') {
    unnamed_function_1099(&Settings_TypeInfo);
    unnamed_function_1099(&StringLiteral_12021);
    unnamed_function_1099(&StringLiteral_4250);
    unnamed_function_1099(&StringLiteral_8780);
    unnamed_function_1099(&StringLiteral_10987);
    unnamed_function_1099(&StringLiteral_11510);
    unnamed_function_1099(&StringLiteral_3792);
    unnamed_function_1099(&StringLiteral_9918);
    unnamed_function_1099(&StringLiteral_9924);
    unnamed_function_1099(&StringLiteral_1973);
    unnamed_function_1099(&StringLiteral_10985);
    unnamed_function_1099(&StringLiteral_12280);
    unnamed_function_1099(&StringLiteral_12814);
    unnamed_function_1099(&StringLiteral_11507);
    unnamed_function_1099(&StringLiteral_4364);
    unnamed_function_1099(&StringLiteral_9919);
    unnamed_function_1099(&StringLiteral_9922);
    unnamed_function_1099(&StringLiteral_12815);
    unnamed_function_1099(&StringLiteral_11509);
    unnamed_function_1099(&StringLiteral_9917);
    unnamed_function_1099(&StringLiteral_9916);
    unnamed_function_1099(&StringLiteral_11511);
    unnamed_function_1099(&StringLiteral_5897);
    unnamed_function_1099(&StringLiteral_12022);
    unnamed_function_1099(&StringLiteral_12279);
    unnamed_function_1099(&StringLiteral_10986);
    unnamed_function_1099(&StringLiteral_5896);
    unnamed_function_1099(&StringLiteral_3791);
    unnamed_function_1099(&StringLiteral_12821);
    unnamed_function_1099(&StringLiteral_10988);
    unnamed_function_1099(&StringLiteral_4249);
    unnamed_function_1099(&StringLiteral_8779);
    unnamed_function_1099(&StringLiteral_12942);
    unnamed_function_1099(&StringLiteral_9920);
    unnamed_function_1099(&StringLiteral_9923);
    unnamed_function_1099(&StringLiteral_4363);
    unnamed_function_1099(&StringLiteral_9921);
    unnamed_function_1099(&StringLiteral_1974);
    unnamed_function_1099(&StringLiteral_12820);
    unnamed_function_1099(&StringLiteral_12943);
    DAT_ram_00664919 = '\x01';
  }
  uVar1 = unnamed_function_45407(StringLiteral_11510,0);
  **(undefined4 **)(Settings_TypeInfo + 0x5c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_11511,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 4) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_11507,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 8) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_11509,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0xc) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9921,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x10) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9922,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x14) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9916,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x18) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9924,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x1c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9923,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x20) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9920,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x24) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9919,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x28) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9918,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x2c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_9917,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x30) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_4363,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x34) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12279,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x38) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_5896,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x3c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_10985,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x40) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_10987,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x44) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_4249,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x48) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_3791,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x4c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_1973,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x50) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_8779,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x54) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12942,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x58) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12021,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x5c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12814,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x60) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12820,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 100) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_4364,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x68) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12280,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x6c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_5897,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x70) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_10986,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x74) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_10988,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x78) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_4250,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x7c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_3792,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x80) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_1974,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x84) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_8780,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x88) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12943,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x8c) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12022,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x90) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12815,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x94) = uVar1;
  uVar1 = unnamed_function_45407(StringLiteral_12821,0);
  *(undefined4 *)(*(int *)(Settings_TypeInfo + 0x5c) + 0x98) = uVar1;
  return;
}

