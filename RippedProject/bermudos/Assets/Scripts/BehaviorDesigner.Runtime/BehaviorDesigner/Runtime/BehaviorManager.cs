// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.BehaviorManager (TypeDefIndex 9840).

using System.Collections.Generic;
using BehaviorDesigner.Runtime.Tasks;
using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>
	/// Keeps the running behaviors together so they can be paused, interrupted and inspected from one
	/// place. Created on demand by <see cref="Behavior.CreateBehaviorManager"/>.
	/// </summary>
	public class BehaviorManager : MonoBehaviour
	{
		public static BehaviorManager instance;

		private readonly List<Behavior> behaviors = new List<Behavior>();

		/// <summary>True while the game is running (the editor uses it to decide what to draw).</summary>
		public static bool IsPlaying { get; set; }

		public List<Behavior> Behaviors
		{
			get { return behaviors; }
		}

		public static bool IsParentTask(Task task)
		{
			return task is ParentTask;
		}

		public void Awake()
		{
			if (instance == null)
			{
				instance = this;
			}
		}

		public void EnableBehavior(Behavior behavior)
		{
			if (behavior != null && !behaviors.Contains(behavior))
			{
				behaviors.Add(behavior);
			}
		}

		public void DisableBehavior(Behavior behavior)
		{
			DisableBehavior(behavior, false);
		}

		public void DisableBehavior(Behavior behavior, bool paused)
		{
			if (behavior == null)
			{
				return;
			}
			behavior.DisableBehavior(paused);
			behaviors.Remove(behavior);
		}

		public void DestroyBehavior(Behavior behavior)
		{
			DisableBehavior(behavior, false);
		}

		/// <summary>Interrupts the given task (and, when supplied, hands over to another task).</summary>
		public void Interrupt(Behavior behavior, Task task, TaskStatus interruptTaskStatus)
		{
			Interrupt(behavior, task, null, interruptTaskStatus);
		}

		public void Interrupt(Behavior behavior, Task task, Task interruptionTask, TaskStatus interruptTaskStatus)
		{
			if (task == null)
			{
				return;
			}
			task.Status = interruptTaskStatus;
			task.OnEnd();
			if (interruptionTask != null)
			{
				interruptionTask.Status = TaskStatus.Running;
				interruptionTask.OnStart();
			}
		}

		public void OnDestroy()
		{
			if (instance == this)
			{
				instance = null;
			}
		}
	}
}
