#pragma avoid_byte strb
#include "ctx.h"
#pragma optimization_level 2


typedef struct { u32 w[1]; } Wd;
extern u32 data_0214f464[];
extern void func_02027668(u32 a, u32 *b);
extern void func_02027654(u32 a, u32 *b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, u32 v);
extern void func_020381f0(u8 *p);
extern s32 func_020328f0(u8 *p);
extern s32 func_02028124(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern void func_0202645c(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202508c(u8 *p, u32 a, u32 b, u32 c);
extern s32 func_0203567c(u8 *p);
extern void func_02026aac(u8 *p);
extern void func_02025bb0(u8 *p);
extern s32 func_02035770(u8 *p, u32 v);
extern u32 func_02027708(u32 a);
extern s32 func_02032aac(u8 *p, u32 v);
extern void func_0202707c(u32 a, u32 b);
extern void func_02027494(u32 a, u32 *b);

void func_0204da64(u8 *param_1, u32 param_2, s32 param_3)
{
    s32 aiStack_28[3];
    int iVar8;
    s32 uVar10;
    s32 iVar6;
    s32 iVar3;
    u32 uVar5;
    u32 uVar5_w1;
    u32 uVar9;
    s32 bVar4;
    s64 lVar1;
    s64 lVar2;
    int uVar7;

    if (param_2 == 0) {
        return;
    }
    iVar8 = *(s32 *)(param_1 + 0x464);
    if (0 == iVar8) goto S0;
    if (iVar8 == 1) goto S1;
    if (iVar8 == 2) goto S2;
    return;
S0:
        func_02027668(param_2, (u32 *)aiStack_28);
        func_02027654(param_2, (u32 *)(param_1 + 948));
        iVar8 = *(s32 *)(param_1 + 0x2a0);
        uVar9 = aiStack_28[0] - iVar8;
        uVar7 = aiStack_28[2] - *(s32 *)(param_1 + 0x2a8);
        lVar2 = (s64)(s32)uVar7 * (s64)*(s32 *)(param_1 + 0x194) + 0x800;
        lVar1 = (s64)(s32)uVar9 * (s64)*(s32 *)(param_1 + 0x18c) + 0x800;
        if ((s32)(((u32)(lVar1 >> 12)) + ((u32)(lVar2 >> 12))) > 0) {
            *(u32 *)(param_1 + 0x26c) = (iVar8 + uVar9 * 2) - uVar7;
            *(u32 *)(param_1 + 0x270) = *(u32 *)(param_1 + 0x2a4);
            *(u32 *)(param_1 + 0x274) = (*(s32 *)(param_1 + 0x2a8) + uVar7 * 2) + uVar9;
        } else {
            *(u32 *)(0x26c + param_1) = (iVar8 + uVar9 * 2) + uVar7;
            *(u32 *)(param_1 + 0x270) = *(u32 *)(0x2a4 + param_1);
            *(u32 *)(param_1 + 0x274) = (*(s32 *)(param_1 + 0x2a8) + uVar7 * 2) - uVar9;
        }
        func_0203942c(param_1);
        func_02037450(param_1, 0x304);
        func_020381f0(param_1);
        uVar5 = *(u32 *)data_0214f464[0] * 0x10dcd + 1;
        *(u32 *)data_0214f464[0] = uVar5;
        if ((u16)((((u32)(u16)uVar5) * 100u) >> 16) != 0) {
            bVar4 = func_020328f0(param_1);
            if (!bVar4) {
                return;
            }
        }
        iVar6 = func_02028124(param_1);
        iVar3 = 0x11e;
        iVar8 = 0x11f;
        uVar5_w1 = (u32)(((s64)(s32)uVar9 * (s32)uVar9 + 0x800) >> 12);
        uVar10 = (u32)(((s64)(s32)uVar7 * (s32)uVar7 + 0x800) >> 12);
        if ((s32)uVar5_w1 + (s32)uVar10 > iVar6 * 0x19) {
            *(u32 *)(0x464 + param_1) = 1;
            func_0203e8cc(param_1, 0, iVar8);
        } else {
            *(u32 *)(param_1 + 0x464) = 2;
            func_0203e8cc(param_1, 0, iVar3);
        }
        *(u8 *)(param_1 + 0x93) = 0;
        func_0202645c(param_1);
        func_02025548(param_1);
        if (*(s8 *)(param_1 + 0x8b) == 2) {
            uVar7 = *(u32 *)data_0214f464[0] * 0x10dcd + 1;
            *(u32 *)data_0214f464[0] = uVar7;
            switch ((u16)((((u32)(u16)uVar7) * 6u) >> 16)) {
            case 0: func_0203e8cc(param_1, 1, 0x3a); return;
            case 1: func_0203e8cc(param_1, 1, 0x3b); return;
            case 2: func_0203e8cc(param_1, 1, 0x3c); return;
            case 3: func_0203e8cc(param_1, 1, 0x3d); return;
            case 4: func_0203e8cc(param_1, 1, 0x3e); return;
            case 5: func_0203e8cc(param_1, 1, 0x3f); return;
            default: goto fin;
            }
        } else {
            uVar7 = *(u32 *)data_0214f464[0] * 0x10dcd + 1;
            *(u32 *)data_0214f464[0] = uVar7;
            switch ((u16)((((u16)uVar7) * 6u) >> 16)) {
            case 0: func_0203e8cc(param_1, 1, 0x3a); return;
            case 1: func_0203e8cc(param_1, 1, 0x3d); return;
            case 2: func_0203e8cc(param_1, 1, 0x3e); return;
            case 3: func_0203e8cc(param_1, 1, 0x3f); return;
            case 4: func_0203e8cc(param_1, 1, 0x40); return;
            case 5: func_0203e8cc(param_1, 1, 0x41); return;
            default: goto fin;
            }
        }
        goto fin;
S1:
    {
            uVar7 = func_02028124(param_1);
            func_0202508c(param_1, 0x10, 0x26, (u32)((((s64)(s32)uVar7 * 0x117) + 0x800) >> 12));
    }
S2:
    func_02027668(param_2, (u32 *)(param_1 + 0x26c));
    func_0203942c(param_1);
    func_02037450(param_1, 0x300);
    iVar8 = func_0203567c(param_1);
    if (iVar8 != 0) {
        func_0203e8cc(param_1, 0, 0x13);
        func_0203e8cc(param_1, 1, 0);
        func_02026aac(param_1);
        func_02025bb0(param_1);
        *(u8 *)(param_1 + 0x93) = 7;
        *(u32 *)(param_1 + 0x464) = 0;
    }
    if (param_3 == 0) {
        return;
    }
    iVar8 = func_02035770(param_1, 10);
    if (iVar8 == 0) {
        return;
    }
    uVar7 = func_02027708(param_2);
    bVar4 = func_02032aac(param_1, uVar7);
    if (!bVar4) {
        return;
    }
    uVar7 = *(u32 *)data_0214f464[0] * 0x10dcd + 1;
    *(u32 *)data_0214f464[0] = uVar7;
    if ((u16)((((u32)(u16)uVar7) * 10u) >> 16) != 0) {
        return;
    }
    func_0202707c(param_2, 5);
    func_02027494(param_2, (u32 *)(param_1 + 0x2a0));
fin: ;
}
