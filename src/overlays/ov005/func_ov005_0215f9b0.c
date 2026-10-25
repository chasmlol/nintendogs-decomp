#include "ctx.h"

extern u8 *data_0214f464;
extern void func_0203e908(u8 *p, s16 v);

void func_ov005_0215f9b0(u8 *p)
{
    u32 v;
    u32 prod;
    if (*(u16 *)(p + 252) <= 60) {
        return;
    }
    v = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = v;
    prod = (u32)((u16)v) * 20u;
    if ((u16)(prod >> 16) == 0) {
        func_0203e908(p, 0x460);
    }
}
