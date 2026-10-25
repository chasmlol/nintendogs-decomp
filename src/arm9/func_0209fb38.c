#include "ctx.h"

extern s32 data_02159198[];
extern s32 data_02159178[];
extern s32 data_02159074[];
extern s32 data_02159184[];

extern u32 func_020708d0(s32 *p);
extern void func_02070c18(s32 *p, s32 v);
extern void func_0209adc8(s32 v);
extern void func_02072cf0(s32 a, s32 b);
extern void func_0209ae94(s32 v);
extern void func_0207307c(s32 *p, s32 v);
extern void func_02070ac8(s32 *p, s32 a, s32 b);
extern void func_02070a28(s32 *p, s32 a, s32 b);
extern void func_02070a68(s32 *p, s32 a, s32 b);

s32 func_0209fb38(u32 param_1, s32 param_2, s32 param_3)
{
    s32 *piVar2;
    s32 *puVar5;
    s32 *piVar3;
    s32 *piVar4;
    u32 uVar6;
    u32 uVar7;
    s32 iVar8;
    s32 iVar9;
    u16 uVar1;
    s32 iL;

    piVar2 = data_02159198;
    puVar5 = data_02159178;
    if (param_1 == 5 && data_02159074[0x10] != 0) {
        return 0;
    }
    if (*piVar2 != 0) {
        uVar7 = func_020708d0(piVar2);
        if (param_1 == uVar7) {
            if (param_1 == 0x36) {
                func_02070c18(piVar2, 0);
            } else if (param_1 == 0x29) {
                func_02070c18(piVar2, 0);
            } else {
                return 0;
            }
        } else {
            func_02070c18(piVar2, 0);
        }
    }
    func_0209adc8(2);
    func_02072cf0(param_1, data_02159074[0]);
    func_0209ae94(3);
    *(s16 *)(piVar2 + 3) = (s16)param_2;
    func_0207307c(piVar2, param_1);
    if (data_02159074[7] != 0) {
        piVar3 = data_02159198;
        iVar9 = 0;
        iVar8 = *piVar3;
        *(s16 *)((u8 *)piVar3 + 0xe) = 0;
        if (iVar8 != 0) {
            if (piVar3[7] != 0) {
                u16 uVar0 = *(u16 *)((u8 *)piVar3 + 0x1a);
                uVar1 = *(u16 *)(piVar3 + 6);
                *(s16 *)(piVar3 + 6) = 0;
                piVar3[7] = 0;
                iVar9 = (s32)uVar0 - (s32)uVar1;
            }
            func_02070ac8(piVar3, 0, iVar9);
        }
    } else {
        func_02070ac8(piVar2, param_2, param_3);
        if (param_3 > 10) {
            piVar2[7] = 1;
            *(s16 *)(piVar2 + 6) = 0;
            *(s16 *)((u8 *)piVar2 + 0x1a) = (s16)param_3;
        }
        if (piVar2[0x43] != 0) {
            piVar3 = data_02159198;
            *(s16 *)((u8 *)piVar3 + 0xe) = 60;
            *(s16 *)(piVar3 + 4) = 60;
        } else {
            piVar3 = data_02159198;
            *(s16 *)((u8 *)piVar3 + 0xe) = 100;
            *(s16 *)(piVar3 + 4) = 100;
        }
    }
    piVar4 = data_02159198;
    func_02070a28(piVar2, 0xffff, 0x7f);
    iL = 0;
    do {
        if (((u16)(1 << iL) & 0xffffU) != 0) {
            *(u32 *)((u8 *)piVar4 + iL * 4 + 0x5c) = 0x7f000;
        }
        iL = (s16)(iL + 1);
    } while (iL < 0x10);
    if (param_1 == 0x1b) {
        piVar4 = data_02159198;
        func_02070a28(piVar2, 8, 0);
        iL = 0;
        do {
            if (((u16)(1 << iL) & 8U) != 0) {
                *(u32 *)((u8 *)piVar4 + iL * 4 + 0x5c) = 0;
            }
            iL = (s16)(iL + 1);
        } while (iL < 0x10);
        piVar4 = data_02159198;
        func_02070a28(piVar2, 0x20, 0);
        iL = 0;
        do {
            if (((u16)(1 << iL) & 0x20U) != 0) {
                *(u32 *)((u8 *)piVar4 + iL * 4 + 0x5c) = 0;
            }
            iL = (s16)(iL + 1);
        } while (iL < 0x10);
        func_02070a68(piVar2, 0x10, 1);
        puVar5[0] = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
    } else {
        puVar5[2] = -1;
        if (param_1 == 0x1c) {
            piVar4 = data_02159198;
            func_02070a28(piVar2, 0x400, 0);
            iL = 0;
            do {
                if (((u16)(1 << iL) & 0x400U) != 0) {
                    *(u32 *)((u8 *)piVar4 + iL * 4 + 0x5c) = 0;
                }
                iL = (s16)(iL + 1);
            } while (iL < 0x10);
            piVar2[0x40] = 1;
            piVar2[0x41] = 0;
        }
    }
    data_02159184[0x10 / 4] = 1;
    return 1;
}
