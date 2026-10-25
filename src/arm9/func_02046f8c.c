#include "ctx.h"

extern u32 *data_0214f464;
s32 func_0204754c(u8 *p, u32 v);
void func_0204fc38(u8 *p);

void func_02046f8c(u8 *param_1)
{
    u32 v;

    if (func_0204754c(param_1, 1) != 0) {
        return;
    }
    v = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = v;
    if ((u16)((((u32)(u16)v) * 50) >> 16) == 0) {
        func_0204fc38(param_1);
    }
}
