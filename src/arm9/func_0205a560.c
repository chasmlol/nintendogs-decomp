#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02035164(s32 p);
extern void func_02026bac(s32 p);
extern u8 func_02025548(s32 p);

u8 func_0205a560(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x11f;
    *(u16 *)((u8 *)param_1 + 256 + 88) = (u16)func_02035164(param_1);
    *((u8 *)param_1 + 151) = 1;
    func_02026bac(param_1);
    return func_02025548(param_1);
}
