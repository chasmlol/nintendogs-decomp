#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02020894(u8 *p);
extern void func_020264f4(u8 *p);
extern s32 func_020255a4(u8 *p);

s32 func_ov005_021650cc(u8 *param_1)
{
    s32 r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0;
    r = func_02020894(param_1);
    *(u16 *)((u8 *)param_1 + 256 + 84) = (u16)r;
    *(u8 *)(param_1 + 151) = 4;
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
