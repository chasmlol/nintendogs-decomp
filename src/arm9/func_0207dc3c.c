#include "ctx.h"

void *func_0207de78(u32 *a, u32 b, u32 c);

u32 func_0207dc3c(u8 *param_1, u32 param_2)
{
    u32 r5 = *(u32 *)(param_1 + 0x24);
    u32 *r4 = (u32 *)(param_1 + 36);
    u32 *n = (u32 *)func_0207de78(r4, 16, 4);
    if (n == 0) {
        return 0;
    }
    n[0] = param_2;
    n[1] = r5;
    n[2] = r4[1];
    n[3] = r4[2];
    r4[2] = (u32)n;
    return 1;
}
