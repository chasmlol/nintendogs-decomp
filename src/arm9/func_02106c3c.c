#include "ctx.h"
extern u8 *data_02159030;
extern void func_02090cac(void);

void func_02106c3c(s32 param_1)
{
    u32 a = 999;
    u32 b = 999;
    if (param_1 > 16) {
        goto gt16;
    }
    if (param_1 >= 16) {
        goto c16;
    }
    switch (param_1) {
    case 1:
        goto c1;
    case 2:
        goto c2;
    case 4:
        goto c4;
    case 8:
        goto c8;
    default:
        goto tail;
    }
gt16:
    if (param_1 > 32) {
        goto gt32;
    }
    if (param_1 == 32) {
        a = 0x59b;
        b = 0;
    }
    goto tail;
gt32:
    if (param_1 == 64) {
        a = 0x59c;
        b = 0;
    }
    goto tail;
c1:
    a = 0x596;
    b = 0;
    goto tail;
c2:
    a = 0x597;
    b = 0;
    goto tail;
c4:
    a = 0x598;
    b = 0;
    goto tail;
c8:
    a = 0x599;
    b = 0;
    goto tail;
c16:
    a = 0x59a;
    b = 0;
tail:
    ((void (*)(u32, u32, u32))func_02090cac)(*(u32 *)(data_02159030 + 4), a, b);
}
