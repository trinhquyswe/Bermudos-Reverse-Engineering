// pseudo-C# (phase P1) - from pseudoc/Assembly-CSharp/MenuInGame.c by tools/c2cs.py
// Syntactically valid C#. Semantics are unresolved; legend:
//   Raw.Read<T>(a), Raw.Write<T>(a, v)  raw memory at address a (was *(T *)(a))
//   Raw.Deref(p)                        one extra dereference of pointer p
//   Raw.VCall(k, s)(args)               virtual call: vtable slot s of class k (k+0xc0+8*s)
//   Raw.VCallAt(e)(args)                virtual call: vtable entry at address e (interface)
//   Raw.DelegateInvoke(d)(args)         delegate invoke: target from d+0xc, this d+0x20
//   Raw.IndirectCall(a)(args)           unresolved indirect call (function-table offset a)
//   Type.Method(args)                   managed method (was unnamed_function_N)
//   Type.field                          static field (was Raw at X_TypeInfo + 0x5c)
//   this                                instance pointer (was __ret in object-style methods)
//   unnamed_function_N, DAT_ram_*, CONCAT44, param_N, local_*, LAB_*: unresolved Ghidra names

using System;
using System.Collections.Generic;
using UnityEngine;

public class MenuInGame : MonoBehaviour // TypeDefIndex: 5662
{
    // Fields
    [SerializeField]
    private Button exitButton; // 0x10
    [SerializeField]
    private Button resumeButton; // 0x14
    private TextMeshProUGUI exitText; // 0x18
    private TextMeshProUGUI resumeText; // 0x1C
    private TMPWriter exitTMPWriter; // 0x20
    private TMPWriter resumeTMPWriter; // 0x24
    private InputSystem_Actions inputSystem_Actions; // 0x28
    public Ease ease; // 0x2C

    // Methods

    // RVA: 0x3920 Offset: 0x3920 VA: 0x3920
    private void Awake()
    {
        TextMeshProUGUI pTVar1 = default;
        TMPWriter pTVar2 = default;
        InputSystem_Actions __this_00 = default;
        UnityEngine.InputSystem.InputAction pUVar3 = default;
        int param1 = default;
        InputSystem_Actions_UIActions local_8 = default;

        pTVar1 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this.exitButton,DAT_ram_00567f78);
        this.exitText = pTVar1;
        pTVar1 = (TextMeshProUGUI)UnityEngine.Component.GetComponentInChildren<object>(this.resumeButton,DAT_ram_00567f78);
        this.resumeText = pTVar1;
        pTVar2 = (TMPWriter)UnityEngine.Component.GetComponent<object>(this.exitText,DAT_ram_00567f34);
        this.exitTMPWriter = pTVar2;
        pTVar2 = (TMPWriter)UnityEngine.Component.GetComponent<object>(this.resumeText,DAT_ram_00567f34);
        this.resumeTMPWriter = pTVar2;
        __this_00 = (InputSystem_Actions)new InputSystem_Actions();
        new InputSystem_Actions();
        this.inputSystem_Actions = __this_00;
        local_8.klass = __this_00;
        pUVar3 = (&local_8).MenuInGame;
        UnityEngine.InputSystem.InputAction.Enable(pUVar3,0);
        local_8.klass = this.inputSystem_Actions;
        pUVar3 = (&local_8).MenuInGame;
        param1 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(param1,this,DAT_ram_0056af34,0);
        UnityEngine.InputSystem.InputAction.add_performed(pUVar3,param1,0);
    }

    // RVA: 0x3921 Offset: 0x3921 VA: 0x3921
    private void OnDestroy()
    {
        UnityEngine.InputSystem.InputAction pUVar1 = default;
        int uVar2 = default;
        InputSystem_Actions_UIActions local_8 = default;

        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).MenuInGame;
        UnityEngine.InputSystem.InputAction.Disable(pUVar1,0);
        local_8.klass = this.inputSystem_Actions;
        pUVar1 = (&local_8).MenuInGame;
        uVar2 = new System_Action_InputAction_CallbackContext_();
        System.Action<InputAction.CallbackContext>.__ctor(uVar2,this,DAT_ram_0056af38,0);
        UnityEngine.InputSystem.InputAction.remove_performed(pUVar1,uVar2,0);
        uVar2 = UnityEngine.Component.get_transform(this,0);
        DG.Tweening.DOTween.Kill(uVar2,0,0);
    }

    // RVA: 0x3922 Offset: 0x3922 VA: 0x3922
    private void OpenMenu()
    {
        int uVar1 = default;
        int iVar2 = default;
        long local_40 = default;
        ulong local_38 = default;
        long local_30 = default;
        int local_28 = default;
        long local_20 = default;
        float local_18 = default;
        int local_14 = default;
        long local_10 = default;
        int local_8 = default;

        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        iVar2 = UnityEngine.GameObject.get_activeSelf(uVar1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        if (iVar2 == 0) {
            UnityEngine.GameObject.SetActive(uVar1,1,0);
            TMPEffects.Components.TMPEffectComponent.SetText(this.exitTMPWriter,"<+char>Exit",0);
            TMPEffects.Components.TMPEffectComponent.SetText(this.resumeTMPWriter,"<+char>Resume",0);
            uVar1 = UnityEngine.Component.get_transform(this,0);
            local_30 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c));
            local_28 = Raw.Read<int>(Raw.Read<object>(UnityEngine_Vector3_TypeInfo + 0x5c) + 1);
            local_10 = local_30;
            local_8 = local_28;
            /* candidates: UnityEngine.Transform.set_localScale | UnityEngine.Transform.set_localScale_Injected */ unnamed_function_44982(uVar1,&local_30,0);
            uVar1 = UnityEngine.Component.get_transform(this,0);
            uVar1 = DG.Tweening.ShortcutExtensions.DOScale(uVar1,1.0,0.5,0);
            uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,this.ease,DAT_ram_0056d380);
            DG.Tweening.TweenSettingsExtensions.SetUpdate<object>(uVar1,1,DAT_ram_0056d3e0);
            uVar1 = UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567f0c);
            iVar2 = UnityEngine.Screen.get_width(0);
            local_14 = 0;
            local_18 = (float)(float)-iVar2;
            local_38 = (ulong)(uint)local_18;
            /* candidates: UnityEngine.RectTransform.set_anchoredPosition | UnityEngine.RectTransform.set_anchoredPosition_Injected */ unnamed_function_44936(uVar1,&local_38,0);
            local_40 = Raw.Deref(Raw.Read<object>(UnityEngine_Vector2_TypeInfo + 0x5c));
            local_20 = local_40;
            uVar1 = DG.Tweening.DOTweenModuleUI.DOAnchorPos(uVar1,&local_40,0.5,0,0);
            uVar1 = DG.Tweening.TweenSettingsExtensions.SetEase<object>(uVar1,this.ease,DAT_ram_0056d37c);
            DG.Tweening.TweenSettingsExtensions.SetUpdate<object>(uVar1,1,DAT_ram_0056d3d8);
        }
        else {
            UnityEngine.GameObject.SetActive(uVar1,0,0);
        }
    }

    // RVA: 0x3923 Offset: 0x3923 VA: 0x3923
    private void Start()
    {
        int uVar1 = default;
        int uVar2 = default;

        uVar2 = Raw.Read<int>(this.exitButton + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056af3c,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar2,uVar1,0);
        uVar2 = Raw.Read<int>(this.resumeButton + 0xb4);
        uVar1 = new UnityEngine_Events_UnityAction();
        UnityEngine.Events.UnityAction.__ctor(uVar1,this,DAT_ram_0056af40,0);
        UnityEngine.Events.UnityEvent.AddListener(uVar2,uVar1,0);
        uVar1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(uVar1,0,0);
    }

    // RVA: 0x3924 Offset: 0x3924 VA: 0x3924
    private void Exit()
    {
        object piVar1 = default; // int*
        int uVar2 = default;
        int iVar3 = default;
        long local_20 = default;
        long local_18 = default;
        long local_10 = default;
        long local_8 = default;

        iVar3 = StaticEventHandler.OnExit;
        if (iVar3 != 0) {
            Raw.DelegateInvoke(iVar3) /* delegate invoke */ (Raw.Read<int>(iVar3 + 0x20),Raw.Read<int>(iVar3 + 0x14));
        }
        piVar1 = (object)UnityEngine.Component.GetComponent<object>(this,DAT_ram_00567ea8);
        local_8 = 0;
        local_10 = 0;
        local_18 = 0;
        local_20 = 0;
        Raw.VCall(*piVar1, 23) /* virtual */ (piVar1,&local_20,Raw.Read<int>(*piVar1 + 0x17c));
        uVar2 = UnityEngine.Component.get_gameObject(this.exitButton,0);
        UnityEngine.GameObject.SetActive(uVar2,0,0);
        uVar2 = UnityEngine.Component.get_gameObject(this.resumeButton,0);
        UnityEngine.GameObject.SetActive(uVar2,0,0);
        iVar3 = StaticEventHandler.OnMapTransition;
        if (iVar3 != 0) {
            Raw.DelegateInvoke(iVar3) /* delegate invoke */ (Raw.Read<int>(iVar3 + 0x20),Raw.Read<int>(iVar3 + 0x14));
        }
        iVar3 = new MenuInGame__WaitMapTransitionEvent_d__13();
        Raw.Write<int>(iVar3 + 8, 0);
        UnityEngine.MonoBehaviour.StartCoroutine(this,iVar3,0);
    }

    [IteratorStateMachine(typeof(MenuInGame._WaitMapTransitionEvent_d__13))]
    // RVA: 0x3925 Offset: 0x3925 VA: 0x3925
    private IEnumerator WaitMapTransitionEvent()
    {
        System.Collections.IEnumerator pSVar1 = default;

        pSVar1 = (System.Collections.IEnumerator) new MenuInGame__WaitMapTransitionEvent_d__13();
        pSVar1[2]._opaque = 0;
        return pSVar1;
    }

    // RVA: 0x3926 Offset: 0x3926 VA: 0x3926
    private void ResumeGame()
    {
        int param1 = default;

        UnityEngine.Time.set_timeScale(1.0,0);
        param1 = UnityEngine.Component.get_gameObject(this,0);
        UnityEngine.GameObject.SetActive(param1,0,0);
    }

    // RVA: 0x3927 Offset: 0x3927 VA: 0x3927
    public MenuInGame()
    {
        /* candidates: UnityEngine.Behaviour.ctor | UnityEngine.Component.ctor (+3) */ unnamed_function_44622(this,0);
    }

    [CompilerGenerated]
    // RVA: 0x3928 Offset: 0x3928 VA: 0x3928
    private void _Awake_b__8_0(InputAction.CallbackContext ctx) { }

    [CompilerGenerated]
    // RVA: 0x3929 Offset: 0x3929 VA: 0x3929
    private void _OnDestroy_b__9_0(InputAction.CallbackContext ctx) { }

    // methods without a dump.cs skeleton stub
    public void _Awake_b__8_0(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.OpenMenu();
    }
    public void _OnDestroy_b__9_0(UnityEngine_InputSystem_InputAction_CallbackContext_o ctx)
    {
        this.OpenMenu();
    }
}
