// Item.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in Item.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class Item : MonoBehaviour
{
	// Fields
	private float timeToDestroy; // 0x10
	private LayerMask playerLayerMark; // 0x14
	public ItemSO itemSO; // 0x18
	private float jumDuration; // 0x1C
	private int numJumps; // 0x20
	private float jumpPower; // 0x24
	private float shakeDuration; // 0x28
	private float shakeStrength; // 0x2C
	private int shakeVibrato; // 0x30
	private bool isColliding; // 0x34
	private SoundEffectSO dropItemSoundEffect; // 0x38

	// Methods

	// wasm func86388 -> ram:81a347e9  [Item::Start]
	private void Start()
	{
			uint uVar1;
			float fVar2;
			float fVar3;

			if (cRam006648ce == '\0') {
				unnamed_function_1099(0x55be2c);
				cRam006648ce = '\x01';
			}
			fVar3 = this.timeToDestroy;
			if (fVar3 <= 0.0) {
				uVar1 = unnamed_function_44644(this,0);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				unnamed_function_44782(uVar1,0);
				return;
			}
			fVar2 = (float)UnityEngine.Time.get_time(0);
			this.timeToDestroy = fVar3 - fVar2;
			return;
	}

	// wasm func86389 -> ram:81a34854  [Item::Update]
	private void Update()
	{
			uint uVar1;

			if (cRam006648cf == '\0') {
				unnamed_function_1099(0x55a7d4);
				unnamed_function_1099(0x55be2c);
				cRam006648cf = '\x01';
			}
			uVar1 = unnamed_function_44644(this,0);
			if (*(int *)(iRam0055be2c + 0x74) == 0) {
				unnamed_function_94848(iRam0055be2c);
			}
			uVar1 = unnamed_function_44767(uVar1,0);
			if (*(int *)(iRam0055a7d4 + 0x74) == 0) {
				unnamed_function_94848(iRam0055a7d4);
			}
			DG.Tweening.DOTween.Goto(uVar1,0);
			return;
	}

	// wasm func86390 -> ram:81a348c8  [Item::OnDestroy]
	private void OnDestroy()
	{
		uint param_2 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;

			if (cRam006648d0 == '\0') {
				unnamed_function_1099(0x567eb4);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x565d6c);
				cRam006648d0 = '\x01';
			}
			uVar3 = this.playerLayerMark;
			uVar1 = unnamed_function_44644(param_2,0);
			uVar2 = UnityEngine.Camera.get_cullingMask(uVar1,0);
			if ((0 < (int)(uVar3 & 1 << (uVar2 & 0x1f))) && (this.isColliding != '\0')) {
				iVar4 = *(int *)(iRam00565d6c + 0x10);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
				if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
					iVar4 = System.Threading.Monitor.Enter_1(iVar4);
				}
				SoundEffectManager.Start
									(**(uint **)(iVar4 + 0x5c),this.dropItemSoundEffect,this);
				iVar4 = UnityEngine.GameObject.get_activeInHierarchy(param_2,uRam00567eb4);
				if (iVar4 != 0) {
					InventoryManager.SetInventorySlot(iVar4,this.itemSO,this);
				}
				uVar1 = unnamed_function_44644(this,0);
				if (*(int *)(iRam0055be2c + 0x74) == 0) {
					unnamed_function_94848(iRam0055be2c);
				}
				unnamed_function_44782(uVar1,0);
				this.isColliding = 0;
			}
			return;
	}

	// wasm func86387 -> ram:81a34585  [Item::OnTriggerEnter2D]
	private void OnTriggerEnter2D(Collider2D collision)
	{
			float fVar1;
			float fVar2;
			uint uVar3;
			uint uVar4;
			float fVar5;
			float fVar6;
			float fVar7;
			float fVar8;
			float *pfVar9;
			int iVar10;
			ulong uStack_30;
			float fStack_28;
			float fStack_20;
			float fStack_1c;
			float fStack_18;
			float fStack_10;
			float fStack_c;
			float fStack_8;

			if (cRam006648d1 == '\0') {
				unnamed_function_1099(0x56a7c0);
				unnamed_function_1099(0x565d78);
				unnamed_function_1099(0x55cd74);
				unnamed_function_1099(0x56d348);
				cRam006648d1 = '\x01';
			}
			uVar3 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar3,0);
			fVar5 = fStack_8;
			fVar6 = fStack_c;
			fVar7 = fStack_10;
			iVar10 = *(int *)(iRam00565d78 + 0x10);
			if ((*(byte *)(iVar10 + 0xbd) & 1) == 0) {
				iVar10 = System.Threading.Monitor.Enter_1(iVar10);
			}
			iVar10 = *(int *)(*(int *)(iVar10 + 0x60) + 8);
			if ((*(byte *)(iVar10 + 0xbd) & 1) == 0) {
				iVar10 = System.Threading.Monitor.Enter_1(iVar10);
			}
			uVar3 = System.Linq.Enumerable.Count(*(uint *)(**(int **)(iVar10 + 0x5c) + 0x10),0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar3,0);
			fVar2 = fStack_8;
			fVar1 = fStack_c;
			fVar8 = fStack_10;
			if (cRam0066482c == '\0') {
				unnamed_function_1099(0x55bab8);
				cRam0066482c = '\x01';
			}
			fVar5 = fVar5 - fVar2;
			fVar6 = fVar6 - fVar1;
			fVar7 = fVar7 - fVar8;
			if (*(int *)(iRam0055bab8 + 0x74) == 0) {
				unnamed_function_94848(iRam0055bab8);
			}
			fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
			if (1e-05 < fVar8) {
				fVar5 = fVar5 / fVar8;
				fVar7 = fVar7 / fVar8;
				fVar6 = fVar6 / fVar8;
			}
			else {
				if (cRam00664829 == '\0') {
					unnamed_function_1099(0x55d048);
					cRam00664829 = '\x01';
				}
				pfVar9 = *(float **)(iRam0055d048 + 0x5c);
				fVar5 = pfVar9[2];
				fVar7 = *pfVar9;
				fVar6 = pfVar9[1];
			}
			uVar3 = System.Linq.Enumerable.Count(this,0);
			UnityEngine.Camera.get_farClipPlane(&fStack_10,uVar3,0);
			uVar3 = System.Linq.Enumerable.Count(this,0);
			fStack_28 = fStack_8 + fVar5 + fVar5;
			fStack_1c = fStack_c + fVar6 + fVar6;
			fStack_20 = fStack_10 + fVar7 + fVar7;
			uStack_30 = CONCAT44(fStack_1c,fStack_20);
			fStack_18 = fStack_28;
			uVar3 = DG.Tweening.ShortcutExtensions.DOShakeScale_1
												(uVar3,&uStack_30,this.jumpPower,
												 this.numJumps,this.jumDuration,0,0);
			uVar4 = unnamed_function_95402(uRam0055cd74);
			DG.Tweening.Color2.op_Multiply(uVar4,this,uRam0056a7c0,0);
			DG.Tweening.TweenSettingsExtensions.From_6(uVar3,uVar4,uRam0056d348);
			return;
	}

	// wasm func86393 -> ram:81a34d5e  [Item::DropItemEffect]
	public void DropItemEffect()
	{
			this.isColliding = 1;
			this.shakeStrength = 0x33f000000;
			this.jumpPower = 0x3eeb851f3f800000;
			this.jumDuration = 0x23f000000;
			this.timeToDestroy = 0x41200000;
			UnityEngine.Behaviour.set_enabled(this,0);
			return;
	}

	// wasm func86394 -> ram:81a34da1  [Item::.ctor]
	public Item()
	{
			uint uVar1;
			long lStack_20;
			uint uStack_18;
			uint uStack_10;
			uint uStack_c;
			uint uStack_8;

			if (cRam006648d2 == '\0') {
				unnamed_function_1099(0x56d38c);
				cRam006648d2 = '\x01';
			}
			uVar1 = System.Linq.Enumerable.Count(this,0);
			uStack_c = this.shakeStrength;
			uStack_8 = 0;
			uStack_18 = 0;
			uStack_10 = 0;
			lStack_20 = (ulong)uStack_c << 0x20;
			uVar1 = DG.Tweening.ShortcutExtensions.DOShakePosition_2
												(uVar1,this.shakeDuration,&lStack_20,
												 this.shakeVibrato,0,0,1,0,0);
			DG.Tweening.TweenSettingsExtensions.SetLink_1(uVar1,0xffffffff,uRam0056d38c);
			return;
	}

	// wasm func86395 -> ram:81a34e4b  [Item::<DropItemEffect>b__15_0]
	private void _DropItemEffect_b__15_0()
	{
			uint uVar1;

			if (cRam006648d3 == '\0') {
				unnamed_function_1099(0x567f6c);
				unnamed_function_1099(0x567e98);
				unnamed_function_1099(0x567eb4);
				unnamed_function_1099(0x567f00);
				cRam006648d3 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567eb4);
			this.timeToDestroy = uVar1;
			uVar1 = unnamed_function_65372(this,uRam00567f6c);
			this.playerLayerMark = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e98);
			this.itemSO = uVar1;
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567f00);
			this.jumDuration = uVar1;
			return;
	}
}

