// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.

namespace BehaviorDesigner.Runtime.Tasks.Replacement
{
	/// <summary>Runs its children in order, succeeding as soon as one succeeds.</summary>
	public class Selector : Composite
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
				return TaskStatus.Failure;
			}
			while (currentChildIndex < Children.Count)
			{
				TaskStatus status = Children[currentChildIndex].OnUpdate();
				Children[currentChildIndex].Status = status;
				if (status == TaskStatus.Running)
				{
					return TaskStatus.Running;
				}
				if (status == TaskStatus.Success)
				{
					return TaskStatus.Success;
				}
				currentChildIndex++;
			}
			return TaskStatus.Failure;
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
