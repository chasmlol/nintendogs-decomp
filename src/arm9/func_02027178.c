#include "ctx.h"
extern void func_020271e8(u32 a, u32 *b, u32 c);
extern void func_01ff810c(u32 a, u32 b, u32 c);
void func_02027178(u32 p0, u32 *p1, u32 p2)
{
    func_020271e8(p0, p1, p2);
    func_01ff810c((u32)p1, (u32)((u8 *)p0 + 0x3c), (u32)p1);
    p1[9] = 0;
    p1[10] = 0;
    p1[11] = 0;
}
