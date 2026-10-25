#include "ctx.h"

extern void func_0207808c(u8 *p, u32 i, u32 v);

void func_02077e94(u8 *param_1, u32 param_2)
{
    u32 i = 0;
    while (i < param_1[0x18]) {
        func_0207808c(param_1, i, param_2);
        i = i + 1;
    }
}
