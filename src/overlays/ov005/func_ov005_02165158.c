#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(s32 a);
extern u8 func_020255a4(s32 p);

u8 func_ov005_02165158(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 1;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 4;
    *((u8 *)param_1 + 147) = 9;
    *((u8 *)param_1 + 151) = 4;
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
