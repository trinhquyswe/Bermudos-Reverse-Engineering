// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System.Collections;
using System.Collections.Generic;
using Esper.ESave;
using UnityEngine;

[RequireComponent(typeof(DestroyedEvent))]
public class Destroyed : MonoBehaviour
{
	private DestroyedEvent destroyedEvent;
	private Player player;
	private DieEvent dieEvent;

	private void Awake()
	{
		destroyedEvent = GetComponent<DestroyedEvent>();
		player = GetComponent<Player>();
		dieEvent = GetComponent<DieEvent>();
	}

	private void OnEnable()
	{
		destroyedEvent.OnDestroyed += DestroyedEvent_OnDestroyed;
	}

	private void OnDisable()
	{
		destroyedEvent.OnDestroyed -= DestroyedEvent_OnDestroyed;
	}

	private void DestroyedEvent_OnDestroyed(DestroyedEvent destroyedEvent, DestroyedEventArgs destroyedEventArgs)
	{
		if (destroyedEventArgs.playerDied)
		{
			StartCoroutine(Die());
			return;
		}
		if (!destroyedEventArgs.bossDied)
		{
			MarkEnemyAsDead();
			Object.Destroy(gameObject);
		}
	}

	private IEnumerator Die()
	{
		yield return new WaitForSeconds(3f);
		GameManager.Instance.TransitionToGame();
		dieEvent.CallDieEvent();
	}

	private void MarkEnemyAsDead()
	{
		Enemy enemy = GetComponent<Enemy>();
		EnemyManagerDetailsSO[] enemyManagerDetailsSO = GameManager.Instance.enemyManagerDetailsSO;
		for (int i = 0; i < enemyManagerDetailsSO.Length; i++)
		{
			string enemyManagerDataKey = enemyManagerDetailsSO[i].enemyManagerDataKey;
			if (!string.Equals(enemy.mapKey, enemyManagerDataKey))
			{
				continue;
			}
			SaveFile saveFile = GameManager.Instance.saveFileSetup.GetSaveFile();
			List<bool> enemyStateList = saveFile.GetData<List<bool>>(enemyManagerDataKey);
			enemyStateList[enemy.enemyID] = true;
			saveFile.AddOrUpdateData(enemyManagerDataKey, enemyStateList);
			saveFile.Save();
		}
	}
}
