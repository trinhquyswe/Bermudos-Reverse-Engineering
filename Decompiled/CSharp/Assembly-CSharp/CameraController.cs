// Reconstructed from IL2CPP metadata (Dump/dump.cs) + decompiled webgl wasm (wabt wasm-decompile).
// Structure (types/fields/method signatures) is accurate; bodies are decompiled pseudo-code
// recovered from the WebAssembly binary, not original C#.

// Namespace: TMPro.Examples
public class CameraController : MonoBehaviour
{
	// Fields
	private Transform cameraTransform;
	private Transform dummyTarget;
	public Transform CameraTarget;
	public float FollowDistance;
	public float MaxFollowDistance;
	public float MinFollowDistance;
	public float ElevationAngle;
	public float MaxElevationAngle;
	public float MinElevationAngle;
	public float OrbitalAngle;
	public CameraController.CameraModes CameraMode;
	public bool MovementSmoothing;
	public bool RotationSmoothing;
	private bool previousSmoothing;
	public float MovementSmoothingValue;
	public float RotationSmoothingValue;
	public float MoveSensitivity;
	private Vector3 currentVelocity;
	private Vector3 desiredPosition;
	private float mouseX;
	private float mouseY;
	private Vector3 moveVector;
	private float mouseWheel;
	private const string event_SmoothingValue = "Slider - Smoothing Value";
	private const string event_FollowDistance = "Slider - Camera Zoom";

	// Methods
	private void Awake()
	{
		// <no wasm mapping>
	}

	private void Start()
	{
		// <no wasm mapping>
	}

	private void LateUpdate()
	{
		// <no wasm mapping>
	}

	private void GetPlayerInput()
	{
		// <no wasm mapping>
	}

	public void .ctor()
	{
		// <no wasm mapping>
	}

}
