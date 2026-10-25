#pragma avoid_byte strb
#include "ctx.h"
extern void func_02025ed4(u8 *p);
extern void func_020259d0(u8 *p);
extern void func_02034198(u8 *p);
extern s32 func_02028124(u8 *p);

void func_ov003_0216e538(u8 *param_1)
{
    s32 uVar1;

    *(s16 *)(param_1 + 0x152) = 0x173;
    {
        u8 *q = param_1 + 0x93;
        u32 five = 5;
        *(u8 *)(q) = (u8)(five);
    }
    func_02025ed4(param_1);
    func_020259d0(param_1);
    func_02034198(param_1);
    uVar1 = func_02028124(param_1);
    *(u32 *)(param_1 + 0x25c) = (u32)(((s64)uVar1 * (s64)-80 + 0x800) >> 12);
    *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -16;
}
