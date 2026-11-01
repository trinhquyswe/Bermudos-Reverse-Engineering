using System.Collections;
using UnityEngine;

public class RangedSkills : MonoBehaviour
{
    private Animator animator;
    public Transform shootPosition;
    public AmmoDetailsSO ammo;
    public AmmoDetailsSO ammoPhase2;
    [Header("EYE ATTACK")]
    public GameObject Beam;
    public float[] offsetArr;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    public void Shoot(AmmoDetailsSO ammoDetailsSO, Vector3 shootPosition, Vector3 target)
    {
        // TODO(il2cpp): shot origin is ambiguous in the decompile; the pseudo sets only z.
        Component component = PoolManager.Instance.ReuseComponent(ammoDetailsSO.ammoPrefab, shootPosition, Quaternion.identity);
        if (component != null)
        {
            IFireable fireable = (IFireable)component;
            fireable.InitialiseAmmo(ammoDetailsSO, target);
        }
    }

    private Vector2[] Get15ShootDirections()
    {
        // TODO(il2cpp): base vector assumed to be Vector2.right * 30 (static field at offset 0x28).
        Vector2[] directions = new Vector2[15];
        Vector2 baseDirection = Vector2.right * 30f;
        directions[0] = baseDirection;
        for (int i = 1; i != 15; i++)
        {
            directions[i] = Quaternion.Euler(0f, 0f, i * 24f) * baseDirection;
        }
        return directions;
    }

    public void BaseShoot()
    {
        Vector2[] directions = Get15ShootDirections();
        for (int i = 0; i < directions.Length; i++)
        {
            Vector3 position = transform.position;
            Vector3 target = position + (Vector3)directions[i];
            Shoot(ammo, position, target);
        }
    }

    public void EyeAttack()
    {
        Vector3 playerPosition = GameManager.Instance.player.transform.position;
        Vector3 position = transform.position;
        float angle = Mathf.Atan2(playerPosition.y - position.y, playerPosition.x - position.x) * Mathf.Rad2Deg + 90f;
        GameObject beamInstance = Instantiate(Beam, shootPosition.position, Quaternion.Euler(0f, 0f, angle));
        beamInstance.transform.SetParent(transform);
        // TODO(il2cpp): Beam component field at offset 0x2c (3.5f) not identified.
    }

    public void OpenMouth()
    {
        // TODO(il2cpp): body not recovered; decompiled loop over GetTargetPositionList is unreadable.
    }

    public void StartEyeLoop(float eyeLoopDuration, float eyeLoopRate)
    {
        StartCoroutine(EyeLoop(eyeLoopDuration, eyeLoopRate));
    }

    public IEnumerator EyeLoop(float eyeLoopDuration, float eyeLoopRate)
    {
        // TODO(il2cpp): coroutine MoveNext body not recovered.
        yield break;
    }

    public void StartMouthOpenLoopMouth(float mouthOpenLoopRate, float mouthOpenLoopDuration)
    {
        StartCoroutine(MouthOpenLoop(mouthOpenLoopRate, mouthOpenLoopDuration));
    }

    public IEnumerator MouthOpenLoop(float mouthOpenLoopRate, float mouthOpenLoopDuration)
    {
        // TODO(il2cpp): coroutine MoveNext body not recovered.
        yield break;
    }
}
