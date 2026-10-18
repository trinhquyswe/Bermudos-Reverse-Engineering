// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: InputSystem_Actions  (Assembly-CSharp)

function InputSystem_Actions_UIActions_SetCallbacks(a:int_ptr, b:ubyte_ptr) { // func86323
  if (eqz(6703276[0]:ubyte)) {
    f_hpa(5601848);
    f_hpa(5601772);
    f_hpa(5668728);
    f_hpa(5676636);
    f_hpa(5676640);
    f_hpa(5676644);
    f_hpa(5660024);
    6703276[0]:byte = 1;
  }
  a[5] = f_irrc(a, d_p444444444444044P44p44444444[28474]:int);
  b = f_icke(d_p444444444444044P44p44444444[11754]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    b,
    a,
    d_p444444444444044P44p44444444[30452]:int,
    0);
  StaticEventHandler_CallTriggerDashEvent(b, a);
  b = f_icke(d_p444444444444044P44p44444444[11754]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    b,
    a,
    d_p444444444444044P44p44444444[30453]:int,
    0);
  StaticEventHandler_CallHotBarScrollChangedEvent(b, a);
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  var d:int_ptr = 
    ((if (b[189] & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
  b = d[8];
  var c:int = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(c, a, d_p444444444444044P44p44444444[30451]:int, 0);
  a = f_iyud(b, c, 0);
  if (eqz(a)) {
    d[8] = 0;
    return ;
  }
  b = f_upa(a, c = d_p444444444444044P44p44444444[11735]:int);
  if (b) {
    d[8] = b;
    if (
      eqz(f_upa(a, b = d_p444444444444044P44p44444444[11735]:int))) goto B_e;
    return ;
  }
  f_ypa(a, c);
  unreachable;
  label B_e:
  f_ypa(a, b);
  unreachable;
}

function InputSystem_Actions_get_asset(a:int, b:int) { // func87177
  var this:int;
  if (eqz(6703953[0]:ubyte)) {
    f_hpa(5654252);
    f_hpa(5654276);
    f_hpa(5608156);
    f_hpa(5608160);
    f_hpa(5726376);
    f_hpa(5732144);
    f_hpa(5726040);
    f_hpa(5715008);
    f_hpa(5730136);
    f_hpa(5727828);
    f_hpa(5759332);
    f_hpa(5713320);
    f_hpa(5736520);
    f_hpa(5725712);
    f_hpa(5730704);
    f_hpa(5730044);
    f_hpa(5728580);
    f_hpa(5725508);
    f_hpa(5737116);
    f_hpa(5736516);
    f_hpa(5728548);
    f_hpa(5719856);
    f_hpa(5712228);
    f_hpa(5731408);
    f_hpa(5738748);
    f_hpa(5724860);
    6703953[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[13331]:int);
  multiple_System_Collections_Generic_List_1_cctor(
    methodInfo,
    d_p444444444444044P44p44444444[24855]:int);
  this[4]:int = methodInfo;
  methodInfo = f_icke(d_p444444444444044P44p44444444[13332]:int);
  multiple_System_Collections_Generic_List_1_cctor(
    methodInfo,
    d_p444444444444044P44p44444444[24861]:int);
  this[27]:long@4 = -1L;
  this[13]:int = methodInfo;
  this[29]:long@4 = -1L;
  this[31]:int = -1;
  this[2]:int =
    (methodInfo = UnityEngine_InputSystem_InputActionAsset_LoadFromJson(
                    d_p444444444444044P44p44444444[51125]:int,
                    0));
  this[3]:int =
    (methodInfo = UnityEngine_InputSystem_InputActionAsset_FindBinding(
                    methodInfo,
                    d_p444444444444044P44p44444444[43429]:int,
                    1,
                    0));
  this[5]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      methodInfo,
      d_p444444444444044P44p44444444[42802]:int,
      1,
      0);
  this[6]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[3]:int,
      d_p444444444444044P44p44444444[42507]:int,
      1,
      0);
  this[7]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[3]:int,
      d_p444444444444044P44p44444444[41256]:int,
      1,
      0);
  this[8]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[3]:int,
      d_p444444444444044P44p44444444[43826]:int,
      1,
      0);
  this[9]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[3]:int,
      d_p444444444444044P44p44444444[44144]:int,
      1,
      0);
  this[10]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[3]:int,
      d_p444444444444044P44p44444444[39349]:int,
      1,
      0);
  this[11]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[3]:int,
      d_p444444444444044P44p44444444[43803]:int,
      1,
      0);
  this[12]:int =
    (methodInfo = UnityEngine_InputSystem_InputActionAsset_FindBinding(
                    this[2]:int,
                    d_p444444444444044P44p44444444[45571]:int,
                    1,
                    0));
  this[14]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      methodInfo,
      d_p444444444444044P44p44444444[42886]:int,
      1,
      0);
  this[15]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[44328]:int,
      1,
      0);
  this[16]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[39622]:int,
      1,
      0);
  this[17]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[43437]:int,
      1,
      0);
  this[18]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[40044]:int,
      1,
      0);
  this[19]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[43968]:int,
      1,
      0);
  this[20]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[42720]:int,
      1,
      0);
  this[21]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[43826]:int,
      1,
      0);
  this[22]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[45422]:int,
      1,
      0);
  this[23]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[45421]:int,
      1,
      0);
  this[24]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[43249]:int,
      1,
      0);
  this[25]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[45979]:int,
      1,
      0);
  this[26]:int =
    UnityEngine_InputSystem_InputActionMap_FindActionIndex(
      this[12]:int,
      d_p444444444444044P44p44444444[42669]:int,
      1,
      0);
}

function InputSystem_Actions_Finalize(a:int, b:int) { // func87178
  var this:int_ptr;
  if (eqz(6703954[0]:ubyte)) {
    f_hpa(5619244);
    6703954[0]:byte = 1;
  }
  this = this[2];
  var methodInfo:int_ptr = d_p444444444444044P44p44444444[16103]:int;
  if (eqz(methodInfo[29])) { f_ahje(methodInfo) }
  f_kfnb(this, 0);
}

function InputSystem_Actions_get_UI(a:int, b:int_ptr, c:{ a:long, b:int, c:long, d:int, e:long, f:int }) { // func87179
  c = g_a - 48;
  g_a = c;
  if (eqz(6703955[0]:ubyte)) {
    f_hpa(5658924);
    f_hpa(5724240);
    6703955[0]:byte = 1;
  }
  if (b[27] == -1) {
    b[27] =
      UnityEngine_InputSystem_InputActionAsset_FindActionMap_1(
        b[2],
        d_p444444444444044P44p44444444[42352]:int,
        0)
  }
  f_tktb(c + 16, b[2], 0);
  c.f = c.d;
  c.e = c.c;
  f_zrib(c, c + 32, b[27], d_p444444444444044P44p44444444[26023]:int);
  a[2]:int = c.b;
  a[0]:long@4 = c.a;
  g_a = c + 48;
}

function InputSystem_Actions_get_KeyboardMouseScheme(a:int, b:int_ptr, c:{ a:long, b:int, c:long, d:int, e:long, f:int }) { // func87180
  c = g_a - 48;
  g_a = c;
  if (eqz(6703956[0]:ubyte)) {
    f_hpa(5658924);
    f_hpa(5720400);
    6703956[0]:byte = 1;
  }
  if (b[28] == -1) {
    b[28] =
      UnityEngine_InputSystem_InputActionAsset_FindActionMap_1(
        b[2],
        d_p444444444444044P44p44444444[41392]:int,
        0)
  }
  f_tktb(c + 16, b[2], 0);
  c.f = c.d;
  c.e = c.c;
  f_zrib(c, c + 32, b[28], d_p444444444444044P44p44444444[26023]:int);
  a[2]:int = c.b;
  a[0]:long@4 = c.a;
  g_a = c + 48;
}

function InputSystem_Actions_get_GamepadScheme(a:int, b:int_ptr, c:{ a:long, b:int, c:long, d:int, e:long, f:int }) { // func87181
  c = g_a - 48;
  g_a = c;
  if (eqz(6703957[0]:ubyte)) {
    f_hpa(5658924);
    f_hpa(5736356);
    6703957[0]:byte = 1;
  }
  if (b[29] == -1) {
    b[29] =
      UnityEngine_InputSystem_InputActionAsset_FindActionMap_1(
        b[2],
        d_p444444444444044P44p44444444[45381]:int,
        0)
  }
  f_tktb(c + 16, b[2], 0);
  c.f = c.d;
  c.e = c.c;
  f_zrib(c, c + 32, b[29], d_p444444444444044P44p44444444[26023]:int);
  a[2]:int = c.b;
  a[0]:long@4 = c.a;
  g_a = c + 48;
}

function InputSystem_Actions_get_TouchScheme(a:int, b:int_ptr, c:{ a:long, b:int, c:long, d:int, e:long, f:int }) { // func87182
  c = g_a - 48;
  g_a = c;
  if (eqz(6703958[0]:ubyte)) {
    f_hpa(5658924);
    f_hpa(5724108);
    6703958[0]:byte = 1;
  }
  if (b[30] == -1) {
    b[30] =
      UnityEngine_InputSystem_InputActionAsset_FindActionMap_1(
        b[2],
        d_p444444444444044P44p44444444[42319]:int,
        0)
  }
  f_tktb(c + 16, b[2], 0);
  c.f = c.d;
  c.e = c.c;
  f_zrib(c, c + 32, b[30], d_p444444444444044P44p44444444[26023]:int);
  a[2]:int = c.b;
  a[0]:long@4 = c.a;
  g_a = c + 48;
}

function InputSystem_Actions_get_JoystickScheme(a:int, b:int_ptr, c:{ a:long, b:int, c:long, d:int, e:long, f:int }) { // func87183
  c = g_a - 48;
  g_a = c;
  if (eqz(6703959[0]:ubyte)) {
    f_hpa(5658924);
    f_hpa(5739760);
    6703959[0]:byte = 1;
  }
  if (b[31] == -1) {
    b[31] =
      UnityEngine_InputSystem_InputActionAsset_FindActionMap_1(
        b[2],
        d_p444444444444044P44p44444444[46232]:int,
        0)
  }
  f_tktb(c + 16, b[2], 0);
  c.f = c.d;
  c.e = c.c;
  f_zrib(c, c + 32, b[31], d_p444444444444044P44p44444444[26023]:int);
  a[2]:int = c.b;
  a[0]:long@4 = c.a;
  g_a = c + 48;
}

function InputSystem_Actions_PlayerActions_get_RightClick(a:int, b:int):int { // func87184
  var this:int_ptr;
  return (this[0])[9]:int;
}

function InputSystem_Actions_PlayerActions_op_Implicit(a:int_ptr, b:int_ptr, c:int_ptr) { // func87186
  var h:int_ptr;
  var g:int;
  if (eqz(6703960[0]:ubyte)) {
    f_hpa(5601936);
    f_hpa(5628296);
    f_hpa(5654256);
    f_hpa(5654264);
    6703960[0]:byte = 1;
  }
  if (eqz(b)) goto B_b;
  if (
    f_atuc((a[0])[4]:int, b, d_p444444444444044P44p44444444[24858]:int)) goto B_b;
  var e:int_ptr = d_p444444444444044P44p44444444[24856]:int;
  var d:int_ptr = (a[0])[4]:int;
  d[4] = d[4] + 1;
  c = d[3];
  if (c < (h = d[2])[3]) {
    d[3] = c + 1;
    h[c + 4]:int = b;
    goto B_c;
  }
  System_String_Substring(d, b, ((e[4])[24]:int)[14]:int);
  label B_c:
  var i:int = (a[0])[5]:int;
  d = 0;
  var f:int = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_f;
        e = g[22]:int;
        loop L_g {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_g;
            goto B_f;
          }
        }
        g + ((e + (d << 3))[1]:int << 3) + 192;
        goto B_e;
        label B_f:
        f_jqje(b, c, 0);
        label B_e:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[5]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_j;
        e = g[22]:int;
        loop L_k {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_k;
            goto B_j;
          }
        }
        g + ((e + (d << 3))[1]:int << 3) + 192;
        goto B_i;
        label B_j:
        f_jqje(b, c, 0);
        label B_i:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[5]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_n;
        e = g[22]:int;
        loop L_o {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_o;
            goto B_n;
          }
        }
        g + ((e + (d << 3))[1]:int << 3) + 192;
        goto B_m;
        label B_n:
        f_jqje(b, c, 0);
        label B_m:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[6]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_r;
        e = g[22]:int;
        loop L_s {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_s;
            goto B_r;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 200;
        goto B_q;
        label B_r:
        f_jqje(b, c, 1);
        label B_q:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[6]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_v;
        e = g[22]:int;
        loop L_w {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_w;
            goto B_v;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 200;
        goto B_u;
        label B_v:
        f_jqje(b, c, 1);
        label B_u:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[6]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_z;
        e = g[22]:int;
        loop L_aa {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_aa;
            goto B_z;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 200;
        goto B_y;
        label B_z:
        f_jqje(b, c, 1);
        label B_y:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[7]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_da;
        e = g[22]:int;
        loop L_ea {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ea;
            goto B_da;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 208;
        goto B_ca;
        label B_da:
        f_jqje(b, c, 2);
        label B_ca:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[7]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_ha;
        e = g[22]:int;
        loop L_ia {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ia;
            goto B_ha;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 208;
        goto B_ga;
        label B_ha:
        f_jqje(b, c, 2);
        label B_ga:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[7]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_la;
        e = g[22]:int;
        loop L_ma {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ma;
            goto B_la;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 208;
        goto B_ka;
        label B_la:
        f_jqje(b, c, 2);
        label B_ka:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[8]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_pa;
        e = g[22]:int;
        loop L_qa {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_qa;
            goto B_pa;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 216;
        goto B_oa;
        label B_pa:
        f_jqje(b, c, 3);
        label B_oa:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[8]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_ta;
        e = g[22]:int;
        loop L_ua {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ua;
            goto B_ta;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 216;
        goto B_sa;
        label B_ta:
        f_jqje(b, c, 3);
        label B_sa:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[8]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_xa;
        e = g[22]:int;
        loop L_ya {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ya;
            goto B_xa;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 216;
        goto B_wa;
        label B_xa:
        f_jqje(b, c, 3);
        label B_wa:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[9]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_bb;
        e = g[22]:int;
        loop L_cb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_cb;
            goto B_bb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 224;
        goto B_ab;
        label B_bb:
        f_jqje(b, c, 4);
        label B_ab:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[9]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_fb;
        e = g[22]:int;
        loop L_gb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_gb;
            goto B_fb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 224;
        goto B_eb;
        label B_fb:
        f_jqje(b, c, 4);
        label B_eb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[9]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_jb;
        e = g[22]:int;
        loop L_kb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_kb;
            goto B_jb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 224;
        goto B_ib;
        label B_jb:
        f_jqje(b, c, 4);
        label B_ib:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[10]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_nb;
        e = g[22]:int;
        loop L_ob {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ob;
            goto B_nb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 232;
        goto B_mb;
        label B_nb:
        f_jqje(b, c, 5);
        label B_mb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[10]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_rb;
        e = g[22]:int;
        loop L_sb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_sb;
            goto B_rb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 232;
        goto B_qb;
        label B_rb:
        f_jqje(b, c, 5);
        label B_qb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[10]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_vb;
        e = g[22]:int;
        loop L_wb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_wb;
            goto B_vb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 232;
        goto B_ub;
        label B_vb:
        f_jqje(b, c, 5);
        label B_ub:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[11]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_zb;
        e = g[22]:int;
        loop L_ac {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ac;
            goto B_zb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 240;
        goto B_yb;
        label B_zb:
        f_jqje(b, c, 6);
        label B_yb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[11]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18366]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_dc;
        e = g[22]:int;
        loop L_ec {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ec;
            goto B_dc;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 240;
        goto B_cc;
        label B_dc:
        f_jqje(b, c, 6);
        label B_cc:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  f = (a[0])[11]:int;
  h = f_icke(d_p444444444444044P44p44444444[11776]:int);
  a = d_p444444444444044P44p44444444[18366]:int;
  f_wyjc(h,
         b,
         {
           if (eqz(e = (i = b[0])[91]:ushort)) goto B_hc;
           c = i[22]:int;
           loop L_ic {
             if (a != (c + (d << 3))[0]:int) {
               if (e != (d = d + 1)) continue L_ic;
               goto B_hc;
             }
           }
           ((c + (d << 3))[1]:int << 3) + i + 240;
           goto B_gc;
           label B_hc:
           f_jqje(b, a, 6);
           label B_gc:
         }[1]:int,
         0);
  UnityEngine_InputSystem_InputAction_remove_started(f, h, 0);
  label B_b:
}

function InputSystem_Actions_PlayerActions_AddCallbacks(a:int, b:int, c:int) { // func87190
  var this:int_ptr;
  var instance:int;
  if (eqz(6703962[0]:ubyte)) {
    f_hpa(5654272);
    6703962[0]:byte = 1;
  }
  if (f_gtuc((this[0])[4]:int,
             instance,
             d_p444444444444044P44p44444444[24860]:int)) {
    f_kyxd(this, instance, this)
  }
}

function InputSystem_Actions_PlayerActions_RemoveCallbacks(a:int, b:int, c:int) { // func87192
  var this:int_ptr;
  var d:int_ptr;
  var e:int;
  var instance:int;
  var methodInfo:int = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703963[0]:ubyte)) {
    f_hpa(5642000);
    f_hpa(5642004);
    f_hpa(5642008);
    f_hpa(5654260);
    f_hpa(5654268);
    6703963[0]:byte = 1;
  }
  methodInfo[3]:long = 0L;
  methodInfo[2]:long = 0L;
  UnityEngine_ComputeBuffer_Release(
    methodInfo + 16,
    (this[0])[4]:int,
    d_p444444444444044P44p44444444[24859]:int);
  methodInfo[2]:int = 0;
  methodInfo[3]:int = methodInfo + 16;
  d = 
    {
      loop L_j {
        6151988[0]:int = 0;
        e = env_invoke_iii(1155,
                           methodInfo + 16,
                           d_p444444444444044P44p44444444[21793]:int);
        d = 6151988[0]:int;
        6151988[0]:int = 0;
        if (d == 1) goto B_h;
        if (e) {
          6151988[0]:int = 0;
          env_invoke_viii(13936, this, methodInfo[7]:int, methodInfo);
          d = 6151988[0]:int;
          6151988[0]:int = 0;
          if (d == 1) goto B_i;
          continue L_j;
        }
      }
      d_p444444444444044P44p44444444[21792]:int;
      goto B_f;
      label B_i:
      env_cxa_find_matching_catch_3(4889068);
      goto B_g;
      label B_h:
      env_cxa_find_matching_catch_3(4889068);
      label B_g:
    }
  if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
  d = env_cxa_begin_catch(d)[0]:int;
  6151988[0]:int = 0;
  methodInfo[2]:int = d;
  env_invoke_v(58);
  e = 6151988[0]:int;
  6151988[0]:int = 0;
  if (e == 1) goto B_e;
  d_p444444444444044P44p44444444[21792]:int;
  if (d) goto B_c;
  label B_f:
  d = (this[0])[4]:int;
  e = d[3];
  d[3] = 0;
  d[4] = d[4] + 1;
  if (e > 0) { f_kcud(d[2], 0, e, 0) }
  InputSystem_Actions_PlayerActions_op_Implicit(this, instance, methodInfo);
  g_a = methodInfo + 32;
  return ;
  label B_e:
  d = env_cxa_find_matching_catch();
  env_getTempRet0();
  label B_d:
  6151988[0]:int = 0;
  env_invoke_ii(13937, methodInfo + 8);
  methodInfo = 6151988[0]:int;
  6151988[0]:int = 0;
  if (methodInfo != 1) goto B_b;
  env_cxa_find_matching_catch_3(0);
  env_getTempRet0();
  f_sx();
  unreachable;
  label B_c:
  System_Net_CommandStream_ReceiveCommandResponseCallback(d);
  unreachable;
  label B_b:
  env_resumeException(d);
  unreachable;
}

function InputSystem_Actions_PlayerActions_UnregisterCallbacks(a:{ a:int, b:int }):int { // func87193
  a.b;
  d_p444444444444044P44p44444444[21792]:int;
  var b:int = a.a;
  if (b) {
    System_Net_CommandStream_ReceiveCommandResponseCallback(b);
    unreachable;
  }
  return a;
}

function InputSystem_Actions_UIActions_get_ScrollWheel(a:int, b:int):int { // func87195
  var this:int_ptr;
  return (this[0])[20]:int;
}

function InputSystem_Actions_UIActions_get_MiddleClick(a:int, b:int):int { // func87197
  var this:int_ptr;
  return (this[0])[21]:int;
}

function InputSystem_Actions_UIActions_get_RightClick(a:int, b:int):int { // func87199
  var this:int_ptr;
  return (this[0])[22]:int;
}

function InputSystem_Actions_UIActions_get_TrackedDevicePosition(a:int, b:int):int { // func87201
  var this:int_ptr;
  return (this[0])[23]:int;
}

function InputSystem_Actions_UIActions_get_TrackedDeviceOrientation(a:int, b:int):int { // func87203
  var this:int_ptr;
  return (this[0])[24]:int;
}

function InputSystem_Actions_UIActions_get_OpenInventory(a:int, b:int):int { // func87205
  var this:int_ptr;
  return (this[0])[25]:int;
}

function InputSystem_Actions_UIActions_get_UseItem(a:int, b:int):int { // func87207
  var this:int_ptr;
  return (this[0])[26]:int;
}

function InputSystem_Actions_UIActions_Get(a:int, b:int) { // func87209
  var this:int_ptr;
  UnityEngine_InputSystem_InputActionMap_FindAction_1((this[0])[12]:int,
                                                      0);
}

function InputSystem_Actions_UIActions_Enable(a:int, b:int) { // func87211
  var this:int_ptr;
  f_cmtb((this[0])[12]:int, 0);
}

function InputSystem_Actions_UIActions_Disable(a:int, b:int):int { // func87213
  var this:int_ptr;
  return UnityEngine_InputSystem_InputActionMap_get_idDontGenerate(
           (this[0])[12]:int,
           0);
}

function InputSystem_Actions_UIActions_op_Implicit(a:int_ptr, b:int_ptr, c:int_ptr) { // func87215
  var h:int_ptr;
  var g:int;
  if (eqz(6703964[0]:ubyte)) {
    f_hpa(5601936);
    f_hpa(5628300);
    f_hpa(5654280);
    f_hpa(5654288);
    6703964[0]:byte = 1;
  }
  if (eqz(b)) goto B_b;
  if (
    f_atuc((a[0])[13]:int, b, d_p444444444444044P44p44444444[24864]:int)) goto B_b;
  var e:int_ptr = d_p444444444444044P44p44444444[24862]:int;
  var d:int_ptr = (a[0])[13]:int;
  d[4] = d[4] + 1;
  c = d[3];
  if (c < (h = d[2])[3]) {
    d[3] = c + 1;
    h[c + 4]:int = b;
    goto B_c;
  }
  System_String_Substring(d, b, ((e[4])[24]:int)[14]:int);
  label B_c:
  var i:int = (a[0])[14]:int;
  d = 0;
  var f:int = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_f;
        e = g[22]:int;
        loop L_g {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_g;
            goto B_f;
          }
        }
        g + ((e + (d << 3))[1]:int << 3) + 192;
        goto B_e;
        label B_f:
        f_jqje(b, c, 0);
        label B_e:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[14]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_j;
        e = g[22]:int;
        loop L_k {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_k;
            goto B_j;
          }
        }
        g + ((e + (d << 3))[1]:int << 3) + 192;
        goto B_i;
        label B_j:
        f_jqje(b, c, 0);
        label B_i:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[14]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_n;
        e = g[22]:int;
        loop L_o {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_o;
            goto B_n;
          }
        }
        g + ((e + (d << 3))[1]:int << 3) + 192;
        goto B_m;
        label B_n:
        f_jqje(b, c, 0);
        label B_m:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[15]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_r;
        e = g[22]:int;
        loop L_s {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_s;
            goto B_r;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 200;
        goto B_q;
        label B_r:
        f_jqje(b, c, 1);
        label B_q:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[15]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_v;
        e = g[22]:int;
        loop L_w {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_w;
            goto B_v;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 200;
        goto B_u;
        label B_v:
        f_jqje(b, c, 1);
        label B_u:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[15]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_z;
        e = g[22]:int;
        loop L_aa {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_aa;
            goto B_z;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 200;
        goto B_y;
        label B_z:
        f_jqje(b, c, 1);
        label B_y:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[16]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_da;
        e = g[22]:int;
        loop L_ea {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ea;
            goto B_da;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 208;
        goto B_ca;
        label B_da:
        f_jqje(b, c, 2);
        label B_ca:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[16]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_ha;
        e = g[22]:int;
        loop L_ia {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ia;
            goto B_ha;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 208;
        goto B_ga;
        label B_ha:
        f_jqje(b, c, 2);
        label B_ga:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[16]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_la;
        e = g[22]:int;
        loop L_ma {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ma;
            goto B_la;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 208;
        goto B_ka;
        label B_la:
        f_jqje(b, c, 2);
        label B_ka:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[17]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_pa;
        e = g[22]:int;
        loop L_qa {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_qa;
            goto B_pa;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 216;
        goto B_oa;
        label B_pa:
        f_jqje(b, c, 3);
        label B_oa:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[17]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_ta;
        e = g[22]:int;
        loop L_ua {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ua;
            goto B_ta;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 216;
        goto B_sa;
        label B_ta:
        f_jqje(b, c, 3);
        label B_sa:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[17]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_xa;
        e = g[22]:int;
        loop L_ya {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ya;
            goto B_xa;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 216;
        goto B_wa;
        label B_xa:
        f_jqje(b, c, 3);
        label B_wa:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[18]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_bb;
        e = g[22]:int;
        loop L_cb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_cb;
            goto B_bb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 224;
        goto B_ab;
        label B_bb:
        f_jqje(b, c, 4);
        label B_ab:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[18]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_fb;
        e = g[22]:int;
        loop L_gb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_gb;
            goto B_fb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 224;
        goto B_eb;
        label B_fb:
        f_jqje(b, c, 4);
        label B_eb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[18]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_jb;
        e = g[22]:int;
        loop L_kb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_kb;
            goto B_jb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 224;
        goto B_ib;
        label B_jb:
        f_jqje(b, c, 4);
        label B_ib:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[19]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_nb;
        e = g[22]:int;
        loop L_ob {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ob;
            goto B_nb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 232;
        goto B_mb;
        label B_nb:
        f_jqje(b, c, 5);
        label B_mb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[19]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_rb;
        e = g[22]:int;
        loop L_sb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_sb;
            goto B_rb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 232;
        goto B_qb;
        label B_rb:
        f_jqje(b, c, 5);
        label B_qb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[19]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_vb;
        e = g[22]:int;
        loop L_wb {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_wb;
            goto B_vb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 232;
        goto B_ub;
        label B_vb:
        f_jqje(b, c, 5);
        label B_ub:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[20]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_zb;
        e = g[22]:int;
        loop L_ac {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ac;
            goto B_zb;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 240;
        goto B_yb;
        label B_zb:
        f_jqje(b, c, 6);
        label B_yb:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[20]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_dc;
        e = g[22]:int;
        loop L_ec {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ec;
            goto B_dc;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 240;
        goto B_cc;
        label B_dc:
        f_jqje(b, c, 6);
        label B_cc:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[20]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_hc;
        e = g[22]:int;
        loop L_ic {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ic;
            goto B_hc;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 240;
        goto B_gc;
        label B_hc:
        f_jqje(b, c, 6);
        label B_gc:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[21]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_lc;
        e = g[22]:int;
        loop L_mc {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_mc;
            goto B_lc;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 248;
        goto B_kc;
        label B_lc:
        f_jqje(b, c, 7);
        label B_kc:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[21]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_pc;
        e = g[22]:int;
        loop L_qc {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_qc;
            goto B_pc;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 248;
        goto B_oc;
        label B_pc:
        f_jqje(b, c, 7);
        label B_oc:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[21]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_tc;
        e = g[22]:int;
        loop L_uc {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_uc;
            goto B_tc;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 248;
        goto B_sc;
        label B_tc:
        f_jqje(b, c, 7);
        label B_sc:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[22]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_xc;
        e = g[22]:int;
        loop L_yc {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_yc;
            goto B_xc;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 256;
        goto B_wc;
        label B_xc:
        f_jqje(b, c, 8);
        label B_wc:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[22]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_bd;
        e = g[22]:int;
        loop L_cd {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_cd;
            goto B_bd;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 256;
        goto B_ad;
        label B_bd:
        f_jqje(b, c, 8);
        label B_ad:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[22]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_fd;
        e = g[22]:int;
        loop L_gd {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_gd;
            goto B_fd;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 256;
        goto B_ed;
        label B_fd:
        f_jqje(b, c, 8);
        label B_ed:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[23]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_jd;
        e = g[22]:int;
        loop L_kd {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_kd;
            goto B_jd;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 264;
        goto B_id;
        label B_jd:
        f_jqje(b, c, 9);
        label B_id:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[23]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_nd;
        e = g[22]:int;
        loop L_od {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_od;
            goto B_nd;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 264;
        goto B_md;
        label B_nd:
        f_jqje(b, c, 9);
        label B_md:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[23]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_rd;
        e = g[22]:int;
        loop L_sd {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_sd;
            goto B_rd;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 264;
        goto B_qd;
        label B_rd:
        f_jqje(b, c, 9);
        label B_qd:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[24]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_vd;
        e = g[22]:int;
        loop L_wd {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_wd;
            goto B_vd;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 272;
        goto B_ud;
        label B_vd:
        f_jqje(b, c, 10);
        label B_ud:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[24]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_zd;
        e = g[22]:int;
        loop L_ae {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ae;
            goto B_zd;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 272;
        goto B_yd;
        label B_zd:
        f_jqje(b, c, 10);
        label B_yd:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[24]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_de;
        e = g[22]:int;
        loop L_ee {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ee;
            goto B_de;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 272;
        goto B_ce;
        label B_de:
        f_jqje(b, c, 10);
        label B_ce:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[25]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_he;
        e = g[22]:int;
        loop L_ie {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ie;
            goto B_he;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 280;
        goto B_ge;
        label B_he:
        f_jqje(b, c, 11);
        label B_ge:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[25]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_le;
        e = g[22]:int;
        loop L_me {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_me;
            goto B_le;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 280;
        goto B_ke;
        label B_le:
        f_jqje(b, c, 11);
        label B_ke:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  i = (a[0])[25]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_pe;
        e = g[22]:int;
        loop L_qe {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_qe;
            goto B_pe;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 280;
        goto B_oe;
        label B_pe:
        f_jqje(b, c, 11);
        label B_oe:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_started(i, f, 0);
  i = (a[0])[26]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_te;
        e = g[22]:int;
        loop L_ue {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ue;
            goto B_te;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 288;
        goto B_se;
        label B_te:
        f_jqje(b, c, 12);
        label B_se:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_get_inProgress(i, f, 0);
  i = (a[0])[26]:int;
  f = f_icke(d_p444444444444044P44p44444444[11776]:int);
  c = d_p444444444444044P44p44444444[18367]:int;
  c = {
        g = b[0];
        h = g[91]:ushort;
        if (eqz(h)) goto B_xe;
        e = g[22]:int;
        loop L_ye {
          if (c != (e + (d << 3))[0]:int) {
            if (h != (d = d + 1)) continue L_ye;
            goto B_xe;
          }
        }
        ((e + (d << 3))[1]:int << 3) + g + 288;
        goto B_we;
        label B_xe:
        f_jqje(b, c, 12);
        label B_we:
      }
  d = 0;
  f_wyjc(f, b, c[1], 0);
  UnityEngine_InputSystem_InputAction_remove_canceled(i, f, 0);
  f = (a[0])[26]:int;
  h = f_icke(d_p444444444444044P44p44444444[11776]:int);
  a = d_p444444444444044P44p44444444[18367]:int;
  f_wyjc(h,
         b,
         {
           if (eqz(e = (i = b[0])[91]:ushort)) goto B_bf;
           c = i[22]:int;
           loop L_cf {
             if (a != (c + (d << 3))[0]:int) {
               if (e != (d = d + 1)) continue L_cf;
               goto B_bf;
             }
           }
           ((c + (d << 3))[1]:int << 3) + i + 288;
           goto B_af;
           label B_bf:
           f_jqje(b, a, 12);
           label B_af:
         }[1]:int,
         0);
  UnityEngine_InputSystem_InputAction_remove_started(f, h, 0);
  label B_b:
}

function InputSystem_Actions_UIActions_AddCallbacks(a:int, b:int, c:int) { // func87219
  var this:int_ptr;
  var instance:int;
  if (eqz(6703966[0]:ubyte)) {
    f_hpa(5654296);
    6703966[0]:byte = 1;
  }
  if (f_gtuc((this[0])[13]:int,
             instance,
             d_p444444444444044P44p44444444[24866]:int)) {
    f_nzxd(this, instance, this)
  }
}

function InputSystem_Actions_UIActions_RemoveCallbacks(a:int, b:int, c:int) { // func87221
  var this:int_ptr;
  var d:int_ptr;
  var e:int;
  var instance:int;
  var methodInfo:int = g_a - 32;
  g_a = methodInfo;
  if (eqz(6703967[0]:ubyte)) {
    f_hpa(5642012);
    f_hpa(5642016);
    f_hpa(5642020);
    f_hpa(5654284);
    f_hpa(5654292);
    6703967[0]:byte = 1;
  }
  methodInfo[3]:long = 0L;
  methodInfo[2]:long = 0L;
  UnityEngine_ComputeBuffer_Release(
    methodInfo + 16,
    (this[0])[13]:int,
    d_p444444444444044P44p44444444[24865]:int);
  methodInfo[2]:int = 0;
  methodInfo[3]:int = methodInfo + 16;
  d = 
    {
      loop L_j {
        6151988[0]:int = 0;
        e = env_invoke_iii(1155,
                           methodInfo + 16,
                           d_p444444444444044P44p44444444[21796]:int);
        d = 6151988[0]:int;
        6151988[0]:int = 0;
        if (d == 1) goto B_h;
        if (e) {
          6151988[0]:int = 0;
          env_invoke_viii(13938, this, methodInfo[7]:int, methodInfo);
          d = 6151988[0]:int;
          6151988[0]:int = 0;
          if (d == 1) goto B_i;
          continue L_j;
        }
      }
      d_p444444444444044P44p44444444[21795]:int;
      goto B_f;
      label B_i:
      env_cxa_find_matching_catch_3(4889068);
      goto B_g;
      label B_h:
      env_cxa_find_matching_catch_3(4889068);
      label B_g:
    }
  if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_d;
  d = env_cxa_begin_catch(d)[0]:int;
  6151988[0]:int = 0;
  methodInfo[2]:int = d;
  env_invoke_v(58);
  e = 6151988[0]:int;
  6151988[0]:int = 0;
  if (e == 1) goto B_e;
  d_p444444444444044P44p44444444[21795]:int;
  if (d) goto B_c;
  label B_f:
  d = (this[0])[13]:int;
  e = d[3];
  d[3] = 0;
  d[4] = d[4] + 1;
  if (e > 0) { f_kcud(d[2], 0, e, 0) }
  InputSystem_Actions_UIActions_op_Implicit(this, instance, methodInfo);
  g_a = methodInfo + 32;
  return ;
  label B_e:
  d = env_cxa_find_matching_catch();
  env_getTempRet0();
  label B_d:
  6151988[0]:int = 0;
  env_invoke_ii(13939, methodInfo + 8);
  methodInfo = 6151988[0]:int;
  6151988[0]:int = 0;
  if (methodInfo != 1) goto B_b;
  env_cxa_find_matching_catch_3(0);
  env_getTempRet0();
  f_sx();
  unreachable;
  label B_c:
  System_Net_CommandStream_ReceiveCommandResponseCallback(d);
  unreachable;
  label B_b:
  env_resumeException(d);
  unreachable;
}

function InputSystem_Actions_UIActions_UnregisterCallbacks(a:{ a:int, b:int }):int { // func87222
  a.b;
  d_p444444444444044P44p44444444[21795]:int;
  var b:int = a.a;
  if (b) {
    System_Net_CommandStream_ReceiveCommandResponseCallback(b);
    unreachable;
  }
  return a;
}

