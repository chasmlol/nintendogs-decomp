#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02026478(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_ov003_02166490(u8 *param_1)
{
    u32 *q;
    u32 v;
    u32 uVar1;
    u16 uVar4;

    *(u16 *)(param_1 + 0x152) = 0x11f;
    q = data_0214f464;
    v = *q * 0x10dcd + 1;
    *q = v;
    uVar1 = (u16)((v << 16) >> 30);
    switch (uVar1) {
    case 0:
        uVar4 = 0x3a;
        break;
    case 1:
        uVar4 = 0x3b;
        break;
    case 2:
        uVar4 = 0x3c;
        break;
    default:
        uVar4 = 0;
    }
    *(u16 *)(param_1 + 0x154) = uVar4;
    *(param_1 + 147) = 5;
    *(param_1 + 151) = 1;
    func_02026478(param_1);
    return func_02025548(param_1);
}
