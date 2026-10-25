#include "ctx.h"

extern u32 data_0214204c[];
extern s32 data_02159198[];
extern u32 data_02159144;
extern u32 data_02159070;
extern s32 data_021591a0[];

extern void func_020a2284(s32, s32);
extern void func_0206c924(u8 *, s32, s32);
extern void func_020e1348(u8 *, u32, s32, s32, s32);
extern void func_02072fe4(s32 *, s32, s32);
extern void func_02070ac8(s32 *, s32, s32);
extern void func_0207307c(s32 *, s32);
extern void func_02070800(s32 *, s32, s32);
extern void func_02070a28(s32 *, s32, s32);

u32 func_0209e5a0(s32 param_1, s32 param_2, s32 param_3)
{
    s32 *piVar1;
    s32 *piVar2;
    u32 ub;
    u32 uVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    u32 uVar7;
    u32 *puVar8;

    piVar1 = data_02159198;
    iVar6 = data_0214204c[param_1];
    if (param_2 < 0) {
        param_2 = 0;
    } else if (param_2 > 0x7f) {
        param_2 = 0x7f;
    }
    iVar5 = 0;
    do {
        iVar4 = iVar5 * 2;
        *(s16 *)((u8 *)piVar1 + iVar5 * 2 + 0x12) = -1;
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < 3);
    if ((iVar6 != 0) && (*(u8 *)(iVar6 + 1) == '0')) {
        *(s16 *)(piVar1 + 0xc) = (s16)param_2;
        iVar4 = param_2 * *(s32 *)(iVar6 + 4);
        piVar1[0xf] = (iVar4 * 0x100) / 127;
        func_020a2284(0x30, 4);
        if (param_1 == 100) {
            puVar8 = (u32 *)data_02159144;
            func_0206c924((u8 *)puVar8, 0, 0x9c4c);
            func_020e1348((u8 *)puVar8, data_02159070, 0x5d, 0, param_2);
        } else {
            ub = (u32)data_021591a0;
            func_02072fe4((s32 *)ub, 0x30, 6);
            func_02070ac8((s32 *)ub, 0x7f, 0);
            func_02070ac8((s32 *)ub, 0x5f, 300);
        }
        func_0207307c(piVar1, *(s16 *)(iVar6 + 2));
        func_02070800(piVar1, 0xf, *(s16 *)(piVar1 + 0xc));
        func_02070ac8(piVar1, param_3, 0);
        piVar2 = data_02159198;
        func_02070a28(piVar1, 0xffff, 0x7f);
        uVar3 = 0xffff;
        uVar7 = 0;
        do {
            if (((u16)(1 << uVar7) & uVar3) != 0) {
                *(s32 *)((u8 *)piVar2 + uVar7 * 4 + 0x5c) = 0x7f000;
            }
            uVar7 = (u32)((s32)((uVar7 + 1) * 0x10000) >> 0x10);
        } while ((s32)uVar7 < 0x10);
        piVar1[0x10] = 1;
        *(s16 *)(piVar1 + 3) = (s16)param_3;
    }
    return 1;
}
