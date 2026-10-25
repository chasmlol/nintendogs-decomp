#include "ctx.h"

void func_020892ac(u32 *param_1)
{
    u16 x;
    *(vu16 *)0x040001a2 = *(u8 *)(*(u8 **)(param_1 + 1));
    param_1[1] = param_1[1] + 1;
    while (*(vu16 *)0x040001a0 & 0x80) {
    }
    *(vu16 *)&x = *(vu16 *)0x040001a2;
}
