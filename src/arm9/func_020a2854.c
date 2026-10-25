#include "ctx.h"

extern int data_02159324;
extern int data_02159368;
extern int func_020a305c(int a, u32 b);

u32 func_020a2854(u32 param_1, int param_2)
{
    int iVar1;
    int iVar2;
    u32 uVar3;
    u8 *base;
    u32 one = 1;

    base = (u8 *)&data_02159324;
    if (*(int *)(base + 0x8c) != 0) {
        *(int *)(base + 0x8c) = 0;
        *(s16 *)(base + 2) = -1;
    }
    iVar1 = (int)&data_02159368;
    if (*(int *)(base + 0x94) == 0) {
        return 0xfffffffd;
    }
    uVar3 = 0;
    *(int *)(base + 0x94) = 0;
    if (*(s16 *)(iVar1 + 2) == -1) {
        goto fail;
    }
    if (*(s16 *)(base + 0x8a) > 1) {
        goto fail;
    }
    for (uVar3 = 0; (s32)uVar3 < 20; uVar3 = (u32)(s16)(uVar3 + 1)) {
        if (((param_1 & (one << uVar3)) != 0) &&
            (iVar2 = func_020a305c(param_2, uVar3), iVar2 != 0)) {
            goto LAB_020a28fc;
        }
    }
    uVar3 = 0xffffffff;
LAB_020a28fc:
    if (uVar3 == 0xffffffff) {
        return 0xfffffffe;
    }
    return uVar3;
fail:
    return 0xffffffff;
}
