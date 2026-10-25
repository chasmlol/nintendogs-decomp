#include "ctx.h"

void func_02089268(u8 *param_1)
{
    *(vu16 *)0x040001a2 = 0;
    while (*(vu16 *)0x040001a0 & 0x80) {
    }
    **(u8 **)(param_1 + 8) = (u8)*(vu16 *)0x040001a2;
    *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) + 1;
}
