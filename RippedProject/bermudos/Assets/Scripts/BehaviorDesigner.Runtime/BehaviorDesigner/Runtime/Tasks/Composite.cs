// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.Tasks.Composite (TypeDefIndex 9884).

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>Base class for tasks that run several children under an abort policy.</summary>
	public abstract class Composite : ParentTask
	{
		protected AbortType abortType;

		public AbortType AbortType
		{
			get { return abortType; }
		}

		/// <summary>True when reevaluation of the subtree is accepted from here on.</summary>
		public virtual bool OnReevaluationStarted()
		{
			return false;
		}

		public virtual void OnReevaluationEnded(TaskStatus status) { }
	}
}
