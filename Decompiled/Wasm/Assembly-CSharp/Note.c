// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: Note  (Assembly-CSharp)

function Note_Awake(a:int, b:int) { // func86556
  var this:int_ptr;
  if (eqz(6703416[0]:ubyte)) {
    f_hpa(5690228);
    f_hpa(5690256);
    6703416[0]:byte = 1;
  }
  DG_Tweening_TweenSettingsExtensions_SetLoops(
    DG_Tweening_TweenSettingsExtensions_SetEase(
      DG_Tweening_DOTweenModuleSprite_DOColor(this[5], 0.3f, 1.5f, 0),
      4,
      d_p444444444444044P44p44444444[33849]:int),
    -1,
    1,
    d_p444444444444044P44p44444444[33856]:int);
}

function Note_Start(a:int_ptr, b:int, c:int) { // func86557
  if ((a[4] &
       1 <<
       UnityEngine_Camera_get_cullingMask(
         UnityEngine_Collision2D_get_rigidbody(b, 0),
         0)) <=
      0) goto B_a;
  c = a[6];
  if (eqz(6703534[0]:ubyte)) {
    f_hpa(5619368);
    f_hpa(5621908);
    6703534[0]:byte = 1;
  }
  a = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[2]:int;
  if (eqz(a)) goto B_a;
  b = f_icke(d_p444444444444044P44p44444444[16134]:int);
  OnBuildNavMeshEventArgs_ctor(b, 0);
  b[3]:int = c;
  b[8]:byte = 1;
  call_indirect(a[8], b, a[5], a[3]);
  label B_a:
}

function Note_OnCollisionStay2D(a:int, b:int_ptr) { // func86559
  if (eqz(6703417[0]:ubyte)) {
    f_hpa(5613524);
    6703417[0]:byte = 1;
  }
  a = System_Linq_Enumerable_Count(a, 0);
  b = d_p444444444444044P44p44444444[14673]:int;
  if (eqz(b[29])) { f_ahje(b) }
  DG_Tweening_DOTween_KillAll_1(a, 0, 0);
}

function Note_OnDestroy(a:int_ptr, b:int, c:int) { // func86560
  if ((a[4] &
       1 <<
       UnityEngine_Camera_get_cullingMask(
         UnityEngine_Collision2D_get_rigidbody(b, 0),
         0)) <=
      0) goto B_a;
  c = a[6];
  if (eqz(6703534[0]:ubyte)) {
    f_hpa(5619368);
    f_hpa(5621908);
    6703534[0]:byte = 1;
  }
  a = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[2]:int;
  if (eqz(a)) goto B_a;
  b = f_icke(d_p444444444444044P44p44444444[16134]:int);
  OnBuildNavMeshEventArgs_ctor(b, 0);
  b[3]:int = c;
  b[8]:byte = 0;
  call_indirect(a[8], b, a[5], a[3]);
  label B_a:
}

function Note_ctor(a:int, b:int) { // func86561
  var this:int_ptr;
  if (eqz(6703418[0]:ubyte)) {
    f_hpa(5601856);
    f_hpa(5668728);
    f_hpa(5668520);
    f_hpa(5682336);
    6703418[0]:byte = 1;
  }
  this[4] = f_irrc(this, d_p444444444444044P44p44444444[28474]:int);
  this[5] =
    UnityEngine_GameObject_get_activeInHierarchy(
      this,
      d_p444444444444044P44p44444444[28422]:int);
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11756]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[31876]:int,
    0);
  StaticEventHandler_CallMapTransitionEvent(methodInfo, this);
}

