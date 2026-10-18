// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.Behavior (TypeDefIndex 9824); the engine loop is original.

using System;
using System.Collections.Generic;
using BehaviorDesigner.Runtime.Tasks;
using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>
	/// Runs one behavior tree: owns its <see cref="BehaviorSource"/>, ticks the root task every frame,
	/// forwards the scene callbacks to the tasks and carries the tree's shared variables.
	/// (The game's BehaviorTree component derives from this.)
	/// </summary>
	public abstract class Behavior : MonoBehaviour, IBehavior
	{
		/// <summary>Called when the tree starts, restarts or ends.</summary>
		public delegate void BehaviorHandler();

		private BehaviorSource mBehaviorSource;
		private bool isPaused;
		private bool running;
		private readonly Dictionary<string, Delegate> eventTable = new Dictionary<string, Delegate>();

		public bool StartWhenEnabled { get; set; } = true;
		public bool AsynchronousLoad { get; set; }
		public bool PauseWhenDisabled { get; set; } = true;
		public bool RestartWhenComplete { get; set; }
		public bool LogTaskChanges { get; set; }
		public int Group { get; set; }
		public bool ResetValuesOnRestart { get; set; }
		public ExternalBehavior ExternalBehavior { get; set; }
		public bool HasInheritedVariables { get; set; }
		public TaskStatus ExecutionStatus { get; set; } = TaskStatus.Inactive;

		public string BehaviorName
		{
			get { return GetBehaviorSource().behaviorName; }
			set { GetBehaviorSource().behaviorName = value; }
		}

		public string BehaviorDescription
		{
			get { return GetBehaviorSource().behaviorDescription; }
			set { GetBehaviorSource().behaviorDescription = value; }
		}

		public bool[] HasEvent { get; private set; }

		public event BehaviorHandler OnBehaviorStart;
		public event BehaviorHandler OnBehaviorRestart;
		public event BehaviorHandler OnBehaviorEnd;
		public event BehaviorHandler OnBehaviorComplete;

		// ------------------------------------------------------------------
		// the tree
		// ------------------------------------------------------------------
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

		int IBehavior.GetInstanceID()
		{
			return GetInstanceID();
		}

		public void Start()
		{
			if (StartWhenEnabled)
			{
				EnableBehavior();
			}
		}

		public void EnableBehavior()
		{
			BehaviorManager.CreateBehaviorManager();
			running = true;
			isPaused = false;
			ExecutionStatus = TaskStatus.Running;
			InitializeTasks(GetBehaviorSource().EntryTask ?? GetBehaviorSource().RootTask);
			if (OnBehaviorStart != null)
			{
				OnBehaviorStart();
			}
		}

		public void DisableBehavior()
		{
			DisableBehavior(false);
		}

		public void DisableBehavior(bool pause)
		{
			isPaused = pause;
			if (running)
			{
				EndTasks(GetBehaviorSource().EntryTask ?? GetBehaviorSource().RootTask);
			}
			running = false;
			ExecutionStatus = TaskStatus.Inactive;
			if (OnBehaviorEnd != null)
			{
				OnBehaviorEnd();
			}
		}

		public void OnEnable()
		{
		}

		public void OnDisable()
		{
			if (PauseWhenDisabled)
			{
				DisableBehavior(true);
			}
		}

		public void OnDestroy()
		{
			eventTable.Clear();
		}

		private void Update()
		{
			if (!running || isPaused)
			{
				return;
			}
			Task root = GetBehaviorSource().EntryTask ?? GetBehaviorSource().RootTask;
			if (root == null)
			{
				return;
			}
			TaskStatus status = root.OnUpdate();
			root.Status = status;
			ExecutionStatus = status;
			if (status != TaskStatus.Running)
			{
				OnBehaviorEnded();
			}
		}

		private void InitializeTasks(Task task)
		{
			if (task == null)
			{
				return;
			}
			task.GameObject = gameObject;
			task.Owner = this;
			task.Status = TaskStatus.Inactive;
			task.OnAwake();
			task.OnStart();
			if (task is ParentTask parent)
			{
				for (int i = 0; i < parent.Children.Count; i++)
				{
					InitializeTasks(parent.Children[i]);
				}
			}
		}

		private void EndTasks(Task task)
		{
			if (task == null)
			{
				return;
			}
			task.OnEnd();
			if (task is ParentTask parent)
			{
				for (int i = 0; i < parent.Children.Count; i++)
				{
					EndTasks(parent.Children[i]);
				}
			}
		}

		public void OnBehaviorStarted()
		{
			ExecutionStatus = TaskStatus.Running;
		}

		public void OnBehaviorRestarted()
		{
			ExecutionStatus = TaskStatus.Running;
			if (OnBehaviorRestart != null)
			{
				OnBehaviorRestart();
			}
		}

		public void OnBehaviorEnded()
		{
			running = false;
			ExecutionStatus = TaskStatus.Success;
			if (OnBehaviorComplete != null)
			{
				OnBehaviorComplete();
			}
			EndTasks(GetBehaviorSource().EntryTask ?? GetBehaviorSource().RootTask);
			if (RestartWhenComplete)
			{
				EnableBehavior();
				OnBehaviorRestarted();
			}
		}

		// ------------------------------------------------------------------
		// variables
		// ------------------------------------------------------------------
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

		public List<SharedVariable> GetAllVariables()
		{
			return GetBehaviorSource().GetAllVariables();
		}

		// ------------------------------------------------------------------
		// events
		// ------------------------------------------------------------------
		public void RegisterEvent(string name, Action handler)
		{
			CombineEvent(name, handler);
		}

		public void RegisterEvent<T>(string name, Action<T> handler)
		{
			CombineEvent(name, handler);
		}

		public void RegisterEvent<T, U>(string name, Action<T, U> handler)
		{
			CombineEvent(name, handler);
		}

		public void RegisterEvent<T, U, V>(string name, Action<T, U, V> handler)
		{
			CombineEvent(name, handler);
		}

		public void UnregisterEvent(string name, Action handler)
		{
			RemoveEvent(name, handler);
		}

		public void UnregisterEvent<T>(string name, Action<T> handler)
		{
			RemoveEvent(name, handler);
		}

		public void UnregisterEvent<T, U>(string name, Action<T, U> handler)
		{
			RemoveEvent(name, handler);
		}

		public void UnregisterEvent<T, U, V>(string name, Action<T, U, V> handler)
		{
			RemoveEvent(name, handler);
		}

		public void SendEvent(string name)
		{
			InvokeEvent(name, null);
		}

		public void SendEvent<T>(string name, T arg1)
		{
			InvokeEvent(name, new object[] { arg1 });
		}

		public void SendEvent<T, U>(string name, T arg1, U arg2)
		{
			InvokeEvent(name, new object[] { arg1, arg2 });
		}

		public void SendEvent<T, U, V>(string name, T arg1, U arg2, V arg3)
		{
			InvokeEvent(name, new object[] { arg1, arg2, arg3 });
		}

		private void CombineEvent(string name, Delegate handler)
		{
			if (eventTable.TryGetValue(name, out Delegate existing))
			{
				eventTable[name] = Delegate.Combine(existing, handler);
			}
			else
			{
				eventTable[name] = handler;
			}
		}

		private void RemoveEvent(string name, Delegate handler)
		{
			if (eventTable.TryGetValue(name, out Delegate existing))
			{
				Delegate remaining = Delegate.Remove(existing, handler);
				if (remaining == null)
				{
					eventTable.Remove(name);
				}
				else
				{
					eventTable[name] = remaining;
				}
			}
		}

		private void InvokeEvent(string name, object[] args)
		{
			if (eventTable.TryGetValue(name, out Delegate handler) && handler != null)
			{
				handler.DynamicInvoke(args ?? new object[0]);
			}
		}

		// ------------------------------------------------------------------
		// tasks
		// ------------------------------------------------------------------
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
			if (task is ParentTask parent)
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

		public List<T> FindTasks<T>() where T : Task
		{
			List<T> taskList = new List<T>();
			FindTasks<T>(GetBehaviorSource().RootTask, ref taskList);
			return taskList;
		}

		private void FindTasks<T>(Task task, ref List<T> taskList) where T : Task
		{
			if (task == null)
			{
				return;
			}
			if (task is T match)
			{
				taskList.Add(match);
			}
			if (task is ParentTask parent)
			{
				for (int i = 0; i < parent.Children.Count; i++)
				{
					FindTasks<T>(parent.Children[i], ref taskList);
				}
			}
		}

		public List<Task> GetActiveTasks()
		{
			List<Task> tasks = new List<Task>();
			CollectRunning(GetBehaviorSource().RootTask, tasks);
			return tasks;
		}

		private void CollectRunning(Task task, List<Task> tasks)
		{
			if (task == null || task.Status != TaskStatus.Running)
			{
				return;
			}
			tasks.Add(task);
			if (task is ParentTask parent)
			{
				for (int i = 0; i < parent.Children.Count; i++)
				{
					CollectRunning(parent.Children[i], tasks);
				}
			}
		}

		// ------------------------------------------------------------------
		// scene callbacks, forwarded to every task in the tree
		// ------------------------------------------------------------------
		public void OnCollisionEnter(Collision collision)
		{
			Forward((task) => task.OnCollisionEnter(collision));
		}

		public void OnCollisionExit(Collision collision)
		{
			Forward((task) => task.OnCollisionExit(collision));
		}

		public void OnTriggerEnter(Collider other)
		{
			Forward((task) => task.OnTriggerEnter(other));
		}

		public void OnTriggerExit(Collider other)
		{
			Forward((task) => task.OnTriggerExit(other));
		}

		public void OnCollisionEnter2D(Collision2D collision)
		{
			Forward((task) => task.OnCollisionEnter2D(collision));
		}

		public void OnCollisionExit2D(Collision2D collision)
		{
			Forward((task) => task.OnCollisionExit2D(collision));
		}

		public void OnTriggerEnter2D(Collider2D other)
		{
			Forward((task) => task.OnTriggerEnter2D(other));
		}

		public void OnTriggerExit2D(Collider2D other)
		{
			Forward((task) => task.OnTriggerExit2D(other));
		}

		public void OnControllerColliderHit(ControllerColliderHit hit)
		{
			Forward((task) => task.OnControllerColliderHit(hit));
		}

		public void OnAnimatorIK()
		{
			Forward((task) => task.OnAnimatorIK());
		}

		private void Forward(Action<Task> callback)
		{
			ForEachTask(GetBehaviorSource().RootTask, callback);
		}

		private void ForEachTask(Task task, Action<Task> callback)
		{
			if (task == null)
			{
				return;
			}
			callback(task);
			if (task is ParentTask parent)
			{
				for (int i = 0; i < parent.Children.Count; i++)
				{
					ForEachTask(parent.Children[i], callback);
				}
			}
		}

		public void OnDrawGizmos()
		{
			ForEachTask(GetBehaviorSource().RootTask, (task) => task.OnDrawGizmos());
		}

		public void OnDrawGizmosSelected()
		{
			OnDrawGizmos();
		}

		public override string ToString()
		{
			return BehaviorName ?? name;
		}

		public static BehaviorManager CreateBehaviorManager()
		{
			if (BehaviorManager.instance == null)
			{
				GameObject behaviorManager = new GameObject("Behavior Manager");
				BehaviorManager.instance = behaviorManager.AddComponent<BehaviorManager>();
			}
			return BehaviorManager.instance;
		}
	}
}
