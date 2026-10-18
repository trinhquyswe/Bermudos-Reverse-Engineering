// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.BehaviorSource (TypeDefIndex 9841).

using System.Collections.Generic;
using BehaviorDesigner.Runtime.Tasks;

namespace BehaviorDesigner.Runtime
{
	/// <summary>The tree and variables of one behavior: entry task, root task, detached tasks and the shared variables.</summary>
	public class BehaviorSource : IVariableSource
	{
		public string behaviorName;
		public string behaviorDescription;

		private Task mEntryTask;
		private Task mRootTask;
		private List<Task> mDetachedTasks;
		private List<SharedVariable> mVariables;
		private IBehavior mOwner;

		public Task EntryTask
		{
			get { return mEntryTask; }
			set { mEntryTask = value; }
		}

		public Task RootTask
		{
			get { return mRootTask; }
			set { mRootTask = value; }
		}

		public List<Task> DetachedTasks
		{
			get { return mDetachedTasks ?? (mDetachedTasks = new List<Task>()); }
			set { mDetachedTasks = value; }
		}

		public List<SharedVariable> Variables
		{
			get { return mVariables ?? (mVariables = new List<SharedVariable>()); }
			set { mVariables = value; }
		}

		public IBehavior Owner
		{
			get { return mOwner; }
			set { mOwner = value; }
		}

		public BehaviorSource()
		{
		}

		public BehaviorSource(IBehavior owner)
		{
			mOwner = owner;
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
