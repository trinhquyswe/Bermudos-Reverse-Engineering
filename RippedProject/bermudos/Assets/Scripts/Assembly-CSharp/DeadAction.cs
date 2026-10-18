// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using UnityEngine;

public class DeadAction : Action
{
	public SharedMaterial deadMaterial;

	[ColorUsage(true, true)]
	public Color fadeColor;

	public float fadeTime = 3f;

	private float fadeAmount;
	private float fadeTime2;
	private Color defaultColor;

	public override void OnStart()
	{
		defaultColor = deadMaterial.Value.color;
		deadMaterial.Value.SetColor("_Color", fadeColor);
		fadeTime2 = fadeTime;
	}

	public override TaskStatus OnUpdate()
	{
		if (0f < fadeTime)
		{
			fadeAmount += Time.deltaTime / fadeTime2;
			deadMaterial.Value.SetFloat("_FadeAmount", fadeAmount);
			fadeTime -= Time.deltaTime;
			return TaskStatus.Running;
		}

		GameManager.Instance.gameState = GameState.Won;
		PlayerPrefs.SetInt("BossDefeated", 1);
		GameManager.Instance.SaveBossState();
		GameManager.Instance.OnGameStateChange?.Invoke(GameState.Won);
		return TaskStatus.Failure;
	}

	public override void OnEnd()
	{
		deadMaterial.Value.SetColor("_Color", defaultColor);
		deadMaterial.Value.SetFloat("_FadeAmount", 0f);
	}
}
