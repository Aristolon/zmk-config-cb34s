/** 
 * This file is used for custom keycodes to get EURKEY working on US Int language in OS
**/

// Aliases

#define CH_SECT KC_GRV  // §
#define CH_1    KC_1    // 1
#define CH_2    KC_2    // 2
#define CH_3    KC_3    // 3
#define CH_4    KC_4    // 4
#define CH_5    KC_5    // 5
#define CH_6    KC_6    // 6
#define CH_7    KC_7    // 7
#define CH_8    KC_8    // 8
#define CH_9    KC_9    // 9
#define CH_0    KC_0    // 0
#define CH_QUOT KC_MINS // '
#define CH_CIRC KC_EQL  // ^ (dead)
#define CH_Q    KC_Q    // Q
#define CH_W    KC_W    // W
#define CH_E    KC_E    // E
#define CH_R    KC_R    // R
#define CH_T    KC_T    // T
#define CH_U    KC_U    // U
#define CH_I    KC_I    // I
#define CH_O    KC_O    // O
#define CH_P    KC_P    // P
#define CH_DIAE KC_RBRC // ¨ (dead)
#define CH_A    KC_A    // A
#define CH_S    KC_S    // S
#define CH_D    KC_D    // D
#define CH_F    KC_F    // F
#define CH_G    KC_G    // G
#define CH_H    KC_H    // H
#define CH_J    KC_J    // J
#define CH_K    KC_K    // K
#define CH_L    KC_L    // L
#define CH_DLR  KC_NUHS // $
#define CH_LABK KC_NUBS // <
#define CH_X    KC_X    // X
#define CH_C    KC_C    // C
#define CH_V    KC_V    // V
#define CH_B    KC_B    // B
#define CH_N    KC_N    // N
#define CH_M    KC_M    // M
#define CH_COMM KC_COMM // ,
#define CH_DOT  KC_DOT  // .
#define CH_MINS KC_SLSH // -
#define CH_DEG  S(CH_SECT) // °
#define CH_PLUS S(CH_1)    // +
#define CH_DQUO S(CH_2)    // "
#define CH_ASTR S(CH_3)    // *
#define CH_CCED S(CH_4)    // ç
#define CH_PERC S(CH_5)    // %
#define CH_AMPR S(CH_6)    // &
#define CH_SLSH S(CH_7)    // /
#define CH_LPRN S(CH_8)    // (
#define CH_RPRN S(CH_9)    // )
#define CH_EQL  S(CH_0)    // =
#define CH_QUES S(CH_QUOT) // ?
#define CH_GRV  S(CH_CIRC) // ` (dead)
#define CH_EXLM S(CH_DIAE) // !
#define CH_PND  S(CH_DLR)  // £
#define CH_RABK S(CH_LABK) // >
#define CH_SCLN S(CH_COMM) // ;
#define CH_COLN S(CH_DOT)  // :
#define CH_UNDS S(CH_MINS) // _
#define CH_BRKP ALGR(CH_1)    // ¦
#define CH_AT   ALGR(CH_2)    // @
#define CH_HASH ALGR(CH_3)    // #
#define CH_NOT  ALGR(CH_6)    // ¬
#define CH_PIPE ALGR(CH_7)    // |
#define CH_CENT ALGR(CH_8)    // ¢
#define CH_ACUT ALGR(CH_QUOT) // ´ (dead)
#define CH_TILD ALGR(CH_CIRC) // ~ (dead)
#define CH_EURO ALGR(CH_E)    // €
#define CH_LBRC ALGR(CH_UDIA) // [
#define CH_RBRC ALGR(CH_DIAE) // ]
#define CH_LCBR ALGR(CH_ADIA) // {
#define CH_RCBR ALGR(CH_DLR)  // }
#define CH_BSLS ALGR(CH_LABK) // (backslash)


// EURkey
#define CH_Z    KC_Y    // Y
#define CH_Y    KC_Z    // Z
#define CH_UDIA ALGR(CH_U) // ü
#define CH_ODIA ALGR(CH_O) // ö
#define CH_ADIA ALGR(CH_A) // ä
#define CH_EGRV ALGR(KC_F) // è
#define CH_EACU ALGR(KC_G) // é
#define CH_AGRV ALGR(KC_Z) // à
#define CH_AACU ALGR(KC_X) // á