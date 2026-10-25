#include "ctx.h"

extern u32 data_0214f464;
extern void func_0203e908(u8 *p, u32 a);

u32 func_020467c0(u8 *param_1)
{
    u32 *P;
    u32 uVar1;

    P = *(u32 **)&data_0214f464;
    uVar1 = *P * 0x10dcd + 1;
    *P = uVar1;
    switch ((u16)((((u32)(u16)uVar1) * 20u) >> 16)) {
    case 0:
        func_0203e908(param_1, 0x2e8);
        return 1;
    case 1:
        func_0203e908(param_1, 0x2e9);
        return 1;
    case 2:
        func_0203e908(param_1, 0x2ee);
        return 1;
    case 3:
        func_0203e908(param_1, 0x2ef);
        return 1;
    case 4:
        func_0203e908(param_1, 0x2f0);
        return 1;
    case 5:
        func_0203e908(param_1, 0x2f1);
        return 1;
    case 6:
        func_0203e908(param_1, 0x2f2);
        return 1;
    case 7:
        func_0203e908(param_1, 0x2f3);
        return 1;
    case 8:
        func_0203e908(param_1, 0x2f4);
        return 1;
    default:
        return 0;
    }
}
