#include "ctx.h"

extern void func_ov003_0218b1dc(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_ov003_0218b084(u8 *p)
{
    func_ov003_0218b1dc((u32)p, 6, 6, 1, 47);
    *(u16 *)(p + 0x12e) = 0x2000;
}
