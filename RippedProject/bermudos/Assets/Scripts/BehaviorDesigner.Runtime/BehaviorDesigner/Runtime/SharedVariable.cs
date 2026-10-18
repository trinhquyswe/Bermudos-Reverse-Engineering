// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.SharedVariable / SharedVariable<T> (TypeDefIndex 9887/9888),
// GenericVariable (9891) and SharedGenericVariable (9892). SharedFloat (5805) and SharedMaterial
// (5811) were added by the Assembly-CSharp reconstruction (used by DeadAction/EndPhase1/EnterPhase2
// /ReceiveDamageAction).

using System;
using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>
	/// A value a task reads and writes: either local to the task, shared between tasks of a behavior
	/// tree, or global to the game.
	/// </summary>
	[Serializable]
	public abstract class SharedVariable
	{
		private bool mIsShared;
		private bool mIsGlobal;
		private bool mIsDynamic;
		private string mName;
		private string mToolTip;
		private string mPropertyMapping;
		private GameObject mPropertyMappingOwner;

		public bool IsShared
		{
			get { return mIsShared; }
			set { mIsShared = value; }
		}

		public bool IsGlobal
		{
			get { return mIsGlobal; }
			set { mIsGlobal = value; }
		}

		public bool IsDynamic
		{
			get { return mIsDynamic; }
			set { mIsDynamic = value; }
		}

		public string Name
		{
			get { return mName; }
			set { mName = value; }
		}

		public string Tooltip
		{
			get { return mToolTip; }
			set { mToolTip = value; }
		}

		public string PropertyMapping
		{
			get { return mPropertyMapping; }
			set { mPropertyMapping = value; }
		}

		public GameObject PropertyMappingOwner
		{
			get { return mPropertyMappingOwner; }
			set { mPropertyMappingOwner = value; }
		}

		/// <summary>True when the variable holds nothing (untitled in the inspector).</summary>
		public bool IsNone
		{
			get { return string.IsNullOrEmpty(mName); }
		}

		public virtual void InitializePropertyMapping(BehaviorSource behaviorSource)
		{
		}

		public abstract object GetValue();

		public abstract void SetValue(object value);
	}

	/// <summary>A typed <see cref="SharedVariable"/>.</summary>
	[Serializable]
	public abstract class SharedVariable<T> : SharedVariable
	{
		protected T mValue;

		public T Value
		{
			get { return mValue; }
			set { mValue = value; }
		}

		public override object GetValue()
		{
			return mValue;
		}

		public override void SetValue(object value)
		{
			if (value is T typed)
			{
				mValue = typed;
			}
		}

		public override string ToString()
		{
			return mValue != null ? mValue.ToString() : "(null)";
		}
	}

	/// <summary>A shared variable whose type is decided at runtime (used by Reflection tasks).</summary>
	[Serializable]
	public class GenericVariable
	{
		public string type;
		public SharedVariable value;
	}

	[Serializable]
	public class SharedGenericVariable : SharedVariable<GenericVariable>
	{
		public static implicit operator SharedGenericVariable(GenericVariable value)
		{
			return new SharedGenericVariable { Value = value };
		}
	}

	[Serializable]
	public class SharedFloat : SharedVariable<float>
	{
		public static implicit operator SharedFloat(float value)
		{
			return new SharedFloat { Value = value };
		}
	}

	[Serializable]
	public class SharedMaterial : SharedVariable<Material>
	{
		public static implicit operator SharedMaterial(Material value)
		{
			return new SharedMaterial { Value = value };
		}
	}
}
