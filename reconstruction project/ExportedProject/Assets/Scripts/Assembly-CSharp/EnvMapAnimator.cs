using System.Collections;
using TMPro;
using UnityEngine;

public class EnvMapAnimator : MonoBehaviour
{
    public Vector3 RotationSpeeds;
    private TMP_Text m_textMeshPro;
    private Material m_material;

    private void Awake()
    {
        m_textMeshPro = GetComponent<TMP_Text>();
        m_material = m_textMeshPro.fontSharedMaterial;
    }

    private IEnumerator Start()
    {
        // TODO(il2cpp): Start coroutine body (MoveNext, uses a local Matrix4x4) is not in the pseudo output.
        yield break;
    }
}
