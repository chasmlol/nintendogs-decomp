#include "ctx.h"

extern void func_02072fe4(s32 *p, u32 a, u32 b);
extern void func_02070ac8(s32 *p, s32 a, s32 b);
extern u8 data_021592e4[];
extern u8 data_02159074[];

u32 func_020a219c(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u8 *iVar2 = data_021592e4;
    s32 uVar5;
    u16 uVar1;
    s32 *piVar6;
    u8 *iVar4;

    uVar5 = 0;
    do {
        uVar1 = (u16)(1 << uVar5);
        if ((*(u16 *)(iVar2 + 0x18) & uVar1) == 0) {
            *(u16 *)(iVar2 + 0x18) |= uVar1;
            goto found;
        }
        uVar5 = (s16)(uVar5 + 1);
    } while (uVar5 < 4);
    uVar5 = -1;
found:
    if (uVar5 != -1) {
        piVar6 = (s32 *)(iVar2 + 0x28 + uVar5 * 4);
        func_02072fe4(piVar6, param_1, param_2);
        func_02070ac8(piVar6, param_3, param_4);
        *(s16 *)(iVar2 + uVar5 * 2) = (s16)param_1;
        iVar4 = iVar2 + uVar5 * 2;
        *(s16 *)(iVar4 + 8) = (s16)param_2;
        *(u16 *)(iVar2 + 0x1a) |= 1 << uVar5;
        *(s16 *)(iVar4 + 0x10) = (s16)param_3;
        if (*(u32 *)(data_02159074 + 0x1c) != 0) {
            func_02070ac8(piVar6, 0, 0);
        }
    }
    return uVar5;
}
