#include "ctx.h"
extern u8 data_02151c44[];
extern u32 func_0207ceb0(u32 a, u32 b);
extern void func_0207cec8(u32 a, u32 b);
extern void func_02071fe8(u32 a);
u32 func_02070390(s32 p0, u32 *p1)
{
    u32 base = (u32)data_02151c44 + p0 * 36;
    u32 n = func_0207ceb0(base + 12, 0);
    if (n == 0) {
        return 0;
    }
    func_0207cec8(base + 12, n);
    *(u32 *)(n + 12) = (u32)p1;
    p1[2] = n;
    func_02071fe8(*(u32 *)(n + 8));
    return *(u32 *)(n + 8);
}
