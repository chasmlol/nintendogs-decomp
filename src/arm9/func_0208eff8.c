#include "ctx.h"
extern void func_02074730(u32 a, s32 b, s32 c, s32 d);
extern void func_0207471c(u32 a, u32 b);
void func_0208eff8(u8 *p)
{
    func_02074730(*(u32 *)(p + 0x24), *(s16 *)(p + 0x2a), *(s16 *)(p + 0x2c), *(s16 *)(p + 0x2e));
    func_0207471c(*(u32 *)(p + 0x24), *(u16 *)(p + 0x28));
}
