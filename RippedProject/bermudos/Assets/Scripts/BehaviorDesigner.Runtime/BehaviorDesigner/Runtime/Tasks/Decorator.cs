// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Matches the metadata shape of
// BehaviorDesigner.Runtime.Tasks.Decorator (TypeDefIndex 9885).

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>A task with exactly one child, whose result it normally transforms.</summary>
	public class Decorator : ParentTask
	{
		public override int MaxChildren()
		{
			return 1;
		}
	}
}
