// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.

namespace BehaviorDesigner.Runtime
{
	/// <summary>
	/// How often a behavior tree is ticked. Values are those of the game's metadata
	/// (<c>BehaviorDesigner.Runtime.UpdateIntervalType</c>, TypeDefIndex 9827).
	/// </summary>
	public enum UpdateIntervalType
	{
		EveryFrame = 0,
		SpecifySeconds = 1,
		Manual = 2,
	}
}
