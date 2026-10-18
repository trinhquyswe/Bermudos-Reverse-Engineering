// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: MeleeSkillAction  (Assembly-CSharp)

function MeleeSkillAction_OnAwake(a:int, b:int) { // func86996
  var this:int;
  if (eqz(6703818[0]:ubyte)) {
    f_hpa(5635412);
    6703818[0]:byte = 1;
  }
  this[56]:byte = 1;
  MeleeSkills_DealDamage(
    this[42]:int,
    f_xmjd(this[41]:int,
           this[12]:int,
           d_p444444444444044P44p44444444[20145]:int),
    0);
}

function MeleeSkillAction_OnStart(a:int, b:int):int { // func86997
  var this:int;
  if (eqz((this[42]:int)[76]:ubyte)) { return 3 }
  return call_indirect(this,
                       this[13]:float,
                       (this = this[0]:int)[111]:int,
                       this[110]:int);
}

function MeleeSkillAction_OnUpdate(a:int, b:int) { // func86998
  var this:int;
  this[56]:byte = 0;
  (this[42]:int)[76]:byte = 0;
}

function MeleeSkillAction_ctor(a:int, b:int) { // func86999
  var this:int_ptr;
  if (eqz(6703819[0]:ubyte)) {
    f_hpa(5689024);
    f_hpa(5689052);
    f_hpa(5689056);
    f_hpa(5689060);
    6703819[0]:byte = 1;
  }
  this[16] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33556]:int);
  this[11] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33548]:int);
  this[12] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33557]:int);
  this[13] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33555]:int);
}

