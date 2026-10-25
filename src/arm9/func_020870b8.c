#include "ctx.h"

extern u32 data_0212ad14[];
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);
extern void func_0207f554(u8 *p);
extern s32 func_02087248(u8 *p, s32 v);

s32 func_020870b8(s32 *param_1, u32 param_2)
{
    s32 iVar2;
    u32 uVar1;
    u8 *iVar4;
    u32 lo;
    s32 f1;
    u32 f2;
    u32 f3;
    u32 one;
    u32 zero;

    iVar4 = (u8 *)param_1[2];
    uVar1 = 1u << param_2;
    f1 = 1;
    if ((param_1[3] & 4) == 0) {
        f1 = 0;
    }
    if (f1 != 0) {
        *(u32 *)(iVar4 + 0x10) |= 0x200;
    } else {
        *(u32 *)(iVar4 + 0x10) |= 0x100;
    }
    if ((*(u32 *)(iVar4 + 0x4c) & uVar1) != 0) {
        iVar2 = ((s32 (*)(s32 *, u32))(*(u32 *)(iVar4 + 0x48)))(param_1, param_2);
        switch (iVar2) {
        case 0:
        case 1:
        case 4:
            param_1[5] = iVar2;
            break;
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
            break;
        case 8:
            *(u32 *)(iVar4 + 0x4c) &= ~uVar1;
            iVar2 = 7;
            break;
        }
    } else {
        iVar2 = 7;
    }
    if (iVar2 == 7) {
        iVar2 = ((s32 (*)(s32 *))(data_0212ad14[param_2]))(param_1);
    }
    if (iVar2 == 6) {
        f2 = (param_1[3] & 4) != 0;
        if (f2 == 0) {
            goto done;
        }
        lo = func_02080b08();
        one = 1;
        zero = 0;
        while (((*(u32 *)(iVar4 + 0x10) & 0x200) != 0 ? one : zero) != 0) {
            func_0207f554(iVar4 + 0xc);
        }
        iVar2 = param_1[5];
        func_02080b1c(lo);
    } else {
        f3 = (param_1[3] & 4) != 0;
        if (f3 == 0) {
            *(u32 *)(iVar4 + 0x10) &= 0xfffffeff;
            func_02087248((u8 *)param_1, iVar2);
        } else {
            *(u32 *)(iVar4 + 0x10) &= 0xfffffdff;
            param_1[5] = iVar2;
        }
    }
done:
    return iVar2;
}
