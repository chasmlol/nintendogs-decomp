#pragma avoid_byte strb
#include "ctx.h"

extern s32 *data_0214f464;
extern void func_02026478(u8 *p);
extern u32 func_02025548(u8 *p);

u32 func_ov003_021663cc(u8 *param_1)
{
    s32 iVar2;
    u32 uVar4;
    u32 v;

    *(u16 *)(param_1 + 256 + 82) = 0x11e;
    iVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar2;
    uVar4 = ((u32)(u16)iVar2 * 3) >> 16;
    uVar4 = (u16)uVar4;
    switch (uVar4) {
    case 0:
        v = 58;
        break;
    case 1:
        v = 59;
        break;
    case 2:
        v = 60;
        break;
    default:
        v = 0;
        break;
    }
    *(u16 *)(param_1 + 256 + 84) = (u16)v;
    param_1[147] = 5;
    param_1[151] = 1;
    func_02026478(param_1);
    return func_02025548(param_1);
}
