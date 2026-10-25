#include "ctx.h"

extern u8 *data_02152260;

s32 func_020718b0(u32 param_1)
{
    u8 *q = *(u8 **)(data_02152260 + 0x88);
    s32 iVar1 = *(s32 *)(q + 0x18);
    u32 *puVar3;
    u32 *pe;
    u32 v;
    s32 base;
    if (iVar1 == 0) {
        puVar3 = 0;
    } else {
        puVar3 = (u32 *)(q + iVar1);
    }
    if (puVar3 == 0) {
        return 0;
    }
    if ((s32)param_1 < 0) {
        return 0;
    }
    if (param_1 >= puVar3[0]) {
        return 0;
    }
    pe = puVar3 + param_1;
    v = pe[1];
    base = *(s32 *)(data_02152260 + 0x88);
    if (v == 0) {
        return 0;
    }
    return base + v;
}
