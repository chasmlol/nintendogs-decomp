#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_020469d0(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);

void func_020465dc(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    *(u16 *)(param_1 + 0x12e) = 0x5000;
    iVar1 = func_020469d0(param_1, 0, 1);
    if (iVar1 != 0) {
        return;
    }
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    uVar2 = (u16)(((u32)(u16)uVar2 * 100) >> 16);
    switch (uVar2) {
    case 0:
        func_0203e908(param_1, 0x2ec);
        return;
    case 1:
        func_0203e908(param_1, 0x2f5);
        return;
    case 2:
        func_0203e908(param_1, 0x2f7);
        return;
    }
}
