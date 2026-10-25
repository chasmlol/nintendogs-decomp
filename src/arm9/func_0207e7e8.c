#include "ctx.h"

typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u32 w4;
    vu32 w5;
    vu32 w6;
    vu32 w7;
    u8 buf[0x40];
    vu32 w24;
    vu32 w25;
} Ctx;

extern void func_0207e4e8(Ctx *p);

u32 func_0207e7e8(Ctx *param_1, u8 *param_2, s32 param_3)
{
    u32 uVar1;

    if (param_3 == 0) {
        return 0;
    }
    if (param_1 == 0 || param_2 == 0) {
        return 1;
    }
    if (param_1->w24 != 0) {
        param_1->w25 = 3;
        return 3;
    }
    uVar1 = param_1->w25;
    if (uVar1 != 0) {
        return uVar1;
    }
    goto test;
body:
    uVar1 = param_1->w7;
    param_1->w7 = uVar1 + 1;
    param_1->buf[uVar1] = *param_2;
    param_1->w5 = param_1->w5 + 8;
    if (param_1->w5 == 0) {
        param_1->w6 = param_1->w6 + 1;
        if (param_1->w6 == 0) {
            param_1->w25 = 1;
        }
    }
    if (param_1->w7 == 0x40) {
        func_0207e4e8((Ctx *)param_1);
    }
    param_2 = param_2 + 1;
test:
    if (param_3-- == 0) {
        goto done;
    }
    if (param_1->w25 == 0) {
        goto body;
    }
done:
    return 0;
}
