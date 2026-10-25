#include "ctx.h"

extern u8 *func_02078384(u8 *a, u8 *b);
extern void func_02073d9c(u8 *a, u8 *b, u8 *c, u8 *d);

u32 func_02073cec(u8 *param_1, u8 *param_2)
{
    u8 *iVar8;
    u8 *iVar7;
    u32 uVar6;
    u32 uVar5;
    s32 iVar4;
    u8 *iVar3;
    u8 *puVar1;
    u8 *puVar2;
    iVar8 = param_1 + *(u32 *)(param_1 + 8);
    uVar5 = 1;
    uVar6 = 0;
    iVar7 = iVar8 + *(u16 *)(iVar8 + 2);
    if (uVar6 < *(u8 *)(iVar7 + 1)) {
        iVar4 = 0;
        do {
            iVar3 = iVar7 + *(u16 *)(iVar7 + 6);
            puVar1 = func_02078384(param_2 + *(u16 *)(param_2 + 0x34),
                                   iVar3 + *(u16 *)(iVar3 + 2) + iVar4);
            if (puVar1 != 0) {
                u32 val = *(u16 *)(iVar7 + *(u16 *)(iVar7 + 6));
                puVar2 = (u8 *)((u32)(iVar7 + *(u16 *)(iVar7 + 6) + 4) + val * uVar6);
                if ((*(u8 *)(puVar2 + 3) & 1) == 0) {
                    func_02073d9c(iVar8, puVar2, param_2, puVar1);
                }
            } else {
                uVar5 = 0;
            }
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + 0x10;
        } while (uVar6 < *(u8 *)(iVar7 + 1));
    }
    return uVar5;
}
