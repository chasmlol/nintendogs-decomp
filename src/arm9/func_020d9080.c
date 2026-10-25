#include "ctx.h"

extern s16 data_02126868[];
extern void func_02067288(u32 *buf, u32 *a, s32 b, s32 c);
extern void func_01ff810c(u32 *buf, u32 *x, u32 *y);

void func_020d9080(u32 *p1, u32 *p2, s32 p3)
{
    u32 buf[12];
    s32 idx = p3 >> 4;
    func_02067288(buf, p2, data_02126868[idx * 2], data_02126868[idx * 2 + 1]);
    func_01ff810c(buf, p1, p1);
}
