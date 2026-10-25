#include "ctx.h"

void func_0207d080(u32 *p, u32 n);

void func_0207cfb4(u32 *param_1, u32 param_2)
{
    u16 off;

    if (*param_1 == 0) {
        func_0207d080(param_1, param_2);
        return;
    }
    off = ((u16 *)param_1)[5];
    *(u32 *)(param_2 + off) = 0;
    *(u32 *)(param_2 + off + 4) = *param_1;
    *(u32 *)(*param_1 + ((u16 *)param_1)[5]) = param_2;
    *param_1 = param_2;
    ((u16 *)param_1)[4] = ((u16 *)param_1)[4] + 1;
}
