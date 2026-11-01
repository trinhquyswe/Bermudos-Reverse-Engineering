using UnityEngine;

public class Arrow : MonoBehaviour
{
    private LineRenderer lineRenderer;

    private void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();
    }

    public void MakeArrow(Vector2 startPosition, Vector2 endPosition)
    {
        float dx = endPosition.x - startPosition.x;
        float dy = endPosition.y - startPosition.y;
        float length = Mathf.Sqrt(dx * dx + dy * dy);

        // TODO(il2cpp): when length <= 1e-5 the pseudo reads Vector2 static constants that were not decoded; zero direction used instead.
        float ux = 0f;
        float uy = 0f;
        if (length > 1e-5f)
        {
            ux = dx / length;
            uy = dy / length;
        }

        float tipX = endPosition.x + dx;
        float tipY = endPosition.y + dy;

        lineRenderer.positionCount = 5;
        lineRenderer.SetPosition(0, new Vector3(startPosition.x, startPosition.y, 0f));
        lineRenderer.SetPosition(1, new Vector3(tipX, tipY, 0f));
        lineRenderer.SetPosition(2, new Vector3(tipX - ux - uy, tipY + ux - uy, 0f));
        lineRenderer.SetPosition(3, new Vector3(tipX, tipY, 0f));
        lineRenderer.SetPosition(4, new Vector3(tipX - ux + uy, tipY - ux - uy, 0f));
    }

    public void ClearArrow()
    {
        lineRenderer.positionCount = 0;
    }
}
