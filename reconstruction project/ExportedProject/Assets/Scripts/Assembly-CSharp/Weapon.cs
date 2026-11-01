using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    private SpriteRenderer spriteRenderer;
    [HideInInspector]
    public PolygonCollider2D polygonCollider2D;
    private List<Vector2> spritePhysicsShapePointsList = new List<Vector2>();

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        polygonCollider2D = gameObject.AddComponent<PolygonCollider2D>();
    }

    private void Start()
    {
        polygonCollider2D.useDelaunayMesh = true;
        polygonCollider2D.isTrigger = true;
    }

    public void GetWeaponCollider()
    {
        int count = spriteRenderer.sprite.GetPhysicsShape(0, spritePhysicsShapePointsList);
        if (0 < count)
        {
            polygonCollider2D.points = spritePhysicsShapePointsList.ToArray();
        }
    }
}