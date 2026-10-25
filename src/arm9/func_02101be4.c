#include "ctx.h"

extern u8 *data_0215be4c;
extern void func_0206c7bc(u32 a, u32 b, u32 c);

void func_02101be4(s32 param_1, u32 param_2)
{
    u8 *r5;
    s32 r4;
    u32 lr;
    u16 acc;
    s32 k;
    vu16 t;

    r4 = param_1 * 440;
    lr = param_2 & 15;
    acc = 0;
    r5 = data_0215be4c + 4 + r4;
    if (*(u32 *)(r5 + 8) != 0 && *(u32 *)(r5 + 4) != 0 && *(u32 *)(r5 + 0x10) != 0) {
        for (k = 0; k < 8; k++) {
            acc = (u16)(acc | (lr << (k * 4)));
        }
        t = acc;
        func_0206c7bc(t, *(u32 *)(r5 + 0x10), *(u32 *)(r5 + 0x14));
    }
    *(u32 *)(data_0215be4c + r4 + 0x1b0) = 1;
}
