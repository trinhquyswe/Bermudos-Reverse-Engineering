using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ChatController : MonoBehaviour
{
    public TMP_InputField ChatInputField;
    public TMP_Text ChatDisplayOutput;
    public Scrollbar ChatScrollbar;

    private void OnEnable()
    {
        ChatInputField.onSubmit.AddListener(AddToChatOutput);
    }

    private void OnDisable()
    {
        ChatInputField.onSubmit.RemoveListener(AddToChatOutput);
    }

    private void AddToChatOutput(string newText)
    {
        ChatInputField.text = string.Empty;

        DateTime now = DateTime.Now;
        string line = "[<#FFFF80>"
            + now.Hour.ToString("d2") + ":"
            + now.Minute.ToString("d2") + ":"
            + now.Second.ToString("d2")
            + "</color>] " + newText;

        if (ChatDisplayOutput != null)
        {
            if (ChatDisplayOutput.text == string.Empty)
            {
                ChatDisplayOutput.text = line;
            }
            else
            {
                ChatDisplayOutput.text = ChatDisplayOutput.text + "\n" + line;
            }
        }

        ChatInputField.ActivateInputField();
        ChatScrollbar.value = 0f;
    }
}
