#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0203e908(s32 p, s32 v);
extern BOOL func_02035a3c(s32 p);

u32 func_ov003_0218d0dc(s32 param_1)
{
    BOOL bVar1;
    u32 uVar3;
    u32 seed;
    u32 *P;
    u16 idx;

    bVar1 = func_02035a3c(param_1);
    if (bVar1 == 0) {
        goto elseB;
    }
    P = data_0214f464;
    seed = *P * 0x10dcd + 1;
    *P = seed;
    uVar3 = (u16)(((u32)(u16)seed * 3) >> 16);
    if (uVar3 == 0) {
        goto c0A;
    }
    if (uVar3 == 1) {
        goto c1A;
    }
    if (uVar3 != 2) {
        goto ret0;
    }
    goto c2A;
c0A:
    func_0203e908(param_1, 0x375);
    return 1;
c1A:
    func_0203e908(param_1, 0x370);
    return 1;
c2A:
    func_0203e908(param_1, 0x371);
    return 1;
elseB:
    P = data_0214f464;
    seed = *P * 0x10dcd + 1;
    *P = seed;
    idx = (u16)((u32)(seed * 0x10000) >> 30);
    switch (idx) {
    case 0:
        func_0203e908(param_1, 0x375);
        return 1;
    case 1:
        func_0203e908(param_1, 0x376);
        return 1;
    case 2:
        func_0203e908(param_1, 0x377);
        return 1;
    case 3:
        func_0203e908(param_1, 0x367);
        return 1;
    }
ret0:
    return 0;
}
