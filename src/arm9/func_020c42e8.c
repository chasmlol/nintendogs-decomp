#include "ctx.h"

extern s32 data_021429b4;
extern s32 data_0214298c;
extern s32 data_021429a8;
extern s32 data_021429ac;
extern s32 data_02142998;
extern s32 data_02142994;
extern s32 data_021429b0;
extern s32 data_02142990;
extern s32 data_02142a30;
extern s32 data_021429a4;
extern s32 data_0214299c;
extern s32 data_021429f8;

void func_020c42e8(u8 *param_1, u8 *param_2, u8 *param_3, s32 param_4)
{
    s32 a = *(s32 *)(param_2 + 8);
    u8 *iv3 = *(u8 **)(param_1 + 0x214);
    s32 r;
    s32 t;
    if (a <= 0) {
        a = -a;
    }
    if (param_4 <= 0) {
        param_4 = -param_4;
    }
    if (a < data_021429b4) {
        r = 0;
    } else if (param_4 > data_0214298c) {
        r = 12;
    } else {
        t = *(s32 *)(param_3 + 4);
        if (t < data_021429a8) {
            r = 11;
        } else if (t < data_021429ac) {
            if (a < data_02142998) {
                r = 10;
            } else if (a < data_02142994) {
                r = 9;
            } else {
                r = 8;
            }
        } else if (t < data_021429b0) {
            if (a < data_02142990) {
                r = 7;
            } else if (a < data_02142a30) {
                r = 6;
            } else if (t > data_021429a4) {
                r = 4;
            } else {
                r = 5;
            }
        } else if (a < data_0214299c) {
            r = 1;
        } else if (a < data_021429f8) {
            r = 2;
        } else {
            r = 3;
        }
    }
    switch (r) {
    case 0: *(s32 *)(iv3 + 0x10) = 0; return;
    case 1: *(s32 *)(iv3 + 0x10) = 3; return;
    case 2: *(s32 *)(iv3 + 0x10) = 5; return;
    case 3: *(s32 *)(iv3 + 0x10) = 6; return;
    case 4: *(s32 *)(iv3 + 0x10) = 5; return;
    case 5: *(s32 *)(iv3 + 0x10) = 7; return;
    case 6: *(s32 *)(iv3 + 0x10) = 4; return;
    case 7: *(s32 *)(iv3 + 0x10) = 2; return;
    case 8: *(s32 *)(iv3 + 0x10) = 8; return;
    case 9: *(s32 *)(iv3 + 0x10) = 9; return;
    case 10: *(s32 *)(iv3 + 0x10) = 2; return;
    case 11: *(s32 *)(iv3 + 0x10) = 1; return;
    case 12: *(s32 *)(iv3 + 0x10) = 2; return;
    default: return;
    }
}
