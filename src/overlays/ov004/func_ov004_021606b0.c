#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02159458;
extern u8 *data_ov004_02170320;
extern u8 data_ov004_0216fd1c[];
extern s32 func_01ffdb08(s32 a);
extern u8 *func_020280e4(s32 a, s32 b);

s32 func_ov004_021606b0(s32 param_1, s32 param_2)
{
    s32 iVar4;
    s32 iVar10;
    s32 i;
    s32 j;
    u8 *e;
    s32 d1;
    s32 d2;
    s32 iVar1;
    u8 uVar8;
    u8 *tab;
    u8 *t;

    iVar4 = func_01ffdb08((s16)*(s16 *)((u8 *)data_02159458 + 2));
    iVar10 = 0;
    i = 0;
    j = 0;
    do {
        t = *(u8 **)(data_ov004_02170320 + 0x36c4) + i;
        t = t + 0x2000;
        *(vu8 *)(t + 0x2c5) = j;
        i = i + 1;
    } while (i < 64);
    j = 0;
    do {
        e = func_020280e4(iVar4, (s16)j);
        tab = data_ov004_0216fd1c;
        uVar8 = tab[e[3]];
        if (uVar8 != 0) {
            d1 = e[1] - param_1;
            if (d1 <= 0) {
                d1 = -d1;
            }
            iVar1 = (s32)uVar8 >> 1;
            if (d1 <= iVar1) {
                d2 = e[2] - param_2;
                if (d2 <= 0) {
                    d2 = -d2;
                }
                if (d2 <= iVar1) {
                    iVar10 = iVar10 + 1;
                    t = *(u8 **)(data_ov004_02170320 + 0x36c4) + j;
                    t = t + 0x2000;
                    *(vu8 *)(t + 0x2c5) = 1;
                }
            }
        }
        j = j + 1;
    } while (j < 64);
    return iVar10;
}
