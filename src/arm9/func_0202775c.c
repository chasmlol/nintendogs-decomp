#include "ctx.h"

extern s32 func_02027894(u8 *p1, u8 *p2);

s32 func_0202775c(u8 *param_1, u8 *param_2)
{
    s32 idx;
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    s32 iVar5;
    s32 r;
    u32 uVar3;
    u32 uVar4;

    uVar3 = *(u16 *)(param_1 + *(s8 *)(param_2 + 0x88) * 2 + 0x132);
    r = func_02027894(param_1, param_2);
    if (r == 0) {
        goto zero;
    }
    if (r == 2) {
        goto two;
    }
    return r;
zero:
    if (uVar3 == 0) {
        return r;
    }
    iVar2 = (s16)(uVar3 - 1);
    idx = *(s8 *)(param_2 + 0x88);
    uVar4 = *(u16 *)(param_1 + idx * 2 + 0x138);
    iVar1 = (s16)(uVar4 + 5000);
    iVar3 = (s16)(uVar4 - 5000);
    if (iVar2 > iVar1) {
        iVar2 = iVar1;
    }
    if (iVar2 < iVar3) {
        iVar2 = iVar3;
    }
    if (iVar2 > 10000) {
        iVar2 = 10000;
    }
    if (iVar2 < 0) {
        iVar2 = 0;
    }
    *(s16 *)(param_1 + *(s8 *)(param_2 + 0x88) * 2 + 0x132) = (s16)iVar2;
    return r;
two:
    iVar5 = (s16)(uVar3 + 1);
    idx = *(s8 *)(param_2 + 0x88);
    uVar4 = *(u16 *)(param_1 + idx * 2 + 0x138);
    iVar1 = (s16)(uVar4 + 5000);
    iVar3 = (s16)(uVar4 - 5000);
    if (iVar5 > iVar1) {
        iVar5 = iVar1;
    }
    if (iVar5 < iVar3) {
        iVar5 = iVar3;
    }
    if (iVar5 > 10000) {
        iVar5 = 10000;
    }
    if (iVar5 < 0) {
        iVar5 = 0;
    }
    *(s16 *)(param_1 + *(s8 *)(param_2 + 0x88) * 2 + 0x132) = (s16)iVar5;
    return r;
}
