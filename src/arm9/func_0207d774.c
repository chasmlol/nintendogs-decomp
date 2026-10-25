#include "ctx.h"

extern s32 func_0207d83c(u32 *list, s32 blk, u32 off, u32 size, s32 zero);

s32 func_0207d774(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *q;
    s32 iVar1;
    s32 iVar3;
    u32 uVar2;
    u32 uVar4;
    u32 uVar5;
    u32 uVar6;
    s32 unaff_r6;
    u16 flags;

    q = param_1 + 0x24;
    flags = *(vu16 *)(q + 18);
    iVar3 = *(s32 *)q;
    if ((u16)(flags & 1) == 0) {
        unaff_r6 = 1;
    } else {
        unaff_r6 = 0;
    }
    iVar1 = 0;
    uVar5 = 0;
    uVar6 = uVar5;
    uVar2 = 0xffffffff;
    if (iVar3 != 0) {
        do {
            u32 t = param_3 - 1;
            uVar5 = ~t & (t + (iVar3 + 0x10));
            uVar4 = *(u32 *)(iVar3 + 4);
            if (uVar4 >= param_2 + (uVar5 - (iVar3 + 0x10)) && uVar2 > uVar4) {
                iVar1 = iVar3;
                uVar2 = uVar4;
                uVar6 = uVar5;
                if (unaff_r6 != 0 || uVar4 == param_2) {
                    break;
                }
            }
            iVar3 = *(s32 *)(iVar3 + 0xc);
        } while (iVar3 != 0);
    }
    if (iVar1 != 0) {
        return func_0207d83c((u32 *)q, iVar1, uVar6, param_2, 0);
    }
    return 0;
}
