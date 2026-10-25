#include "ctx.h"

void func_0207fe4c(u8 *param_1, u8 *param_2)
{
    u32 a = *(vu32 *)(param_2 + 0x10);
    u32 b = *(vu32 *)(param_2 + 0xc);
    if (a == 0) {
        *(vu32 *)(param_1 + 0x80) = b;
    } else {
        *(vu32 *)((u8 *)a + 0xc) = b;
    }
    if (b == 0) {
        *(vu32 *)(param_1 + 0x7c) = a;
    } else {
        *(vu32 *)((u8 *)b + 0x10) = a;
    }
}
