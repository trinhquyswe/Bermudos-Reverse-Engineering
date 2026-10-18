// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.

namespace BehaviorDesigner.Runtime.Tasks.Replacement
{
	/// <summary>Runs one child and flips Success and Failure.</summary>
	public class Inverter : Decorator
	{
		public override TaskStatus OnUpdate()
		{
			if (Children.Count == 0)
			{
				return TaskStatus.Success;
			}
			TaskStatus status = Children[0].OnUpdate();
			Children[0].Status = status;
			if (status == TaskStatus.Success)
			{
				return TaskStatus.Failure;
			}
			if (status == TaskStatus.Failure)
			{
				return TaskStatus.Success;
			}
			return TaskStatus.Running;
		}
	}
}
