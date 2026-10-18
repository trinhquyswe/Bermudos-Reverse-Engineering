// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.IVariableSource (TypeDefIndex 9848).

using System.Collections.Generic;

namespace BehaviorDesigner.Runtime
{
	/// <summary>Something that stores behavior-tree variables (<see cref="BehaviorSource"/>, <see cref="GlobalVariables"/>).</summary>
	public interface IVariableSource
	{
		SharedVariable GetVariable(string name);
		List<SharedVariable> GetAllVariables();
		void SetVariable(string name, SharedVariable sharedVariable);
		void UpdateVariableName(SharedVariable sharedVariable, string name);
		void SetAllVariables(List<SharedVariable> variables);
	}
}
