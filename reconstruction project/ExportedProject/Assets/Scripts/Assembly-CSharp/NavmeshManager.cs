using System.Collections;
using NavMeshPlus.Components;
using UnityEngine;

[DisallowMultipleComponent]
public class NavmeshManager : MonoBehaviour
{
    private NavMeshSurface navMeshSurface;

    private void Awake()
    {
        navMeshSurface = GetComponent<NavMeshSurface>();
    }

    private void OnEnable()
    {
        StaticEventHandler.OnMapChanged += StaticEventHandler_OnMapChanged;
        StaticEventHandler.OnRestInBonfire += StaticEventHandler_OnRestInBonfire;
    }

    private void OnDisable()
    {
        StaticEventHandler.OnMapChanged -= StaticEventHandler_OnMapChanged;
        StaticEventHandler.OnRestInBonfire -= StaticEventHandler_OnRestInBonfire;
    }

    private void StaticEventHandler_OnMapChanged(MapChangedEventArgs mapChangedEventArgs)
    {
        StartCoroutine(BuildNavMeshWhenMapChangedCoroutine());
    }

    private IEnumerator BuildNavMeshWhenMapChangedCoroutine()
    {
        // TODO(il2cpp): MoveNext state machine <BuildNavMeshWhenMapChangedCoroutine>d__5 is not in the pseudo output; rebuild step not reconstructed.
        yield break;
    }

    private void StaticEventHandler_OnRestInBonfire()
    {
        StartCoroutine(BuildNavMeshWhenRestCoroutine());
    }

    private IEnumerator BuildNavMeshWhenRestCoroutine()
    {
        // TODO(il2cpp): MoveNext state machine <BuildNavMeshWhenRestCoroutine>d__7 is not in the pseudo output; rebuild step not reconstructed.
        yield break;
    }
}
