#include "ctx.h"

extern u8 *data_0215be48;

u32 func_02003a44(void);

void func_020f1e38(u32 param_1)
{
    u8 *p;
    u8 *q;

    p = (u8 *)param_1 + 0x1000;
    if (*(s32 *)(p + 0xc90) != -1) {
        goto store_b;
    }
    if (func_02003a44() == 0) {
        return;
    }
    q = data_0215be48 + 0x4000;
    *(u32 *)(q + 0x868) = 1;
    return;
store_b:
    q = data_0215be48 + 0x4000;
    *(u32 *)(q + 0x868) = 1;
}
