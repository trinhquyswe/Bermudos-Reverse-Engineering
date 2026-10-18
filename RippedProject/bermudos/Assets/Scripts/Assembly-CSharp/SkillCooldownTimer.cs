// SkillCooldownTimer.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in SkillCooldownTimer.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

public class SkillCooldownTimer : MonoBehaviour
{
	// Fields
	private Image dashCooldownImage; // 0x10
	private Image bashCooldownImage; // 0x14
	private Image beamCooldownImage; // 0x18
	private Image beamIcon; // 0x1C
	public float dashCooldown; // 0x20
	public float bashCooldown; // 0x24

	// Methods

	// wasm func86684 -> ram:81a43117  [SkillCooldownTimer::OnEnable]
	private void OnEnable()
	{
			bool bVar1;
			int iVar2;
			uint uVar3;
			int *piVar4;
			int iVar5;

			if (cRam00664989 == '\0') {
				unnamed_function_1099(0x557a4c);
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x56c58c);
				unnamed_function_1099(0x56c590);
				unnamed_function_1099(0x56c594);
				cRam00664989 = '\x01';
			}
			uVar3 = unnamed_function_95402(iRam00559fb4);
			unnamed_function_82700(uVar3,this,uRam0056c590,0);
			if (cRam006649bc == '\0') {
				unnamed_function_1099(0x559fb4);
				unnamed_function_1099(0x55c894);
				cRam006649bc = '\x01';
			}
			iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x1c);
			while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
						 (iRam00559fb4 == *piVar4))) {
				iVar5 = System.Net.WebOperation.ctor(*(int *)(iRam0055c894 + 0x5c) + 0x1c,piVar4,iVar2);
				bVar1 = iVar2 == iVar5;
				iVar2 = iVar5;
				if (bVar1) {
					uVar3 = unnamed_function_95402(iRam00559fb4);
					unnamed_function_82700(uVar3,this,uRam0056c58c,0);
					if (cRam006649b9 == '\0') {
						unnamed_function_1099(0x559fb4);
						unnamed_function_1099(0x55c894);
						cRam006649b9 = '\x01';
					}
					iVar2 = *(int *)(*(int *)(iRam0055c894 + 0x5c) + 0x18);
					while ((piVar4 = (int *)unnamed_function_85160(iVar2,uVar3,0), piVar4 == (int *)0x0 ||
								 (iRam00559fb4 == *piVar4))) {
						iVar5 = System.Net.WebOperation.ctor(*(int *)(iRam0055c894 + 0x5c) + 0x18,piVar4,iVar2);
						bVar1 = iVar2 == iVar5;
						iVar2 = iVar5;
						if (bVar1) {
							uVar3 = unnamed_function_95402(uRam00557a4c);
							UnityEngine.UIElements.VisualElement.get_layout(uVar3,this,uRam0056c594,0);
							RageEvent.add_OnRageChanged(uVar3,0);
							return;
						}
					}
					unnamed_function_1116(piVar4,iRam00559fb4);
					do {
						halt_trap();
					} while( true );
				}
			}
			unnamed_function_1116(piVar4,iRam00559fb4);
			do {
				halt_trap();
			} while( true );
	}

	// wasm func86687 -> ram:81a433ef  [SkillCooldownTimer::OnDisable]
	private void OnDisable()
	{
			this.dashCooldown = 0x3f800000;
			UnityEngine.UI.Image.get_fillAmount(this.dashCooldownImage,0x3f800000,0);
			return;
	}

	// wasm func86688 -> ram:81a4340d  [SkillCooldownTimer::GetDashCooldown]
	public void GetDashCooldown()
	{
			this.bashCooldown = 0x3f000000;
			UnityEngine.UI.Image.get_fillAmount(this.bashCooldownImage,0x3f800000,0);
			return;
	}

	// wasm func86689 -> ram:81a4342b  [SkillCooldownTimer::GetBashCooldown]
	public void GetBashCooldown()
	{
		int param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;

			if (cRam0066498a == '\0') {
				unnamed_function_1099(0x56c588);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d33c);
				cRam0066498a = '\x01';
			}
			uVar1 = DG.Tweening.DOTweenModuleUI.DOFade_2
												(this.beamCooldownImage,*(uint *)(param_2 + 8),0x3e99999a,0);
			uVar2 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar2,this,uRam0056c588,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar1,uVar2,uRam0056d33c);
			return;
	}

	// wasm func86690 -> ram:81a434a1  [SkillCooldownTimer::IncreaseBeamCooldown]
	public void IncreaseBeamCooldown(RageEventArgs rageEventArgs)
	{
			UnityEngine.UI.Image.get_fillAmount(this.dashCooldownImage,0,0);
			UnityEngine.UI.Image.get_fillAmount(this.bashCooldownImage,0,0);
			UnityEngine.UI.Image.get_fillAmount(this.beamCooldownImage,0,0);
			return;
	}

	// wasm func86691 -> ram:81a434d4  [SkillCooldownTimer::Start]
	private void Start()
	{
			float fVar1;
			int iVar2;
			float fVar3;
			float fVar4;

			iVar2 = this.dashCooldownImage;
			fVar3 = *(float *)(iVar2 + 0x94);
			if (0.0 < fVar3) {
				fVar4 = this.dashCooldown;
				fVar1 = (float)UnityEngine.Time.get_time(0);
				UnityEngine.UI.Image.get_fillAmount(iVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
			}
			iVar2 = this.bashCooldownImage;
			fVar3 = *(float *)(iVar2 + 0x94);
			if (0.0 < fVar3) {
				fVar4 = this.bashCooldown;
				fVar1 = (float)UnityEngine.Time.get_time(0);
				UnityEngine.UI.Image.get_fillAmount(iVar2,fVar3 + (-1.0 / fVar4) * fVar1,0);
			}
			return;
	}

	// no recovered body in SkillCooldownTimer.c
	private void Update()
	{
		// <no recovered body>
	}

	// wasm func86692 -> ram:81a4353f  [SkillCooldownTimer::.ctor]
	public SkillCooldownTimer()
	{
			uint uVar1;
			float fVar2;

			fVar2 = *(float *)(this.beamCooldownImage + 0x94);
			uVar1 = unnamed_function_44644(this.beamCooldownImage,0);
			unnamed_function_44686(uVar1,fVar2 != 1.0,0);
			uVar1 = unnamed_function_44644(this.beamIcon,0);
			unnamed_function_44686(uVar1,fVar2 == 1.0,0);
			return;
	}

	// wasm func86693 -> ram:81a43581  [SkillCooldownTimer::<IncreaseBeamCooldown>b__10_0]
	private void _IncreaseBeamCooldown_b__10_0()
	{
			int iVar1;
			uint uVar2;
			uint uVar3;

			if (cRam0066498b == '\0') {
				unnamed_function_1099(0x56758c);
				unnamed_function_1099(0x567590);
				unnamed_function_1099(0x559828);
				unnamed_function_1099(0x5667e4);
				cRam0066498b = '\x01';
			}
			if (cRam0066498c == '\0') {
				unnamed_function_1099(0x55d7cc);
				cRam0066498c = '\x01';
			}
			iVar1 = unnamed_function_95402(uRam0055d7cc);
			*(int *)(iVar1 + 0x10) = this;
			*(uint *)(iVar1 + 8) = 0;
			UnityEngine.MonoBehaviour.StartCoroutine_1(this,iVar1,0);
			UnityEngine.Events.UnityEventBase.RemoveListener
								(*(uint *)(this.dashCooldownImage + 0xd0),0);
			UnityEngine.Events.UnityEventBase.RemoveListener
								(*(uint *)(this.bashCooldownImage + 0xd0),0);
			uVar3 = *(uint *)(this.dashCooldownImage + 0xd0);
			uVar2 = unnamed_function_95402(uRam00559828);
			unnamed_function_71906(uVar2,this,uRam0056758c,0);
			UnityEngine.Events.UnityEvent.ctor(uVar3,uVar2,uRam005667e4);
			uVar3 = *(uint *)(this.bashCooldownImage + 0xd0);
			uVar2 = unnamed_function_95402(uRam00559828);
			unnamed_function_71906(uVar2,this,uRam00567590,0);
			UnityEngine.Events.UnityEvent.ctor(uVar3,uVar2,uRam005667e4);
			return;
	}
}

