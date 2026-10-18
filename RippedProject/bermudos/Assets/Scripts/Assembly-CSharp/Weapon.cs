// Reconstructed from Build/webgl.wasm + Dump/dump.cs (Unity IL2CPP -> WebAssembly).
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class Weapon : MonoBehaviour
{
	private SpriteRenderer spriteRenderer;

	[HideInInspector]
	public PolygonCollider2D polygonCollider2D;

	private List<Vector2> spritePhysicsShapePointsList;

	private void Awake()
	{
		spriteRenderer = GetComponent<SpriteRenderer>();
		spritePhysicsShapePointsList = new List<Vector2>();
		enabled = false;
	}

	private void Start()
	{
		polygonCollider2D.useDelaunayMesh = true;
		polygonCollider2D.isTrigger = true;
	}

	public void GetWeaponCollider()
	{
		Sprite sprite = spriteRenderer.sprite;

		if (0 < sprite.GetPhysicsShape(0, spritePhysicsShapePointsList))
		{
			polygonCollider2D.points = spritePhysicsShapePointsList.ToArray();
		}
	}
}
