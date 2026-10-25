#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;
extern s32 data_ov004_0217000c[];
extern u8 *data_02159424;
extern void func_0210b780(s32 a, s32 b, u16 *c, u8 *d, s32 e);

typedef struct { s32 w[17]; } T17;


void func_ov004_0215ce88(void)
{
    s32 iVar4;
    s32 i;
    s16 sv;
    u8 cVar1;
    T17 loc;

    iVar4 = (300 - (*(s32 *)(data_ov004_02170320 + 0x24) - *(s32 *)(*(u8 **)(data_ov004_02170320 + 0x36c4) + 8))) * 0x80;
    sv = (s16)(iVar4 / 300);
    *(s16 *)(data_ov004_02170320 + 0x3564) = sv;
    *(s16 *)(data_ov004_02170320 + 0x3574) = sv;
    *(s16 *)(data_ov004_02170320 + 0x3584) = sv;
    *(s16 *)(data_ov004_02170320 + 0x3594) = sv;
    iVar4 = (300 - *(s32 *)(data_ov004_02170320 + 0x24)) * 0x80;
    sv = (s16)(iVar4 / 300);
    *(s16 *)(data_ov004_02170320 + 0x3524) = sv;
    *(s16 *)(data_ov004_02170320 + 0x3534) = sv;
    *(s16 *)(data_ov004_02170320 + 0x3544) = sv;
    *(s16 *)(data_ov004_02170320 + 0x3554) = sv;
    loc = *(T17 *)data_ov004_0217000c;
    i = 0;
    do {
        if ((u8)(s8)(*(s8 *)data_ov004_02170320 - 2) <= 2) {
            *(s32 *)(data_ov004_02170320 + 0x3000 + loc.w[i] * 16 + 0x41c) = 0;
        } else {
            *(s32 *)(data_ov004_02170320 + 0x3000 + loc.w[i] * 16 + 0x41c) = 1;
        }
        i = i + 1;
    } while (i < 17);
    if (*(u8 *)data_ov004_02170320 <= 1) {
        if (*(u8 *)(data_ov004_02170320 + 0x3000 + 0x3b8) != 0) {
            *(u8 *)(data_ov004_02170320 + 0x3000 + 0x3b8) = (u8)(*(u8 *)(data_ov004_02170320 + 0x3000 + 0x3b8) - 1);
        }
        if (*(u8 *)(data_ov004_02170320 + 0x33b8) < 10) {
            if (*(s32 *)(data_ov004_02170320 + 0xc) != 0) {
                *(s32 *)(data_ov004_02170320 + 0x35ec) = 0;
                *(s32 *)(data_ov004_02170320 + 0x35fc) = 1;
            } else {
                *(s32 *)(data_ov004_02170320 + 0x35ec) = 1;
                *(s32 *)(data_ov004_02170320 + 0x35fc) = 0;
            }
            *(s32 *)(data_ov004_02170320 + 0x360c) = 0;
        } else {
            *(s32 *)(data_ov004_02170320 + 0x360c) = 1;
            *(s32 *)(data_ov004_02170320 + 0x35ec) = 0;
            *(s32 *)(data_ov004_02170320 + 0x35fc) = 0;
        }
        {
            u8 v9 = data_ov004_02170320[0x3000 + 0x3b9];
            u8 *b9 = data_ov004_02170320 + 0x3000;
            if (v9 != 0) {
                v9 = (u8)(v9 - 1);
                b9[0x3b9] = v9;
            }
        }
        if (*(u8 *)(data_ov004_02170320 + 0x33b9) < 10) {
            if (*(s32 *)(data_ov004_02170320 + 0xc) != 0) {
                *(s32 *)(data_ov004_02170320 + 0x35bc) = 1;
                *(s32 *)(data_ov004_02170320 + 0x35cc) = 0;
            } else {
                *(s32 *)(data_ov004_02170320 + 0x35bc) = 0;
                *(s32 *)(data_ov004_02170320 + 0x35cc) = 1;
            }
            *(s32 *)(data_ov004_02170320 + 0x35dc) = 0;
        } else {
            *(s32 *)(data_ov004_02170320 + 0x35dc) = 1;
            *(s32 *)(data_ov004_02170320 + 0x35bc) = 0;
            *(s32 *)(data_ov004_02170320 + 0x35cc) = 0;
        }
    }
    func_0210b780(*(s32 *)(data_ov004_02170320 + 0x33d8), *(s32 *)(data_ov004_02170320 + 0x33d4),
                  *(u16 **)(data_02159424 + 0x10), data_ov004_02170320 + 0x341c, 0);
}
