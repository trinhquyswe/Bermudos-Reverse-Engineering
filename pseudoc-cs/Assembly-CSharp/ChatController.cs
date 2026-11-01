// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/ChatController.c by tools/c2cs.py
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

public class ChatController : MonoBehaviour // TypeDefIndex: 5732
{
    // Fields
    public TMP_InputField ChatInputField; // 0x10
    public TMP_Text ChatDisplayOutput; // 0x14
    public Scrollbar ChatScrollbar; // 0x18

    // Methods

    // RVA: 0x3AB6 Offset: 0x3AB6 VA: 0x3AB6
    private void OnEnable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = this.ChatInputField[0x4b]._opaque;
        param1 = new UnityEngine_Events_UnityAction_string_();
        UnityEngine.Events.UnityAction<object>.__ctor(param1,this,DAT_ram_00567b4c,0);
        /* candidates: UnityEngine.Events.UnityEvent<Color>.AddListener | UnityEngine.Events.UnityEvent<InputAction.CallbackContext>.AddListener (+6) */ unnamed_function_71922(param1_00,param1,DAT_ram_005667f8);
    }

    // RVA: 0x3AB7 Offset: 0x3AB7 VA: 0x3AB7
    private void OnDisable()
    {
        int param1 = default;
        int param1_00 = default;

        param1_00 = this.ChatInputField[0x4b]._opaque;
        param1 = new UnityEngine_Events_UnityAction_string_();
        UnityEngine.Events.UnityAction<object>.__ctor(param1,this,DAT_ram_00567b4c,0);
        /* candidates: UnityEngine.Events.UnityEvent<Color>.RemoveListener | UnityEngine.Events.UnityEvent<InputAction.CallbackContext>.RemoveListener (+15) */ unnamed_function_71923(param1_00,param1,DAT_ram_00566800);
    }

    // RVA: 0x3AB8 Offset: 0x3AB8 VA: 0x3AB8
    private void AddToChatOutput(string newText)
    {
        int iVar1 = default;
        int uVar2 = default;
        int uVar3 = default;
        TMP_Text pTVar4 = default;
        int iVar5 = default;
        int local_c = default;
        long local_8 = default;

        TMPro.TMP_InputField.set_text(this.ChatInputField,Raw.Deref(Raw.Read<object>(string_TypeInfo + 0x5c)),0);
        local_8 = System.DateTime.get_Now(0);
        iVar1 = unnamed_function_1050(string___TypeInfo,8);
        Raw.Write<object>(iVar1 + 0x10, "[<#FFFF80>");
        local_c = System.DateTime.get_Hour(&local_8,0);
        uVar2 = System.Int32.ToString(&local_c,"d2",0);
        Raw.Write<int>(iVar1 + 0x14, uVar2);
        Raw.Write<object>(iVar1 + 0x18, ":");
        local_c = System.DateTime.get_Minute(&local_8,0);
        uVar2 = System.Int32.ToString(&local_c,"d2",0);
        Raw.Write<int>(iVar1 + 0x1c, uVar2);
        Raw.Write<object>(iVar1 + 0x20, ":");
        local_c = System.DateTime.get_Second(&local_8,0);
        uVar2 = System.Int32.ToString(&local_c,"d2",0);
        Raw.Write<int>(iVar1 + 0x24, uVar2);
        uVar2 = "</color>] ";
        Raw.Write<object>(iVar1 + 0x2c, newText);
        Raw.Write<int>(iVar1 + 0x28, uVar2);
        uVar2 = System.String.Concat(iVar1,0);
        pTVar4 = this.ChatDisplayOutput;
        iVar1 = (pTVar4 != null);
        if (iVar1 != 0) {
            iVar1 = this.ChatDisplayOutput._opaque;
            uVar3 = Raw.VCall((ulong)Raw.Read<uint>(iVar1 + 0x2c8) * 4) /* virtual */ (this.ChatDisplayOutput,Raw.Read<int>(iVar1 + 0x2cc));
            iVar1 = /* candidates: System.String.Equals | System.String.op_Equality */ unnamed_function_81494(uVar3,Raw.Deref(Raw.Read<object>(string_TypeInfo + 0x5c)),0);
            pTVar4 = this.ChatDisplayOutput;
            iVar5 = pTVar4._opaque;
            if (iVar1 == 0) {
                uVar3 = Raw.VCall((ulong)Raw.Read<uint>(iVar5 + 0x2c8) * 4) /* virtual */ (pTVar4,Raw.Read<int>(iVar5 + 0x2cc));
                uVar2 = System.String.Concat(uVar3,"\n",uVar2,0);
                Raw.VCall((ulong)Raw.Read<uint>(pTVar4._opaque + 0x2d0) * 4) /* virtual */ (pTVar4,uVar2,Raw.Read<int>(pTVar4._opaque + 0x2d4));
            }
            else {
                Raw.VCall((ulong)Raw.Read<uint>(iVar5 + 0x2d0) * 4) /* virtual */ (pTVar4,uVar2,Raw.Read<int>(iVar5 + 0x2d4));
            }
        }
        TMPro.TMP_InputField.ActivateInputField(this.ChatInputField,0);
        UnityEngine.UI.Scrollbar.set_value(this.ChatScrollbar,0.0,0);
    }

    // RVA: 0x3AB9 Offset: 0x3AB9 VA: 0x3AB9
    public ChatController()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }
}
