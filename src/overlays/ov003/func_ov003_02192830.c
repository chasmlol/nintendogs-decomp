#include "ctx.h"

typedef struct { s32 w[3]; } T3;

extern u16 *data_0215942c;
extern s32 *data_0214f464;
extern u8 *func_020364cc(u8 *p);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, u32 a);
extern s32 func_02009bd0(s32 *a, s32 *b);
extern void func_02039448(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern s32 func_020365c8(u8 *p, u8 *q);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_02192830(u8 *param_1, s32 param_2, u32 param_3)
{
    u8 *iVar3;
    s32 iVar4;
    s32 iVar7;
    s32 bVar2;
    s32 uVar9;
    s32 nv;

    iVar3 = func_020364cc(param_1);
    iVar7 = 0;
    if (iVar3 != 0) {
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)(iVar3 + 0xbc);
        if (param_2 != 0) {
            *(T3 *)(param_1 + 0x26c) = *(T3 *)(param_1 + 0x3b4);
            func_0203942c(param_1);
            iVar7 = func_02037450(param_1, param_3);
        } else {
            *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x3b4);
            func_02039448(param_1);
            func_02037450(param_1, param_3);
            iVar7 = func_02009bd0((s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2a0));
        }
    }
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    if (func_0203592c(param_1, iVar3)) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = 0;
        goto after;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = 0;
        goto after;
    }
    if (iVar3 != 0) {
        if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(iVar3 + 0x94) == 53 && func_020c1f34(iVar3) == 0) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (bVar2 == 0) {
            goto zz;
        }
    }
    func_0203e908(param_1, 93);
    func_020362f8(param_1);
    bVar2 = 1;
    goto after;
zz:
    bVar2 = func_02026c40(param_1, iVar3);
    if (bVar2) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
after:
    if (bVar2) {
        return;
    }
    if (iVar3 != 0 && func_020365c8(param_1, iVar3)) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (iVar7 < 65536) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    uVar9 = (u16)((((u32)(u16)nv) * 3) >> 16);
    if (uVar9 != 0) {
        return;
    }
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    uVar9 = (u16)((((u32)(u16)nv) * 3) >> 16);
    switch (uVar9) {
    case 0:
        func_0203e908(param_1, 1023);
        return;
    case 1:
        func_0203e908(param_1, 1024);
        return;
    case 2:
        func_0203e908(param_1, 1025);
        return;
    default:
        return;
    }
}
