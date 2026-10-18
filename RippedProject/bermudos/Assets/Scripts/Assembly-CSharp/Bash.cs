// Bash.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Bash.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
[RequireComponent(typeof(Player))]
public class Bash : MonoBehaviour
{
	// Fields
	private Collider2D collider2d; // 0x10
	private LayerMask layerMask; // 0x14
	private Player player; // 0x18
	private Arrow arrow; // 0x1C
	private BashState bashState; // 0x20
	private SoundEffectSO duringBashSoundEffect; // 0x24
	private SoundEffectSO releaseBashSoundEffect; // 0x28
	private string instructionBash; // 0x2C
	private bool isDuring; // 0x30
	private bool isRelease; // 0x31
	private bool isDuringSoundPlaying; // 0x32
	private float aimCountdown; // 0x34
	private float bashForce; // 0x38
	private int bashCost; // 0x3C
	private float bashRadius; // 0x40
	private int displayCount; // 0x44

	// Methods

	// wasm func86645 -> ram:81a412aa  [Bash::Awake]
	private void Awake()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;
			int iVar6;
			uint uVar7;

			if (cRam0066496c == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x557aac);
				unnamed_function_1099(0x567694);
				unnamed_function_1099(0x567698);
				unnamed_function_1099(0x565d78);
				cRam0066496c = '\x01';
			}
			iVar5 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
			if ((*(byte *)(iVar5 + 0xbd) & 1) == 0) {
				iVar5 = System.Threading.Monitor.Enter_1(iVar5);
			}
			iVar6 = **(int **)(iVar5 + 0x5c);
			uVar7 = *(uint *)(iVar6 + 0x20);
			uVar2 = unnamed_function_95402(uRam005579ec);
			unnamed_function_60038(uVar2,this,uRam00567694,0);
			iVar5 = unnamed_function_85158(uVar7,uVar2,0);
			uVar2 = uRam005579ec;
			if (iVar5 == 0) {
				*(uint *)(iVar6 + 0x20) = 0;
			}
			else {
				iVar3 = unnamed_function_1112(iVar5,uRam005579ec);
				if (iVar3 == 0) {
					unnamed_function_1116(iVar5,uVar2);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar6 + 0x20) = iVar3;
				uVar2 = uRam005579ec;
				iVar6 = unnamed_function_1112(iVar5,uRam005579ec);
				if (iVar6 == 0) {
					unnamed_function_1116(iVar5,uVar2);
					do {
						halt_trap();
					} while( true );
				}
			}
			iVar5 = *(int *)(this.player + 0x34);
			uVar2 = unnamed_function_95402(uRam00557aac);
			unnamed_function_60334(uVar2,this,uRam00567698,0);
			if (cRam00664976 == '\0') {
				unnamed_function_1099(0x557aac);
				cRam00664976 = '\x01';
			}
			iVar6 = *(int *)(iVar5 + 0x10);
			while( true ) {
				iVar3 = 0;
				iVar4 = unnamed_function_85158(iVar6,uVar2,0);
				uVar7 = uRam00557aac;
				if ((iVar4 != 0) && (iVar3 = unnamed_function_1112(iVar4,uRam00557aac), iVar3 == 0)) break;
				iVar3 = System.Net.WebOperation.ctor(iVar5 + 0x10,iVar3,iVar6);
				bVar1 = iVar6 == iVar3;
				iVar6 = iVar3;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar4,uVar7);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86647 -> ram:81a414d4  [Bash::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			uint uVar5;
			int iVar6;
			int iVar7;

			if (cRam0066496d == '\0') {
				unnamed_function_1099(0x557aac);
				unnamed_function_1099(0x567698);
				cRam0066496d = '\x01';
			}
			iVar7 = *(int *)(this.player + 0x34);
			uVar5 = unnamed_function_95402(uRam00557aac);
			unnamed_function_60334(uVar5,this,uRam00567698,0);
			if (cRam00664977 == '\0') {
				unnamed_function_1099(0x557aac);
				cRam00664977 = '\x01';
			}
			iVar3 = *(int *)(iVar7 + 0x10);
			while( true ) {
				iVar4 = 0;
				iVar6 = unnamed_function_85160(iVar3,uVar5,0);
				uVar2 = uRam00557aac;
				if ((iVar6 != 0) && (iVar4 = unnamed_function_1112(iVar6,uRam00557aac), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(iVar7 + 0x10,iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar6,uVar2);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86649 -> ram:81a41621  [Bash::OnDisable]
	private void OnDisable()
	{
		int param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			int iVar2;
			int iVar3;
			int iVar4;
			uint uVar5;

			if (cRam0066496e == '\0') {
				unnamed_function_1099(0x5579ec);
				unnamed_function_1099(0x567694);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x5750d4);
				cRam0066496e = '\x01';
			}
			if (param_2 == 2) {
				unnamed_function_44717(this,uRam005750d4,0,0x3e19999a,0);
				iVar3 = *(int *)(iRam00565d78 + 0x10);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
				if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
					iVar3 = System.Threading.Monitor.Enter_1(iVar3);
				}
				iVar4 = **(int **)(iVar3 + 0x5c);
				uVar5 = *(uint *)(iVar4 + 0x20);
				uVar1 = unnamed_function_95402(uRam005579ec);
				unnamed_function_60038(uVar1,this,uRam00567694,0);
				iVar3 = unnamed_function_85160(uVar5,uVar1,0);
				uVar1 = uRam005579ec;
				if (iVar3 == 0) {
					*(uint *)(iVar4 + 0x20) = 0;
					return;
				}
				iVar2 = unnamed_function_1112(iVar3,uRam005579ec);
				if (iVar2 == 0) {
					unnamed_function_1116(iVar3,uVar1);
					do {
						halt_trap();
					} while( true );
				}
				*(int *)(iVar4 + 0x20) = iVar2;
				uVar1 = uRam005579ec;
				iVar4 = unnamed_function_1112(iVar3,uRam005579ec);
				if (iVar4 == 0) {
					unnamed_function_1116(iVar3,uVar1);
					do {
						halt_trap();
					} while( true );
				}
			}
			return;
	}

	// wasm func86650 -> ram:81a41741  [Bash::GameStateChanged_OnBash]
	private void GameStateChanged_OnBash(GameState gameState)
	{
			uint uVar1;
			int iVar2;
			uint uVar3;
			ulong uStack_20;
			ulong uStack_18;
			ulong[] auStack_10 = new ulong[2];

			if (cRam0066496f == '\0') {
				unnamed_function_1099(0x567e08);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x55bf98);
				unnamed_function_1099(0x565d78);
				cRam0066496f = '\x01';
			}
			iVar2 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
			if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
				iVar2 = System.Threading.Monitor.Enter_1(iVar2);
			}
			if (*(int *)(**(int **)(iVar2 + 0x5c) + 0x1c) == 2) {
				uVar1 = System.Linq.Enumerable.Count(this,0);
				UnityEngine.Camera.get_farClipPlane(auStack_10,uVar1,0);
				uVar1 = this.bashRadius;
				uVar3 = this.layerMask;
				if (*(int *)(iRam0055bf98 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bf98);
				}
				uStack_20 = auStack_10[0];
				uStack_18 = auStack_10[0];
				uVar1 = UnityEngine.Physics2D.GetRayIntersectionNonAlloc_2(&uStack_20,uVar1,uVar3,0);
				this.collider2d = uVar1;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				iVar2 = unnamed_function_44710(uVar1,0,0);
				if (iVar2 == 0) {
					uVar1 = UnityEngine.GameObject.get_activeInHierarchy
														(this.collider2d,uRam00567e08);
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						unnamed_function_94848(iRam0055be2c);
					}
					iVar2 = unnamed_function_44710(uVar1,0,0);
					if (iVar2 == 0) {
						UnityEngine.Time.get_timeScale(0,0);
						this.aimCountdown = 0x41200000;
						this.isDuring = 1;
						uVar1 = this.displayCount;
						uVar3 = this.instructionBash;
						if (cRam006649de == '\0') {
							unnamed_function_1099(0x55c894);
							cRam006649de = '\x01';
						}
						iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
						if (iVar2 != 0) {
							(**(code **)((ulong)*(uint *)(iVar2 + 0xc) * 4))
												(*(uint *)(iVar2 + 0x20),uVar3,uVar1,1,*(uint *)(iVar2 + 0x14));
						}
					}
				}
			}
			return;
	}

	// no recovered body in Bash.c
	public void InstructBash()
	{
		// <no recovered body>
	}

	// wasm func86652 -> ram:81a41918  [Bash::OnBashEvent_OnBash]
	private void OnBashEvent_OnBash(BashEvent bashEvent, BashEventArgs bashEventArgs)
	{
			int iVar1;
			uint uVar2;

			if (cRam00664970 == '\0') {
				unnamed_function_1099(0x559cf4);
				unnamed_function_1099(0x57418c);
				cRam00664970 = '\x01';
			}
			iVar1 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar1 + 0x10) = uRam0057418c;
			uVar2 = UnityEngine.LayerMask.NameToLayer(iVar1,0);
			this.layerMask = uVar2;
			return;
	}

	// wasm func86653 -> ram:81a41968  [Bash::Start]
	private void Start()
	{
			int iVar1;

			iVar1 = this.bashState;
			if (iVar1 == 0) {
				Bash.Update(this,this);
				return;
			}
			if (iVar1 == 1) {
				if (this.isDuring != '\0') {
					Bash.Prepare(this,this);
					return;
				}
			}
			else if (iVar1 == 2) {
				if (this.isRelease != '\0') {
					Bash.During(this,this);
					return;
				}
			}
			else if (iVar1 == 3) {
				this.isDuring = 0;
			}
			return;
	}

	// wasm func86654 -> ram:81a419b9  [Bash::Update]
	private void Update()
	{
			uint uVar1;
			int iVar2;
			uint uVar3;
			ulong uStack_20;
			ulong uStack_18;
			ulong[] auStack_10 = new ulong[2];

			if (cRam00664971 == '\0') {
				unnamed_function_1099(0x567e08);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x55bf98);
				cRam00664971 = '\x01';
			}
			iVar2 = *(int *)(this.player + 0x40);
			if ((float)this.bashCost <= *(float *)(iVar2 + 0x14)) {
				Stamina.Update(iVar2,this.bashCost,0);
				uVar1 = System.Linq.Enumerable.Count(this,0);
				UnityEngine.Camera.get_farClipPlane(auStack_10,uVar1,0);
				uVar1 = this.bashRadius;
				uVar3 = this.layerMask;
				if (*(int *)(iRam0055bf98 + 0x74) == 0) {
					unnamed_function_94848(iRam0055bf98);
				}
				uStack_20 = auStack_10[0];
				uStack_18 = auStack_10[0];
				uVar1 = UnityEngine.Physics2D.GetRayIntersectionNonAlloc_2(&uStack_20,uVar1,uVar3,0);
				this.collider2d = uVar1;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				iVar2 = unnamed_function_44710(uVar1,0,0);
				if (iVar2 == 0) {
					uVar1 = UnityEngine.GameObject.get_activeInHierarchy
														(this.collider2d,uRam00567e08);
					if (*(int *)(iRam0055be2c + 0x74) == 0) {
						unnamed_function_94848(iRam0055be2c);
					}
					iVar2 = unnamed_function_44710(uVar1,0,0);
					if ((iVar2 == 0) &&
						 ((float)this.bashCost <=
							*(float *)(*(int *)(this.player + 0x40) + 0x14))) {
						UnityEngine.Time.get_timeScale(0,0);
						this.aimCountdown = 0x40000000;
						this.isDuring = 1;
					}
				}
			}
			return;
	}

	// wasm func86655 -> ram:81a41b13  [Bash::Prepare]
	private void Prepare()
	{
			ulong uVar1;
			float fVar2;
			int iVar3;
			uint uVar4;
			uint uVar5;
			float fVar6;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong[] auStack_10 = new ulong[2];

			if (cRam00664972 == '\0') {
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x565d6c);
				cRam00664972 = '\x01';
			}
			fVar6 = this.aimCountdown;
			fVar2 = (float)UnityEngine.Time.get_fixedUnscaledTime(0);
			fVar6 = fVar6 - fVar2;
			this.aimCountdown = fVar6;
			if (fVar6 <= 0.0) {
				UnityEngine.LineRenderer.set_endColor(*(uint *)(this.arrow + 0x10),0,0);
				UnityEngine.Time.get_timeScale(0x3f800000,0);
				this.isDuring = 0;
			}
			else {
				this.isRelease = 1;
				uVar4 = this.collider2d;
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				iVar3 = UnityEngine.Camera.get_targetTexture(uVar4,0,0);
				if (iVar3 != 0) {
					if (this.isDuringSoundPlaying == '\0') {
						iVar3 = *(int *)(iRam00565d6c + 0x10);
						if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
							iVar3 = System.Threading.Monitor.Enter_1(iVar3);
						}
						iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
						if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
							iVar3 = System.Threading.Monitor.Enter_1(iVar3);
						}
						SoundEffectManager.Start
											(**(uint **)(iVar3 + 0x5c),this.duringBashSoundEffect,this);
						this.isDuringSoundPlaying = 1;
					}
					uVar5 = this.arrow;
					HelperUtilities.ValidateCheckPositiveValue(auStack_10,0);
					uVar1 = auStack_10[0];
					uVar4 = System.Linq.Enumerable.Count(this.collider2d,0);
					UnityEngine.Camera.get_farClipPlane(auStack_10,uVar4,0);
					uStack_18 = uVar1;
					uStack_28 = uVar1;
					uStack_20 = auStack_10[0];
					uStack_30 = auStack_10[0];
					Arrow.Awake(uVar5,&uStack_28,&uStack_30,this);
				}
			}
			return;
	}

	// wasm func86656 -> ram:81a41c85  [Bash::During]
	private void During()
	{
			int iVar1;
			uint uVar2;
			uint uVar3;

			if (cRam00664973 == '\0') {
				unnamed_function_1099(0x567e08);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x565d6c);
				unnamed_function_1099(0x572944);
				cRam00664973 = '\x01';
			}
			UnityEngine.Time.get_timeScale(0x3f800000,0);
			uVar3 = this.collider2d;
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			iVar1 = UnityEngine.Camera.get_targetTexture(uVar3,0,0);
			if ((iVar1 != 0) && (this.isRelease != '\0')) {
				iVar1 = UnityEngine.GameObject.get_activeInHierarchy
													(this.collider2d,uRam00567e08);
				*(uint *)(iVar1 + 0x74) = 2;
				uVar3 = unnamed_function_44644(this.collider2d,0);
				uVar2 = UnityEngine.LayerMask.LayerToName(uRam00572944,0);
				UnityEngine.GameObject.get_transform(uVar3,uVar2,0);
				Bash.InitializeFlagVarible(this,this);
				UnityEngine.LineRenderer.set_endColor(*(uint *)(this.arrow + 0x10),0,0);
				if (this.isDuringSoundPlaying != '\0') {
					iVar1 = *(int *)(iRam00565d6c + 0x10);
					if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
						iVar1 = System.Threading.Monitor.Enter_1(iVar1);
					}
					iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
					if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
						iVar1 = System.Threading.Monitor.Enter_1(iVar1);
					}
					SoundEffectManager.Start
										(**(uint **)(iVar1 + 0x5c),this.releaseBashSoundEffect,this);
					this.isDuringSoundPlaying = 0;
				}
				Bash.MoveAmmoByBash(this,this);
			}
			this.bashState = 3;
			return;
	}

	// wasm func86659 -> ram:81a42053  [Bash::Release]
	private void Release()
	{
			this.isDuring = 0;
			return;
	}

	// wasm func86657 -> ram:81a41db9  [Bash::InitializeFlagVarible]
	private void InitializeFlagVarible()
	{
			uint uVar1;
			uint uVar2;
			float fVar3;
			float fVar4;
			float fVar5;
			ulong uStack_20;
			ulong uStack_18;
			float fStack_10;
			float fStack_c;

			if (cRam00664974 == '\0') {
				unnamed_function_1099(0x567f18);
				cRam00664974 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy
												(this.collider2d,uRam00567f18);
			uVar2 = System.Linq.Enumerable.Count(this.collider2d,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar2,0);
			fVar3 = fStack_c;
			fVar4 = fStack_10;
			HelperUtilities.ValidateCheckPositiveValue(&fStack_10,0);
			if (cRam006634ad == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam006634ad = '\x01';
			}
			fVar3 = fVar3 - fStack_c;
			fVar4 = fVar4 - fStack_10;
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
			if (1e-05 < fVar5) {
				fVar3 = fVar3 / fVar5;
				fVar4 = fVar4 / fVar5;
			}
			else {
				if (cRam0066482a == '\0') {
					unnamed_function_1099(0x55d024);
					cRam0066482a = '\x01';
				}
				fVar3 = (*(float **)(iRam0055d024 + 0x5c))[1];
				fVar4 = **(float **)(iRam0055d024 + 0x5c);
			}
			uStack_20 = CONCAT44(fVar3 * this.bashForce,fVar4 * this.bashForce);
			uStack_18 = uStack_20;
			UnityEngine.Rigidbody2D.AddForce(uVar1,&uStack_20,1,0);
			return;
	}

	// wasm func86658 -> ram:81a41f14  [Bash::MoveAmmoByBash]
	private void MoveAmmoByBash()
	{
			int iVar1;
			uint uVar2;
			int iVar3;

			if (cRam00664975 == '\0') {
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x5750d4);
				cRam00664975 = '\x01';
			}
			iVar1 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
				iVar1 = System.Threading.Monitor.Enter_1(iVar1);
			}
			iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
			if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
				iVar1 = System.Threading.Monitor.Enter_1(iVar1);
			}
			if (*(int *)(**(int **)(iVar1 + 0x5c) + 0x1c) == 2) {
				iVar1 = this.displayCount;
				if (iVar1 == 2) {
					UnityEngine.MonoBehaviour.Invoke(this,uRam005750d4,0);
					iVar1 = *(int *)(iRam00565d78 + 0x10);
					if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
						iVar1 = System.Threading.Monitor.Enter_1(iVar1);
					}
					iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
					if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
						iVar1 = System.Threading.Monitor.Enter_1(iVar1);
					}
					GameManager.TransitionToGame(**(uint **)(iVar1 + 0x5c),3,0);
					iVar1 = this.displayCount;
				}
				this.displayCount = iVar1 + 1;
				uVar2 = this.instructionBash;
				if (cRam006649de == '\0') {
					unnamed_function_1099(0x55c894);
					cRam006649de = '\x01';
				}
				iVar3 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x48);
				if (iVar3 != 0) {
					(**(code **)((ulong)*(uint *)(iVar3 + 0xc) * 4))
										(*(uint *)(iVar3 + 0x20),uVar2,iVar1 + 1,1,*(uint *)(iVar3 + 0x14));
				}
			}
			return;
	}

	// wasm func86660 -> ram:81a4205d  [Bash::ProcessInstructionBashInRealseState]
	private void ProcessInstructionBashInRealseState()
	{
			this.bashRadius = 0x40200000;
			this.bashForce = 0xa41200000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86646 -> ram:81a41454  [Bash::.ctor]
	public Bash()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			bool bVar1;
			uint uVar2;
			int iVar3;
			int iVar4;
			int iVar5;

			if (cRam00664976 == '\0') {
				unnamed_function_1099(0x557aac);
				cRam00664976 = '\x01';
			}
			iVar3 = this.collider2d;
			while( true ) {
				iVar4 = 0;
				iVar5 = unnamed_function_85158(iVar3,param_2,0);
				uVar2 = uRam00557aac;
				if ((iVar5 != 0) && (iVar4 = unnamed_function_1112(iVar5,uRam00557aac), iVar4 == 0)) break;
				iVar4 = System.Net.WebOperation.ctor(this + 0x10,iVar4,iVar3);
				bVar1 = iVar3 == iVar4;
				iVar3 = iVar4;
				if (bVar1) {
					return;
				}
			}
			unnamed_function_1116(iVar5,uVar2);
			do {
				halt_trap();
			} while( true );
	}
}

