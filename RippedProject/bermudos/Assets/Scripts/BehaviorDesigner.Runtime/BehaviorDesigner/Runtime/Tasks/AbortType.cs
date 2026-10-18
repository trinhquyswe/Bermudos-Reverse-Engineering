// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>
	/// When a task below a composite may interrupt it. Values are those of the game's metadata
	/// (<c>BehaviorDesigner.Runtime.Tasks.AbortType</c>, TypeDefIndex 9883).
	/// </summary>
	public enum AbortType
	{
		None = 0,
		Self = 1,
		LowerPriority = 2,
		Both = 3,
	}
}
