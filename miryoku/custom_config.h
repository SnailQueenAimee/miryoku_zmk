//Aimee's Layers

//nice_nano_v2
//corne_left,corne_right

//#define XXX &none
//
//#define MIRYOKU_LAYOUTMAPPING_CORNE( \
//     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
//     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
//     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
//     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
//) \
//&kp ESC  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RGUI \
//&kp BSPC  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RALT \
//&kp ENTER  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp ENTER \
//               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_BASE \
&kp Q,                 &kp W,                 &kp E,                 &kp R,                 &kp T,                     &kp Y,                 &kp U,                 &kp I,                 &kp O,                 &kp P,                  \
U_MT(LGUI, A),         U_MT(LALT, S),         U_MT(LCTRL, D),        U_MT(LSHFT, F),        &kp G,                     &kp H,                 U_MT(LSHFT, J),        U_MT(LCTRL, K),        U_MT(LALT, L),         U_MT(LGUI, SQT),        \
U_LT(U_BUTTON, Z),     U_MT(RALT, X),         &kp C,                 &kp V,                 &kp B,                     &kp N,                 &kp M,                 &kp COMMA,             U_MT(RALT, DOT),       U_LT(U_BUTTON, SLASH),  \
U_NP,                  U_NP,                  U_LT(U_MEDIA, ESC),    U_LT(U_NAV, SPACE),    U_LT(U_MOUSE, TAB),        U_LT(U_SYM, RET),      U_LT(U_NUM, BSPC),     U_LT(U_FUN, DEL),      U_NP,                  U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,                &kp W,                  &kp E,                 &kp R,                 &kp T,                     &kp Y,                 &kp U,                 &kp I,                 &kp O,                 &kp P,                  \
&kp A,                &kp S,                  &kp D,                 &kp F,                 &kp G,                     &kp H,                 &kp J,                 &kp K,                 &kp L,                 &kp SQT,                \
&kp Z,                &kp X,                  &kp C,                 &kp V,                 &kp B,                     &kp N,                 &kp M,                 &kp COMMA,             &kp DOT,               &kp SLASH,              \
U_NP,                 U_NP,                   &kp ESC,               &kp SPACE,             &kp TAB,                   &kp RET,               &kp BSPC,              &kp DEL,               U_NP,                  U_NP

#define MIRYOKU_LAYER_NAV \
&kp LC(Z),              &kp LC(X),             &kp LC(C),             &kp LC(V),             &kp LC(Y),                 &kp LC(F),             &kp RC(RS(TAB)),       &kp LA(LEFT),          &kp LA(RIGHT),         &kp LC(TAB),           \
&kp LGUI,              &kp LALT,              &kp LCTRL,             &kp LSHFT,             &kp LC(A),                 &u_caps_word,          &kp LEFT,              &kp DOWN,              &kp UP,                &kp RIGHT,              \
U_NA,                  &kp BSPC,              &kp ENTER,             &u_to_U_NAV,           U_NA,                      &kp INS,               &kp HOME,              &kp PG_DN,             &kp PG_UP,             &kp END,                \
U_NP,                  U_NP,                  U_NA,                  U_NA,                  U_NA,                      &kp RET,               &kp BSPC,              &kp DEL,               U_NP,                  U_NP

#define MIRYOKU_LAYER_MOUSE \
&kp RC(RS(TAB)),      &kp LA(LEFT),           &kp LA(RIGHT),         &kp LC(TAB),           U_NA,                      &kp LC(Y),             &kp LC(V),             &kp LC(C),             &kp LC(X,              &kp LC(Z),              \
&kp LGUI,             &kp LALT,               &kp LCTRL,             &kp LSHFT,             U_NA,                      &kp LC(A),             U_MS_L,                U_MS_D,                U_MS_U,                U_MS_R,                 \
U_NA,                 &kp BSPC,               &kp ENTER,             &u_to_U_MOUSE,         &tog (U_NUM),              &kp LC(LA(G)),         U_WH_L,                U_WH_D,                U_WH_U,                U_WH_R,                 \
U_NP,                 U_NP,                   U_NA,                  U_NA,                  U_NA,                      U_BTN2,                U_BTN1,                U_BTN3,                U_NP,                  U_NP

#define MIRYOKU_LAYER_MEDIA \
&bt BT_CLR,           &u_to_U_TAP,            &u_to_U_EXTRA,         &u_to_U_BASE,          U_NA,                      &bt BT_SEL 0,          &bt BT_SEL 1,          &bt BT_SEL 2,          &bt BT_SEL 3,          &bt BT_SEL 4,           \
&kp LGUI,             &kp LALT,               &kp LCTRL,             &kp LSHFT,             U_NA,                      U_EP_TOG,              &kp C_PREV,            &kp C_VOL_DN,          &kp C_VOL_UP,          &kp C_NEXT,             \
U_NA,                 &kp RALT,               &u_to_U_FUN,           &u_to_U_MEDIA,         U_NA,                      &u_out_tog,            U_NA,                  U_NA,                  U_NA,                  &kp LA(LG(K)),          \
U_NP,                 U_NP,                   U_NA,                  U_NA,                  U_NA,                      &kp C_STOP,            &kp C_PP,              &kp C_MUTE,            U_NP,                  U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,             &kp N7,                 &kp N8,                &kp N9,                &kp RBKT,                  U_NA,                  &u_to_U_BASE,          &u_to_U_EXTRA,         &u_to_U_TAP,           U_BOOT,                 \
&kp SEMI,             &kp N4,                 &kp N5,                &kp N6,                &kp EQUAL,                 U_NA,                  &kp LSHFT,             &kp LCTRL,             &kp LALT,              &kp LGUI,               \
&kp GRAVE,            &kp N1,                 &kp N2,                &kp N3,                &kp BSLH,                  &tog (U_BASE),         &u_to_U_NUM,           &u_to_U_NAV,           &kp RALT,              U_NA,                   \
U_NP,                 U_NP,                   &kp DOT,               &kp N0,                &kp MINUS,                 U_NA,                  U_NA,                  U_NA,                  U_NP,                  U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,             &kp AMPS,               &kp ASTRK,             &kp LPAR,              &kp RBRC,                  U_NA,                  &u_to_U_BASE,          &u_to_U_EXTRA,         &u_to_U_TAP,           U_BOOT,                 \
&kp COLON,            &kp DLLR,               &kp PRCNT,             &kp CARET,             &kp PLUS,                  U_NA,                  &kp LSHFT,             &kp LCTRL,             &kp LALT,              &kp LGUI,               \
&kp TILDE,            &kp EXCL,               &kp AT,                &kp HASH,              &kp PIPE,                  U_NA,                  &u_to_U_SYM,           &u_to_U_MOUSE,         &kp RALT,              U_NA,                   \
U_NP,                 U_NP,                   &kp LPAR,              &kp RPAR,              &kp UNDER,                 U_NA,                  U_NA,                  U_NA,                  U_NP,                  U_NP

#define MIRYOKU_LAYER_FUN \
&kp F12,              &kp F7,                 &kp F8,                &kp F9,                &kp PSCRN,                 U_NA,                  &u_to_U_BASE,          &u_to_U_EXTRA,         &u_to_U_TAP,           U_BOOT,                 \
&kp F11,              &kp F4,                 &kp F5,                &kp F6,                &kp SLCK,                  U_NA,                  &kp LSHFT,             &kp LCTRL,             &kp LALT,              &kp LGUI,               \
&kp F10,              &kp F1,                 &kp F2,                &kp F3,                &kp PAUSE_BREAK,           U_NA,                  &u_to_U_FUN,           &u_to_U_MEDIA,         &kp RALT,              U_NA,                   \
U_NP,                 U_NP,                   &kp K_APP,             &kp SPACE,             &kp TAB,                   U_NA,                  U_NA,                  U_NA,                  U_NP,                  U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,                U_CUT,                  U_CPY,                 U_PST,                 U_RDO,                     U_RDO,                 U_PST,                 U_CPY,                 U_CUT,                 U_UND,                  \
&kp LGUI,             &kp LALT,               &kp LCTRL,             &kp LSHFT,             U_NU,                      U_NU,                  &kp LSHFT,             &kp LCTRL,             &kp LALT,              &kp LGUI,               \
U_UND,                U_CUT,                  U_CPY,                 U_PST,                 U_RDO,                     U_RDO,                 U_PST,                 U_CPY,                 U_CUT,                 U_UND,                  \
U_NP,                 U_NP,                   U_BTN3,                U_BTN1,                U_BTN2,                    U_BTN2,                U_BTN1,                U_BTN3,                U_NP,                  U_NP
