// AUTHORED REPLACEMENT - not recovered from the game. See NOTICE.md.
//
// A concrete, runnable behaviour tree built on the replacement runtime - the "another behaviour tree"
// this folder exists for. It has no dependency on the recovered game code, so it can be dropped on a
// GameObject to check that the engine ticks, that children are traversed and that shared variables
// work. The tree it builds is:
//
//     Sequence
//       Log      "start"
//       Wait     1.5 s
//       Log      "done"

using BehaviorDesigner.Runtime.Tasks;
using BehaviorDesigner.Runtime.Tasks.Replacement;
using UnityEngine;

namespace BehaviorDesigner.Runtime.Replacement
{
	[AddComponentMenu("Behavior Designer/Replacement Behavior Tree")]
	public class ReplacementBehaviorTree : Behavior
	{
		private void Awake()
		{
			BehaviorSource source = GetBehaviorSource();
			source.behaviorName = "Replacement Behavior Tree";

			Sequence sequence = new Sequence();
			sequence.AddChild(new Log { text = "start" }, 0);
			sequence.AddChild(new Wait { duration = 1.5f }, 1);
			sequence.AddChild(new Log { text = "done" }, 2);
			source.RootTask = sequence;
		}
	}
}
