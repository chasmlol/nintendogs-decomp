#include "ctx.h"

extern u8 data_0214f464[];
extern u8 *func_020bc3c4(void);

void func_02039c68(u8 *param_1)
{
    u8 *base;
    if (*(s8 *)(param_1 + 0x88) == *(s8 *)(*(u8 **)data_0214f464 + 7)) {
        base = func_020bc3c4() + 136;
        *(u32 *)(base + 0x6c) = 1;
        return;
    }
    base = func_020bc3c4() + 136;
    *(u32 *)(base + 0x6c) = 0;
}
