#include "ctx.h"

extern u32 *func_02078384(u8 *a, u8 *b);
extern void func_02073eec(u8 *a, u16 *b, u8 *c, u32 *d);

u32 func_02073e34(u8 *param_1, u8 *param_2)
{
    u8 *iVar7;
    u8 *iVar6;
    u8 *iVar3;
    u32 *puVar1;
    u16 *puVar2;
    u32 uVar5;
    u32 iVar4;
    u32 uVar8;
    u32 w;
    u32 off;

    iVar7 = param_1 + *(u32 *)(param_1 + 8);
    uVar8 = 1;
    iVar6 = iVar7 + *(u16 *)(param_1 + *(u32 *)(param_1 + 8));
    uVar5 = 0;
    if (uVar5 < *(u8 *)(iVar6 + 1)) {
        iVar4 = 0;
        do {
            iVar3 = iVar6 + *(u16 *)(iVar6 + 6);
            puVar1 = func_02078384(param_2 + 0x3c, iVar3 + *(u16 *)(iVar3 + 2) + iVar4);
            if (puVar1 != 0) {
                off = *(u16 *)(iVar6 + 6);
                w = *(u16 *)(iVar6 + off);
                puVar2 = (u16 *)(iVar6 + off + 4 + w * uVar5);
                if ((*((u8 *)puVar2 + 3) & 1) == 0) {
                    func_02073eec(iVar7, puVar2, param_2, puVar1);
                }
            } else {
                uVar8 = 0;
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + 16;
        } while (uVar5 < *(u8 *)(iVar6 + 1));
    }
    return uVar8;
}
