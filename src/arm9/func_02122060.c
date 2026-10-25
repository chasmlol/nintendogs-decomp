#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u8 data_0214efdc[];

extern void func_02112798(u32 a, u32 b, u32 c);
extern s32 func_02112320(u32 a, u32 b, u32 c);
extern u8 func_02112b74(u32 a, u32 b);
extern u8 func_02112b28(u32 a, u32 b);
extern void func_021120d4(u32 a, u32 b, s16 *c, s16 *d);
extern void func_020a1a40(u32 a);

void func_02122060(u8 *param_1)
{
    u32 uVar12;
    u32 uVar11;
    s32 bVar4;
    s32 bVar5;
    s32 bVar10;
    s32 bVar9;
    s32 iVar7;
    s32 iVar8;
    u32 uVar2;
    u32 uVar3;
    u8 bVar6;
    s16 sStack_20;
    s16 sStack_1e;
    u32 uT;

    func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 3), 1);
    func_02112798(2, (u16)*(u32 *)(param_1 + 4), 1);
    func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 1), 0);
    func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 4), 0);
    func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 8), 0);
    func_02112798(2, (u16)*(u32 *)(param_1 + 4), 1);
    func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 3), 1);
    func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 2), 0);
    func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 5), 0);
    if (*(s32 *)(param_1 + 0x4c) == 0) {
        func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 3), 0);
        func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 5), 1);
    } else if (*(s32 *)(param_1 + 0x4c) == *(s32 *)(param_1 + 0x44) - *(s32 *)(param_1 + 0x3c) + 2) {
        func_02112798(2, (u16)*(u32 *)(param_1 + 4), 0);
        func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 2), 1);
    }
    if (*(s32 *)(data_0215be48 + 0x4860) == 0) {
        return;
    }
    uVar12 = data_0214f004[0];
    uVar11 = data_0214f004[1];
    iVar7 = func_02112320(2, uVar12, uVar11);
    iVar8 = *(s32 *)(param_1 + 8);
    bVar10 = 1;
    if (iVar8 + 1 != iVar7 && (u16)(*(u16 *)(data_0214efdc + 2) & 0x40) == 0) {
        bVar10 = 0;
    }
    bVar9 = 1;
    if (iVar8 != iVar7 && (u16)(*(u16 *)(data_0214efdc + 2) & 0x80) == 0) {
        bVar9 = 0;
    }
    bVar4 = 0;
    if (bVar10 && ((*(u16 *)(data_0214f004 + 2) & 2) != 0 || (u16)(*(u16 *)data_0214efdc & 0x40) != 0)) {
        bVar4 = 1;
    }
    bVar5 = 0;
    if (bVar9 && ((*(u16 *)(data_0214f004 + 2) & 2) != 0 || (u16)(*(u16 *)data_0214efdc & 0x80) != 0)) {
        bVar5 = 1;
    }
    if ((bVar10 && *(s32 *)(param_1 + 0x64) != 0) || bVar4) {
        *(s32 *)(param_1 + 0x64) = 1;
        if (*(s32 *)(param_1 + 0x4c) > 0) {
            *(s32 *)(param_1 + 0x4c) = *(s32 *)(param_1 + 0x4c) - 1;
            *(s32 *)(param_1 + 0x60) = *(s32 *)(param_1 + 0x60) + 1;
            *(s32 *)(param_1 + 0x38) = 1;
            if (*(s32 *)(param_1 + 0x60) < 3) {
                *(s32 *)(param_1 + 0x54) = 16;
            } else {
                *(s32 *)(param_1 + 0x54) = 8;
            }
            func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 3), 0);
            func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 4), 1);
            if (bVar4) {
                func_020a1a40(0x27);
            }
            return;
        }
        if (bVar4) {
            func_020a1a40(0x1f);
        }
        return;
    }
    if ((bVar9 && *(s32 *)(param_1 + 0x64) != 0) || bVar5) {
        *(s32 *)(param_1 + 0x64) = 1;
        if (*(s32 *)(param_1 + 0x4c) < *(s32 *)(param_1 + 0x44) - *(s32 *)(param_1 + 0x3c) + 2) {
            *(s32 *)(param_1 + 0x4c) = *(s32 *)(param_1 + 0x4c) + 1;
            *(s32 *)(param_1 + 0x60) = *(s32 *)(param_1 + 0x60) + 1;
            *(s32 *)(param_1 + 0x38) = 1;
            if (*(s32 *)(param_1 + 0x60) < 3) {
                *(s32 *)(param_1 + 0x54) = 16;
            } else {
                *(s32 *)(param_1 + 0x54) = 8;
            }
            func_02112798(2, (u16)*(u32 *)(param_1 + 4), 0);
            func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 1), 1);
            if (bVar5) {
                func_020a1a40(0x27);
            }
            return;
        }
        if (bVar5) {
            func_020a1a40(0x1f);
        }
        return;
    }
    if (iVar8 + 2 == iVar7 && (*(u16 *)(data_0214f004 + 2) & 2) != 0) {
        s32 bVar4;
        s32 bVar9;
        s32 bVar10;
        uT = (u16)(*(u32 *)(param_1 + 4) + 7);
        bVar6 = func_02112b74(2, uT);
        uVar2 = (bVar6 + 1) / 2;
        bVar6 = func_02112b28(2, uT);
        uVar3 = (bVar6 + 1) / 2;
        sStack_20 = 0;
        sStack_1e = 0;
        func_021120d4(2, uT, &sStack_20, &sStack_1e);
        bVar4 = 0;
        bVar9 = 0;
        bVar10 = 0;
        if ((s32)((s32)sStack_20 - uVar2) <= (s32)uVar12 && (s32)uVar12 <= (s32)((s32)sStack_20 + uVar2)) {
            bVar10 = 1;
        }
        if (bVar10 && (s32)((s32)sStack_1e - uVar3) <= (s32)uVar11) {
            bVar9 = 1;
        }
        if (bVar9 && (s32)uVar11 <= (s32)((s32)sStack_1e + uVar3)) {
            bVar4 = 1;
        }
        if (bVar4) {
            *(s32 *)(param_1 + 0x60) = 0;
            *(s32 *)(param_1 + 0x38) = 2;
            func_02112798(2, (u16)(*(u32 *)(param_1 + 4) + 8), 1);
            return;
        }
    }
    *(s32 *)(param_1 + 0x60) = 0;
    *(s32 *)(param_1 + 0x64) = 0;
    return;
}
