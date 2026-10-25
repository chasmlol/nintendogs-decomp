#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(s32 a);
extern u8 func_020256a0(s32 a);

u8 func_02058e8c(s32 param_1)
{
    u8 uVar1;
    u8 *r;
    u32 v;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 250;
    r = (u8 *)param_1 + 151;
    v = 1;
    *(u8 *)(r) = (u8)(v);
    func_02026bac(param_1);
    uVar1 = func_020256a0(param_1);
    return uVar1;
}
