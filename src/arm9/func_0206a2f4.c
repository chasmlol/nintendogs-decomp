#include "ctx.h"

extern void func_0206c8b8(u32 a, u32 *b);

s32 func_0206a2f4(u32 *param_1)
{
    if (*(vu32 *)0x04000600 & 0x08000000) {
        return -1;
    }
    func_0206c8b8(0x04000680, param_1);
    return 0;
}
