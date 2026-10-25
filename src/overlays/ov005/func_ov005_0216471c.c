#include "ctx.h"

extern u32 data_ov005_02167f04;

void func_ov005_0216471c(u32 param_1)
{
    s16 i;
    u8 *base;
    u8 *g;
    s32 v;
    u8 *q;
    if (param_1 == 0) {
        return;
    }
    for (i = 0; i < 6; i++) {
        if (param_1 & (1u << i)) {
            g = *(u8 **)&data_ov005_02167f04;
            base = g + 96;
            v = *(s32 *)(base + i * 4);
            q = base + i * 4;
            v = v + 205;
            *(s32 *)(base + i * 4) = v;
            if (*(s32 *)(base + i * 4) > 4096) {
                *(s32 *)q = 4096;
                g = *(u8 **)&data_ov005_02167f04;
                ((s16 *)(g + 48))[i] = ((s16 *)(g + 48))[i] + 4;
            } else {
                g = *(u8 **)&data_ov005_02167f04;
                ((s16 *)(g + 48))[i] = ((s16 *)(g + 48))[i] + 20;
            }
            g = *(u8 **)&data_ov005_02167f04;
            if (((s16 *)(g + 48))[i] > ((s16 *)(g + 60))[i]) {
                ((s16 *)(g + 48))[i] = ((s16 *)(g + 60))[i];
            }
        }
    }
}
