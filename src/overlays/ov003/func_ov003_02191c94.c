#include "ctx.h"

typedef struct { u32 a, b, c; } T3;

extern s16 data_02191c94_unused;
extern void *data_0215942c;

extern u8 *func_020364cc(u8 *a);
extern s32 func_020289d0(u8 *a, u32 b, u32 c);
extern s32 func_0203592c(u8 *a, u8 *b);
extern void func_0203942c(u8 *a);
extern void func_02037450(u8 *a, u32 b);
extern s32 func_020c1f34(u8 *a);
extern s32 func_02026c40(u8 *a, u8 *b);
extern void func_0202fd7c(u8 *a);
extern void func_020362f8(u8 *a);
extern void func_0203e908(u8 *a, u32 b);
extern s32 func_020365c8(u8 *a, u8 *b);
extern void func_ov003_0219a368(u8 *a);

#define FXM(a, b) ((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12))

void func_ov003_02191c94(u8 *param_1)
{
    u8 *iVar5;
    s32 iVar6, iVar8;
    s32 iVar5s;
    s32 bVar4;
    T3 tmp;

    iVar5 = func_020364cc(param_1);
    if (iVar5 != 0) {
        tmp = *(T3 *)(iVar5 + 0xbc);
        *(T3 *)(param_1 + 0x3b4) = tmp;
        iVar8 = *(s32 *)(param_1 + 0x2a0);
        iVar6 = tmp.a - iVar8;
        iVar5s = tmp.c - *(s32 *)(param_1 + 0x2a8);
        if (FXM(iVar6, *(s32 *)(param_1 + 0x18c)) + FXM(iVar5s, *(s32 *)(param_1 + 0x194)) > 0) {
            *(s32 *)(param_1 + 0x26c) = iVar8 + (iVar6 >> 2) - iVar5s;
            *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
            *(s32 *)(param_1 + 0x274) = (*(s32 *)(param_1 + 0x2a8) + (iVar5s >> 2)) + iVar6;
        } else {
            *(s32 *)(param_1 + 0x26c) = (iVar8 + (iVar6 >> 2)) + iVar5s;
            *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
            *(s32 *)(param_1 + 0x274) = (*(s32 *)(param_1 + 0x2a8) + (iVar5s >> 2)) - iVar6;
        }
        func_0203942c(param_1);
        func_02037450(param_1, 0x392);
    }
    iVar5 = func_020364cc(param_1);
    iVar6 = func_020289d0(param_1, 0, 1);
    if (iVar6 != 0) {
        return;
    }
    if (func_0203592c(param_1, iVar5)) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar4 = 0;
        goto LAB;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar4 = 0;
        goto LAB;
    } else {
        if (iVar5 == 0) goto P5D;
        if (*(s16 *)(iVar5 + 0x90) == 0 || *(s16 *)(iVar5 + 0x90) == 2) {
            bVar4 = 1;
        } else if (*(s16 *)(iVar5 + 0x94) == 0x35 && func_020c1f34(iVar5) == 0) {
            bVar4 = 1;
        } else {
            bVar4 = 0;
        }
        if (!bVar4) goto P26;
    }
P5D:
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar4 = 1;
    goto LAB;
P26:
    if (func_02026c40(param_1, iVar5)) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar4 = 1;
    } else {
        bVar4 = 0;
    }
LAB:
    if (bVar4) {
        return;
    }
    if (iVar5 != 0 && !(bVar4 = func_020365c8(param_1, iVar5))) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        func_ov003_0219a368(param_1);
    }
}
