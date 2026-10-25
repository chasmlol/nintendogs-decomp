#include "ctx.h"
extern u8 *data_02159034;
extern void func_0206c7d4(u32 a, u32 b, u32 c);
void func_020955e4(u32 p1, s16 idx)
{
    u8 *base = data_02159034;
    u32 *e = (u32 *)(base + idx * 24 + 0x1000);
    u32 v = e[0x44c / 4];
    func_0206c7d4(v + 4, p1, 0x85c);
}
