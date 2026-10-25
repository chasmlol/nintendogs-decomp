#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020382d8(u8 *p);
extern void func_02026994(u8 *p);
extern void func_02025bb0(u8 *p);
extern s32 func_02036e74(u8 *p);

s32 func_ov003_0216fea0(u8 *param_1)
{
    u32 r;
    r = func_020382d8(param_1);
    *(u16 *)((u8 *)param_1 + 256 + 82) = (u16)r;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    *(u8 *)(param_1 + 152) = 1;
    func_02026994(param_1);
    func_02025bb0(param_1);
    *(u32 *)(param_1 + 0x948) |= 1;
    return func_02036e74(param_1);
}
