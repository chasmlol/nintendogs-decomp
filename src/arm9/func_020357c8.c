#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0215942c;
extern void func_0202fb38(u8 *p);
extern void func_020557dc(u8 *p, u32 a);
extern void func_0204eb80(u8 *p);

u32 func_020357c8(u8 *param_1, s32 param_2)
{
    s32 v;
    s32 t;

    if (param_2 == 0) {
        goto zero;
    }
    v = *(s16 *)(param_1 + 0x13e);
    if (v >= 45) {
        return 0;
    }
    if (v < 13) {
        goto mid;
    }
    func_0202fb38(param_1);
    return 1;
mid:
    if (v >= 10) {
        return 0;
    }
    if (v < 3) {
        goto low;
    }
    *(u32 *)(param_1 + 0x488) = 0;
    *(u16 *)(param_1 + 0xea) = 0x3f0;
    return 1;
low:
    if (v < 0) {
        goto fail;
    }
    t = *(volatile s16 *)(param_1 + 0x13e);
    if (t < 0 || t >= 3) {
        t = 0;
    } else {
        t = *(s32 *)(*(u8 **)&data_0214f464 + t * 4 + 0x54);
    }
    if (t == 0 || (*(u8 *)(t + 0xb5) & 2) != 0) {
        t = 0;
    }
    if (t != 0) {
        if (*(u16 *)(*(u8 **)&data_0215942c) == 12) {
            func_020557dc(param_1, t);
            return 1;
        }
        func_0204eb80(param_1);
        return 1;
    }
    goto fail;
zero:
    v = *(s16 *)(param_1 + 0x13e);
    if (v < 3) {
        goto fail;
    }
    if (v >= 10) {
        goto fail;
    }
    *(u32 *)(param_1 + 0x488) = 0;
    *(u16 *)(param_1 + 0xea) = 0x3f0;
    return 1;
fail:
    return 0;
}
