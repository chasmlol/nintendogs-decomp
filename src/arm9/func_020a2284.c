#include "ctx.h"

extern u8 data_021592e4[];
extern u8 data_02159074[];
extern void func_02072fe4(void *a, s32 b, s32 c);
extern void func_02070ac8(void *a, s32 b, s32 c);

u32 func_020a2284(u32 param_1, u32 param_2)
{
    u8 *base;
    s32 iVar3;
    s32 uVar5;
    u16 uVar1;
    u16 mask;
    u8 *pb;
    s32 *piVar4;

    base = data_021592e4;
    iVar3 = 0;
    do {
        if (*(s32 *)(base + iVar3 * 4 + 0x28) != 0 && param_1 == *(u16 *)((s32)base + iVar3 * 2) &&
            param_2 == *(u16 *)(base + iVar3 * 2 + 8)) {
            if (param_1 == 0x37) {
                if (param_2 != 0 && param_2 != 1 && param_2 != 2) {
                    return 0xffffffff;
                }
            } else if ((s32)param_1 >= 0x38 && (s32)param_1 <= 0x3c) {
                if (param_2 != 8 && param_2 != 9 && param_2 != 10) {
                    return 0xffffffff;
                }
            } else if ((s32)param_1 >= 0x3d && (s32)param_1 <= 0x41) {
                switch (param_2) {
                case 9:
                    break;
                case 10:
                    break;
                case 11:
                    break;
                case 12:
                    break;
                default:
                    return 0xffffffff;
                }
            } else {
                return 0xffffffff;
            }
        }
        iVar3 = (s16)(iVar3 + 1);
    } while (iVar3 < 4);

    pb = data_021592e4;
    mask = *(u16 *)(pb + 0x18);
    uVar5 = 0;
    do {
        uVar1 = 1u << uVar5;
        if ((mask & uVar1) == 0) {
            *(u16 *)(pb + 0x18) |= uVar1;
            goto found;
        }
        uVar5 = (s16)(uVar5 + 1);
    } while (uVar5 < 4);
    uVar5 = -1;
found:
    if (uVar5 != -1) {
        piVar4 = (s32 *)(base + 0x28 + uVar5 * 4);
        func_02072fe4(piVar4, param_1, param_2);
        *(s16 *)(base + uVar5 * 2) = (s16)param_1;
        *(s16 *)(base + uVar5 * 2 + 8) = (s16)param_2;
        *(s16 *)(base + uVar5 * 2 + 16) = 0x7f;
        if (*(s32 *)(data_02159074 + 0x1c) != 0) {
            func_02070ac8(piVar4, 0, 0);
        }
    }
    return uVar5;
}
