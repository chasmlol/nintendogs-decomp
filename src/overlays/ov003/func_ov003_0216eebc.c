#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(s32 a);
extern u8 func_02025bb0(s32 a);

u8 func_ov003_0216eebc(s32 param_1)
{
    u8 uVar1;
    u8 *r;
    u32 v;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x11;
    r = (u8 *)param_1 + 147;
    v = 2;
    *(u8 *)(r) = (u8)(v);
    func_020266f8(param_1);
    uVar1 = func_02025bb0(param_1);
    return uVar1;
}
