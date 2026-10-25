#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_02159444;
extern s32 func_020fe2e8(u8 *p);
extern s32 func_020bc14c(s32 a);
extern s32 func_02044b98(s32 a);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_021030dc(u8 *param_1)
{
    s32 r6;
    u32 r5 = 0;
    u32 r4 = 0;
    s32 r7;
    s32 r0;
    s32 r2;
    u8 *V;
    s32 flag;
    s32 t;

    r6 = *(s32 *)(param_1 + 0x14);
    r0 = func_020fe2e8(param_1);
    if (r0 == 0) {
        goto CASES;
    }
    r0 = func_020bc14c(r0);
    r7 = (r0 != -1);
    flag = func_02044b98(r0);
    V = data_0215be48;
    if (*(s32 *)(V + 0xa8) == 4) {
        goto CASES;
    }
    if (r6 == 0) {
        goto Z74;
    }
    if (r7) {
        if (flag) {
            r5 = 2;
        } else {
            r5 = 0;
        }
        goto CASES;
    }
    r5 = 0;
    goto CASES;
Z74:
    t = *(s32 *)(V + 0xb8);
    if (t != 3) {
        r2 = 0;
        if (t != 10) {
            goto A0;
        }
        if (*(s16 *)(data_02159444 + 0x7c) == 0x4f) {
            r2 = 1;
        }
A0:
        if (r2 == 0) {
            r4 = 0;
            goto CASES;
        }
    }
    if (r7) {
        if (flag) {
            r4 = 2;
        } else {
            r4 = 0;
        }
        goto CASES;
    }
    r4 = 0;
CASES:
    switch (r5) {
    case 0:
        func_02112798(1, 0x1f, 0);
        break;
    case 1:
        func_02112798(1, 0x1f, 0);
        break;
    case 2:
        func_02112798(1, 0x1f, 1);
        break;
    case 3:
        func_02112798(1, 0x1f, 1);
        break;
    }
    switch (r4) {
    case 0:
        func_02112798(3, 0x1f, 0);
        break;
    case 1:
        func_02112798(3, 0x1f, 0);
        break;
    case 2:
        func_02112798(3, 0x1f, 1);
        break;
    case 3:
        func_02112798(3, 0x1f, 1);
        break;
    }
    *(u32 *)(param_1 + 0x5c) = r5;
    *(u32 *)(param_1 + 0x60) = r4;
}
