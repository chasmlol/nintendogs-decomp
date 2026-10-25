#include "ctx.h"

extern void func_ov003_021894ec(u8 *p, u32 a, u32 b, u32 c);

void func_ov003_021893e0(u8 *p)
{
    u32 f = *(u16 *)(p + 0xfc) > 60;
    func_ov003_021894ec(p, 7, 0x7f, f);
}
