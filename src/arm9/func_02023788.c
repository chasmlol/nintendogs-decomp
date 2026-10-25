#include "ctx.h"

extern u32 data_0213a8d4[];
extern u8 data_021369a8[];

u32 func_02023788(u8 *param_1, s32 param_2)
{
    u8 *e;
    u32 h1;
    s32 h2;
    u32 iv;
    u8 *dd;
    if (param_2 < 0) {
        goto zero_e;
    }
    if (param_2 < 20) {
        goto comp_e;
    }
zero_e:
    e = 0;
    goto have_e;
comp_e:
    e = *(u8 **)(param_1 + 0x9e8) + 144 + (s16)param_2 * 60;
have_e:
    if (e == 0) {
        return 0;
    }
    h1 = *(u16 *)e;
    if (h1 == 0) {
        return 0;
    }
    h2 = *(u16 *)(e + 2);
    if (h2 == 0) {
        return 0;
    }
    if (h1 >= 79 && h1 < 99) {
        iv = data_0213a8d4[79];
    } else {
        iv = data_0213a8d4[h1];
    }
    dd = data_021369a8 + (*(u8 *)(iv + 2) - 1) * 5;
    if (h2 < dd[*(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x13) - 1]) {
        return 1;
    }
    return 2;
}
