// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using UnityEngine;

[CreateAssetMenu(fileName = "MovementDetails_", menuName = "ScriptableObjects/Movement/MovementDetails")]
public class MovementDetailsSO : ScriptableObject
{
	[Space(10)]
	[Tooltip("The minimum move speed. The GetMoveSpeed method calculates a random value between the minimum and maximum")]
	[Header("MOVEMENT DETAILS")]
	public float minMoveSpeed = 16f;

	[Tooltip("The maximum move speed. The GetMoveSpeed method calculates a random value between the minimum and maximum")]
	public float maxMoveSpeed = 16f;

	[Tooltip("If there is a roll movement- this is the roll speed")]
	public float dashSpeed;

	[Tooltip("If there is a roll movement - this is the roll distance")]
	public float dashDistance;

	[Tooltip("If there is a roll movement - this is the cooldown time in seconds between roll actions")]
	public float dashCooldownTime;

	public float GetMoveSpeed()
	{
		return Random.Range(minMoveSpeed, maxMoveSpeed);
	}
}
