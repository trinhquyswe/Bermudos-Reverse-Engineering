// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.Tasks.ParentTask (TypeDefIndex 9857).

using System.Collections.Generic;

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>Base class for tasks that own children: composites and decorators.</summary>
	public abstract class ParentTask : Task
	{
		protected List<Task> children;

		public List<Task> Children
		{
			get { return children ?? (children = new List<Task>()); }
			set { children = value; }
		}

		/// <summary>How many children this task accepts.</summary>
		public virtual int MaxChildren()
		{
			return int.MaxValue;
		}

		/// <summary>True when all children may be ticked in the same frame (Parallel and friends).</summary>
		public virtual bool CanRunParallelChildren()
		{
			return false;
		}

		/// <summary>Index of the child that is currently executing.</summary>
		public virtual int CurrentChildIndex()
		{
			return 0;
		}

		/// <summary>False when this branch is currently disabled (e.g. a conditional evaluator that failed).</summary>
		public virtual bool CanExecute()
		{
			return true;
		}

		/// <summary>Lets a decorator rewrite the status its child reported.</summary>
		public virtual TaskStatus Decorate(TaskStatus status)
		{
			return status;
		}

		public virtual bool CanReevaluate()
		{
			return false;
		}

		public virtual void OnChildExecuted(TaskStatus childStatus) { }

		public virtual void OnChildExecuted(int childIndex, TaskStatus childStatus) { }

		public virtual void OnChildStarted() { }

		public virtual void OnChildStarted(int childIndex) { }

		/// <summary>Lets a composite turn a child's status into its own.</summary>
		public virtual TaskStatus OverrideStatus(TaskStatus status)
		{
			return status;
		}

		public virtual TaskStatus OverrideStatus()
		{
			return TaskStatus.Running;
		}

		public virtual void OnConditionalAbort(int childIndex) { }

		public override float GetUtility()
		{
			float utility = 0f;
			if (children != null)
			{
				for (int i = 0; i < children.Count; i++)
				{
					if (children[i] != null)
					{
						utility += children[i].GetUtility();
					}
				}
			}
			return utility;
		}

		public override void OnDrawGizmos()
		{
			if (children == null)
			{
				return;
			}
			for (int i = 0; i < children.Count; i++)
			{
				if (children[i] != null)
				{
					children[i].OnDrawGizmos();
				}
			}
		}

		public void AddChild(Task child, int index)
		{
			if (index < 0 || index > Children.Count)
			{
				index = Children.Count;
			}
			Children.Insert(index, child);
		}

		public void ReplaceAddChild(Task child, int index)
		{
			if (index >= 0 && index < Children.Count)
			{
				Children[index] = child;
			}
			else
			{
				AddChild(child, index);
			}
		}
	}
}
