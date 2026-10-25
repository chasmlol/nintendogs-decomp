#pragma avoid_byte strb
#include "ctx.h"

extern void func_020265d8(s32 p);
extern void func_02025bb0(s32 p);
extern void func_ov004_0216c504(s32 p);

void func_ov004_0216d634(s32 param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 16;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 18;
    ((u8 *)param_1)[151] = 2;
    func_020265d8(param_1);
    func_02025bb0(param_1);
    func_ov004_0216c504(param_1);
}
