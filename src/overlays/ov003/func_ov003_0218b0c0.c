#include "ctx.h"

extern void func_ov003_0218b1dc(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_ov003_0218b0c0(u32 param_1)
{
    func_ov003_0218b1dc(param_1, 5, 5, 1, 87);
    *(u16 *)(param_1 + 0x12e) = 0xe000;
}
