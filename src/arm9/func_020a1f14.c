#include "ctx.h"

extern u32 data_021592e4;
extern u32 data_02159074;

void func_02072fe4(u32 *p, u32 a, u32 b);
void func_02070ac8(u32 *p, u32 a, u32 b);

u32 func_020a1f14(u32 param_1, u32 param_2)
{
    u8 *base;
    u8 *b2;
    s32 iVar2;
    s32 uVar5;
    s32 off;
    u16 uVar1;
    u16 v;
    u32 *piVar4;

    base = (u8 *)&data_021592e4;
    iVar2 = 0;
    do {
        if (*(u32 *)(base + 0x28 + iVar2 * 4) != 0) {
            if (param_1 == ((u16 *)base)[iVar2] && param_2 == ((u16 *)(base + 8))[iVar2]) {
                return 0xffffffff;
            }
        }
        iVar2 = (s16)(iVar2 + 1);
    } while (iVar2 < 4);
    b2 = (u8 *)&data_021592e4;
    v = *(u16 *)(b2 + 0x18);
    uVar5 = 0;
    do {
        uVar1 = (u16)(1 << uVar5);
        if ((v & uVar1) == 0) {
            *(vu16 *)(b2 + 0x18) = *(vu16 *)(b2 + 0x18) | uVar1;
            goto found;
        }
        uVar5 = (s16)(uVar5 + 1);
    } while (uVar5 < 4);
    uVar5 = 0xffffffff;
found:
    if (uVar5 != 0xffffffff) {
        piVar4 = (u32 *)(base + 0x28 + uVar5 * 4);
        func_02072fe4(piVar4, param_1, param_2);
        *(u16 *)(base + uVar5 * 2) = param_1;
        *(u16 *)(base + uVar5 * 2 + 8) = param_2;
        *(u16 *)(base + uVar5 * 2 + 0x10) = 0x7f;
        if (*(u32 *)((u8 *)&data_02159074 + 0x1c) != 0) {
            func_02070ac8(piVar4, 0, 0);
        }
    }
    return uVar5;
}
