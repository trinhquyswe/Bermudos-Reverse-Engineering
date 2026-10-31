// Assembly-CSharp :: MovementDetailsSO
// C# skeleton from il2cppdumper dump.cs; pseudo-C from Ghidra 12.1.4 Wasm decompiler

/* ===== C# =====
public class MovementDetailsSO : ScriptableObject // TypeDefIndex: 5678
{
	// Fields
	[Space(10)]
	[Tooltip("The minimum move speed. The GetMoveSpeed method calculates a random value between the minimum and maximum")]
	[Header("MOVEMENT DETAILS")]
	public float minMoveSpeed; // 0xC
	[Tooltip("The maximum move speed. The GetMoveSpeed method calculates a random value between the minimum and maximum")]
	public float maxMoveSpeed; // 0x10
	[Tooltip("If there is a roll movement- this is the roll speed")]
	public float dashSpeed; // 0x14
	[Tooltip("If there is a roll movement - this is the roll distance")]
	public float dashDistance; // 0x18
	[Tooltip("If there is a roll movement - this is the cooldown time in seconds between roll actions")]
	public float dashCooldownTime; // 0x1C

	// Methods

	// RVA: 0x3968 Offset: 0x3968 VA: 0x3968
	public float GetMoveSpeed() { }

	// RVA: 0x3969 Offset: 0x3969 VA: 0x3969
	public void .ctor() { }
}

===== C# end =====
*/

// ---- MovementDetailsSO$$GetMoveSpeed ----
// C#: float MovementDetailsSO__GetMoveSpeed (MovementDetailsSO_o* __this, const MethodInfo* method);

float MovementDetailsSO__GetMoveSpeed(MovementDetailsSO_o *__this,MethodInfo *method)

{
  float param1;
  
  param1 = __this->minMoveSpeed;
  if (param1 != __this->maxMoveSpeed) {
    param1 = unnamed_function_44583(param1,__this->maxMoveSpeed,0);
  }
  return param1;
}

// ---- MovementDetailsSO$$.ctor ----
// C#: void MovementDetailsSO___ctor (MovementDetailsSO_o* __this, const MethodInfo* method);

void MovementDetailsSO___ctor(MovementDetailsSO_o *__this,MethodInfo *method)

{
  __this->minMoveSpeed = 8.0;
  __this->maxMoveSpeed = 8.0;
  unnamed_function_44741(__this,0);
  return;
}

