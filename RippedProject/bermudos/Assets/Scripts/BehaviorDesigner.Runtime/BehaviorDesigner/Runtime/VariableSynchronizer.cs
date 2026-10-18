// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. Members follow the metadata
// shape of BehaviorDesigner.Runtime.VariableSynchronizer (TypeDefIndex 9881).

using System;
using System.Collections.Generic;
using UnityEngine;

namespace BehaviorDesigner.Runtime
{
	/// <summary>Keeps a behavior-tree variable and a property of a scene component in sync.</summary>
	public class VariableSynchronizer : MonoBehaviour
	{
		/// <summary>Which end of the link is authoritative.</summary>
		public enum SynchronizationType
		{
			BehaviorDesigner = 0,
			Property = 1,
		}

		[Serializable]
		public class SynchronizedVariable
		{
			public SynchronizationType synchronizationType;
			public bool setVariable;
			public Behavior behavior;
			public string variableName;
			public bool global;
			public Component targetComponent;
			public string targetName;
			public bool targetGlobal;
			public SharedVariable targetSharedVariable;
			public SharedVariable sharedVariable;

			/// <summary>Copies the value across the link, in the direction <c>synchronizationType</c> asks for.</summary>
			public void Synchronize()
			{
				if (targetSharedVariable == null)
				{
					return;
				}
				if (synchronizationType == SynchronizationType.BehaviorDesigner)
				{
					if (sharedVariable != null)
					{
						targetSharedVariable.SetValue(sharedVariable.GetValue());
					}
				}
				else if (setVariable && sharedVariable != null)
				{
					sharedVariable.SetValue(targetSharedVariable.GetValue());
				}
			}
		}

		private UpdateIntervalType updateInterval = UpdateIntervalType.EveryFrame;
		private float updateIntervalSeconds = 0f;
		private float nextUpdate;
		private List<SynchronizedVariable> synchronizedVariables = new List<SynchronizedVariable>();

		public UpdateIntervalType UpdateInterval
		{
			get { return updateInterval; }
			set { updateInterval = value; }
		}

		public float UpdateIntervalSeconds
		{
			get { return updateIntervalSeconds; }
			set { updateIntervalSeconds = value; }
		}

		public List<SynchronizedVariable> SynchronizedVariables
		{
			get { return synchronizedVariables; }
			set { synchronizedVariables = value; }
		}

		private void Update()
		{
			if (updateInterval == UpdateIntervalType.Manual || synchronizedVariables == null)
			{
				return;
			}
			if (updateInterval == UpdateIntervalType.SpecifySeconds && Time.time < nextUpdate)
			{
				return;
			}
			nextUpdate = Time.time + updateIntervalSeconds;
			for (int i = 0; i < synchronizedVariables.Count; i++)
			{
				if (synchronizedVariables[i] != null)
				{
					synchronizedVariables[i].Synchronize();
				}
			}
		}
	}
}
