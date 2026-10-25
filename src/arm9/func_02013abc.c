#include "ctx.h"

void func_02022b7c(u8 *p);
s32 func_02022dec(u8 *p, s32 a, u32 b);
u8 *func_0203541c(u8 *p);
void func_0203e8cc(u8 *p, u32 a, u32 b);
s32 func_ov003_02198298(u8 *p);
s32 func_020289d0(u8 *p, u32 a, u32 b);
s32 func_0202cd10(u8 *p, u32 a);
s32 func_0203567c(u8 *p);
void func_0203e908(u8 *p, u32 a);

void func_02013abc(u8 *param_1)
{
    s32 f;
    s32 r;
    u8 *q;

    func_02022b7c(param_1);
    f = (*(u8 *)(param_1 + 0xa4) != 0);
    if (f) {
        r = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        f = (r != 0);
    }
    q = func_0203541c(param_1);
    if (q == 0) {
        goto zq;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(q + 0x90)) {
    case 4:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    r = func_ov003_02198298(param_1);
    goto join;
zq:
    r = 0;
join:
    if (r != 0) {
        r = 1;
        goto test;
    }
    r = func_020289d0(param_1, 0, 0);
    if (r != 0) {
        r = 1;
        goto test;
    }
    if (f != 0) {
        goto zero;
    }
    r = func_0202cd10(param_1, 0);
    if (r != 0) {
        r = 1;
        goto test;
    }
zero:
    r = 0;
    goto test;
test:
    if (r != 0) {
        return;
    }
    r = func_0203567c(param_1);
    if (r == 0) {
        return;
    }
    func_0203e908(param_1, 0);
}
