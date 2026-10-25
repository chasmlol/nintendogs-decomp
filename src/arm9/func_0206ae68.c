#include "ctx.h"

extern s32 func_02068c40(void);
extern u32 data_02150e60;
extern u32 data_02150e5c;
extern u32 data_02150e58;

void func_0206ae68(void)
{
    s32 v;

    v = func_02068c40();
    data_02150e60 = v;
    if (v > 32) {
        goto high;
    }
    if (v >= 32) {
        goto b32;
    }
    if (v > 0) {
        goto low;
    }
    if (v != 0) {
        return;
    }
    return;
low:
    if (v == 16) {
        goto b16;
    }
    return;
high:
    if (v > 64) {
        goto high2;
    }
    if (v == 64) {
        goto b64;
    }
    return;
high2:
    if (v == 96) {
        goto b32;
    }
    return;
b16:
    data_02150e5c = 0x06880000;
    data_02150e58 = 0;
    return;
b64:
    data_02150e5c = 0x06894000;
    data_02150e58 = 16384;
    return;
b32:
    data_02150e5c = 0x06890000;
    data_02150e58 = 0;
    return;
}
