using TMPro;
using UnityEngine;

public class DropdownSample : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI text;
    [SerializeField]
    private TMP_Dropdown dropdownWithoutPlaceholder;
    [SerializeField]
    private TMP_Dropdown dropdownWithPlaceholder;

    public void OnButtonClick()
    {
        string message = "Error: Please make a selection";
        if (dropdownWithPlaceholder.value >= 0)
        {
            message = "Selected values:\n" + dropdownWithoutPlaceholder.value + " - " + dropdownWithPlaceholder.value;
        }
        text.SetText(message);
    }
}
