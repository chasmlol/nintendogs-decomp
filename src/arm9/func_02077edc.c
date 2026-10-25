#include "ctx.h"

extern void func_020780d4(u8 *p, u32 i, s32 v);

void func_02077edc(u8 *param_1, s32 param_2)
{
    u32 i;
    for (i = 0; i < param_1[0x18]; i++) {
        func_020780d4(param_1, i, param_2);
    }
}
