// AUTHORED REPLACEMENT - not recovered from the game. Behavior Designer is shipped as
// BehaviorDesigner.Runtime.dll (Opsive) and is not reverse-engineered here; this hand-written,
// API-compatible runtime stands in for it. Names, namespaces and signatures follow the IL2CPP
// metadata (Dump/dump.cs); the implementation is original. See NOTICE.md.

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>
	/// Result of executing a task. Values are those of the game's metadata
	/// (<c>BehaviorDesigner.Runtime.Tasks.TaskStatus</c>, TypeDefIndex 9893).
	/// </summary>
	public enum TaskStatus
	{
		Inactive = 0,
		Failure = 1,
		Success = 2,
		Running = 3,
	}
}
