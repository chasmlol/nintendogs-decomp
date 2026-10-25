#include "ctx.h"

extern void func_020a8708(u8 *p, s32 a, s32 b, s32 c, s32 d);
extern void func_020a86e0(u8 *p, s32 a, s32 b, s32 c);

s32 func_020b07b8(u8 *param_1, s32 param_2)
{
    s32 iVar6;
    s16 *psVar3;
    s16 iVar4;
    s32 iVar5;
    s16 sVar1;
    s32 uVar2;

    psVar3 = (s16 *)(param_1 + 0x18);
    uVar2 = param_2;
    psVar3 = psVar3 + 15;
    iVar4 = 1;
    iVar5 = 0;
    iVar6 = 3;
    for (;;) {
        if (uVar2 < psVar3[2]) {
            iVar4 = (s16)(psVar3[0] + 1);
            goto LAB_end;
        }
        if (uVar2 == psVar3[2]) {
            iVar4 = psVar3[0];
            iVar5 = 1;
            goto LAB_end;
        }
        iVar6 = (s16)(iVar6 - 1);
        psVar3 = psVar3 - 5;
        if (iVar6 < 1) {
            goto LAB_end;
        }
    }
LAB_end:
    sVar1 = (s16)iVar4;
    *(s16 *)(param_1 + 4) = sVar1;
    *(u16 *)(param_1 + 6) = 0;
    *(u16 *)(param_1 + 8) = (u16)uVar2;
    if (iVar4 <= 1) {
        func_020a8708(param_1, sVar1, uVar2, 0, iVar5);
    } else if (iVar4 < 4) {
        func_020a86e0(param_1, sVar1, uVar2, 0);
    }
    return iVar4;
}
