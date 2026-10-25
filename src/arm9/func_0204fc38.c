#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_02036578(u8 *);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u8 *);
extern void func_0203e908(u8 *, s32);

u32 func_0204fc38(u8 *param_1)
{
    u32 uVar4;
    u32 uVar2;
    s32 iVar1;
    s32 iVar3;
    u32 x;

    uVar4 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar4;
    switch ((u16)(((u16)uVar4 * 10u) >> 16)) {
    case 0:
        func_0203e908(param_1, 0x2cf);
        return 1;
    case 1:
        func_0203e908(param_1, 0x2d0);
        return 1;
    case 2:
        func_0203e908(param_1, 0x2d1);
        return 1;
    case 3:
        func_0203e908(param_1, 0x2d2);
        return 1;
    case 4:
        func_0203e908(param_1, 0x2d3);
        return 1;
    case 5:
        func_0203e908(param_1, 0x2d4);
        return 1;
    case 6:
        func_0203e908(param_1, 0x2d6);
        return 1;
    case 7:
        func_0203e908(param_1, 0x2d7);
        return 1;
    }
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x20) == 0) {
        uVar2 = func_0202fd7c(param_1);
        return uVar2;
    }
    if (iVar1 == 0) {
        return 0;
    }
    iVar3 = *data_0214f464 * 0x10dcd + 1;
    iVar1 = iVar3 * 0x10000;
    *data_0214f464 = iVar3;
    x = (u16)((u32)iVar1 >> 31);
    if (x == 0) {
        goto d0;
    }
    if (x != 1) {
        goto ret0;
    }
    goto d1;
d0:
    func_0203e908(param_1, 0x2cd);
    return 1;
d1:
    func_0203e908(param_1, 0x2ce);
    return 1;
ret0:
    return 0;
}
