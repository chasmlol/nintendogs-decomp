#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0203e908(u8 *p, u32 x);

void func_ov005_0215fa8c(u8 *param_1)
{
    u32 *P;
    u32 nv;
    u16 lo;
    u16 hi;
    u32 m;
    if (*(u16 *)(param_1 + 252) <= 60) {
        return;
    }
    P = data_0214f464;
    nv = *P * 0x10dcd + 1;
    *P = nv;
    lo = nv;
    m = lo * 20;
    hi = m >> 16;
    if (hi == 0) {
        func_0203e908(param_1, 0x45d);
    }
}
