using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public static class HelperUtilities
{
    public static Camera mainCamera;

    public static bool ValidateCheckEmptyString(Object thisObject, string fieldName, string stringToCheck)
    {
        if (stringToCheck == "")
        {
            Debug.Log(fieldName + " is empty and must contain a value in object " + thisObject.name);
            return true;
        }
        return false;
    }

    public static bool ValidateCheckNullValue(Object thisObject, string fieldName, Object objectToCheck)
    {
        if (objectToCheck == null)
        {
            Debug.Log(fieldName + " is null and must contain a value in object " + thisObject.name);
            return true;
        }
        return false;
    }

    public static bool ValidateCheckEnumerableValues(Object thisObject, string fieldName, IEnumerable enumerableObjectToCheck)
    {
        bool error = false;
        int count = 0;

        if (enumerableObjectToCheck == null)
        {
            Debug.Log(fieldName + " is null in object " + thisObject.name);
            return true;
        }

        foreach (var item in enumerableObjectToCheck)
        {
            if (item == null)
            {
                Debug.Log(fieldName + " has null values in object " + thisObject.name);
                error = true;
            }
            else
            {
                count++;
            }
        }

        if (count == 0)
        {
            Debug.Log(fieldName + " has no values in object " + thisObject.name);
            error = true;
        }

        return error;
    }

    public static bool ApproximatelyEqual(Vector2 v1, Vector2 v2, float epsilon)
    {
        return Mathf.Abs(v1.x - v2.x) < epsilon && Mathf.Abs(v1.y - v2.y) < epsilon;
    }

    public static float GetAngleFromVector(Vector3 vector)
    {
        return Mathf.Atan2(vector.y, vector.x) * 57.29578f;
    }

    public static Vector2 GetRandomDirection()
    {
        Vector2 randomDirection = Random.insideUnitCircle;
        float magnitude = Mathf.Sqrt(randomDirection.x * randomDirection.x + randomDirection.y * randomDirection.y);
        if (magnitude > 1e-05f)
        {
            return new Vector2(randomDirection.x / magnitude, randomDirection.y / magnitude);
        }
        return Vector2.zero;
    }

    public static Vector3 GetDirectionVectorFromAngle(float angle)
    {
        float angleRadians = angle * Mathf.Deg2Rad;
        return new Vector3(Mathf.Cos(angleRadians), Mathf.Sin(angleRadians), 0f);
    }

    public static bool ValidateCheckPositiveValue(Object thisObject, string fieldName, float valueToCheck, bool isZeroAllowed)
    {
        if (!isZeroAllowed)
        {
            if (valueToCheck > 0f)
            {
                return false;
            }
            Debug.Log(fieldName + " must contain a positive value in object " + thisObject.name);
            return true;
        }
        else
        {
            if (valueToCheck >= 0f)
            {
                return false;
            }
            Debug.Log(fieldName + " must contain a positive value or zero in object " + thisObject.name);
            return true;
        }
    }

    public static Vector3 GetMouseWorldPosition()
    {
        if (mainCamera == null)
        {
            mainCamera = Camera.main;
        }

        Vector2 mousePosition = Mouse.current.position.ReadValue();

        mousePosition.x = Mathf.Clamp(mousePosition.x, 0f, Screen.width);
        mousePosition.y = Mathf.Clamp(mousePosition.y, 0f, Screen.height);

        Vector3 worldPosition = mainCamera.ScreenToWorldPoint(new Vector3(mousePosition.x, mousePosition.y, 0f));
        worldPosition.z = 0f;
        return worldPosition;
    }

    public static bool ValidateCheckPositiveRange(Object thisObject, string fieldNameMinimum, float valueToCheckMinimum, string fieldNameMaximum, float valueToCheckMaximum, bool isZeroAllowed)
    {
        if (valueToCheckMaximum < valueToCheckMinimum)
        {
            Debug.Log(fieldNameMinimum + " must be less than or equal to " + fieldNameMaximum + " in object " + thisObject.name);
        }

        bool minimumCheck = ValidateCheckPositiveValue(thisObject, fieldNameMinimum, valueToCheckMinimum, isZeroAllowed);
        bool maximumCheck = ValidateCheckPositiveValue(thisObject, fieldNameMaximum, valueToCheckMaximum, isZeroAllowed);

        return minimumCheck || maximumCheck || valueToCheckMaximum < valueToCheckMinimum;
    }

    public static Vector3 GetMousePositionInUI(RectTransform rectTransform, Camera uiCamera)
    {
        Vector2 mousePosition = Mouse.current.position.ReadValue();

        mousePosition.x = Mathf.Clamp(mousePosition.x, 0f, Screen.width);
        mousePosition.y = Mathf.Clamp(mousePosition.y, 0f, Screen.height);

        RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform, mousePosition, uiCamera, out Vector2 localPoint);

        Vector3 worldPosition = rectTransform.TransformPoint(localPoint);
        return worldPosition;
    }

    public static float LinearToDecibels(float linear)
    {
        // 20 * Mathf.Log10(linear / 20f) as compiled.
        // TODO(il2cpp): helper function resolved to Mathf.Log10 is a guess; the divisor/multiplier literals are kept as compiled.
        return Mathf.Log10(linear / 20f) * 20f;
    }
}
