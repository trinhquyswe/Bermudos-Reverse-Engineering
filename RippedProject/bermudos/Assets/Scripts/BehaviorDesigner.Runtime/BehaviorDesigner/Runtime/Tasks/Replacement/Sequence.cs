// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.
//
// Working composite tasks, in their own namespace so they cannot collide with the recovered copies of
// Behavior Designer's own tasks (which live in Assembly-CSharp and hold disassembly, not code).

using UnityEngine;

namespace BehaviorDesigner.Runtime.Tasks.Replacement
{
	/// <summary>Runs its children in order; fails as soon as one fails, succeeds when all succeed.</summary>
	public class Sequence : Composite
	{
		private int currentChildIndex;

		public override int CurrentChildIndex()
		{
			return currentChildIndex;
		}

		public override TaskStatus OnUpdate()
		{
			if (Children.Count == 0)
			{
				return TaskStatus.Success;
			}
			while (currentChildIndex < Children.Count)
			{
				TaskStatus status = Children[currentChildIndex].OnUpdate();
				Children[currentChildIndex].Status = status;
				if (status == TaskStatus.Running)
				{
					return TaskStatus.Running;
				}
				if (status == TaskStatus.Failure)
				{
					return TaskStatus.Failure;
				}
				currentChildIndex++;
			}
			return TaskStatus.Success;
		}

		public override void OnChildExecuted(int childIndex, TaskStatus childStatus)
		{
			if (childStatus != TaskStatus.Running)
			{
				currentChildIndex = childIndex + 1;
			}
		}

		public override void OnEnd()
		{
			currentChildIndex = 0;
		}

		public override void OnReset()
		{
			currentChildIndex = 0;
		}
	}
}
