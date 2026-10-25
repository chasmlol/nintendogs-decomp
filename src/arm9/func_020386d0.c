#pragma opt_loop_invariants off
#include "ctx.h"

extern u32 *data_0214f464;
extern u8 *data_02159428;
extern u32 data_0213b9fc[];
extern u8 data_02136b54[];

s32 func_020386d0(u8 *param_1)
{
    u32 *g;
    u32 uVar2;
    s32 iVar4;
    s32 iVar3;
    s32 iVar5;
    s8 cVar;
    u8 *base;
    s32 idx;

    iVar5 = data_0213b9fc[*(u16 *)(data_02159428 + 6)] + 2;
    g = data_0214f464;
    uVar2 = *g * 0x10dcd + 1;
    *g = uVar2;
    iVar3 = (s16)(u16)((((u16)uVar2) * 100u) >> 16);
    iVar4 = 0;
    base = data_02136b54 + (u32)iVar5 * 72;
    idx = *(s8 *)(param_1 + 0x8d);
    do {
        iVar3 = (s16)(iVar3 - *(s16 *)(base + (u32)(idx * 8) + iVar4 * 2));
        if (iVar3 < 0) {
            break;
        }
        iVar4 = (s16)(iVar4 + 1);
    } while (iVar4 < 4);
    cVar = *(s8 *)(param_1 + 0x8b);
    if (cVar == 1) goto one;
    if (cVar == 4) goto zero;
    if (cVar != 5) goto out;
zero:
    iVar4 = 0;
    goto out;
one:
    iVar4 = iVar4 + 1;
    if (iVar4 >= 4) {
        iVar4 = iVar4 - 1;
    }
out:
    return iVar4;
}
