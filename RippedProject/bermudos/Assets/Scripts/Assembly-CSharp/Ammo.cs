// Ammo.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Ammo.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class Ammo : MonoBehaviour, IFireable
{
	// Fields
	public AmmoDetailsSO ammoDetailsSO; // 0x10
	private EnemyEffect enemyEffect; // 0x14
	private PlayerEffect playerEffect; // 0x18
	private DestroyedEvent destroyedEvent; // 0x1C
	private AmmoVisual ammoVisual; // 0x20
	private AmmoAnimation ammoAnimation; // 0x24
	private LayerMask enemyLayerMask; // 0x28
	private LayerMask playerLayerMask; // 0x2C
	private LayerMask bossLayerMask; // 0x30
	private Vector2 trajectoryStartPoint; // 0x34
	private Vector2 target; // 0x3C
	private Vector2 trajectoryRange; // 0x44
	private Vector2 ammoMoveDirection; // 0x4C
	private float nextYTrajectoryPosition; // 0x54
	private float nextXTrajectoryPosition; // 0x58
	private float trajectoryMaxRelativeHeight; // 0x5C
	private float nextPositionYCorrectionAbsolute; // 0x60
	private float nextPositionXCorrectionAbsolute; // 0x64
	private float speed; // 0x68
	private int poiseAmount; // 0x6C
	private float stunDuration; // 0x70
	public AmmoState ammoState; // 0x74
	private bool isColliding; // 0x78
	private SoundEffectSO shootSoundEffect; // 0x7C
	private bool isFirstOnEnable; // 0x80

	// Methods

	// wasm func86820 -> ram:81a45d5c  [Ammo::Awake]
	private void Awake()
	{
			uint uVar1;
			int iVar2;
			ulong[] auStack_10 = new ulong[2];

			if (cRam00664a65 == '\0') {
				unnamed_function_1099(0x565d6c);
				cRam00664a65 = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(auStack_10,uVar1,0);
			this.trajectoryStartPoint = auStack_10[0];
			if (this.isFirstOnEnable == '\0') {
				iVar2 = *(int *)(iRam00565d6c + 0x10);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
				if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
					iVar2 = System.Threading.Monitor.Enter_1(iVar2);
				}
				SoundEffectManager.Start(**(uint **)(iVar2 + 0x5c),this.shootSoundEffect,0);
			}
			else {
				this.isFirstOnEnable = 0;
			}
			return;
	}

	// wasm func86821 -> ram:81a45e0b  [Ammo::OnEnable]
	private void OnEnable()
	{
			Ammo.AmmoHitEffect(this,this);
			return;
	}

	// wasm func86823 -> ram:81a45ec5  [Ammo::Start]
	private void Start()
	{
			if (this.ammoState == 1) {
				Ammo.GetNextPositionYCorrectionAbsolute(this,this);
			}
			else if (this.ammoState != 2) {
				Ammo.Update(this,this);
				return;
			}
			return;
	}

	// wasm func86824 -> ram:81a45ef0  [Ammo::Update]
	private void Update()
	{
			float fVar1;
			float fVar2;
			float fVar3;

			fVar2 = (float)((ulong)this.target >> 0x20) -
							(float)((ulong)this.trajectoryStartPoint >> 0x20);
			fVar3 = (float)this.target - (float)this.trajectoryStartPoint;
			this.trajectoryRange = CONCAT44(fVar2,fVar3);
			if (cRam006634ad == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ad = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
			if (1e-05 < fVar2) {
				fVar3 = fVar3 / fVar2;
			}
			else {
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				fVar3 = **(float **)(iRam0055d024 + 0x5c);
			}
			fVar1 = *(float *)(this + 0x48);
			fVar2 = this.trajectoryRange;
			if (cRam006634ad == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ad = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
			if (1e-05 < fVar2) {
				fVar1 = fVar1 / fVar2;
			}
			else {
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				fVar1 = *(float *)(*(int *)(iRam0055d024 + 0x5c) + 4);
			}
			if (ABS(fVar3) < ABS(fVar1)) {
				if (*(float *)(this + 0x48) < 0.0) {
					this.speed = -this.speed;
				}
				Ammo.UpdateAmmoPosition(this,this);
				return;
			}
			if (this.trajectoryRange < 0.0) {
				this.speed = -this.speed;
			}
			Ammo.UpdateAmmoXPosition(this,this);
			return;
	}

	// wasm func86826 -> ram:81a461e0  [Ammo::UpdateAmmoPosition]
	private void UpdateAmmoPosition()
	{
			uint uVar1;
			float fVar2;
			float fVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			float fVar8;
			ulong uStack_30;
			uint uStack_28;
			float fStack_20;
			float fStack_1c;
			uint uStack_18;
			float fStack_10;
			float fStack_c;

			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar1,0);
			fVar6 = fStack_c;
			fVar4 = this.speed;
			fVar2 = (float)UnityEngine.Time.get_time(0);
			fVar6 = fVar6 + fVar4 * fVar2;
			fVar7 = (fVar6 - *(float *)(this + 0x38)) / *(float *)(this + 0x48);
			fVar4 = (float)UnityEngine.AnimationCurve.get_length
															 (*(uint *)(this.ammoDetailsSO + 0x30),fVar7,0);
			fVar3 = (float)UnityEngine.AnimationCurve.get_length
															 (*(uint *)(this.ammoDetailsSO + 0x34),fVar7,0);
			fVar8 = this.trajectoryRange;
			*(float *)(this + 100) = fVar3 * fVar8;
			fVar2 = fVar4 * this.trajectoryMaxRelativeHeight;
			this.nextXTrajectoryPosition = fVar2;
			if ((0.0 < fVar8) && (0.0 < *(float *)(this + 0x48))) {
				fVar2 = -fVar2;
				this.nextXTrajectoryPosition = fVar2;
			}
			if ((fVar8 < 0.0) && (*(float *)(this + 0x48) < 0.0)) {
				fVar2 = -fVar2;
				this.nextXTrajectoryPosition = fVar2;
			}
			fVar5 = this.trajectoryStartPoint;
			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar1,0);
			fVar3 = fVar3 * fVar8 + fVar5 + fVar2;
			this.ammoMoveDirection = CONCAT44(fVar6 - fStack_c,fVar3 - fStack_10);
			fVar2 = (float)UnityEngine.AnimationCurve.get_length
															 (*(uint *)(this.ammoDetailsSO + 0x38),fVar4,0);
			this.speed = fVar2 * *(float *)(this.ammoDetailsSO + 0xc);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			uStack_18 = 0;
			uStack_28 = 0;
			uStack_30 = CONCAT44(fVar6,fVar3);
			fStack_20 = fVar3;
			fStack_1c = fVar6;
			UnityEngine.Transform.ctor(uVar1,&uStack_30,0);
			if (0.996 < fVar7) {
				this.ammoState = 1;
			}
			return;
	}

	// wasm func86827 -> ram:81a46371  [Ammo::UpdateAmmoXPosition]
	private void UpdateAmmoXPosition()
	{
			uint uVar1;
			float fVar2;
			float fVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			ulong uStack_30;
			uint uStack_28;
			float fStack_20;
			float fStack_1c;
			uint uStack_18;
			float fStack_10;
			float fStack_c;

			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar1,0);
			fVar5 = fStack_10;
			fVar3 = this.speed;
			fVar2 = (float)UnityEngine.Time.get_time(0);
			fVar5 = fVar5 + fVar3 * fVar2;
			fVar6 = (fVar5 - this.trajectoryStartPoint) / this.trajectoryRange;
			fVar2 = (float)UnityEngine.AnimationCurve.get_length
															 (*(uint *)(this.ammoDetailsSO + 0x30),fVar6,0);
			fVar3 = (float)UnityEngine.AnimationCurve.get_length
															 (*(uint *)(this.ammoDetailsSO + 0x34),fVar6,0);
			fVar7 = *(float *)(this + 0x48);
			this.nextPositionYCorrectionAbsolute = fVar3 * fVar7;
			fVar2 = fVar2 * this.trajectoryMaxRelativeHeight;
			this.nextYTrajectoryPosition = fVar2;
			if ((0.0 < this.trajectoryRange) && (fVar7 < 0.0)) {
				fVar2 = -fVar2;
				this.nextYTrajectoryPosition = fVar2;
			}
			if ((this.trajectoryRange < 0.0) && (fVar7 < 0.0)) {
				fVar2 = -fVar2;
				this.nextYTrajectoryPosition = fVar2;
			}
			fVar4 = *(float *)(this + 0x38);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar1,0);
			fVar3 = fVar3 * fVar7 + fVar4 + fVar2;
			this.ammoMoveDirection = CONCAT44(fVar3 - fStack_c,fVar5 - fStack_10);
			fVar2 = (float)UnityEngine.AnimationCurve.get_length
															 (*(uint *)(this.ammoDetailsSO + 0x38),fVar6,0);
			this.speed = fVar2 * *(float *)(this.ammoDetailsSO + 0xc);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			uStack_18 = 0;
			uStack_28 = 0;
			uStack_30 = CONCAT44(fVar3,fVar5);
			fStack_20 = fVar5;
			fStack_1c = fVar3;
			UnityEngine.Transform.ctor(uVar1,&uStack_30,0);
			if (0.996 < fVar6) {
				this.ammoState = 1;
			}
			return;
	}

	// no recovered body in Ammo.c
	private void UpdateAmmoYPosition()
	{
		// <no recovered body>
	}

	// no recovered body in Ammo.c
	public Vector2 GetAmmoMoveDirection()
	{
		// <no recovered body>
	}

	// no recovered body in Ammo.c
	public float GetNextYTrajectoryPosition()
	{
		// <no recovered body>
	}

	// wasm func86825 -> ram:81a46098  [Ammo::GetNextPositionYCorrectionAbsolute]
	public float GetNextPositionYCorrectionAbsolute()
	{
			uint uVar1;
			float fVar2;
			float fVar3;
			float fVar4;
			float fVar5;
			ulong uStack_30;
			float fStack_28;
			float fStack_20;
			float fStack_1c;
			float fStack_18;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar1,0);
			fVar2 = *(float *)(this + 0x50);
			fVar3 = this.ammoMoveDirection;
			if (cRam006634ad == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ad = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
			if (1e-05 < fVar4) {
				fVar2 = fVar2 / fVar4;
				fVar3 = fVar3 / fVar4;
			}
			else {
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				fVar2 = (*(float **)(iRam0055d024 + 0x5c))[1];
				fVar3 = **(float **)(iRam0055d024 + 0x5c);
			}
			fVar5 = *(float *)(this.ammoDetailsSO + 0xc);
			fVar4 = (float)UnityEngine.Time.get_time(0);
			fStack_28 = fStack_8 + fVar5 * 0.0 * fVar4;
			fStack_1c = fStack_c + fVar4 * fVar2 * fVar5;
			fStack_20 = fStack_10 + fVar4 * fVar3 * fVar5;
			uStack_30 = CONCAT44(fStack_1c,fStack_20);
			fStack_18 = fStack_28;
			UnityEngine.Transform.ctor(uVar1,&uStack_30,0);
			return;
	}

	// wasm func86828 -> ram:81a46500  [Ammo::MoveAmmoByDirection]
	private void MoveAmmoByDirection()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			float fVar1;

			fVar1 = (float)UnityEngine.AnimationCurve.get_length
															 (*(uint *)(this.ammoDetailsSO + 0x38),param_2,0);
			this.speed = fVar1 * *(float *)(this.ammoDetailsSO + 0xc);
			return;
	}

	// wasm func86829 -> ram:81a46522  [Ammo::CalculateNextAmmoMoveSpeed]
	private void CalculateNextAmmoMoveSpeed(float nextPositionXNormalized)
	{
		float * param_3 = 0; // IL2CPP hidden slot
			ulong uVar1;
			uint uVar2;
			uint uVar3;
			float fVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			this.ammoDetailsSO = nextPositionXNormalized;
			fVar4 = *param_3;
			fVar5 = param_3[1];
			uVar1 = *(ulong *)param_3;
			fVar6 = param_3[2];
			uVar2 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar2,0);
			if (cRam006634ae == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ae = '\x01';
			}
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			uVar2 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar2,0);
			fVar7 = *(float *)(nextPositionXNormalized + 0x14);
			this.target = uVar1;
			this.trajectoryMaxRelativeHeight =
					 fVar7 * ABS(SQRT((fVar4 - fStack_10) * (fVar4 - fStack_10) +
														(fVar5 - fStack_c) * (fVar5 - fStack_c) +
														(fVar6 - fStack_8) * (fVar6 - fStack_8)));
			if (cRam00664a66 == '\0') {
				unnamed_function_1099(0x57418c);
				cRam00664a66 = '\x01';
			}
			uVar2 = unnamed_function_44644(this,0);
			uVar3 = UnityEngine.LayerMask.LayerToName(uRam0057418c,0);
			UnityEngine.GameObject.get_transform(uVar2,uVar3,0);
			this.isColliding = 0;
			this.ammoState = 0;
			AmmoAnimation.Awake(this.ammoAnimation,this);
			uVar2 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar2,1,0);
			return;
	}

	// wasm func86831 -> ram:81a466e8  [Ammo::InitialiseAmmo]
	public void InitialiseAmmo(AmmoDetailsSO ammoDetailsSO, Vector3 target)
	{
			uint uVar1;
			uint uVar2;

			if (cRam00664a66 == '\0') {
				unnamed_function_1099(0x57418c);
				cRam00664a66 = '\x01';
			}
			uVar1 = unnamed_function_44644(this,0);
			uVar2 = UnityEngine.LayerMask.LayerToName(uRam0057418c,0);
			UnityEngine.GameObject.get_transform(uVar1,uVar2,0);
			return;
	}

	// wasm func21524 -> ram:807b0f71  [Ammo::SetAmmoPlayer]
	private void SetAmmoPlayer()
	{
		ulong * param_2 = 0; // IL2CPP hidden slot
			this.target = *param_2;
			return;
	}

	// wasm func86832 -> ram:81a46725  [Ammo::SetTargetPosition]
	private void SetTargetPosition(Vector3 target)
	{
			uint uVar1;

			uVar1 = unnamed_function_44644(this,0);
			unnamed_function_44686(uVar1,target,0);
			return;
	}

	// wasm func86833 -> ram:81a46739  [Ammo::SetGameObjectActive]
	private void SetGameObjectActive(bool isActive)
	{
			byte cVar1;
			int iVar2;
			uint uVar3;
			uint uVar4;
			int iVar5;
			uint uVar6;
			uint uVar7;
			uint uVar8;
			uint uVar9;
			uint uVar10;
			int iVar11;
			float fVar12;
			int iVar13;
			ulong uStack_40;
			uint uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664a67 == '\0') {
				unnamed_function_1099(0x567e34);
				unnamed_function_1099(0x567e84);
				unnamed_function_1099(0x567ef4);
				unnamed_function_1099(0x567ef8);
				unnamed_function_1099(0x567f04);
				unnamed_function_1099(0x567fe8);
				cRam00664a67 = '\x01';
			}
			if (this.isColliding == '\0') {
				iVar2 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567f04);
				if ((iVar2 != 0) && (*(byte *)(iVar2 + 0x18) == '\0')) {
					iVar13 = *(int *)(this.ammoDetailsSO + 0x10);
					if (0 < *(int *)(iVar2 + 0x10)) {
						iVar13 = *(int *)(iVar2 + 0x10);
					}
					Health.Start(*(uint *)(iVar2 + 0x14),iVar13,this);
				}
				uVar6 = this.playerLayerMask;
				uVar3 = unnamed_function_44644(isActive,0);
				uVar4 = UnityEngine.Camera.get_cullingMask(uVar3,0);
				if (0 < (int)(uVar6 & 1 << (uVar4 & 0x1f))) {
					uVar3 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567ef4);
					uVar10 = System.Linq.Enumerable.Count(this,0);
					UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar10,0);
					uStack_18 = uStack_10;
					uStack_20 = uStack_10;
					PlayerEffect.DamageFlashCoroutine(uVar3,&uStack_20,this);
					uVar3 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567ef4);
					iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
					uVar9 = *(uint *)(iVar2 + 0x18);
					iVar2 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
					uVar7 = *(uint *)(iVar2 + 0x1c);
					uVar10 = unnamed_function_65381(isActive,uRam00567fe8);
					uVar8 = unnamed_function_44644(uVar3,0);
					iVar2 = UnityEngine.GameObject.set_layer(uVar8,0);
					if (iVar2 != 0) {
						if (cRam00664ae5 == '\0') {
							unnamed_function_1099(0x55e5f8);
							cRam00664ae5 = '\x01';
						}
						iVar2 = unnamed_function_95402(uRam0055e5f8);
						*(uint *)(iVar2 + 0x18) = uVar3;
						*(uint *)(iVar2 + 8) = 0;
						*(uint *)(iVar2 + 0x1c) = uVar7;
						*(uint *)(iVar2 + 0x14) = uVar9;
						*(uint *)(iVar2 + 0x10) = uVar10;
						UnityEngine.MonoBehaviour.StartCoroutine_1(uVar3,iVar2,0);
					}
				}
				uVar6 = this.enemyLayerMask;
				uVar3 = unnamed_function_44644(isActive,0);
				uVar4 = UnityEngine.Camera.get_cullingMask(uVar3,0);
				if (0 < (int)(uVar6 & 1 << (uVar4 & 0x1f))) {
					iVar2 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567e84);
					if (iVar2 != 0) {
						uVar3 = System.Linq.Enumerable.Count(this,0);
						UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar3,0);
						uStack_28 = uStack_8;
						uStack_30 = uStack_10;
						EnemyEffect.DamageFlashCoroutine(iVar2,&uStack_30,this);
					}
					iVar2 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567e84);
					if (iVar2 != 0) {
						iVar13 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
						uVar8 = *(uint *)(iVar13 + 0x18);
						iVar13 = UnityEngine.MonoBehaviour.InvokeRepeating(this);
						uVar9 = *(uint *)(iVar13 + 0x1c);
						uVar3 = unnamed_function_65381(isActive,uRam00567fe8);
						uVar10 = unnamed_function_44644(iVar2,0);
						iVar13 = UnityEngine.GameObject.set_layer(uVar10,0);
						if (iVar13 != 0) {
							if (cRam00664ade == '\0') {
								unnamed_function_1099(0x55ddcc);
								cRam00664ade = '\x01';
							}
							iVar13 = unnamed_function_95402(uRam0055ddcc);
							*(int *)(iVar13 + 0x18) = iVar2;
							*(uint *)(iVar13 + 8) = 0;
							*(uint *)(iVar13 + 0x1c) = uVar9;
							*(uint *)(iVar13 + 0x14) = uVar8;
							*(uint *)(iVar13 + 0x10) = uVar3;
							UnityEngine.MonoBehaviour.StartCoroutine_1(iVar2,iVar13,0);
						}
					}
					iVar2 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567ef8);
					iVar13 = this.poiseAmount;
					fVar12 = *(float *)(iVar2 + 0x18) - (float)iVar13;
					*(float *)(iVar2 + 0x18) = fVar12;
					if (fVar12 <= 0.0) {
						uVar3 = *(uint *)(iVar2 + 0x1c);
						uVar10 = *(uint *)(iVar2 + 0x14);
						iVar2 = *(int *)(iVar2 + 0x10);
						if (cRam00664b46 == '\0') {
							unnamed_function_1099(0x55c07c);
							cRam00664b46 = '\x01';
						}
						iVar11 = *(int *)(iVar2 + 0x10);
						if (iVar11 != 0) {
							iVar5 = unnamed_function_95402(uRam0055c07c);
							*(uint *)(iVar5 + 0x14) = uVar3;
							*(uint *)(iVar5 + 0x10) = uVar10;
							*(float *)(iVar5 + 0xc) = fVar12;
							*(float *)(iVar5 + 8) = (float)iVar13;
							(**(code **)((ulong)*(uint *)(iVar11 + 0xc) * 4))
												(*(uint *)(iVar11 + 0x20),iVar2,iVar5,*(uint *)(iVar11 + 0x14));
						}
					}
				}
				uVar6 = this.bossLayerMask;
				uVar3 = unnamed_function_44644(isActive,0);
				uVar4 = UnityEngine.Camera.get_cullingMask(uVar3,0);
				if (0 < (int)(uVar6 & 1 << (uVar4 & 0x1f))) {
					iVar2 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567ef8);
					iVar13 = this.poiseAmount;
					fVar12 = *(float *)(iVar2 + 0x18) - (float)iVar13;
					*(float *)(iVar2 + 0x18) = fVar12;
					if (fVar12 <= 0.0) {
						uVar3 = *(uint *)(iVar2 + 0x1c);
						uVar10 = *(uint *)(iVar2 + 0x14);
						iVar2 = *(int *)(iVar2 + 0x10);
						if (cRam00664b46 == '\0') {
							unnamed_function_1099(0x55c07c);
							cRam00664b46 = '\x01';
						}
						iVar11 = *(int *)(iVar2 + 0x10);
						if (iVar11 != 0) {
							iVar5 = unnamed_function_95402(uRam0055c07c);
							*(uint *)(iVar5 + 0x14) = uVar3;
							*(uint *)(iVar5 + 0x10) = uVar10;
							*(float *)(iVar5 + 0xc) = fVar12;
							*(float *)(iVar5 + 8) = (float)iVar13;
							(**(code **)((ulong)*(uint *)(iVar11 + 0xc) * 4))
												(*(uint *)(iVar11 + 0x20),iVar2,iVar5,*(uint *)(iVar11 + 0x14));
						}
					}
					iVar2 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567e34);
					if (iVar2 != 0) {
						uVar3 = System.Linq.Enumerable.Count(this,0);
						UnityEngine.Camera.get_farClipPlane(&uStack_10,uVar3,0);
						uStack_38 = uStack_8;
						uStack_40 = uStack_10;
						BossEffect.PoiseEvent_onPoiseEvent(iVar2,&uStack_40,this);
					}
					iVar2 = UnityEngine.GameObject.get_activeInHierarchy(isActive,uRam00567e34);
					if (iVar2 != 0) {
						if (cRam00664ad9 == '\0') {
							unnamed_function_1099(0x55c620);
							cRam00664ad9 = '\x01';
						}
						cVar1 = *(byte *)(iVar2 + 0x3c);
						uVar3 = *(uint *)(iVar2 + 0x40);
						if (*(int *)(iRam0055c620 + 0x74) == 0) {
							unnamed_function_94848(iRam0055c620);
						}
						iVar2 = 0x6c;
						if (cVar1 == '\0') {
							iVar2 = 0x38;
						}
						UnityEngine.Animator.SetTrigger
											(uVar3,*(uint *)(*(int *)(iRam0055c620 + 0x5c) + iVar2),0);
					}
				}
				Ammo.OnTriggerEnter2D(this,this);
				uVar3 = unnamed_function_44644(this,0);
				unnamed_function_44686(uVar3,0,0);
				this.isColliding = 1;
			}
			return;
	}

	// wasm func86839 -> ram:81a472f3  [Ammo::OnTriggerEnter2D]
	private void OnTriggerEnter2D(Collider2D collision)
	{
			uint uVar1;
			int *piVar2;
			int iVar3;
			uint uVar4;
			uint uVar5;
			byte[] auStack_d0 = new byte[8];
			ulong uStack_c8;
			ulong uStack_c0;
			ulong uStack_b8;
			ulong uStack_b0;
			ulong uStack_a8;
			uint uStack_a0;
			ulong uStack_98;
			ulong uStack_90;
			ulong uStack_88;
			ulong uStack_80;
			ulong uStack_78;
			uint uStack_70;
			ulong uStack_68;
			ulong uStack_60;
			ulong uStack_58;
			uint uStack_50;
			ulong uStack_48;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			uint uStack_10;
			int[] aiStack_8 = new int[2];

			if (cRam00664a68 == '\0') {
				unnamed_function_1099(0x55a00c);
				unnamed_function_1099(0x565d64);
				cRam00664a68 = '\x01';
			}
			iVar3 = *(int *)(iRam00565d64 + 0x10);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
			if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
				iVar3 = System.Threading.Monitor.Enter_1(iVar3);
			}
			uVar4 = **(uint **)(iVar3 + 0x5c);
			iVar3 = UnityEngine.MonoBehaviour.InvokeRepeating(auStack_d0);
			uVar5 = *(uint *)(iVar3 + 0x20);
			uVar1 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&uStack_58,uVar1,0);
			if (cRam006603e8 == '\0') {
				unnamed_function_1099(0x55c148);
				cRam006603e8 = '\x01';
			}
			uStack_80 = (*(ulong **)(iRam0055c148 + 0x5c))[1];
			uStack_88 = **(ulong **)(iRam0055c148 + 0x5c);
			uStack_70 = uStack_50;
			uStack_78 = uStack_58;
			uStack_68 = uStack_88;
			uStack_60 = uStack_80;
			piVar2 = (int *)PoolManager.CreatePool(uVar4,uVar5,&uStack_78,&uStack_88,0);
			uStack_90 = *(ulong *)(this.ammoDetailsSO + 0x24);
			uStack_98 = *(ulong *)(this.ammoDetailsSO + 0x1c);
			if (iRam0055a00c !=
					*(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iRam0055a00c + 0xb8) * 4 + -4)) {
				piVar2 = (int *)0x0;
			}
			aiStack_8[0] = piVar2[4];
			uStack_48 = uStack_98;
			uStack_40 = uStack_90;
			UnityEngine.ParticleSystem.MinMaxCurve.op_Implicit(&uStack_38,&uStack_98,0);
			uStack_a0 = uStack_10;
			uStack_a8 = uStack_18;
			uStack_b0 = uStack_20;
			uStack_b8 = uStack_28;
			uStack_c0 = uStack_30;
			uStack_c8 = uStack_38;
			UnityEngine.ParticleSystem.MainModule.set_startRotation(aiStack_8,&uStack_c8,0);
			uVar1 = unnamed_function_44644(piVar2,0);
			unnamed_function_44686(uVar1,1,0);
			return;
	}

	// wasm func86822 -> ram:81a45e17  [Ammo::AmmoHitEffect]
	private void AmmoHitEffect()
	{
			int iVar1;
			uint uVar2;

			if (cRam00664a69 == '\0') {
				unnamed_function_1099(0x559cf4);
				unnamed_function_1099(0x574184);
				unnamed_function_1099(0x572aa0);
				unnamed_function_1099(0x576924);
				cRam00664a69 = '\x01';
			}
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar1 + 0x10) = uRam00574184;
			uVar2 = UnityEngine.LayerMask.NameToLayer(iVar1,0);
			this.enemyLayerMask = uVar2;
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar1 + 0x10) = uRam00576924;
			uVar2 = UnityEngine.LayerMask.NameToLayer(iVar1,0);
			this.playerLayerMask = uVar2;
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar1 + 0x10) = uRam00572aa0;
			uVar2 = UnityEngine.LayerMask.NameToLayer(iVar1,0);
			this.bossLayerMask = uVar2;
			return;
	}

	// no recovered body in Ammo.c
	private void GetLayerMark()
	{
		// <no recovered body>
	}

	// wasm func86846 -> ram:81a477a0  [Ammo::DisableAmmo]
	private void DisableAmmo()
	{
			this.isFirstOnEnable = 1;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86847 -> ram:81a477b3  [Ammo::.ctor]
	public Ammo()
	{
			uint uVar1;

			if (cRam00664a6a == '\0') {
				unnamed_function_1099(0x567e08);
				unnamed_function_1099(0x567e18);
				cRam00664a6a = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e08);
			this.enemyEffect = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e18);
			this.ammoDetailsSO = uVar1;
			return;
	}
}

