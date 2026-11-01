using UnityEngine;

// NOTE: the original base class is BehaviorDesigner.Runtime.Tasks.Action (Behavior Designer),
// which is not part of the exported project. Re-exposed as a MonoBehaviour keeping the exact
// serialized field names; task callbacks (OnStart/OnUpdate/OnEnd) kept with the same names.
public class DeadAction : MonoBehaviour
{
    // TODO(il2cpp): originally BehaviorDesigner.Runtime.SharedVariable<Material> (SharedMaterial);
    // the shared variable's current value is accessed directly here.
    public Material deadMaterial;
    [ColorUsage(true, true)]
    public Color fadeColor;
    public float fadeTime;
    private float fadeAmount;
    private float fadeTime2;
    private Color defaultColor;

    public DeadAction()
    {
        fadeTime = 3f;
    }

    public void OnStart()
    {
        ColorUtility.TryParseHtmlString("#FFFF00", out defaultColor);
        deadMaterial.SetFloat("_FadeAmount", fadeAmount);
        fadeTime2 = fadeTime;
        deadMaterial.SetColor("_FadeBurnColor", fadeColor);
    }

    public void OnUpdate()
    {
        if (fadeTime > 0f)
        {
            fadeAmount += Time.deltaTime / fadeTime2;
            deadMaterial.SetFloat("_FadeAmount", fadeAmount);
            fadeTime -= Time.deltaTime;
            return; // TODO(il2cpp): returned TaskStatus.Running
        }

        // Equivalent to the original Won branch: gameState = Won, PlayerPrefs isBossDefeated = 1,
        // WonScene(), OnGameStateChange. Uses the public HandleGameState because WonScene is private.
        GameManager.Instance.HandleGameState(GameState.Won);
        // TODO(il2cpp): returned TaskStatus.Success
    }

    public void OnEnd()
    {
        deadMaterial.SetColor("_FadeBurnColor", defaultColor);
        gameObject.SetActive(false);
        deadMaterial.SetFloat("_FadeAmount", 0f);
    }
}
