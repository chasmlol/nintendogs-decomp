#pragma avoid_byte strb
#include "ctx.h"

extern void func_020266f8(u8 *p);
extern s32 func_02025bb0(u8 *p);

s32 func_0201e0f4(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 17;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 18;
    *(u8 *)(param_1 + 147) = 2;
    *(u8 *)(param_1 + 151) = 2;
    func_020266f8(param_1);
    return func_02025bb0(param_1);
}
