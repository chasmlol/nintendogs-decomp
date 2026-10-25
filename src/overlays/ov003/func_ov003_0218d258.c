#include "ctx.h"
extern void func_0203e908(u8 *p, s32 a);

static inline s32 Classify(u8 *p, s32 x)
{
    s32 fx;
    s32 iVar3;
    s32 uVar5 = 0;
    s64 lv;

    lv = (s64)x * 0x2008 + 0x800;
    fx = (s32)((u32)(lv >> 12));
    iVar3 = *(s32 *)(p + 0x3b8);
    if (iVar3 > fx) {
        uVar5 = 0;
    } else {
        if (iVar3 > *(s32 *)(p + 0x388) + x) {
            uVar5 = 4;
        } else if (iVar3 > *(s32 *)(p + 0x2c8)) {
            uVar5 = 5;
        } else {
            uVar5 = 6;
        }
    }
    return uVar5;
}

u32 func_ov003_0218d258(u8 *param_1)
{
    s32 uVar5;
    s32 x;

    switch (*(s8 *)(param_1 + 0x8e)) {
    case 2:
        goto C2;
    case 3:
    case 4:
        goto C34;
    case 0:
    case 1:
        goto C01;
    default:
        goto Lzero;
    }
C2:
    x = *(s32 *)(param_1 + 0x2e0);
    uVar5 = Classify(param_1, x);
    switch (uVar5) {
    case 0:
        func_0203e908(param_1, 0x367);
        return 1;
    case 1: break;
    case 2: break;
    case 3: break;
    case 4:
    case 5:
        func_0203e908(param_1, 0x362);
        return 1;
    case 6:
        func_0203e908(param_1, 0x36b);
        return 1;
    }
    goto Lzero;
C01:
    x = *(s32 *)(param_1 + 0x2e0);
    uVar5 = Classify(param_1, x);
    switch (uVar5) {
    case 0:
        func_0203e908(param_1, 0x365);
        return 1;
    case 1: break;
    case 2: break;
    case 3: break;
    case 4:
    case 5:
        func_0203e908(param_1, 0x362);
        return 1;
    case 6:
        func_0203e908(param_1, 0x36b);
        return 1;
    }
    goto Lzero;
C34:
    x = *(s32 *)(param_1 + 0x2e0);
    uVar5 = Classify(param_1, x);
    switch (uVar5) {
    case 0:
        func_0203e908(param_1, 0x36c);
        return 1;
    case 1: break;
    case 2: break;
    case 3: break;
    case 4:
    case 5:
        func_0203e908(param_1, 0x362);
        return 1;
    case 6:
        func_0203e908(param_1, 0x36b);
        return 1;
    }
    goto Lzero;
Lzero:
    return 0;
}
