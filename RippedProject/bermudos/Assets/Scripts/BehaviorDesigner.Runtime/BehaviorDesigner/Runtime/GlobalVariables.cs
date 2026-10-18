// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.GlobalVariables (TypeDefIndex 9846).

using System.Collections.Generic;
using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>Variables shared by every behavior tree in the game.</summary>
	public class GlobalVariables : ScriptableObject, IVariableSource
	{
		private static GlobalVariables instance;

		private List<SharedVariable> mVariables;

		public static GlobalVariables Instance
		{
			get
			{
				if (instance == null)
				{
					instance = CreateInstance<GlobalVariables>();
				}
				return instance;
			}
		}

		public List<SharedVariable> Variables
		{
			get { return mVariables ?? (mVariables = new List<SharedVariable>()); }
			set { mVariables = value; }
		}

		public SharedVariable GetVariable(string name)
		{
			if (name == null || mVariables == null)
			{
				return null;
			}
			for (int i = 0; i < mVariables.Count; i++)
			{
				if (mVariables[i] != null && mVariables[i].Name == name)
				{
					return mVariables[i];
				}
			}
			return null;
		}

		public List<SharedVariable> GetAllVariables()
		{
			return Variables;
		}

		public void SetVariable(string name, SharedVariable sharedVariable)
		{
			SharedVariable existing = GetVariable(name);
			if (existing != null)
			{
				existing.SetValue(sharedVariable.GetValue());
				return;
			}
			sharedVariable.Name = name;
			sharedVariable.IsGlobal = true;
			Variables.Add(sharedVariable);
		}

		public void SetVariableValue(string name, object value)
		{
			SharedVariable variable = GetVariable(name);
			if (variable != null)
			{
				variable.SetValue(value);
			}
		}

		public void UpdateVariableName(SharedVariable sharedVariable, string name)
		{
			if (sharedVariable != null)
			{
				sharedVariable.Name = name;
			}
		}

		public void SetAllVariables(List<SharedVariable> variables)
		{
			mVariables = variables;
		}
	}
}
