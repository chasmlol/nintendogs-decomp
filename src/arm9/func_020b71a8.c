#include "ctx.h"

extern u8 *data_02159444;

void func_020b71a8(u8 *param_1)
{
    u16 v = *(u16 *)(param_1 + 4);
    if (v == 0) {
        goto zb;
    }
    if (v == 0xd00) {
        goto body;
    }
    return;
zb:
    *(u16 *)(param_1 + 4) = 0xd00;
    *(u16 *)(param_1 + 6) = 0;
    return;
body:
    {
        u8 *d = data_02159444;
        if (*(s16 *)(d + 0x100) == 2) {
            *(u16 *)(param_1 + 4) = 1;
            *(u32 *)(param_1 + 12) = 1;
        }
    }
}
