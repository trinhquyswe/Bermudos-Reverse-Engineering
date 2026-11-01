using UnityEngine;
using UnityEngine.InputSystem;

// Approx: aim-direction constants assumed to be Vector2.up/down/left/right and the 0.71 diagonals.
// Approx: rest action has no recovered handler (TODO below). UI action map property name assumed to be UI.
[DisallowMultipleComponent]
public class PlayerControl : MonoBehaviour
{
    private Player player;
    private InputSystem_Actions inputSystem_Actions;
    private InputAction move;
    private InputAction fire;
    private InputAction rightClick;
    private InputAction spaceClick;
    private InputAction beam;
    private InputAction openInventory;
    private InputAction useItemAction;
    private InputAction restAction;
    private BeamByPlayer beamByPlayer;
    private InventoryManager inventoryManager;
    private ItemConsumer useItem;
    private Vector2 direction;
    private Vector2 lastMoveDirection;
    private Vector2 previousLastDirection;
    private float dashCooldownTimer;
    private float bashCooldownTimer;
    private bool isRunningSoundPlaying;

    private void Awake()
    {
        // Approx: component lookups assumed from field types.
        player = GetComponent<Player>();
        beamByPlayer = GetComponent<BeamByPlayer>();
        inventoryManager = GetComponent<InventoryManager>();
        useItem = GetComponent<ItemConsumer>();
        inputSystem_Actions = new InputSystem_Actions();
        GameManager.Instance.OnGameStateChange += OnGameStateChange;
    }

    private void OnEnable()
    {
        move = inputSystem_Actions.Player.Move;
        fire = inputSystem_Actions.Player.Fire;
        beam = inputSystem_Actions.Player.Beam;
        rightClick = inputSystem_Actions.Player.RightClick;
        spaceClick = inputSystem_Actions.Player.SpaceClick;
        openInventory = inputSystem_Actions.UI.OpenInventory;
        useItemAction = inputSystem_Actions.UI.UseItem;
        restAction = inputSystem_Actions.Player.Rest;

        move.Enable();
        fire.Enable();
        beam.Enable();
        rightClick.Enable();
        spaceClick.Enable();
        useItemAction.Enable();
        restAction.Enable();

        fire.performed += OnFireClick;
        beam.performed += OnBeamPerformed;
        rightClick.performed += OnRightMouseClick;
        rightClick.canceled += OnRightMouseCanceled;
        spaceClick.performed += OnSpaceClick;
        openInventory.performed += OnOpenInventoryPerformed;
        useItemAction.performed += OnUseItemPerformed;
    }

    private void OnDisable()
    {
        fire.performed -= OnFireClick;
        beam.performed -= OnBeamPerformed;
        rightClick.performed -= OnRightMouseClick;
        rightClick.canceled -= OnRightMouseCanceled;
        spaceClick.performed -= OnSpaceClick;
        openInventory.performed -= OnOpenInventoryPerformed;
        useItemAction.performed -= OnUseItemPerformed;

        move.Disable();
        fire.Disable();
        beam.Disable();
        rightClick.Disable();
        spaceClick.Disable();
        openInventory.Disable();
        useItemAction.Disable();
        restAction.Disable();
    }

    private void OnDestroy()
    {
        GameManager.Instance.OnGameStateChange -= OnGameStateChange;
    }

    // Approx: openInventory is enabled only once the game reaches the Instruct state.
    private void OnGameStateChange(GameState gameState)
    {
        if ((gameState & ~GameState.Begin) == GameState.Instruct)
        {
            openInventory.Enable();
            GameManager.Instance.OnGameStateChange -= OnGameStateChange;
        }
    }

    private void OnRightMouseClick(InputAction.CallbackContext ctx)
    {
        if (bashCooldownTimer < Time.unscaledTime)
        {
            bashCooldownTimer = Time.unscaledTime + 0.5f;
            player.bashEvent.CallOnBashEvent(BashState.ActiveBash);
            StaticEventHandler.CallTriggerBashEvent();
        }
    }

    private void OnRightMouseCanceled(InputAction.CallbackContext ctx)
    {
        player.bashEvent.CallOnBashEvent(BashState.ReleaseBash);
    }

    private void OnSpaceClick(InputAction.CallbackContext ctx)
    {
        if (direction.sqrMagnitude >= 1e-10f && dashCooldownTimer < Time.time)
        {
            SoundEffectManager.Instance.PlaySoundEffect(player.dashSoundEffect);
            dashCooldownTimer = Time.time + 1f;
            player.dashEvent.CallDashEvent(direction);
            StaticEventHandler.CallTriggerDashEvent();
        }
    }

    private void OnFireClick(InputAction.CallbackContext ctx)
    {
        if (player.stamina.currentStamina > 10f)
        {
            player.attackEvent.CallAttackEvent();
        }
    }

    private void OnBeamPerformed(InputAction.CallbackContext ctx)
    {
        beamByPlayer.Beam();
    }

    private void OnOpenInventoryPerformed(InputAction.CallbackContext ctx)
    {
        inventoryManager.ToggleInventory();
    }

    private void OnUseItemPerformed(InputAction.CallbackContext ctx)
    {
        useItem.UseItemFromHotBar();
    }

    private void Update()
    {
        MovementInput();

        if (rightClick.ReadValue<float>() > 0f)
        {
            player.bashEvent.CallOnBashEvent(BashState.DuringBash);
        }
    }

    private void MovementInput()
    {
        Vector2 input = move.ReadValue<Vector2>();

        if ((((input.x == 0f && input.y != 0f) || (input.x != 0f && input.y == 0f))
            && direction.x != 0f) && direction.y != 0f)
        {
            lastMoveDirection = direction;
        }

        direction = input;

        if (direction.sqrMagnitude < 1e-10f)
        {
            if (isRunningSoundPlaying)
            {
                SoundEffectManager.Instance.StopSoundEffectLoop(player.runSoundEffect);
                isRunningSoundPlaying = false;
            }

            player.idleEvent.CallIdleEvent();

            if ((previousLastDirection - lastMoveDirection).sqrMagnitude < 1e-10f)
            {
                return;
            }

            previousLastDirection = lastMoveDirection;

            if (HelperUtilities.ApproximatelyEqual(lastMoveDirection, new Vector2(-0.71f, -0.71f), 0.01f))
            {
                player.animateEvent.CallAnimateEvent(AimDirection.DownLeft);
            }
            else if (HelperUtilities.ApproximatelyEqual(lastMoveDirection, new Vector2(0.71f, -0.71f), 0.01f))
            {
                player.animateEvent.CallAnimateEvent(AimDirection.DownRight);
            }
            else if (HelperUtilities.ApproximatelyEqual(lastMoveDirection, new Vector2(-0.71f, 0.71f), 0.01f))
            {
                player.animateEvent.CallAnimateEvent(AimDirection.UpLeft);
            }
            else if (HelperUtilities.ApproximatelyEqual(lastMoveDirection, new Vector2(0.71f, 0.71f), 0.01f))
            {
                player.animateEvent.CallAnimateEvent(AimDirection.UpRight);
            }
            return;
        }

        AimDirection aimDirection;
        bool hasAim = true;
        if ((direction - Vector2.up).sqrMagnitude < 1e-10f)
        {
            aimDirection = AimDirection.Up;
        }
        else if ((direction - Vector2.down).sqrMagnitude < 1e-10f)
        {
            aimDirection = AimDirection.Down;
        }
        else if ((direction - Vector2.left).sqrMagnitude < 1e-10f)
        {
            aimDirection = AimDirection.Left;
        }
        else if ((direction - Vector2.right).sqrMagnitude < 1e-10f)
        {
            aimDirection = AimDirection.Right;
        }
        else if (HelperUtilities.ApproximatelyEqual(direction, new Vector2(-0.71f, -0.71f), 0.01f))
        {
            aimDirection = AimDirection.DownLeft;
        }
        else if (HelperUtilities.ApproximatelyEqual(direction, new Vector2(0.71f, -0.71f), 0.01f))
        {
            aimDirection = AimDirection.DownRight;
        }
        else if (HelperUtilities.ApproximatelyEqual(direction, new Vector2(-0.71f, 0.71f), 0.01f))
        {
            aimDirection = AimDirection.UpLeft;
        }
        else if (HelperUtilities.ApproximatelyEqual(direction, new Vector2(0.71f, 0.71f), 0.01f))
        {
            aimDirection = AimDirection.UpRight;
        }
        else
        {
            aimDirection = AimDirection.Up;
            hasAim = false;
        }

        if (hasAim)
        {
            player.animateEvent.CallAnimateEvent(aimDirection);
        }

        float moveSpeed = player.movementDetails.minMoveSpeed;
        if (player.movementDetails.minMoveSpeed != player.movementDetails.maxMoveSpeed)
        {
            moveSpeed = Random.Range(player.movementDetails.minMoveSpeed, player.movementDetails.maxMoveSpeed);
        }

        player.movementByVelocityEvent.CallMovementByVelocityEvent(direction, moveSpeed);

        if (!isRunningSoundPlaying)
        {
            SoundEffectManager.Instance.PlaySoundEffectPersistent(player.runSoundEffect, true);
            isRunningSoundPlaying = true;
        }
    }

    // TODO(il2cpp): Rest action handler not recovered from the pseudo; restAction is enabled but not wired.
}
