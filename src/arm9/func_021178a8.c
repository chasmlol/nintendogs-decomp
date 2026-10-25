#include "ctx.h"

extern void func_021128a8(s32 a, u32 b, u32 c);
extern void func_02112978(s32 a, u32 b, u32 c, u32 d);

u32 func_021178a8(s32 *param_1)
{
    u32 r;
    s32 st;

    r = 0;
    st = param_1[7];
    if (st == 5) {
        goto done;
    }
    if (st == 1) {
        goto s1;
    }
    if (st == 2) {
        goto s2;
    }
    if (st == 3) {
        param_1[7] = 0;
    }
    goto done;
s1:
    *(s16 *)(param_1 + 8) = (s16)(*(s16 *)(param_1 + 8) - 1);
    if (*(s16 *)(param_1 + 8) >= 0) {
        goto done;
    }
    param_1[7] = 2;
    *(s16 *)(param_1 + 8) = *(s16 *)((u8 *)param_1 + 0x1a);
    if (*(u16 *)(param_1 + 1) != 0xffff) {
        if (param_1[2] != 0) {
            func_021128a8(param_1[0], *(u16 *)(param_1 + 1), *(u16 *)(param_1 + 3));
        }
        if (param_1[4] != 0) {
            func_02112978(param_1[0], *(u16 *)(param_1 + 1), 0, 0);
        }
    }
    if (param_1[0xb] != 0) {
        ((void (*)(s32 *))param_1[0xb])(param_1);
    }
    goto done;
s2:
    *(s16 *)(param_1 + 8) = (s16)(*(s16 *)(param_1 + 8) - 1);
    if (*(s16 *)(param_1 + 8) >= 0) {
        goto done;
    }
    param_1[7] = 3;
    r = 1;
    if (param_1[0xc] != 0) {
        ((void (*)(s32 *))param_1[0xc])(param_1);
    }
done:
    return r;
}
