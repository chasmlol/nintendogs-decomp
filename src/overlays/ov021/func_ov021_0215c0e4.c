#include "ctx.h"

extern u32 data_ov021_0215c6a0;
extern void func_0206b714(u32 a, u32 b, u32 c);

void func_ov021_0215c0e4(void)
{
    u8 *p = (u8 *)data_ov021_0215c6a0;
    u8 *q = *(u8 **)(p + 8);
    func_0206b714(*(u32 *)(q + 4), 0, (u32)(*(u16 *)q) << 3);
}
