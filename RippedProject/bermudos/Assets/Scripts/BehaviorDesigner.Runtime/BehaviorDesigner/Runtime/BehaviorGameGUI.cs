// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.BehaviorGameGUI (TypeDefIndex 9825).

using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>Draws which tasks a behavior tree is currently running, on screen.</summary>
	public class BehaviorGameGUI : MonoBehaviour
	{
		private BehaviorManager behaviorManager;
		private Camera mainCamera;

		private void Start()
		{
			behaviorManager = BehaviorManager.instance;
			mainCamera = Camera.main;
		}

		private void OnGUI()
		{
			if (behaviorManager == null || behaviorManager.Behaviors == null)
			{
				return;
			}
			GUILayout.BeginArea(new Rect(10f, 10f, 300f, 500f));
			for (int i = 0; i < behaviorManager.Behaviors.Count; i++)
			{
				Behavior behavior = behaviorManager.Behaviors[i];
				if (behavior == null)
				{
					continue;
				}
				GUILayout.Label(behavior.BehaviorName + " (" + behavior.ExecutionStatus + ")");
			}
			GUILayout.EndArea();
		}
	}
}
