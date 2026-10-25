#include "ctx.h"

extern u32 data_0215aea4[];
extern u32 data_0215ae98[];

void func_020ddf0c(s32 param_1, u32 param_2)
{
    u32 cnt;
    u32 bit;
    u32 *pp;
    u32 *base;
    u32 zero;
    u32 one;

    cnt = 0;
    bit = 1;
    base = (u32 *)data_0215aea4[param_1];
    pp = (u32 *)((u8 *)base + 0x94);
    if ((param_2 ^ data_0215ae98[param_1]) == 0) {
        return;
    }
    zero = cnt;
    one = bit;
    do {
        if (bit & (param_2 ^ ((vu32 *)data_0215ae98)[param_1])) {
            if (param_2 & bit) {
                if (pp[1] == 1) {
                    pp[0] = one;
                }
            } else {
                pp[0] = zero;
            }
        }
        cnt = cnt + 1;
        bit = bit << 1;
        pp = pp + 6;
    } while (cnt < 20);
    data_0215ae98[param_1] = param_2;
}
