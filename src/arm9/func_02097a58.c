#include "ctx.h"

extern u32 data_0212f614[];
extern u32 data_0214193c;
extern void func_02002fa4(u32 *buf, u32 a, u32 b);
extern u32 func_02002e70(u32 *buf, u32 v);

u32 func_02097a58(s32 p0, u32 p1)
{
    u32 buf[8];
    u8 *e = (u8 *)data_0212f614 + p0 * 8;
    u32 v = *(u32 *)e;
    u32 r;
    data_0214193c = v;
    func_02002fa4(buf, *(u32 *)(e + 4), v);
    r = func_02002e70(buf, p1);
    data_0214193c = 0xffffffff;
    return r;
}
