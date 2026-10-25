#include "ctx.h"

extern u32 *data_0214f464;

void func_0203e908(u8 *p, s16 v);

void func_ov003_0218fb10(u8 *param_1)
{
    u32 uVar1;
    u32 t;

    if (*(u16 *)(param_1 + 0xfc) <= 60) {
        return;
    }
    uVar1 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar1;
    t = (u16)uVar1 * 30;
    if ((u16)(t >> 16) == 0) {
        func_0203e908(param_1, (s16)0x423);
    }
}
