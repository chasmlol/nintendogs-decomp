#include "ctx.h"

void func_0207ddb4(u8 *param_1)
{
    u8 *it;
    u8 *h = param_1 + 36;
    it = *(u8 **)(h + 8);
    while (it != NULL) {
        *(u32 *)(it + 8) = *(u32 *)(param_1 + 0x1c);
        it = *(u8 **)(it + 0xc);
    }
    *(u32 *)(h + 4) = *(u32 *)(param_1 + 0x1c);
}
