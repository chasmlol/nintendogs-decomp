#include "ctx.h"
#pragma opt_propagation off

extern void func_02089c08(void);
extern void func_02089bf4(void);
extern void func_020800f0(u8 *p, s32 a);

BOOL func_0208a990(u8 *param_1, s32 param_2, s32 param_3, u8 *param_4)
{
    u32 *pw;
    u32 uVar3;
    u32 uVar4;
    u8 *iVar5;
    s32 iVar6;
    u8 bVar1;
    u16 a0;
    u16 b0;
    u16 a1;
    u16 b1;
    u8 h16;

    if (param_2 < 0) {
        return 0;
    }
    func_02089c08();
    if ((u32)param_2 < *(u32 *)(param_1 + 0x38)) {
        goto cont;
    }
    func_02089bf4();
    return 0;
cont:
    pw = (u32 *)param_1 + param_2;
    uVar3 = pw[15];
    switch (uVar3 & 0xff) {
    case 0: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
        goto dflt;
    case 1: case 2: case 3: case 4: case 5:
        goto blk1;
    case 16:
        goto blk16;
    case 17:
        goto blk17;
    default:
        goto dflt;
    }
blk1:
    iVar5 = param_1 + (uVar3 >> 8);
    pw[15] = (uVar3 & 0xffffff00) | param_4[0];
    a0 = *(vu16 *)(param_4 + 2);
    b0 = *(vu16 *)(param_4 + 4);
    *(u16 *)(param_1 + (uVar3 >> 8)) = a0;
    *(u16 *)(iVar5 + 2) = b0;
    a1 = *(vu16 *)(param_4 + 6);
    b1 = *(vu16 *)(param_4 + 8);
    *(u16 *)(iVar5 + 4) = a1;
    *(u16 *)(iVar5 + 6) = b1;
    *(u16 *)(iVar5 + 8) = *(vu16 *)(param_4 + 10);
    goto tail;
blk16:
    uVar4 = *(u8 *)(param_1 + (uVar3 >> 8));
    iVar5 = param_1 + (uVar3 >> 8);
    h16 = iVar5[1];
    if (param_3 < (s32)uVar4) {
        goto f16;
    }
    if (param_3 <= (s32)h16) {
        goto ok16;
    }
f16:
    func_02089bf4();
    return 0;
ok16:
    iVar5 = iVar5 + (param_3 - uVar4) * 12;
    a0 = *(vu16 *)param_4;
    b0 = *(vu16 *)(param_4 + 2);
    *(u16 *)(iVar5 + 2) = a0;
    *(u16 *)(iVar5 + 4) = b0;
    a1 = *(vu16 *)(param_4 + 4);
    b1 = *(vu16 *)(param_4 + 6);
    *(u16 *)(iVar5 + 6) = a1;
    *(u16 *)(iVar5 + 8) = b1;
    a0 = *(vu16 *)(param_4 + 8);
    b0 = *(vu16 *)(param_4 + 10);
    *(u16 *)(iVar5 + 10) = a0;
    *(u16 *)(iVar5 + 12) = b0;
    goto tail;
blk17:
    iVar5 = param_1 + (uVar3 >> 8);
    iVar6 = 0;
    bVar1 = *(u8 *)(param_1 + (uVar3 >> 8));
    while (param_3 > (s32)bVar1) {
        iVar6 = iVar6 + 1;
        if (iVar6 >= 8) {
            func_02089bf4();
            return 0;
        }
        bVar1 = iVar5[iVar6];
    }
    iVar5 = iVar5 + iVar6 * 12;
    a0 = *(vu16 *)param_4;
    b0 = *(vu16 *)(param_4 + 2);
    *(u16 *)(iVar5 + 8) = a0;
    *(u16 *)(iVar5 + 10) = b0;
    a1 = *(vu16 *)(param_4 + 4);
    b1 = *(vu16 *)(param_4 + 6);
    *(u16 *)(iVar5 + 12) = a1;
    *(u16 *)(iVar5 + 14) = b1;
    a0 = *(vu16 *)(param_4 + 8);
    b0 = *(vu16 *)(param_4 + 10);
    *(u16 *)(iVar5 + 16) = a0;
    *(u16 *)(iVar5 + 18) = b0;
    goto tail;
dflt:
    func_02089bf4();
    return 0;
tail:
    func_02089bf4();
    func_020800f0(param_1, *(s32 *)(param_1 + 8));
    return 1;
}
