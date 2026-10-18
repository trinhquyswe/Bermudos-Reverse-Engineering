// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: SkillsAction  (Assembly-CSharp)

function SkillsAction_OnEnd(a:int, b:int) { // func86984
  var this:int_ptr;
  if (eqz(6703824[0]:ubyte)) {
    f_hpa(5635404);
    f_hpa(5602864);
    f_hpa(5752332);
    f_hpa(5721248);
    f_hpa(5739368);
    f_hpa(5748196);
    f_hpa(5719416);
    f_hpa(5712140);
    f_hpa(5748188);
    f_hpa(5753368);
    f_hpa(5755504);
    f_hpa(5721704);
    f_hpa(5755508);
    f_hpa(5727836);
    f_hpa(5752336);
    f_hpa(5753364);
    f_hpa(5748192);
    f_hpa(5727832);
    f_hpa(5719412);
    f_hpa(5755532);
    f_hpa(5748200);
    f_hpa(5721244);
    f_hpa(5739364);
    f_hpa(5756016);
    f_hpa(5721700);
    f_hpa(5712144);
    f_hpa(5755528);
    f_hpa(5756020);
    6703824[0]:byte = 1;
  }
  this[15] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[41717]:int,
      0);
  this[16] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[49633]:int,
      0);
  this[17] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[43250]:int,
      0);
  this[18] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[48339]:int,
      0);
  this[19] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[48341]:int,
      0);
  this[20] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[41603]:int,
      0);
  this[21] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[41145]:int,
      0);
  this[22] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[39327]:int,
      0);
  this[23] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[46133]:int,
      0);
  this[24] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[50296]:int,
      0);
  this[25] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[49375]:int,
      0);
  this[26] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[50168]:int,
      0);
  this[27] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[50174]:int,
      0);
  this[28] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[41718]:int,
      0);
  this[29] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[49634]:int,
      0);
  this[30] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[43251]:int,
      0);
  this[31] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[48340]:int,
      0);
  this[32] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[48342]:int,
      0);
  this[33] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[41604]:int,
      0);
  this[34] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[41146]:int,
      0);
  this[35] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[39328]:int,
      0);
  this[36] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[46134]:int,
      0);
  this[37] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[50297]:int,
      0);
  this[38] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[49376]:int,
      0);
  this[39] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[50169]:int,
      0);
  this[40] =
    UnityEngine_Animator_HasState(
      d_p444444444444044P44p44444444[50175]:int,
      0);
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[12008]:int);
  f_eljd(methodInfo, d_p444444444444044P44p44444444[20143]:int);
  this[41] = methodInfo;
  multiple_8_BehaviorDesigner_Runtime_ObjectPool_cctor(this, 0);
}

function SkillsAction_OnAwake(a:int, b:int) { // func87002
  var this:int;
  if (eqz(6703823[0]:ubyte)) {
    f_hpa(5635412);
    6703823[0]:byte = 1;
  }
  multiple_UnityEngine_Animator_SetTrigger(
    this[11]:int,
    f_xmjd(this[41]:int,
           this[12]:int,
           d_p444444444444044P44p44444444[20145]:int),
    0);
  this[56]:byte = 1;
}

function SkillsAction_OnStart(a:int, b:int):int { // func87003
  var this:int;
  return call_indirect(this,
                       this[13]:float,
                       (this = this[0]:int)[111]:int,
                       this[110]:int);
}

function SkillsAction_OnUpdate(a:int, b:float, c:int):int { // func87004
  c = g_a - 80;
  g_a = c;
  a = {
        if (a[56]:ubyte) {
          a[56]:byte = 0;
          3;
          goto B_a;
        }
        UnityEngine_Animator_GetAnimatorStateInfo(c, a[11]:int, 0, 0);
        c[18]:int = c[8]:int;
        (c - -64)[0]:long = c[3]:long;
        c[7]:long = c[2]:long;
        c[6]:long = c[1]:long;
        c[5]:long = c[0]:long;
        select_if(3, 2, b >= (c + 40)[3]:float);
        label B_a:
      }
  g_a = c + 80;
  return a;
}

function SkillsAction_ctor(a:int, b:int) { // func87005
  var this:int_ptr;
  if (eqz(6703825[0]:ubyte)) {
    f_hpa(5689024);
    f_hpa(5689036);
    f_hpa(5689040);
    f_hpa(5689052);
    f_hpa(5689064);
    f_hpa(5689068);
    6703825[0]:byte = 1;
  }
  this[11] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33548]:int);
  this[16] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33558]:int);
  this[20] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33555]:int);
  this[14] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33559]:int);
  this[15] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33552]:int);
  this[21] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33551]:int);
}

