// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.Tasks.Task (TypeDefIndex 9894).

using System;
using System.Collections;
using System.Reflection;
using UnityEngine;

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>
	/// Base class of every behavior tree node. The reconstructed game code (the task classes under
	/// Assembly-CSharp/BehaviorDesigner/Runtime/Tasks) derives from this and overrides the hooks below.
	/// </summary>
	public abstract class Task
	{
		protected GameObject gameObject;
		protected Transform transform;

		private Behavior owner;
		private int id;
		private string friendlyName;
		private bool disabled;

		/// <summary>Result of the last execution - a replacement convenience (the original keeps this in NodeData).</summary>
		public TaskStatus Status { get; set; }

		public GameObject GameObject
		{
			set
			{
				gameObject = value;
				transform = value != null ? value.transform : null;
			}
		}

		public Transform Transform
		{
			set { transform = value; }
		}

		public Behavior Owner
		{
			get { return owner; }
			set { owner = value; }
		}

		public int ID { get; set; }

		public virtual string FriendlyName
		{
			get { return friendlyName; }
			set { friendlyName = value; }
		}

		public bool IsInstant { get; set; }
		public int ReferenceID { get; set; }
		public bool Disabled { get; set; }

		// ------------------------------------------------------------------
		// lifecycle hooks (every one of these is overridden by game tasks)
		// ------------------------------------------------------------------
		public virtual void OnAwake() { }

		public virtual void OnStart() { }

		/// <summary>Runs the task once. Leaf tasks return Success/Failure, long-running ones Running.</summary>
		public virtual TaskStatus OnUpdate()
		{
			return TaskStatus.Success;
		}

		public virtual void OnLateUpdate() { }
		public virtual void OnFixedUpdate() { }
		public virtual void OnEnd() { }
		public virtual void OnPause(bool paused) { }
		public virtual void OnConditionalAbort() { }
		public virtual float GetPriority() { return 0f; }
		public virtual float GetUtility() { return 0f; }
		public virtual void OnBehaviorRestart() { }
		public virtual void OnBehaviorComplete() { }
		public virtual void OnReset() { }
		public virtual void OnDrawGizmos() { }
		public virtual string OnDrawNodeText() { return null; }

		// ------------------------------------------------------------------
		// scene callbacks, forwarded by Behavior to the tasks it owns
		// ------------------------------------------------------------------
		public virtual void OnCollisionEnter(Collision collision) { }
		public virtual void OnCollisionExit(Collision collision) { }
		public virtual void OnTriggerEnter(Collider other) { }
		public virtual void OnTriggerExit(Collider other) { }
		public virtual void OnCollisionEnter2D(Collision2D collision) { }
		public virtual void OnCollisionExit2D(Collision2D collision) { }
		public virtual void OnTriggerEnter2D(Collider2D other) { }
		public virtual void OnTriggerExit2D(Collider2D other) { }
		public virtual void OnControllerColliderHit(ControllerColliderHit hit) { }
		public virtual void OnAnimatorIK() { }

		// ------------------------------------------------------------------
		// helpers used by the tasks instead of Unity's own (they target the behavior's GameObject)
		// ------------------------------------------------------------------
		protected T GetComponent<T>()
		{
			return gameObject != null ? gameObject.GetComponent<T>() : default(T);
		}

		protected Component GetComponent(Type type)
		{
			return gameObject != null ? gameObject.GetComponent(type) : null;
		}

		protected void TryGetComponent<T>(out T component)
		{
			if (gameObject != null && gameObject.TryGetComponent(out T found))
			{
				component = found;
				return;
			}
			component = default(T);
		}

		protected void TryGetComponent(Type type, out Component component)
		{
			component = null;
			if (gameObject != null)
			{
				gameObject.TryGetComponent(type, out component);
			}
		}

		protected GameObject GetDefaultGameObject(GameObject go)
		{
			return go != null ? go : gameObject;
		}

		protected Coroutine StartCoroutine(IEnumerator routine)
		{
			return owner != null ? owner.StartCoroutine(routine) : null;
		}

		protected Coroutine StartCoroutine(string methodName)
		{
			return owner != null ? owner.StartCoroutine(methodName) : null;
		}

		/// <summary>Starts a coroutine by name, passing a single argument to it.</summary>
		protected Coroutine StartCoroutine(string methodName, object value)
		{
			if (owner == null)
			{
				return null;
			}
			MethodInfo method = owner.GetType().GetMethod(methodName, BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
			if (method != null && method.ReturnType == typeof(IEnumerator) && method.GetParameters().Length == 1)
			{
				return owner.StartCoroutine((IEnumerator)method.Invoke(owner, new[] { value }));
			}
			return owner.StartCoroutine(methodName);
		}

		protected void StopCoroutine(IEnumerator routine)
		{
			if (owner != null)
			{
				owner.StopCoroutine(routine);
			}
		}

		protected void StopCoroutine(string methodName)
		{
			if (owner != null)
			{
				owner.StopCoroutine(methodName);
			}
		}

		protected void StopAllCoroutines()
		{
			if (owner != null)
			{
				owner.StopAllCoroutines();
			}
		}
	}
}
