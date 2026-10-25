#include "ctx.h"

extern void func_ov003_021894ec(u8 *p, u32 a, u32 b, u32 c);

void func_ov003_02186848(u8 *p)
{
    func_ov003_021894ec(p, 3, 31, *(u16 *)(p + 252) > 40);
}
