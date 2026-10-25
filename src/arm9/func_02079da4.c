#include "ctx.h"

extern u32 data_0213e508;
extern void func_0206c7bc(u32 a, u8 *b, u32 c);
extern u32 func_02078224(u32 a, u32 b);

void func_02079da4(u8 *param_1, u8 *param_2, u8 *param_3)
{
    u32 uVar5;
    u32 uVar4;
    u32 iVar3;
    u8 *q;
    u8 *base;
    u32 uVar1;
    u8 *iVar2;
    vu16 zz;

    iVar3 = *(u32 *)(param_3 + 8);
    *(u32 *)(param_1 + 0xc) = data_0213e508;
    param_1[0x19] = param_3[0x18];
    zz = 0;
    q = param_3 + iVar3;
    func_0206c7bc(zz, param_1 + 0x1a, (u32)param_1[0x19] << 1);
    uVar5 = 0;
    if (uVar5 < param_2[9]) {
        uVar4 = uVar5;
    q = q + 4;
    base = param_2 + 8;
    do {
        iVar2 = base + *(u16 *)(param_2 + 0xe);
        uVar1 = func_02078224((u32)q, (u32)(iVar2 + *(u16 *)(iVar2 + 2) + uVar4));
        if ((s32)uVar1 >= 0) {
            *(u16 *)(param_1 + uVar1 * 2 + 0x1a) = (u16)(uVar5 | 0x100);
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 + 16;
    } while (uVar5 < param_2[9]);
    }
}
