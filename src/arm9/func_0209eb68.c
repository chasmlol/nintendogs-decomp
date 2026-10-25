#include "ctx.h"

extern u32 data_02159198;
extern u32 data_0215919c;
extern u32 data_02159074;
extern u8 data_0212fdc8[];
extern u8 data_0212fdc9[];
extern void func_0207307c(u32 a, s32 b);
extern void func_02070a28(u32 a, u32 b, u32 c);
extern void func_02070ac8(u32 a, s32 b, s32 c);
extern u32 func_0209b774(s32 a);
extern u32 func_0205e270(u32 a, u32 b);
extern void func_02070b20(u32 a, u32 b);
extern u32 func_0209b73c(s32 a);
extern void func_020709c8(u32 a, u32 b, u32 c);

void func_0209eb68(s32 param_1)
{
    u8 *iVar5;
    u32 *piVar1;
    u32 uVar9;
    u32 uVar8;
    u8 *base;
    u32 *piVar2;
    s32 iVar7;
    u32 uVar6;
    u32 uVar4;
    u32 t28;
    s32 i;
    u32 bit;

    piVar1 = (u32 *)&data_0215919c;
    iVar5 = (u8 *)&data_02159198;
    if (*(s32 *)(iVar5 + 0x2c) == 0) {
        return;
    }
    t28 = *(u16 *)(iVar5 + 0x28);
    iVar7 = (u32)*(u16 *)((u8 *)&data_02159074 + 0x18) * 6;
    uVar9 = data_0212fdc8[iVar7];
    uVar8 = data_0212fdc9[iVar7];
    if (t28 == 0) {
        goto L100;
    }
    func_0207307c((u32)piVar1, *(s16 *)(iVar5 + 0x26));
    base = (u8 *)&data_02159198;
    func_02070a28((u32)piVar1, 0xffff, 127);
    i = 0;
    do {
        bit = (u16)(1 << i) & 0xffff;
        if (bit != 0) {
            *(u32 *)(base + i * 4 + 0x5c) = 0x7f000;
        }
        i = (s16)(i + 1);
    } while (i < 16);
    *(u16 *)(iVar5 + 0x22) = 127;
    if (*(s32 *)((u8 *)&data_02159074 + 0x1c) == 0) {
        goto Lelse;
    }
    *(u16 *)((u8 *)&data_02159198 + 0x24) = 0;
    piVar2 = (u32 *)&data_0215919c;
    if (*piVar2 != 0) {
        func_02070ac8((u32)piVar2, 0, 0);
    }
    goto Lf8;
Lelse:
    *(u16 *)(iVar5 + 0x24) = 100;
Lf8:
    *(u16 *)(iVar5 + 0x28) = 0;
L100:
    if (*piVar1 == 0) {
        goto Lz;
    }
    if (param_1 != 0) {
        uVar6 = func_0209b774(param_1);
    } else {
        uVar6 = 0;
    }
    if (uVar6 <= uVar9) {
        uVar4 = 127;
        goto L150;
    }
    if (uVar6 >= uVar8) {
        uVar4 = 0;
        goto L150;
    }
    uVar4 = func_0205e270((uVar8 - uVar6) * 127, uVar8 - uVar9);
L150:
    func_02070b20((u32)piVar1, uVar4);
    if (param_1 == 0) {
        return;
    }
    iVar7 = func_0209b73c(param_1);
    func_020709c8((u32)piVar1, 0xffff, iVar7);
    return;
Lz:
    *(s32 *)(iVar5 + 0x2c) = 0;
}
