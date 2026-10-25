#include "ctx.h"

extern void func_ov003_021894ec(u8 *p, u32 a, u32 b, u32 c);

void func_ov003_02186630(u8 *p)
{
    u32 f = *(u16 *)(p + 0xfc) > 40;
    func_ov003_021894ec(p, 6, 0x2f, f);
}
