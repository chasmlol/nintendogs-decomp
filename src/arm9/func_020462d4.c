#include "ctx.h"

extern s32 data_0214f464;
extern s32 func_020469d0(u32 a, u32 b, s32 c);
extern s32 func_0203579c(u32 a, s32 b);
extern void func_0203e908(u32 a, s32 b);

void func_020462d4(u32 param_1, u32 param_2)
{
    s32 iVar1;
    u32 bit;

    iVar1 = func_020469d0(param_1, param_2, 0);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203579c(param_1, 0x10);
    if (iVar1 != 0) {
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        bit = (u32)(((u32)(iVar1 * 0x10000) >> 31) << 16) >> 16;
        if (bit != 0) {
            func_0203e908(param_1, 0x2eb);
            return;
        }
    }
    iVar1 = func_0203579c(param_1, 0x2e);
    if (iVar1 != 0) {
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        bit = (u32)(((u32)(iVar1 * 0x10000) >> 31) << 16) >> 16;
        if (bit != 0) {
            func_0203e908(param_1, 0x2e7);
            return;
        }
    }
    iVar1 = func_0203579c(param_1, 0x41);
    if (iVar1 != 0) {
        iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar1;
        bit = (u32)(((u32)(iVar1 * 0x10000) >> 31) << 16) >> 16;
        if (bit != 0) {
            func_0203e908(param_1, 0x2ea);
            return;
        }
    }
    iVar1 = func_0203579c(param_1, 0x5e);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar1;
    bit = (u32)(((u32)(iVar1 * 0x10000) >> 31) << 16) >> 16;
    if (bit != 0) {
        func_0203e908(param_1, 0x2e6);
        return;
    }
    return;
}
