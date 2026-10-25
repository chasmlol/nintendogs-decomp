#include "ctx.h"

extern u32 data_0213e10c[];
extern s32 func_0205ecc0(u32 *p);

u32 func_0205eb70(void)
{
    s32 iVar2;
    u32 *puVar3;
    u32 uVar5;
    s32 iVar4;
    u32 off;

    puVar3 = data_0213e10c;
    uVar5 = 0;
    iVar4 = 1;
    do {
        if (((puVar3[1] << 22) >> 29) != 0) {
            iVar2 = func_0205ecc0(puVar3);
            if (iVar2 != 0) {
                uVar5 = 0xffffffff;
            }
        }
        if (iVar4 < 3) {
            off = (u32)iVar4 * 76u;
            iVar4 = iVar4 + 1;
            puVar3 = (u32 *)((u8 *)data_0213e10c + off);
        } else {
            puVar3 = (u32 *)0;
        }
    } while (puVar3 != (u32 *)0);
    return uVar5;
}
