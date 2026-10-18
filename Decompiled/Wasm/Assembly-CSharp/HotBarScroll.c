// Recovered from webgl wasm (IL2CPP -> wasm) via Cpp2IL name recovery + wabt wasm-decompile
// Type: HotBarScroll  (Assembly-CSharp)

function HotBarScroll_Awake(a:int, b:int) { // func86326
  var this:int;
  if (eqz(6703277[0]:ubyte)) {
    f_hpa(5601848);
    f_hpa(5676640);
    f_hpa(5676644);
    6703277[0]:byte = 1;
  }
  var methodInfo:int = 
    f_icke(d_p444444444444044P44p44444444[11754]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[30452]:int,
    0);
  StaticEventHandler_add_OnItemChanged(methodInfo, this);
  methodInfo = f_icke(d_p444444444444044P44p44444444[11754]:int);
  UnityEngine_UIElements_VisualElement_get_layout(
    methodInfo,
    this,
    d_p444444444444044P44p44444444[30453]:int,
    0);
  StaticEventHandler_add_OnMoveItemToHotBar(methodInfo, this);
}

function HotBarScroll_OnDestroy(a:int_ptr, b:int, c:int) { // func86329
  if (eqz(6703278[0]:ubyte)) {
    f_hpa(5601772);
    f_hpa(5676636);
    f_hpa(5649448);
    f_hpa(5649452);
    f_hpa(5660024);
    6703278[0]:byte = 1;
  }
  if ((b & -2) != 2) goto B_d;
  f_sbnb(f_canb(a, 0), 1, 0);
  a[7] = (a[4])[32]:int;
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  if (
    eqz(
      InventoryDescription_ctor(
        ((((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[4]:int)[20]:int,
        a)[3]:int)) goto B_d;
  a[6] = 0;
  f_kkx(
    a[4],
    (f_dqi(
       InventoryDescription_ctor(
         ((((if ((b = 
                    ((if ((b = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                          1) {
                        b
                      } else {
                        System_Threading_Monitor_Enter_1(b)
                      })[24]:int)[2]:int)[189]:ubyte &
                 1) {
               b
             } else {
               System_Threading_Monitor_Enter_1(b)
             })[23]:int)[0]:int)[4]:int)[20]:int,
         a),
       a[6],
       d_p444444444444044P44p44444444[23655]:int)[2]:int)[5]:int,
    0);
  b = a[5];
  call_indirect(
    b,
    UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(
      f_dqi(
        InventoryDescription_ctor(
          ((((if ((c = 
                     ((if ((c = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                           1) {
                         c
                       } else {
                         System_Threading_Monitor_Enter_1(c)
                       })[24]:int)[2]:int)[189]:ubyte &
                  1) {
                c
              } else {
                System_Threading_Monitor_Enter_1(c)
              })[23]:int)[0]:int)[4]:int)[20]:int,
          a),
        a[6],
        d_p444444444444044P44p44444444[23655]:int) +
      12,
      0),
    (c = b[0]:int)[181]:int,
    c[180]:int);
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  var d:int_ptr = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int;
  b = d[8];
  c = f_icke(d_p444444444444044P44p44444444[11735]:int);
  f_eujc(c, a, d_p444444444444044P44p44444444[30451]:int, 0);
  a = f_kyud(b, c, 0);
  if (eqz(a)) {
    d[8] = 0;
    return ;
  }
  b = f_upa(a, c = d_p444444444444044P44p44444444[11735]:int);
  if (eqz(b)) goto B_c;
  d[8] = b;
  if (
    eqz(f_upa(a, b = d_p444444444444044P44p44444444[11735]:int))) goto B_b;
  label B_d:
  return ;
  label B_c:
  f_ypa(a, c);
  unreachable;
  label B_b:
  f_ypa(a, b);
  unreachable;
}

function HotBarScroll_OnGameStateChange_HotBar(a:int, b:int, c:int) { // func86331
  var this:int_ptr;
  var gameState:int_ptr;
  if (eqz(6703279[0]:ubyte)) {
    f_hpa(5649448);
    f_hpa(5649452);
    f_hpa(5660024);
    f_hpa(5704252);
    6703279[0]:byte = 1;
  }
  var methodInfo:int = 
    (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  if (eqz(methodInfo[189]:ubyte & 1)) {
    methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
  }
  if (eqz(InventoryDescription_ctor(
            (((methodInfo[23]:int)[0]:int)[4]:int)[20]:int,
            methodInfo)[3]:int)) goto B_d;
  methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  if (eqz(methodInfo[189]:ubyte & 1)) {
    methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
  }
  if (
    eqz(f_dqi(InventoryDescription_ctor(
                (((methodInfo[23]:int)[0]:int)[4]:int)[20]:int,
                methodInfo),
              this[6],
              d_p444444444444044P44p44444444[23655]:int))) goto B_d;
  var d:int = (gameState[2])[5]:int;
  methodInfo = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  if (eqz(methodInfo[189]:ubyte & 1)) {
    methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
  }
  if (d !=
      f_dqi(InventoryDescription_ctor(
              (((methodInfo[23]:int)[0]:int)[4]:int)[20]:int,
              methodInfo),
            this[6],
            d_p444444444444044P44p44444444[23655]:int)[5]:int) goto B_d;
  f_kkx(this[4], ((gameState[2])[2]:int)[5]:int, 0);
  methodInfo = this[5];
  call_indirect(methodInfo,
                UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(
                  gameState[2] + 12,
                  0),
                (methodInfo = methodInfo[0]:int)[181]:int,
                methodInfo[180]:int);
  if ((gameState[2])[3]:int) goto B_d;
  f_kkx(this[4], this[7], 0);
  methodInfo = this[5];
  call_indirect(methodInfo,
                d_p444444444444044P44p44444444[37355]:int,
                (methodInfo = methodInfo[0]:int)[181]:int,
                methodInfo[180]:int);
  label B_d:
}

function HotBarScroll_StaticEventHandler_OnItemChanged(a:int, b:int, c:int) { // func86332
  var this:int_ptr;
  var onInventoryItemChangedEventArgs:int_ptr;
  if (eqz(6703280[0]:ubyte)) {
    f_hpa(5649448);
    f_hpa(5660024);
    6703280[0]:byte = 1;
  }
  var methodInfo:int = 
    (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  methodInfo = ((if (methodInfo[189]:ubyte & 1) {
                   methodInfo
                 } else {
                   System_Threading_Monitor_Enter_1(methodInfo)
                 })[24]:int)[2]:int;
  if (eqz(methodInfo[189]:ubyte & 1)) {
    methodInfo = System_Threading_Monitor_Enter_1(methodInfo)
  }
  if (InventoryDescription_ctor(
        (((methodInfo[23]:int)[0]:int)[4]:int)[20]:int,
        methodInfo)[3]:int ==
      1) {
    f_kkx(this[4], ((onInventoryItemChangedEventArgs[2])[2]:int)[5]:int, 0);
    methodInfo = this[5];
    call_indirect(methodInfo,
                  UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(
                    onInventoryItemChangedEventArgs[2] + 12,
                    0),
                  (methodInfo = methodInfo[0]:int)[181]:int,
                  methodInfo[180]:int);
  }
}

function HotBarScroll_Start(a:int, b:int) { // func86334
  var this:int;
  var methodInfo:float_ptr = g_a - 16;
  g_a = methodInfo;
  if (eqz(6703281[0]:ubyte)) {
    f_hpa(5645172);
    6703281[0]:byte = 1;
  }
  if (eqz(6696681[0]:ubyte)) {
    f_hpa(5618744);
    6696681[0]:byte = 1;
  }
  var d:int_ptr = 
    ((d_p444444444444044P44p44444444[15978]:int)[23]:int)[0]:int;
  if (eqz(d)) goto B_c;
  f_xmvb(methodInfo + 8, d[73], d_p444444444444044P44p44444444[22585]:int);
  var c:float = methodInfo[3];
  if (c == 0.0f) goto B_c;
  HotBarScroll_Update(this,
                      {
                        if (abs(c) < 2147483648.0f) {
                          i32_trunc_f32_s(c);
                          goto B_d;
                        }
                        -2147483648;
                        label B_d:
                      },
                      methodInfo);
  label B_c:
  g_a = methodInfo + 16;
}

function HotBarScroll_Update(a:int_ptr, b:int, c:int) { // func86335
  if (eqz(6703282[0]:ubyte)) {
    f_hpa(5649448);
    f_hpa(5649452);
    f_hpa(5660024);
    6703282[0]:byte = 1;
  }
  c = a[6];
  if (b < 0) {
    a[6] = (b = c - 1);
    if (b < 0) {
      a[6] =
        InventoryDescription_ctor(
          ((((if ((b = 
                     ((if ((b = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                           1) {
                         b
                       } else {
                         System_Threading_Monitor_Enter_1(b)
                       })[24]:int)[2]:int)[189]:ubyte &
                  1) {
                b
              } else {
                System_Threading_Monitor_Enter_1(b)
              })[23]:int)[0]:int)[4]:int)[20]:int,
          a)[3]:int -
        1
    }
    b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
    b = 
      ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
    if (
      eqz(
        InventoryDescription_ctor(
          ((((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[4]:int)[20]:int,
          a)[3]:int)) goto B_b;
    f_kkx(
      a[4],
      (f_dqi(
         InventoryDescription_ctor(
           ((((if ((b = 
                      ((if ((b = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                            1) {
                          b
                        } else {
                          System_Threading_Monitor_Enter_1(b)
                        })[24]:int)[2]:int)[189]:ubyte &
                   1) {
                 b
               } else {
                 System_Threading_Monitor_Enter_1(b)
               })[23]:int)[0]:int)[4]:int)[20]:int,
           a),
         a[6],
         d_p444444444444044P44p44444444[23655]:int)[2]:int)[5]:int,
      0);
    b = a[5];
    c = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
    c = 
      ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
    if (eqz(c[189]:ubyte & 1)) goto B_d;
    goto B_c;
  }
  a[6] = (c = c + 1);
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  if (InventoryDescription_ctor(
        ((((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[4]:int)[20]:int,
        a)[3]:int -
      1 <
      c) {
    a[6] = 0
  }
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  if (
    eqz(
      InventoryDescription_ctor(
        ((((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[4]:int)[20]:int,
        a)[3]:int)) goto B_b;
  f_kkx(
    a[4],
    (f_dqi(
       InventoryDescription_ctor(
         ((((if ((b = 
                    ((if ((b = (d_p444444444444044P44p44444444[26298]:int)[4]:int)[189]:ubyte &
                          1) {
                        b
                      } else {
                        System_Threading_Monitor_Enter_1(b)
                      })[24]:int)[2]:int)[189]:ubyte &
                 1) {
               b
             } else {
               System_Threading_Monitor_Enter_1(b)
             })[23]:int)[0]:int)[4]:int)[20]:int,
         a),
       a[6],
       d_p444444444444044P44p44444444[23655]:int)[2]:int)[5]:int,
    0);
  b = a[5];
  c = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  c = 
    ((if (c[189]:ubyte & 1) { c } else { System_Threading_Monitor_Enter_1(c) })[24]:int)[2]:int;
  if (c[189]:ubyte & 1) goto B_c;
  label B_d:
  c = System_Threading_Monitor_Enter_1(c);
  label B_c:
  call_indirect(
    b,
    UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData(
      f_dqi(
        InventoryDescription_ctor((((c[23]:int)[0]:int)[4]:int)[20]:int, a),
        a[6],
        d_p444444444444044P44p44444444[23655]:int) +
      12,
      0),
    (c = b[0]:int)[181]:int,
    c[180]:int);
  b = (d_p444444444444044P44p44444444[26298]:int)[4]:int;
  b = 
    ((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[24]:int)[2]:int;
  c = 
    f_dqi(
      InventoryDescription_ctor(
        ((((if (b[189]:ubyte & 1) { b } else { System_Threading_Monitor_Enter_1(b) })[23]:int)[0]:int)[4]:int)[20]:int,
        a),
      a[6],
      d_p444444444444044P44p44444444[23655]:int);
  if (eqz(6703576[0]:ubyte)) {
    f_hpa(5619360);
    f_hpa(5621908);
    6703576[0]:byte = 1;
  }
  a = ((d_p444444444444044P44p44444444[16769]:int)[23]:int)[16]:int;
  if (eqz(a)) goto B_b;
  b = f_icke(d_p444444444444044P44p44444444[16132]:int);
  ItemConsumer_UsePotion(b, 0);
  b[2]:int = c;
  call_indirect(a[8], b, a[5], a[3]);
  label B_b:
}

