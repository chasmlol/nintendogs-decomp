#include "ctx.h"
#pragma opt_propagation off

typedef volatile s16 vs16;

extern u8 *data_02159468;
extern void func_020bd51c(s32 p, u32 v);

void func_020bc3d4(void)
{
    s32 iVar3;
    u32 uVar1;
    u8 *iVar4;
    s32 iVar2;
    s32 n;
    register u32 one = 1;

    iVar4 = data_02159468;
    n = *(s16 *)(iVar4 + 0x20);
    uVar1 = (one + 6) & 0xff;
    iVar3 = 0;
    if (n > 0) {
        do {
            if (iVar3 < 0) goto zc;
            if (*(vs16 *)(iVar4 + 0x20) > iVar3) goto ld;
        zc:
            iVar2 = 0;
            goto jn;
        ld:
            iVar2 = *(s32 *)(iVar4 + (u32)iVar3 * 4 + 4);
        jn:
            if (iVar2 != 0) {
                uVar1 = (uVar1 + 1) & 0xff;
            }
            iVar3 = (s16)(iVar3 + 1);
        } while (iVar3 < *(vs16 *)(iVar4 + 0x20));
    }
    if (n <= 0) {
        iVar3 = 0;
    } else {
        iVar3 = *(s32 *)(iVar4 + 4);
    }
    if (iVar3 == 0) {
        return;
    }
    func_020bd51c(iVar3, (uVar1 + 1) & 0xff);
}
