#include "ctx.h"

s32 func_0207dc3c(u32 a, u32 b);
s32 func_02071d94(u8 *p);
void func_0207dbe0(u32 a, u32 b);

s32 func_02071f20(u8 *param_1)
{
    if (func_0207dc3c(*(u32 *)param_1, *(u16 *)(param_1 + 12)) == 0) {
        return -1;
    }
    if (func_02071d94(param_1) == 0) {
        func_0207dbe0(*(u32 *)param_1, 0);
        return -1;
    }
    return *(u16 *)(param_1 + 12) - 1;
}
