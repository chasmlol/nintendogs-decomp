#include "ctx.h"

extern u8 data_021592e4[];
extern void func_02070c18(u32 *, s32);
extern void func_020a0518(void);
extern void func_02070ba8(s32, s32, s32);

void func_020a2574(void)
{
    volatile s32 z;
    u32 uVar2;
    u32 base;
    u32 uVar1;
    s16 uVar9;
    u32 *puVar8;
    u16 *puVar7;
    u16 *puVar6;
    u16 *puVar5;
    u16 uVar3;

    base = (u32)data_021592e4;
    uVar9 = 0;
    puVar8 = (u32 *)(base + 0x28);
    asm {
        str uVar9, [sp, #0]
    }
    puVar7 = (u16 *)(base + 0x18);
    puVar6 = (u16 *)(base + 0x1c);
    puVar5 = (u16 *)(base + 0x1e);
    do {
        uVar2 = 1u << uVar9;
        uVar1 = (u16)uVar2;
        uVar3 = (u16)uVar2;
        if (*(u16 *)(base + 0x1c) != 0 && (*(u16 *)(base + 0x1c) & uVar1) != 0) {
            if ((*(u16 *)(base + 0x1e) & uVar1) == 0) {
                func_02070c18(puVar8, z);
                *puVar7 = *puVar7 & ~uVar3;
                *puVar6 = *puVar6 & ~uVar3;
            }
            *puVar5 = *puVar5 & ~uVar3;
        }
        if (*(s32 *)(base + uVar9 * 4 + 0x28) == 0 && (*(u16 *)(base + 0x18) & uVar1) != 0) {
            {
                u8 *bq = (u8 *)base;
                *(u16 *)(bq + 0x18) = *(u16 *)(bq + 0x18) & ~uVar3;
                *(u16 *)(bq + 0x1c) = *(u16 *)(bq + 0x1c) & ~uVar3;
                *(u16 *)(bq + 0x1a) = *(u16 *)(bq + 0x1a) & ~uVar3;
            }
        }
        uVar9 = (s16)(uVar9 + 1);
        puVar8 = puVar8 + 1;
    } while (uVar9 < 4);
    func_020a0518();
    if (*(s32 *)(base + 0x38) == 0) {
        return;
    }
    if (*(s32 *)(base + 0x24) == 0) {
        return;
    }
    *(s32 *)(base + 0x20) = *(s32 *)(base + 0x20) + 1;
    if (*(s32 *)(base + 0x20) > 15) {
        func_02070ba8(0x43, 0, 0);
        *(s32 *)(base + 0x24) = 0;
        *(s32 *)(base + 0x20) = 0;
        return;
    }
    return;
}
