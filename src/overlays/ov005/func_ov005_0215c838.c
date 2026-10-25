#include "ctx.h"

extern void func_ov005_0215c854(u8 *a, u32 b);

void func_ov005_0215c838(u8 *p)
{
    func_ov005_0215c854(p, *(u16 *)(p + 0xfc) > 60);
}
