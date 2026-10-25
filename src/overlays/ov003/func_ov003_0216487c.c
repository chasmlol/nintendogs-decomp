#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025db0(u8 *p);
extern s32 func_02025490(u8 *p);

s32 func_ov003_0216487c(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x15a;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    *(u8 *)(param_1 + 147) = 12;
    *(u8 *)(param_1 + 151) = 1;
    *(u8 *)(param_1 + 158) = 1;
    func_02025db0(param_1);
    return func_02025490(param_1);
}
