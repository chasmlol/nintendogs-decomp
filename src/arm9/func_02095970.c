#include "ctx.h"

extern u8 *func_020978d0(u32 a, s32 b);
extern void func_02096a20(u8 *p, s32 a, s32 b);

void func_02095970(u32 param_1, s32 param_2, s32 param_3)
{
    u8 *puVar1 = func_020978d0(param_1, param_2);
    if (*(u32 *)(puVar1 + 0x10) != 0) {
        func_02096a20(puVar1, param_3, 0);
    }
}
