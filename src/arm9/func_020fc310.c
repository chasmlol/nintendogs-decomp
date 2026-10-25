#include "ctx.h"

s32 func_020fc310(u32 param_1, u8 *param_2)
{
    s32 k;
    u32 uVar5;
    s32 iVar4;
    s32 iVar6;

    iVar6 = 1;
    iVar4 = 0;
    uVar5 = param_1;
    do {
        uVar5 = uVar5 / 10;
        if (uVar5 == 0) {
            break;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 1;
    } while (iVar4 < 10);
    k = 0;
    if (iVar6 > 0) {
        s32 off;
        off = k;
        do {
            *(s16 *)(param_2 + iVar6 * 2 - off - 2) = (s16)((u16)(param_1 % 10) + 0x30);
            k = k + 1;
            param_1 = param_1 / 10;
            off = off + 2;
        } while (k < iVar6);
    }
    *(u16 *)(param_2 + iVar6 * 2) = 0;
    return iVar6;
}
