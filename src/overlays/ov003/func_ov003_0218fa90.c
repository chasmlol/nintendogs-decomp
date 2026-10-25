#include "ctx.h"

extern u8 *data_0214f464;
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_0218fa90(u8 *param_1)
{
    u32 v;
    u32 m;
    if (*(u16 *)(param_1 + 252) <= 60) {
        return;
    }
    v = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = v;
    m = (u16)v * 30;
    if ((u16)(m >> 16) == 0) {
        func_0203e908(param_1, 0x423);
    }
}
