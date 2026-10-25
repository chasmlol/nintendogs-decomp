#include "ctx.h"
void func_02069f4c(u16 *param_1, s32 param_2)
{
    u32 v = param_1[0];
    if (param_2 < 0) {
        if ((v & 0xc0) == 0x80) {
            param_1[0] = (v & ~0xc0u) | 0xc0;
        }
        param_1[2] = -param_2;
        return;
    }
    if ((v & 0xc0) == 0xc0) {
        param_1[0] = (v & ~0xc0u) | 0x80;
    }
    param_1[2] = param_2;
}
