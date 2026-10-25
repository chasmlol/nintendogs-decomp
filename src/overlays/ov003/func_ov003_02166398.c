#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(s32 a);
extern u8 func_020255a4(s32 a);

u8 func_ov003_02166398(s32 param_1)
{
    u8 uVar1;
    u8 *r;
    u32 v;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x114;
    r = (u8 *)param_1 + 151;
    v = 4;
    *(u8 *)(r) = (u8)(v);
    func_020264f4(param_1);
    uVar1 = func_020255a4(param_1);
    return uVar1;
}
