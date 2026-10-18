// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: ReceiveDamageAction  (Assembly-CSharp)

function ReceiveDamageAction_ctor(a:int, b:int) { // func86981
  var this:int_ptr;
  if (eqz(6703822[0]:ubyte)) {
    f_hpa(5635408);
    f_hpa(5689024);
    6703822[0]:byte = 1;
  }
  f_zmjd(this[41], 11, this[26], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 0, this[15], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 1, this[16], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 2, this[17], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 3, this[18], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 4, this[19], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 5, this[20], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 6, this[21], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 7, this[22], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 8, this[23], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 9, this[24], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 10, this[25], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 12, this[27], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 13, this[28], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 14, this[29], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 15, this[30], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 16, this[31], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 17, this[32], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 18, this[33], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 19, this[34], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 20, this[35], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 21, this[36], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 22, this[37], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 23, this[38], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 24, this[39], d_p444444444444044P44p44444444[20144]:int);
  f_zmjd(this[41], 25, this[40], d_p444444444444044P44p44444444[20144]:int);
  this[11] =
    TMPro_TMPro_ExtensionMethods_FindInstanceID(
      this,
      d_p444444444444044P44p44444444[33548]:int);
}

function ReceiveDamageAction_OnAwake(a:int, b:int) { // func87000
  var this:int;
  if (eqz(6703820[0]:ubyte)) {
    f_hpa(5659908);
    6703820[0]:byte = 1;
  }
  UnityEngine_MonoBehaviour_StopCoroutine_2(this[12]:int, 0);
  UnityEngine_MonoBehaviour_StopCoroutine_2(this[13]:int, 0);
  this[56]:byte = 1;
  f_xnlc(this[15]:int,
         (this[16]:int)[7]:float,
         d_p444444444444044P44p44444444[26269]:int);
}

function ReceiveDamageAction_OnStart(a:int, b:int):int { // func87001
  var this:int;
  var methodInfo:int = g_a - 80;
  g_a = methodInfo;
  if (eqz(6703821[0]:ubyte)) {
    f_hpa(5659904);
    f_hpa(5659908);
    6703821[0]:byte = 1;
  }
  if (eqz((this[16]:int)[6]:float <= 0.0f)) goto B_b;
  if (
    eqz(f_wnlc(this[15]:int, d_p444444444444044P44p44444444[26268]:int) >
        0.0f)) goto B_b;
  var c:int = this[15]:int;
  f_xnlc(c,
         f_wnlc(c, d_p444444444444044P44p44444444[26268]:int) -
         UnityEngine_Time_get_time(0),
         d_p444444444444044P44p44444444[26269]:int);
  label B_b:
  this = 
    {
      if (this[56]:ubyte) {
        this[56]:byte = 0;
        3;
        goto B_c;
      }
      UnityEngine_Animator_GetAnimatorStateInfo(methodInfo, this[11]:int, 0, 0);
      methodInfo[18]:int = methodInfo[8]:int;
      (methodInfo - -64)[0]:long = methodInfo[3]:long;
      methodInfo[7]:long = methodInfo[2]:long;
      methodInfo[6]:long = methodInfo[1]:long;
      methodInfo[5]:long = methodInfo[0]:long;
      select_if(3, 2, (methodInfo + 40)[3]:float < 1.0f);
      label B_c:
    }
  g_a = methodInfo + 80;
  return this;
}

