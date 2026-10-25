#include "ctx.h"

extern int data_021592b0;
extern u16 data_021592a8;
extern void func_02072fe4(int *p, int a, u32 b);
extern void func_02070b20(int *p, int v);

u32 func_020a1858(u32 param_1)
{
    if (data_021592b0 == 0) {
        func_02072fe4(&data_021592b0, 0x13, param_1);
        func_02070b20(&data_021592b0, (int)data_021592a8 * 127 / 100);
        return 1;
    }
    return 0;
}
