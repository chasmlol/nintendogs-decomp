#include "ctx.h"

extern void func_ov003_0219a368(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_020386d0(u8 *p);

s32 func_ov003_02198298(u8 *param_1)
{
    s32 iVar5;

    switch (*(s16 *)(param_1 + 0xfa)) {
    case 0x24:
        *(s32 *)(param_1 + 0x948) = 0;
        func_ov003_0219a368(param_1);
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    case 0x25:
        break;
    case 0x26:
        *(s32 *)(param_1 + 0x948) = 8;
        func_0203e908(param_1, 0x3de);
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    case 0x27:
        break;
    case 0x28:
        break;
    case 0x29:
        *(s32 *)(param_1 + 0x948) = 4;
        *(s32 *)(param_1 + 0x48c) = 0;
        *(s32 *)(param_1 + 0x260) = 0;
        *(s32 *)(param_1 + 0x264) = 0;
        *(s32 *)(param_1 + 0x268) = 0;
        func_0203e908(param_1, 0x3b0);
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    case 0x2a:
        *(s32 *)(param_1 + 0x948) = 1;
        iVar5 = func_020386d0(param_1);
        func_0203e908(param_1, (s16)(iVar5 + 0x3d1));
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    case 0x2c:
        *(s32 *)(param_1 + 0x948) = 0x10;
        func_0203e908(param_1, 0x419);
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    case 0x2b:
        *(s32 *)(param_1 + 0x948) = 0x10;
        func_0203e908(param_1, 0x416);
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    case 0x2d:
        *(s32 *)(param_1 + 0x948) = 2;
        func_0203e908(param_1, 0x414);
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    }
    return 0;
}
