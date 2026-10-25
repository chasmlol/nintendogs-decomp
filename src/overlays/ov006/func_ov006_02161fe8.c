#include "ctx.h"

extern u32 data_0214f464;

void func_ov006_02161fe8(u8 *param_1)
{
    u8 *p;
    u8 *q;
    if (param_1 == NULL) {
        return;
    }
    p = (u8 *)data_0214f464;
    *(u32 *)(param_1 + 0x20) = *(u32 *)(p + 0x8c) + *(u32 *)(**(u8 ***)(param_1 + 0x18) + 4);
    q = p + 0x8c;
    *(u32 *)(param_1 + 0x24) = *(u32 *)(q + 4) + *(u32 *)(**(u8 ***)(param_1 + 0x18) + 8);
    *(u32 *)(param_1 + 0x28) = *(u32 *)(q + 8) + *(u32 *)(**(u8 ***)(param_1 + 0x18) + 0xc);
}
