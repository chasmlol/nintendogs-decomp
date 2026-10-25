#include "ctx.h"
extern void func_02078044(u8 *p, u32 i, u32 v);
void func_02077e4c(u8 *param_1, u32 param_2)
{
    u32 i;
    i = 0;
    while (i < *(u8 *)(param_1 + 0x18)) {
        func_02078044(param_1, i, param_2);
        i = i + 1;
    }
}
