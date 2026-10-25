#include "ctx.h"

extern u32 data_0213e500;
extern void func_0206c7bc(u32 a, u8 *b, u32 c);
extern s32 func_02078224(u8 *a, u8 *b);

void func_0207a154(u8 *param_1, u8 *param_2, u8 *param_3)
{
    u8 *base;
    s32 iVar3;
    vu16 zero;
    u32 uVar1;
    u32 uVar5;
    u32 uVar4;
    u8 *iVar2;

    iVar3 = *(s32 *)(param_3 + 8);
    *(u32 *)(param_1 + 0xc) = data_0213e500;
    param_1[0x19] = param_3[0x18];
    base = param_3 + iVar3;
    zero = 0;
    func_0206c7bc(zero, param_1 + 0x1a, (u32)param_1[0x19] << 1);
    uVar5 = 0;
    if (uVar5 < param_2[9]) {
        uVar4 = uVar5;
        base = base + 4;
        do {
            iVar2 = param_2 + 8 + *(u16 *)(param_2 + 14);
            uVar1 = func_02078224(base, iVar2 + *(u16 *)(iVar2 + 2) + uVar4);
            if ((s32)uVar1 >= 0) {
                *(u16 *)(param_1 + uVar1 * 2 + 0x1a) = uVar5 | 0x100;
            }
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 + 0x10;
        } while (uVar5 < param_2[9]);
    }
}
