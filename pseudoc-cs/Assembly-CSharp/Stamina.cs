// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/Stamina.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(a)(args)                  virtual call through vtable slot a
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class Stamina : MonoBehaviour // TypeDefIndex: 5630
{
    // Fields
    [SerializeField]
    private int maxStamina; // 0x10
    [HideInInspector]
    public float currentStamina; // 0x14
    private Player player; // 0x18
    private float staminaRecoveryTimer; // 0x1C
    private float staminaRecoveryRate; // 0x20
    private float staminaRegenAmount; // 0x24

    // Methods

    // RVA: 0x3849 Offset: 0x3849 VA: 0x3849
    private void Awake()
    {
        Player pPVar1 = default;

        pPVar1 = (Player)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ef0);
        this.player = pPVar1;
    }

    // RVA: 0x384A Offset: 0x384A VA: 0x384A
    private void Start()
    {
        float currentStamina = default;

        currentStamina = (float)this.maxStamina;
        this.currentStamina = currentStamina;
        this.player.staminaEvent.CallStaminaChangedEvent(currentStamina / currentStamina, currentStamina, 0.0);
    }

    // RVA: 0x384B Offset: 0x384B VA: 0x384B
    private void Update()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;

        fVar2 = this.currentStamina;
        if (fVar2 < (float)this.maxStamina) {
            fVar3 = this.staminaRegenAmount;
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            fVar2 = fVar2 + fVar3 * fVar1;
            this.currentStamina = fVar2;
            this.player.staminaEvent.CallStaminaChangedEvent(fVar2 / (float)this.maxStamina, fVar2, 0.0);
        }
        fVar2 = UnityEngine.Time.get_time(0);
        this.staminaRecoveryTimer = fVar2 + this.staminaRecoveryRate;
    }

    // RVA: 0x384C Offset: 0x384C VA: 0x384C
    public void UseStamina(int staminaAmount)
    {
        float currentStamina = default;

        if (0.0 < this.currentStamina) {
            currentStamina = this.currentStamina - (float)staminaAmount;
            this.currentStamina = currentStamina;
            this.player.staminaEvent.CallStaminaChangedEvent(currentStamina / (float)this.maxStamina, currentStamina, (float)staminaAmount);
        }
    }

    // RVA: 0x384D Offset: 0x384D VA: 0x384D
    private void RegenerateStamina()
    {
        float fVar1 = default;
        float fVar2 = default;
        float fVar3 = default;

        fVar2 = this.currentStamina;
        if (fVar2 < (float)this.maxStamina) {
            fVar3 = this.staminaRegenAmount;
            fVar1 = UnityEngine.Time.get_deltaTime(0);
            fVar2 = fVar2 + fVar3 * fVar1;
            this.currentStamina = fVar2;
            this.player.staminaEvent.CallStaminaChangedEvent(fVar2 / (float)this.maxStamina, fVar2, 0.0);
        }
    }

    // RVA: 0x384E Offset: 0x384E VA: 0x384E
    public Stamina()
    {
        this.staminaRecoveryRate = 1.0;
        this.staminaRegenAmount = 5.0;
        unnamed_function_44622(this,0);
    }
}
