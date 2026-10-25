#include "ctx.h"

extern u32 data_0215be34;
extern void func_020812a0(u32, u32);

void func_020e9004(u32 param_1)
{
    s32 *p = (s32 *)data_0215be34;
    if (p != NULL) {
        func_020812a0(*(u32 *)p, param_1);
        return;
    }
}
