// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: EnemyManager  (Assembly-CSharp)

function EnemyManager_Start(a:int, b:int) { // func87083
  var this:int;
  if (eqz(6703866[0]:ubyte)) {
    f_hpa(5601840);
    f_hpa(5672636);
    6703866[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11752]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[29451]:int,
    0);
  StaticEventHandler_CallBossChangedEvent(methodInfo, 0);
}

function EnemyManager_OnEnable(a:int, b:int) { // func87084
  var this:int;
  if (eqz(6703867[0]:ubyte)) {
    f_hpa(5601840);
    f_hpa(5672636);
    6703867[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11752]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[29451]:int,
    0);
  StaticEventHandler_add_OnBuildNavMesh(methodInfo, 0);
}

function EnemyManager_OnDisable(a:int_ptr, b:int, c:int) { // func87085
  var g:int;
  var e:int;
  var h:int_ptr;
  var i:long;
  var f:int_ptr;
  c = g_a - 240;
  g_a = c;
  if (eqz(6703868[0]:ubyte)) {
    f_hpa(5640452);
    f_hpa(5640176);
    f_hpa(5640180);
    f_hpa(5640456);
    f_hpa(5640460);
    f_hpa(5640184);
    f_hpa(5675688);
    f_hpa(5648504);
    f_hpa(5648512);
    f_hpa(5647188);
    f_hpa(5648520);
    f_hpa(5648532);
    f_hpa(5652764);
    f_hpa(5682516);
    f_hpa(5619244);
    f_hpa(5704616);
    6703868[0]:byte = 1;
  }
  c[43]:int = 0;
  var d:int = c + 160;
  d[0]:long = 0L;
  c[19]:long = 0L;
  c[37]:int = 0;
  c[17]:long = 0L;
  c[16]:long = 0L;
  if (b[8]:ubyte) {
    c[43]:int = 0;
    f_ykn(c + 224, (a[6])[4]:int, d_p444444444444044P44p44444444[23089]:int);
    d[0]:long = (g = c + 232)[0]:long;
    c[19]:long = c[28]:long;
    c[26]:int = 0;
    c[27]:int = c + 152;
    b = 
      {
        loop L_ca {
          6151988[0]:int = 0;
          d = 
            env_invoke_iii(13929, c + 152, d_p444444444444044P44p44444444[21337]:int);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_t;
          if (d) {
            if (eqz(c[164]:ubyte)) goto B_ea;
            d = a[4];
            b = (a[5])[5]:int;
            6151988[0]:int = 0;
            env_invoke_viiii(13930,
                             c + 224,
                             b,
                             c[43]:int,
                             d_p444444444444044P44p44444444[24483]:int);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_ba;
            c[24]:int = 0;
            i = c[28]:long;
            c[46]:int = 0;
            6151988[0]:int = 0;
            c[11]:long = 0L;
            c[22]:long = 0L;
            env_invoke_viii(13931, c + 192, c + 88, 0);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_aa;
            g[0]:long = (e = c + 200)[0]:long;
            c[28]:long = c[24]:long;
            6151988[0]:int = 0;
            f = env_invoke_iii(2189, a, 0);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_z;
            b = d_p444444444444044P44p44444444[16103]:int;
            if (eqz(b[29]:int)) {
              6151988[0]:int = 0;
              env_invoke_vi(252, b);
              b = 6151988[0]:int;
              6151988[0]:int = 0;
              if (b == 1) goto B_z;
            }
            c[20]:int = 0;
            b = d_p444444444444044P44p44444444[31921]:int;
            e[0]:int = 0;
            (c - -64)[0]:long = g[0]:long;
            c[49]:int = i >> 32L;
            c[48]:int = i;
            6151988[0]:int = 0;
            c[7]:long = c[28]:long;
            c[9]:long = c[24]:long;
            d = env_invoke_iiiiii(13932, d, c + 72, c + 56, f, b);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_y;
            6151988[0]:int = 0;
            b = 
              env_invoke_iii(2192, d, d_p444444444444044P44p44444444[30214]:int);
            e = 6151988[0]:int;
            6151988[0]:int = 0;
            if (e == 1) goto B_x;
            e = a[5];
            f = e[6]:int;
            b[18]:int = c[43]:int;
            b[17]:int = f;
            e = e[4]:int;
            6151988[0]:int = 0;
            f = env_invoke_iii(2331, c + 172, 0);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_w;
            6151988[0]:int = 0;
            e = 
              env_invoke_iiiii(1630, e, d_p444444444444044P44p44444444[37446]:int, f, 0);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_v;
            6151988[0]:int = 0;
            env_invoke_viii(2191, d, e, 0);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_v;
            f = d_p444444444444044P44p44444444[23418]:int;
            b = a[7];
            b[4]:int = b[4]:int + 1;
            e = b[3]:int;
            if (e < (h = b[2]:int)[3]) {
              b[3]:int = e + 1;
              h[e + 4]:int = d;
              goto B_ea;
            }
            e = ((f[4])[24]:int)[14]:int;
            6151988[0]:int = 0;
            env_invoke_viii(1153, b, d, e);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_u;
            label B_ea:
            c[43]:int = c[43]:int + 1;
            continue L_ca;
          }
        }
        d = 0;
        b = c[26]:int;
        goto B_r;
        label B_ba:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_aa:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_z:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_y:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_x:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_w:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_v:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_u:
        env_cxa_find_matching_catch_3(4889068);
        goto B_s;
        label B_t:
        env_cxa_find_matching_catch_3(4889068);
        label B_s:
      }
    if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_o;
    b = env_cxa_begin_catch(b)[0]:int;
    6151988[0]:int = 0;
    c[26]:int = b;
    env_invoke_v(58);
    g = 6151988[0]:int;
    6151988[0]:int = 0;
    d = 1;
    if (g == 1) goto B_p;
    label B_r:
    c[27]:int;
    d_p444444444444044P44p44444444[21336]:int;
    if (b) goto B_e;
    if (eqz(d)) goto B_i;
  }
  b = a[7];
  if (b[3]:int <= 0) goto B_m;
  UnityEngine_ComputeBuffer_Release(
    c + 224,
    b,
    d_p444444444444044P44p44444444[23422]:int);
  c[17]:long = c[29]:long;
  c[16]:long = c[28]:long;
  c[56]:int = 0;
  c[57]:int = c + 128;
  goto B_n;
  label B_p:
  b = env_cxa_find_matching_catch();
  env_getTempRet0();
  label B_o:
  6151988[0]:int = 0;
  env_invoke_ii(13933, c + 104);
  c = 6151988[0]:int;
  6151988[0]:int = 0;
  if (c == 1) goto B_f;
  goto B_b;
  label B_n:
  b = 
    {
      loop L_la {
        6151988[0]:int = 0;
        d = 
          env_invoke_iii(1155, c + 128, d_p444444444444044P44p44444444[21406]:int);
        b = 6151988[0]:int;
        6151988[0]:int = 0;
        if (b == 1) goto B_ja;
        if (d) {
          b = c[35]:int;
          d = d_p444444444444044P44p44444444[16103]:int;
          if (eqz(d[29]:int)) {
            6151988[0]:int = 0;
            env_invoke_vi(252, d);
            d = 6151988[0]:int;
            6151988[0]:int = 0;
            if (d == 1) goto B_ka;
          }
          6151988[0]:int = 0;
          env_invoke_vii(8339, b, 0);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_ka;
          continue L_la;
        }
      }
      d_p444444444444044P44p44444444[21405]:int;
      goto B_ha;
      label B_ka:
      env_cxa_find_matching_catch_3(4889068);
      goto B_ia;
      label B_ja:
      env_cxa_find_matching_catch_3(4889068);
      label B_ia:
    }
  if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_k;
  b = env_cxa_begin_catch(b)[0]:int;
  6151988[0]:int = 0;
  c[56]:int = b;
  env_invoke_v(58);
  d = 6151988[0]:int;
  6151988[0]:int = 0;
  if (d == 1) goto B_l;
  d_p444444444444044P44p44444444[21405]:int;
  if (b) goto B_d;
  label B_ha:
  b = a[7];
  d = b[3]:int;
  b[3]:int = 0;
  b[4]:int = b[4]:int + 1;
  if (d <= 0) goto B_m;
  f_kcud(b[2]:int, 0, d, 0);
  label B_m:
  c[37]:int = 0;
  f_ykn(c + 224, (a[6])[4]:int, d_p444444444444044P44p44444444[23089]:int);
  c[20]:long = (g = c + 232)[0]:long;
  c[19]:long = c[28]:long;
  c[30]:int = 0;
  c[31]:int = c + 152;
  goto B_j;
  label B_l:
  b = env_cxa_find_matching_catch();
  env_getTempRet0();
  label B_k:
  6151988[0]:int = 0;
  env_invoke_ii(13934, c + 224);
  c = 6151988[0]:int;
  6151988[0]:int = 0;
  if (c != 1) goto B_b;
  goto B_f;
  label B_j:
  b = 
    {
      loop L_za {
        6151988[0]:int = 0;
        d = 
          env_invoke_iii(13929, c + 152, d_p444444444444044P44p44444444[21337]:int);
        b = 6151988[0]:int;
        6151988[0]:int = 0;
        if (b == 1) goto B_qa;
        if (d) {
          d = a[4];
          b = (a[5])[5]:int;
          6151988[0]:int = 0;
          env_invoke_viiii(13930,
                           c + 224,
                           b,
                           c[37]:int,
                           d_p444444444444044P44p44444444[24483]:int);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_ya;
          c[12]:int = 0;
          i = c[28]:long;
          c[54]:int = 0;
          6151988[0]:int = 0;
          c[5]:long = 0L;
          c[26]:long = 0L;
          env_invoke_viii(13931, c + 224, c + 40, 0);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_xa;
          e = c + 112;
          e[0]:long = g[0]:long;
          c[13]:long = c[28]:long;
          6151988[0]:int = 0;
          f = env_invoke_iii(2189, a, 0);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_wa;
          b = d_p444444444444044P44p44444444[16103]:int;
          if (eqz(b[29]:int)) {
            6151988[0]:int = 0;
            env_invoke_vi(252, b);
            b = 6151988[0]:int;
            6151988[0]:int = 0;
            if (b == 1) goto B_wa;
          }
          c[8]:int = 0;
          b = d_p444444444444044P44p44444444[31921]:int;
          g[0]:int = 0;
          c[2]:long = e[0]:long;
          c[57]:int = i >> 32L;
          c[56]:int = i;
          6151988[0]:int = 0;
          c[1]:long = c[13]:long;
          c[3]:long = c[28]:long;
          d = env_invoke_iiiiii(13932, d, c + 24, c + 8, f, b);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_va;
          6151988[0]:int = 0;
          b = 
            env_invoke_iii(2192, d, d_p444444444444044P44p44444444[30214]:int);
          e = 6151988[0]:int;
          6151988[0]:int = 0;
          if (e == 1) goto B_ua;
          e = a[5];
          f = e[6]:int;
          b[18]:int = c[37]:int;
          b[17]:int = f;
          e = e[4]:int;
          6151988[0]:int = 0;
          f = env_invoke_iii(2331, c + 148, 0);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_ta;
          6151988[0]:int = 0;
          e = 
            env_invoke_iiiii(1630, e, d_p444444444444044P44p44444444[37446]:int, f, 0);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_sa;
          6151988[0]:int = 0;
          env_invoke_viii(2191, d, e, 0);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_sa;
          f = d_p444444444444044P44p44444444[23418]:int;
          b = a[7];
          b[4]:int = b[4]:int + 1;
          e = b[3]:int;
          if (e < (h = b[2]:int)[3]) {
            b[3]:int = e + 1;
            h[e + 4]:int = d;
            goto B_cb;
          }
          e = ((f[4])[24]:int)[14]:int;
          6151988[0]:int = 0;
          env_invoke_viii(1153, b, d, e);
          b = 6151988[0]:int;
          6151988[0]:int = 0;
          if (b == 1) goto B_ra;
          label B_cb:
          c[37]:int = c[37]:int + 1;
          continue L_za;
        }
      }
      a = c[30]:int;
      goto B_oa;
      label B_ya:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_xa:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_wa:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_va:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_ua:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_ta:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_sa:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_ra:
      env_cxa_find_matching_catch_3(4889068);
      goto B_pa;
      label B_qa:
      env_cxa_find_matching_catch_3(4889068);
      label B_pa:
    }
  if (env_getTempRet0() != env_llvm_eh_typeid_for(4889068)) goto B_g;
  a = env_cxa_begin_catch(b)[0]:int;
  6151988[0]:int = 0;
  c[30]:int = a;
  env_invoke_v(58);
  b = 6151988[0]:int;
  6151988[0]:int = 0;
  if (b == 1) goto B_h;
  label B_oa:
  c[31]:int;
  d_p444444444444044P44p44444444[21336]:int;
  if (a) goto B_c;
  label B_i:
  g_a = c + 240;
  return ;
  label B_h:
  b = env_cxa_find_matching_catch();
  env_getTempRet0();
  label B_g:
  6151988[0]:int = 0;
  env_invoke_ii(13935, c + 120);
  c = 6151988[0]:int;
  6151988[0]:int = 0;
  if (c != 1) goto B_b;
  label B_f:
  env_cxa_find_matching_catch_3(0);
  env_getTempRet0();
  f_sx();
  unreachable;
  label B_e:
  System_Net_CommandStream_ReceiveCommandResponseCallback(b);
  unreachable;
  label B_d:
  System_Net_CommandStream_ReceiveCommandResponseCallback(b);
  unreachable;
  label B_c:
  System_Net_CommandStream_ReceiveCommandResponseCallback(a);
  unreachable;
  label B_b:
  env_resumeException(b);
  unreachable;
}

function EnemyManager_StaticEventHandler_OnBuildNavMesh(a:int_ptr, b:int) { // func87087
  if (eqz(6703869[0]:ubyte)) {
    f_hpa(5648500);
    f_hpa(5607140);
    6703869[0]:byte = 1;
  }
  b = f_icke(d_p444444444444044P44p44444444[13077]:int);
  multiple_System_Collections_Generic_List_1_cctor(
    b,
    d_p444444444444044P44p44444444[23417]:int);
  a[7] = b;
  multiple_4_UnityEngine_Behaviour_set_enabled(a, 0);
}

function EnemyManager_ctor(a:int_ptr, b:int, c:int, d:int, e:int) { // func87088
  if (eqz(6703870[0]:ubyte)) {
    f_hpa(5647176);
    f_hpa(5606908);
    6703870[0]:byte = 1;
  }
  e = f_icke(d_p444444444444044P44p44444444[13019]:int);
  multiple_System_Collections_Generic_List_1_cctor(
    e,
    d_p444444444444044P44p44444444[23086]:int);
  a[4] = e;
  a[3] = c;
  a[2] = b;
  EnemyManagerData_ctor(a, d, a);
}

