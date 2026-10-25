#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025e54(s32 p);
extern void func_020258bc(s32 p);
extern u8 func_02036e74(s32 p);

u8 func_ov003_0216fe44(s32 param_1)
{
    u32 t;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x17e;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    ((u8 *)param_1)[147] = 5;
    ((u8 *)param_1)[151] = 1;
    func_02025e54(param_1);
    func_020258bc(param_1);
    t = *(u32 *)((u8 *)param_1 + 0x948);
    *(u32 *)((u8 *)param_1 + 0x948) = t | 1;
    return func_02036e74(param_1);
}
