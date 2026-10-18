// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.Tasks.BehaviorReference (TypeDefIndex 9897).

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>Runs another behavior tree in place of this branch (the game's BehaviorTreeReference derives from it).</summary>
	public abstract class BehaviorReference : Action
	{
		public ExternalBehavior[] externalBehaviors;
		public bool collapsed;

		public virtual ExternalBehavior[] GetExternalBehaviors()
		{
			return externalBehaviors;
		}

		public override void OnReset()
		{
			externalBehaviors = null;
			collapsed = false;
		}
	}
}
