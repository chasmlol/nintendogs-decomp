#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02035164(u8 *p);
extern void func_02026bac(u8 *p);
extern s32 func_02025548(u8 *p);

s32 func_0205a35c(u8 *param_1)
{
    s32 r;
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x11f;
    r = func_02035164(param_1);
    *(u16 *)((u8 *)param_1 + 256 + 88) = (u16)r;
    *(u8 *)(param_1 + 151) = 1;
    func_02026bac(param_1);
    return func_02025548(param_1);
}
