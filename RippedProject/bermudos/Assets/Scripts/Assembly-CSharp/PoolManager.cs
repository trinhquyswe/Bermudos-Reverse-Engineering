// PoolManager.cs - reconstructed from the recovered WebAssembly binary.
// C# surface (type, fields, properties, member signatures) from IL2CPP metadata (Dump/dump.cs);
// bodies are a mechanical C# rendering of the Ghidra structured C in PoolManager.c, not original C#.
// `this.<field>` = object field at the metadata offset, `this + 0xNN` = unresolved offset;
// `unnamed_function_N` = unnamed wasm callee, `iRam...`/`uRam...`/`cRam...` = IL2CPP globals;
// `A.B(` = callee mangled as `A__B` in the wasm name section, `A.ctor(` = an `A::.ctor` call;
// `halt_trap()` = IL2CPP trap, `code **` casts = indirect calls.
// Event backing fields plus their add_/remove_ accessors are folded back into `event` members.

[DisallowMultipleComponent]
public class PoolManager : SingletonMonobehaviourPersistent<PoolManager>
{
	// Fields
	private PoolManager.Pool[] poolArray; // 0x10
	private Transform objectPoolTransform; // 0x14
	private Dictionary<int, Queue<Component>> poolDictionary; // 0x18

	// Methods

	// wasm func86604 -> ram:81a3ec7a  [PoolManager::Awake]
	protected override void Awake()
	{
		uint param_2 = 0; // IL2CPP hidden slot
		int param_3 = 0; // IL2CPP hidden slot
		uint param_4 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			uint uVar3;
			int iVar4;
			uint uVar5;
			uint uVar6;

			if (cRam00664952 == '\0') {
				unnamed_function_1099(0x560010);
				unnamed_function_1099(0x560014);
				unnamed_function_1099(0x560018);
				unnamed_function_1099(0x55af50);
				unnamed_function_1099(0x56b53c);
				unnamed_function_1099(0x55be2c);
				unnamed_function_1099(0x56b9bc);
				unnamed_function_1099(0x5657d0);
				unnamed_function_1099(0x5657c8);
				unnamed_function_1099(0x55959c);
				unnamed_function_1099(0x56d44c);
				unnamed_function_1099(0x55cd8c);
				unnamed_function_1099(0x570c68);
				cRam00664952 = '\x01';
			}
			uVar1 = UnityEngine.U2D.Animation.BufferManager.get_instance(param_2,0);
			uVar2 = UnityEngine.TextCore.Text.FontAsset.LoadFontFace(param_2,0);
			uVar2 = Mono.Security.X509.X509Crl.X509CrlEntry.ctor(uVar2,uRam00570c68,0);
			uVar3 = unnamed_function_95402(uRam0055af50);
			UnityEngine.GameObject.SendMessage_2(uVar3,uVar2,0);
			uVar2 = UnityEngine.GameObject.AddComponent(uVar3,0);
			UnityEngine.Transform.get_parentInternal(uVar2,this.objectPoolTransform,0);
			iVar4 = unnamed_function_17516(this.poolDictionary,uVar1,uRam00560014);
			if (iVar4 == 0) {
				uVar6 = this.poolDictionary;
				uVar2 = unnamed_function_95402(uRam0055959c);
				System.IO.Enumeration.FileSystemEntry.get_Attributes(uVar2,uRam005657c8);
				unnamed_function_78474(uVar6,uVar1,uVar2,uRam00560010);
				if (0 < param_3) {
					iVar4 = 0;
					do {
						uVar2 = UnityEngine.GameObject.AddComponent(uVar3,0);
						if (*(int *)(iRam0055be2c + 0x74) == 0) {
							unnamed_function_94848(iRam0055be2c);
						}
						uVar2 = UnityEngine.Object.FindObjectsOfType_1(param_2,uVar2,uRam0056b53c);
						unnamed_function_44686(uVar2,0,0);
						uVar6 = unnamed_function_78417(this.poolDictionary,uVar1,uRam00560018);
						if (*(int *)(iRam0055cd8c + 0x74) == 0) {
							unnamed_function_94848(iRam0055cd8c);
						}
						uVar5 = unnamed_function_1131(param_4,uRam0056d44c,uRam0056b9bc);
						uVar2 = UnityEngine.ExtensionOfNativeClassAttribute.ctor(uVar2,uVar5,0);
						System.IO.Path.Join(uVar6,uVar2,uRam005657d0);
						iVar4 = iVar4 + 1;
					} while (iVar4 != param_3);
				}
			}
			return;
	}

	// wasm func86392 -> ram:81a34be5  [PoolManager::CreatePool]
	private void CreatePool(GameObject prefab, int poolSize, string componentType)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;
			uint uVar4;
			ulong uStack_50;
			uint uStack_48;
			ulong uStack_40;
			ulong uStack_38;
			ulong uStack_30;
			uint uStack_28;
			ulong uStack_20;
			ulong uStack_18;
			ulong uStack_10;
			uint uStack_8;

			if (cRam00664953 == '\0') {
				unnamed_function_1099(0x55a9bc);
				unnamed_function_1099(0x560014);
				unnamed_function_1099(0x576214);
				cRam00664953 = '\x01';
			}
			uVar2 = UnityEngine.U2D.Animation.BufferManager.get_instance(prefab,0);
			iVar3 = unnamed_function_17516(this.poolDictionary,uVar2,uRam00560014);
			uVar1 = uRam00576214;
			if (iVar3 == 0) {
				if (prefab == (int *)0x0) {
					uVar2 = 0;
				}
				else {
					uVar2 = (**(code **)((ulong)*(uint *)(*prefab + 0xd8) * 4))
														(prefab,*(uint *)(*prefab + 0xdc));
				}
				uVar2 = Mono.Security.X509.X509Crl.X509CrlEntry.ctor(uVar1,uVar2,0);
				if (*(int *)(iRam0055a9bc + 0x74) == 0) {
					unnamed_function_94848(iRam0055a9bc);
				}
				uVar1 = 0;
				UnityEngine.InputSystem.Layouts.InputControlLayout.Collection.TryLoadLayout(uVar2,0);
			}
			else {
				uVar1 = PoolManager.ReuseComponent(this,uVar2,&uStack_50);
				uStack_18 = componentType[1];
				uStack_20 = *componentType;
				uVar2 = System.Linq.Enumerable.Count(uVar1,0);
				uStack_28 = *(uint *)(poolSize + 1);
				uStack_30 = *poolSize;
				UnityEngine.Transform.ctor(uVar2,&uStack_30,0);
				uVar2 = System.Linq.Enumerable.Count(uVar1,0);
				uStack_38 = uStack_18;
				uStack_40 = uStack_20;
				UnityEngine.Transform.set_forward(uVar2,&uStack_40,0);
				uVar2 = unnamed_function_44644(uVar1,0);
				uVar2 = UnityEngine.GameObject.AddComponent(uVar2,0);
				uVar4 = UnityEngine.GameObject.AddComponent(prefab,0);
				UnityEngine.Transform.set_localRotation(&uStack_10,uVar4,0);
				uStack_48 = uStack_8;
				uStack_50 = uStack_10;
				UnityEngine.Transform.get_localScale(uVar2,&uStack_50,0);
			}
			return uVar1;
	}

	// wasm func86605 -> ram:81a3ee40  [PoolManager::ReuseComponent]
	public Component ReuseComponent(GameObject prefab, Vector3 position, Quaternion rotation)
	{
			uint uVar1;
			uint uVar2;
			int iVar3;

			if (cRam00664954 == '\0') {
				unnamed_function_1099(0x560018);
				unnamed_function_1099(0x5657cc);
				unnamed_function_1099(0x5657d0);
				cRam00664954 = '\x01';
			}
			uVar1 = unnamed_function_78417(this.poolDictionary,prefab,uRam00560018);
			uVar1 = unnamed_function_30873(uVar1,uRam005657cc);
			uVar2 = unnamed_function_78417(this.poolDictionary,prefab,uRam00560018);
			System.IO.Path.Join(uVar2,uVar1,uRam005657d0);
			uVar2 = unnamed_function_44644(uVar1,0);
			iVar3 = UnityEngine.GameObject.set_layer(uVar2,0);
			if (iVar3 != 0) {
				uVar2 = unnamed_function_44644(uVar1,0);
				unnamed_function_44686(uVar2,0,0);
			}
			return uVar1;
	}

	// wasm func86606 -> ram:81a3eed7  [PoolManager::GetComponentFromPool]
	private Component GetComponentFromPool(int poolKey)
	{
		uint param_3 = 0; // IL2CPP hidden slot
		uint param_4 = 0; // IL2CPP hidden slot
			uint uVar1;
			uint uVar2;
			ulong uStack_40;
			uint uStack_38;
			ulong uStack_30;
			ulong uStack_28;
			ulong uStack_20;
			uint uStack_18;
			ulong uStack_10;
			uint uStack_8;

			uVar1 = System.Linq.Enumerable.Count(param_3,0);
			uStack_18 = *(uint *)(this + 1);
			uStack_20 = *this;
			UnityEngine.Transform.ctor(uVar1,&uStack_20,0);
			uVar1 = System.Linq.Enumerable.Count(param_3,0);
			uStack_28 = poolKey[1];
			uStack_30 = *poolKey;
			UnityEngine.Transform.set_forward(uVar1,&uStack_30,0);
			uVar1 = unnamed_function_44644(param_3,0);
			uVar1 = UnityEngine.GameObject.AddComponent(uVar1,0);
			uVar2 = UnityEngine.GameObject.AddComponent(param_4,0);
			UnityEngine.Transform.set_localRotation(&uStack_10,uVar2,0);
			uStack_38 = uStack_8;
			uStack_40 = uStack_10;
			UnityEngine.Transform.get_localScale(uVar1,&uStack_40,0);
			return;
	}

	// wasm func86607 -> ram:81a3ef81  [PoolManager::ResetObject]
	private void ResetObject(Vector3 position, Quaternion rotation, Component componentToReuse, GameObject prefab)
	{
			uint uVar1;

			if (cRam00664955 == '\0') {
				unnamed_function_1099(0x56000c);
				unnamed_function_1099(0x557ed8);
				unnamed_function_1099(0x565d5c);
				cRam00664955 = '\x01';
			}
			uVar1 = unnamed_function_95402(uRam00557ed8);
			unnamed_function_17497(uVar1,uRam0056000c);
			this.poolDictionary = uVar1;
			System.Collections.Generic.ShortEnumEqualityComparer.GetHashCode
								(this,uRam00565d5c);
			return;
	}

	// wasm func86609 -> ram:81a3eff2  [PoolManager::.ctor]
	public PoolManager()
	{
			uint uVar1;
			int iVar2;

			if (cRam00664956 == '\0') {
				unnamed_function_1099(0x567e18);
				unnamed_function_1099(0x559cf4);
				unnamed_function_1099(0x574184);
				unnamed_function_1099(0x572aa0);
				unnamed_function_1099(0x572944);
				unnamed_function_1099(0x576924);
				cRam00664956 = '\x01';
			}
			uVar1 = UnityEngine.GameObject.get_activeInHierarchy(this,uRam00567e18);
			this.poolDictionary = uVar1;
			iVar2 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar2 + 0x10) = uRam00574184;
			uVar1 = UnityEngine.LayerMask.NameToLayer(iVar2,0);
			*(uint *)(this + 0x1c) = uVar1;
			iVar2 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar2 + 0x10) = uRam00572aa0;
			uVar1 = UnityEngine.LayerMask.NameToLayer(iVar2,0);
			*(uint *)(this + 0x20) = uVar1;
			iVar2 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar2 + 0x10) = uRam00576924;
			uVar1 = UnityEngine.LayerMask.NameToLayer(iVar2,0);
			*(uint *)(this + 0x24) = uVar1;
			iVar2 = Mono.Security.ASN1Convert.ToOid(uRam00559cf4,1);
			*(uint *)(iVar2 + 0x10) = uRam00572944;
			uVar1 = UnityEngine.LayerMask.NameToLayer(iVar2,0);
			*(uint *)(this + 0x28) = uVar1;
			return;
	}
}

