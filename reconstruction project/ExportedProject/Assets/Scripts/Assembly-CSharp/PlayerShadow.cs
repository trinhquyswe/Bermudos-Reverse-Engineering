using UnityEngine;

[DisallowMultipleComponent]
public class PlayerShadow : MonoBehaviour
{
    public void InitialisePlayerShadow(SpriteRenderer[] playerSpriteRenderers)
    {
        gameObject.SetActive(true);
        InitialiseSprite(playerSpriteRenderers);
    }

    private void EnablePlayerShadow()
    {
        gameObject.SetActive(true);
    }

    private void DisablePlayerShadow()
    {
        gameObject.SetActive(false);
    }

    public void InitialiseSprite(SpriteRenderer[] playerSpriteRenderers)
    {
        SpriteRenderer[] shadowRenderers = GetComponentsInChildren<SpriteRenderer>();
        foreach (SpriteRenderer shadowRenderer in shadowRenderers)
        {
            foreach (SpriteRenderer playerRenderer in playerSpriteRenderers)
            {
                if (shadowRenderer.name == playerRenderer.name)
                {
                    shadowRenderer.sprite = playerRenderer.sprite;
                }
            }
        }
    }
}
