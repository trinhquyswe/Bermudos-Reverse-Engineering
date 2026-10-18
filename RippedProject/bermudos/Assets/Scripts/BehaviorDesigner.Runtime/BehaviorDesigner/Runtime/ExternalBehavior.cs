// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.ExternalBehavior (TypeDefIndex 9845).

using BehaviorDesigner.Runtime.Tasks;
using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>
	/// A behavior tree stored as an asset, so several <see cref="Behavior"/> components can run the
	/// same tree. (The game's ExternalBehaviorTree derives from this.)
	/// </summary>
	public abstract class ExternalBehavior : ScriptableObject, IBehavior
	{
		private BehaviorSource mBehaviorSource;
		private bool mInitialized;

		public BehaviorSource BehaviorSource
		{
			get { return GetBehaviorSource(); }
			set { SetBehaviorSource(value); }
		}

		public bool Initialized
		{
			get { return mInitialized; }
		}

		public BehaviorSource GetBehaviorSource()
		{
			return mBehaviorSource ?? (mBehaviorSource = new BehaviorSource(this));
		}

		public void SetBehaviorSource(BehaviorSource behaviorSource)
		{
			mBehaviorSource = behaviorSource;
			if (behaviorSource != null)
			{
				behaviorSource.Owner = this;
			}
		}

		public Object GetObject()
		{
			return this;
		}

		public string GetOwnerName()
		{
			return name;
		}

		public void Init()
		{
			mInitialized = true;
		}

		public SharedVariable GetVariable(string name)
		{
			return GetBehaviorSource().GetVariable(name);
		}

		public void SetVariable(string name, SharedVariable item)
		{
			GetBehaviorSource().SetVariable(name, item);
		}

		public void SetVariableValue(string name, object value)
		{
			GetBehaviorSource().SetVariableValue(name, value);
		}

		/// <summary>Finds the first task of the given type in this tree.</summary>
		public T FindTask<T>() where T : Task
		{
			return FindTask<T>(GetBehaviorSource().RootTask);
		}

		private T FindTask<T>(Task task) where T : Task
		{
			if (task == null)
			{
				return null;
			}
			if (task is T match)
			{
				return match;
			}
			if (task is ParentTask parent && parent.Children != null)
			{
				for (int i = 0; i < parent.Children.Count; i++)
				{
					T found = FindTask<T>(parent.Children[i]);
					if (found != null)
					{
						return found;
					}
				}
			}
			return null;
		}
	}
}
