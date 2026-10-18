// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.

using UnityEngine;

namespace BehaviorDesigner.Runtime.Tasks.Replacement
{
	/// <summary>Writes a message to the console and succeeds - the simplest possible leaf task.</summary>
	[TaskCategory("Replacement")]
	[TaskDescription("Logs a message and returns success.")]
	public class Log : Action
	{
		public string text = "behavior tree tick";

		public override TaskStatus OnUpdate()
		{
			Debug.Log(text);
			return TaskStatus.Success;
		}

		public override void OnReset()
		{
			text = "behavior tree tick";
		}
	}
}
