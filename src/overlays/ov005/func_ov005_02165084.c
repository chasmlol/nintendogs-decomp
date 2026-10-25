#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02035164(s32 p);
extern void func_020264f4(s32 p);
extern u8 func_020255a4(s32 p);

u8 func_ov005_02165084(s32 param_1)
{
    u32 uVar2;

    *(u16 *)((u8 *)param_1 + 0x152) = 0x11a;
    uVar2 = func_02035164(param_1);
    *(u16 *)((u8 *)param_1 + 0x158) = (u16)uVar2;
    ((u8 *)param_1)[151] = 4;
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
