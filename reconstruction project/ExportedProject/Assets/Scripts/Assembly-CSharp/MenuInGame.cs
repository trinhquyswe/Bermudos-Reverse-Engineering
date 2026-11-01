// NOTE: rewritten from pseudo-C#. Input actions come from the generated InputSystem_Actions class
// (UI.MenuInGame), which is not in this export.
using System.Collections;
using DG.Tweening;
using TMPEffects.Components;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class MenuInGame : MonoBehaviour
{
    [SerializeField]
    private Button exitButton;
    [SerializeField]
    private Button resumeButton;
    private TextMeshProUGUI exitText;
    private TextMeshProUGUI resumeText;
    private TMPWriter exitTMPWriter;
    private TMPWriter resumeTMPWriter;
    private InputSystem_Actions inputSystem_Actions;
    public Ease ease;

    private void Awake()
    {
        exitText = exitButton.GetComponentInChildren<TextMeshProUGUI>();
        resumeText = resumeButton.GetComponentInChildren<TextMeshProUGUI>();
        exitTMPWriter = exitText.GetComponent<TMPWriter>();
        resumeTMPWriter = resumeText.GetComponent<TMPWriter>();

        inputSystem_Actions = new InputSystem_Actions();
        inputSystem_Actions.UI.MenuInGame.Enable();
        inputSystem_Actions.UI.MenuInGame.performed += OnMenuInGame;
    }

    private void OnDestroy()
    {
        inputSystem_Actions.UI.MenuInGame.Disable();
        inputSystem_Actions.UI.MenuInGame.performed -= OnMenuInGame;
        DOTween.Kill(transform);
    }

    private void OnMenuInGame(InputAction.CallbackContext context)
    {
        OpenMenu();
    }

    public void OpenMenu()
    {
        if (!gameObject.activeSelf)
        {
            gameObject.SetActive(true);
            exitTMPWriter.SetText("<+char>Exit");
            resumeTMPWriter.SetText("<+char>Resume");

            // The start scale was read from a Vector3 static; zero matches the 0 -> 1 tween below.
            transform.localScale = Vector3.zero;
            transform.DOScale(1f, 0.5f).SetEase(ease).SetUpdate(true);

            RectTransform rectTransform = GetComponent<RectTransform>();
            rectTransform.anchoredPosition = new Vector2(-Screen.width, 0f);
            rectTransform.DOAnchorPos(Vector2.zero, 0.5f).SetEase(ease).SetUpdate(true);
        }
        else
        {
            gameObject.SetActive(false);
        }
    }

    private void Start()
    {
        exitButton.onClick.AddListener(Exit);
        resumeButton.onClick.AddListener(ResumeGame);
        gameObject.SetActive(false);
    }

    public void Exit()
    {
        StaticEventHandler.CallExitEvent();

        // TODO(il2cpp): original fetched a component through an unnamed GetComponent and invoked a virtual slot (23)
        // with a zeroed 16-byte argument. Component type and call are unresolved; not reproduced.

        exitButton.gameObject.SetActive(false);
        resumeButton.gameObject.SetActive(false);

        StaticEventHandler.CallMapTransitionEvent();
        StartCoroutine(WaitMapTransitionEvent());
    }

    private IEnumerator WaitMapTransitionEvent()
    {
        // TODO(il2cpp): state machine body was not recovered from the pseudo-C#; empty coroutine.
        yield break;
    }

    public void ResumeGame()
    {
        Time.timeScale = 1f;
        gameObject.SetActive(false);
    }
}
