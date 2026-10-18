// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.IBehavior (TypeDefIndex 9847).

using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>A behavior tree owner: the <see cref="Behavior"/> component or an <see cref="ExternalBehavior"/> asset.</summary>
	public interface IBehavior
	{
		string GetOwnerName();
		int GetInstanceID();
		BehaviorSource GetBehaviorSource();
		void SetBehaviorSource(BehaviorSource behaviorSource);
		Object GetObject();
		SharedVariable GetVariable(string name);
		void SetVariable(string name, SharedVariable item);
		void SetVariableValue(string name, object value);
	}
}
