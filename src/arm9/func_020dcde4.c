#include "ctx.h"

u32 func_020dcde4(u32 *param_1, u32 param_2)
{
    u32 *puVar2;
    s32 i;
    u8 *p;
    u32 z;
    if (param_1 == 0) {
        goto zero;
    }
    puVar2 = (u32 *)param_1[0];
    if (puVar2 != 0) {
        goto body;
    }
zero:
    return 0;
body:
    if (param_2 >= puVar2[0]) {
        return 0;
    }
    p = (u8 *)puVar2 + 148 + param_2 * 24;
    i = 0;
    z = i;
    do {
        *(u16 *)(*(u8 **)(p + 0x14) + (u32)i * 2 + 4) = z;
        *(u16 *)(*(u8 **)(p + 0x14) + (u32)i * 2 + 100) = z;
        i = i + 1;
    } while (i < 48);
    *(u32 *)(p + 0x4) = 0;
    return 1;
}
