// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.

using UnityEngine;

namespace BehaviorDesigner.Runtime.Tasks.Replacement
{
	/// <summary>Returns Running for a number of seconds, then Success.</summary>
	public class Wait : Action
	{
		public float duration = 1f;

		private float startTime;

		public override void OnStart()
		{
			startTime = Time.time;
		}

		public override TaskStatus OnUpdate()
		{
			return Time.time - startTime >= duration ? TaskStatus.Success : TaskStatus.Running;
		}

		public override void OnReset()
		{
			duration = 1f;
		}
	}
}
