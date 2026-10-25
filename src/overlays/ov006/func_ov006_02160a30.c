#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } V3;

extern u8 *data_0214f464;
extern u8 *data_02159444;
extern u8 *data_02159424;
extern u8 *data_0214f45c;

void func_ov006_02161484(u32 a, s32 *b, s32 c, s32 d);
s32 func_02009bd0(s32 *a, s32 *b);
s32 func_02036434(u32 a, s32 b);
void func_020362ec(u32 a, s32 b);
s32 func_020364a8(u32 a);
s32 func_02027e4c(u32 a, s32 b);
s32 func_ov006_0216215c(s32 a, s32 b);
void func_ov006_02160f70(u32 a);
void func_0203942c(u32 a);
void func_02037450(u32 a, s32 b);
void func_02037f20(u32 a, s32 b);
s32 func_02036484(u32 a);
void func_0203e908(u32 a, s32 b);
void func_ov006_02161344(u32 a);
s32 func_0200c498(s32 a, s32 b);
void func_020bbcf8(s32 a);

void func_ov006_02160a30(u8 *param_1)
{
    s32 local_20[2];
    u32 iVar5;
    s32 *piVar9;
    int q50;
    int iVar3;
    s32 *piVar6;
    s32 iVar4;
    u32 uVar2;
    u32 uVar10;
    s32 bVar11;
    u16 uVar1;
    u16 uVar7;
    s32 uVar8;

    local_20[0] = 0;
    uVar2 = *(s16 *)(param_1 + 0x13e);
    *(s16 *)(0x13e + param_1) = -1;
    func_ov006_02161484((u32)param_1, local_20, 1, 1);
    piVar9 = (s32 *)(0x74 + data_0214f464);
    if (piVar9 != 0) {
        int dist = func_02009bd0(piVar9, (s32 *)(0x2a0 + param_1));
        dist = dist - *(s32 *)((u8 *)piVar9 + 0x24);
        if (dist < local_20[0]) {
            iVar5 = func_02036434((u32)param_1, 12);
            if (iVar5 != 0) {
                local_20[0] = dist;
                func_020362ec((u32)param_1, 12);
            }
            uVar8 = *(u32 *)(data_0214f464 + 0x7c);
            *(V3 *)(0x3b4 + param_1) = *(V3 *)piVar9;
        }
    }
    if (*(s16 *)(0x13e + param_1) == -1) {
        func_020362ec((u32)param_1, (u32)uVar2);
            uVar7 = *(u32 *)(data_0214f464 + 0x78);
    }
    piVar6 = (s32 *)func_020364a8((u32)param_1);
    bVar11 = *(s16 *)(param_1 + 0x13e) == 12;
    if (bVar11) {
        piVar9 = (s32 *)(0x74 + data_0214f464);
    } else {
        piVar9 = 0;
    }
    iVar4 = 0x3e8000;
    uVar10 = 0;
    iVar3 = 0;
    if (piVar6 != 0) {
        *(V3 *)(param_1 + 0x26c) = *(V3 *)(piVar6 + 2);
        q50 = *(s32 *)(data_02159444 + 0x50);
        iVar3 = func_02027e4c((u32)param_1, 0);
        iVar3 = (iVar3 + (3 * q50 >> 15)) * 0x10000 >> 16;
        uVar10 = (u32)func_ov006_0216215c(piVar6[12], 0);
        iVar4 = func_02009bd0(2 + piVar6, (s32 *)(param_1 + 0x2a0));
    } else if (0 != piVar9) {
        *(V3 *)(param_1 + 0x26c) = *(V3 *)piVar9;
        q50 = *(s32 *)(0x50 + data_02159444);
        iVar3 = func_02027e4c((u32)param_1, 0);
        iVar3 = (iVar3 + (q50 * 3 >> 15)) * 0x10000 >> 16;
        func_ov006_02160f70((u32)param_1);
    }
    func_0203942c((u32)param_1);
    func_02037450((u32)param_1, 0x310);
    func_02037f20((u32)param_1, iVar3);
    if ((*(u16 *)(0x84 + data_02159444) & 1) == 0) {
        *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
    } else {
        *(s32 *)(0x464 + param_1) = 0;
    }
    if (*(s32 *)(param_1 + 0x464) > 300 && *(s16 *)data_02159424 == 0) {
        uVar1 = *(u16 *)(*(u8 **)(0x20 + data_0214f45c) + 0x2e);
        uVar10 = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = uVar10;
        func_020362ec((u32)param_1, (s16)((u16)(((u32)uVar1 * (u16)uVar10) >> 16) + 13));
        if (func_02036484((u32)param_1) != 0) {
            uVar10 = *(u32 *)data_0214f464 * 0x10dcd + 1;
            *(u32 *)data_0214f464 = uVar10;
            switch ((u16)((u32)(uVar10 << 16) >> 30)) {
            case 0:
                func_0203e908((u32)param_1, 0x4d5);
                return;
            case 1:
                func_0203e908((u32)param_1, 0x4d6);
                return;
            case 2:
                func_0203e908((u32)param_1, 0x4d7);
                return;
            case 3:
                func_0203e908((u32)param_1, 0x4d8);
                return;
            }
        }
        func_ov006_02161344((u32)param_1);
        return;
    }
    if (iVar4 >= (s32)uVar10) {
        return;
    }
    if (piVar6 == 0) {
        bVar11 = 0;
        goto CHK;
    }
    switch (piVar6[12]) {
    case 0:
    default:
        goto ZERO;
    case 1:
    case 2:
        func_0203e908((u32)param_1, 0x4e3);
        bVar11 = 1;
        goto CHK;
    case 3:
        func_0203e908((u32)param_1, 0x4e8);
        bVar11 = 1;
        goto CHK;
    case 4:
        iVar3 = func_02027e4c((u32)param_1, 2);
        uVar10 = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = uVar10;
        if (iVar3 < (u16)((((u16)uVar10) * 1000u) >> 16)) {
            func_0203e908((u32)param_1, 0x4ed);
            bVar11 = 1;
            goto CHK;
        }
        func_0203e908((u32)param_1, 0x4ec);
        bVar11 = 1;
        goto CHK;
    case 5:
        func_0203e908((u32)param_1, 0x4ee);
        bVar11 = 1;
        goto CHK;
    }
ZERO:
    bVar11 = 0;
CHK:
    if (!bVar11) {
        return;
    }
    iVar3 = (s16)piVar6[8];
    if (*(s8 *)(param_1 + 0x89) > iVar3 && 0 <= piVar6[9]) {
        iVar3 = (s16)piVar6[9];
    }
    iVar5 = func_0200c498(9, (s16)piVar6[15]);
    iVar4 = -1;
    if (iVar5 != 0 && (iVar4 = (s16)*(s32 *)(iVar5 + 0x20), *(s8 *)(0x89 + param_1) > iVar4) && *(s32 *)(0x24 + iVar5) >= 0) {
        iVar4 = (s16)*(s32 *)(iVar5 + 0x24);
    }
    if (iVar3 == *(s8 *)(param_1 + 0x89)) {
        *(s16 *)(data_0214f464 + 0x34) = (s16)iVar3;
    } else if (iVar4 == *(s8 *)(0x89 + param_1)) {
        *(s16 *)(data_0214f464 + 0x34) = iVar4;
    } else {
        *(s16 *)(0x34 + data_0214f464) = (s16)iVar3;
    }
    *(s16 *)(data_0214f464 + 0x36) = (s16)piVar6[12];
    if (0 <= iVar3) {
        func_020bbcf8(iVar3);
        return;
    }
    func_020bbcf8(iVar4);
}
