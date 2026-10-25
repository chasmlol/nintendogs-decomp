#include "ctx.h"

extern u32 func_0207d83c(u8 *b, s32 iVar1, u32 uVar5, u32 param_2, u32 five);

u32 func_0207d6b0(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *b;
    s32 iVar1;
    s32 iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 uVar6;
    u32 uVar5;
    u32 e;
    s32 unaff;

    b = param_1 + 0x24;
    unaff = (u16)(*(u16 *)(b + 18) & 1) == 0;
    iVar1 = 0;
    uVar5 = 0;
    uVar6 = 0xffffffff;
    iVar2 = *(s32 *)(b + 4);
    if (iVar2 == 0) {
        goto done;
    }
    param_3 = ~(param_3 - 1);
top:
    e = iVar2 + 0x10;
    uVar3 = *(u32 *)(iVar2 + 4);
    uVar4 = param_3 & (uVar3 + e - param_2);
    if ((s32)(uVar4 - e) < 0) {
        goto next;
    }
    if (uVar6 <= uVar3) {
        goto next;
    }
    iVar1 = iVar2;
    uVar6 = uVar3;
    uVar5 = uVar4;
    if (unaff != 0) {
        goto done;
    }
    if (uVar3 == param_2) {
        goto done;
    }
next:
    iVar2 = *(s32 *)(iVar2 + 8);
    if (iVar2 != 0) {
        goto top;
    }
done:
    if (iVar1 == 0) {
        return 0;
    }
    return func_0207d83c(b, iVar1, uVar5, param_2, 1);
}
