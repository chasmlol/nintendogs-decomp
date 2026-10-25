#include "ctx.h"

extern u8 *volatile data_0215be48;

void func_02112610(u32 param_1, vu16 *param_2, u16 param_3, u16 param_4)
{
    u32 k;
    u32 sh;
    u32 r5;
    u8 *e;
    if (*param_2 == 0xffff) {
        return;
    }
    sh = param_1 << 11;
    k = 0x283c;
    do {
        r5 = (u32)data_0215be48 + k;
        r5 = r5 + sh;
        e = (u8 *)(r5 + (*param_2 << 4));
        *(u16 *)(e + 6) = param_3;
        *(u16 *)(e + 8) = param_4;
        param_2 = param_2 + 1;
    } while (*param_2 != 0xffff);
}
