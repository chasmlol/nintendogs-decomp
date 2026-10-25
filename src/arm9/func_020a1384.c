#include "ctx.h"

extern u8 data_021592e4[];
extern u8 data_02159074[];
extern u8 data_0215915c[];
extern s32 func_01ffdb08(s32 v);
extern s32 func_02027540(s32 v);
extern s32 func_020678b4(u8 *a, u8 *b);
extern void func_02072fe4(u32 *a, u32 b, u32 c);
extern void func_02070800(u32 *a, int b, s32 c);

s32 func_020a1384(s32 param_1, s32 param_2, s32 param_3)
{
    u32 *piVar5;
    s32 iVar6;
    u16 uVar1;
    s32 iVar2;
    u8 *base;
    s32 iVar3;
    u8 *piVar7;
    s16 sVar8;
    s16 sVar4;

    base = data_021592e4;
    sVar4 = 0;
    do {
        uVar1 = (u16)(1 << sVar4);
        if ((*(u16 *)(base + 0x18) & uVar1) == 0) {
            *(u16 *)(base + 0x18) |= uVar1;
            goto found;
        }
        sVar4 = (s16)(sVar4 + 1);
    } while (sVar4 < 4);
    sVar4 = -1;
found:
    if (sVar4 == -1) {
        goto done;
    }
    piVar5 = (u32 *)(base + 0x28) + sVar4;
    if (param_1 < 50) {
        goto bad;
    }
    if (param_1 > 54) {
        goto bad;
    }
    switch (param_2) {
    case 8:
        goto arm8;
    case 9:
        goto arm9;
    case 10:
        goto arm10;
    }
    goto done;
arm9:
    iVar3 = 10;
    switch (*(u16 *)(data_02159074 + 0x18)) {
    case 8:
        iVar3 = 3;
        break;
    case 9:
        iVar3 = 5;
        break;
    case 10:
        iVar3 = 7;
        break;
    case 11:
        iVar3 = 9;
        break;
    case 12:
        break;
    }
    if (param_3 > iVar3) {
        param_3 = iVar3;
    } else if (param_3 < 0) {
        param_3 = 0;
    }
    func_02072fe4(piVar5, param_1, param_2);
    func_02070800(piVar5, 6, (s16)param_3);
    goto done;
arm10:
    iVar3 = 10;
    switch (*(u16 *)(data_02159074 + 0x18)) {
    case 8:
        iVar3 = 3;
        break;
    case 9:
        iVar3 = 5;
        break;
    case 10:
        iVar3 = 7;
        break;
    case 11:
        iVar3 = 9;
        break;
    case 12:
        break;
    }
    if (param_3 > iVar3) {
        param_3 = iVar3;
    } else if (param_3 < 0) {
        param_3 = 0;
    }
    func_02072fe4(piVar5, param_1, param_2);
    func_02070800(piVar5, 6, (s16)param_3);
    goto done;
arm8:
    piVar7 = 0;
    iVar6 = 0;
    sVar8 = 0;
    iVar6 = 5;
    do {
        iVar2 = func_01ffdb08(sVar8);
        if (iVar2 != 0) {
            iVar3 = func_02027540(iVar2);
            piVar7 = (u8 *)(iVar3 + 0x44);
            break;
        }
        sVar8 = (s16)(sVar8 + 1);
    } while (sVar8 < 3);
    iVar3 = func_020678b4(data_0215915c, piVar7);
    param_3 = param_3 - (iVar3 >> 16);
    switch (*(u16 *)(data_02159074 + 0x18)) {
    case 8:
        iVar6 = 2;
        break;
    case 9:
        iVar6 = 3;
        break;
    case 10:
        iVar6 = 4;
        break;
    case 11:
    case 12:
        break;
    }
    if (param_3 > iVar6) {
        param_3 = iVar6;
    } else if (param_3 < 0) {
        param_3 = 0;
    }
    func_02072fe4(piVar5, param_1, param_2);
    func_02070800(piVar5, 6, (s16)param_3);
    goto done;
bad:
    return -1;
done:
    return sVar4;
}
