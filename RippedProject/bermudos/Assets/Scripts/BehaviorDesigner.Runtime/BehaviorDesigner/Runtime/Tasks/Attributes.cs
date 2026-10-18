// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md. These are the designer
// attributes the reconstructed task classes carry; shapes follow the IL2CPP metadata
// (TypeDefIndex 9863, 9864, 9867, 9869, 9870, 9872).

using System;

namespace BehaviorDesigner.Runtime.Tasks
{
	/// <summary>Base of the attributes that draw a field with a custom editor.</summary>
	[AttributeUsage(AttributeTargets.Field)]
	public abstract class ObjectDrawerAttribute : Attribute
	{
	}

	/// <summary>The category the task appears under in the Behavior Designer editor.</summary>
	[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)]
	public class TaskCategoryAttribute : Attribute
	{
		public readonly string mCategory;

		public string Category
		{
			get { return mCategory; }
		}

		public TaskCategoryAttribute(string category)
		{
			mCategory = category;
		}
	}

	/// <summary>The description the task shows in the editor.</summary>
	[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)]
	public class TaskDescriptionAttribute : Attribute
	{
		public readonly string mDescription;

		public string Description
		{
			get { return mDescription; }
		}

		public TaskDescriptionAttribute(string description)
		{
			mDescription = description;
		}
	}

	/// <summary>The icon the task shows in the editor.</summary>
	[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)]
	public class TaskIconAttribute : Attribute
	{
		private string mIconPath;
		private string mLightIconGUID;
		private string mDarkIconGUID;

		public string IconPath
		{
			get { return mIconPath; }
			set { mIconPath = value; }
		}

		public string LightIconGUID
		{
			get { return mLightIconGUID; }
		}

		public string DarkIconGUID
		{
			get { return mDarkIconGUID; }
		}

		public TaskIconAttribute(string iconString)
		{
			mIconPath = iconString;
		}

		public TaskIconAttribute(string lightIconGUID, string darkIconGUID)
		{
			mLightIconGUID = lightIconGUID;
			mDarkIconGUID = darkIconGUID;
		}
	}

	/// <summary>A field that must be filled in for the task to run.</summary>
	[AttributeUsage(AttributeTargets.Field, AllowMultiple = false, Inherited = false)]
	public class RequiredFieldAttribute : Attribute
	{
	}

	/// <summary>A component the behavior's GameObject must have for the task to run.</summary>
	[AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)]
	public class RequiredComponentAttribute : Attribute
	{
		public readonly Type mComponentType;

		public Type ComponentType
		{
			get { return mComponentType; }
		}

		public RequiredComponentAttribute(Type componentType)
		{
			mComponentType = componentType;
		}
	}
}
