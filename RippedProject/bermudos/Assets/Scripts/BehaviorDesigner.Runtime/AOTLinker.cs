// AUTHORED REPLACEMENT - not recovered from the game. Behavior Designer ships this component to force
// ahead-of-time compilation of the generic methods its serialization uses; the replacement engine
// serializes through Unity, so nothing has to be linked. The class is kept as a marker because scenes
// reference it by name.

using UnityEngine;

/// <summary>Marker component (see the file header).</summary>
public class AOTLinker : MonoBehaviour
{
}
