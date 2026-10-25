#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern s32 *data_0215942c;
extern u8 *func_020364cc(u8 *p);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 a);
extern s32 func_02036b94(u8 *p, u8 *q);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_02028124(u8 *p);
extern void func_ov003_0219a368(u8 *p);

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_ov003_02193854(u8 *param_1)
{
    s32 iVar4;
    s32 iVar5;
    s32 iVar9;
    s32 iVar8;
    s32 bVar3;

    func_020364cc(param_1);
    iVar9 = 0;
    iVar8 = iVar9;
    iVar4 = (s32)func_020364cc(param_1);
    if (iVar4 != 0) {
        *(Tri3 *)(param_1 + 0x26c) = *(Tri3 *)((u8 *)iVar4 + 0xbc);
        func_0203942c(param_1);
        func_02037450(param_1, 0x392);
        iVar8 = func_02036b94(param_1, param_1 + 0x26c);
        *(Tri3 *)(param_1 + 0x3b4) = *(Tri3 *)(param_1 + 0x26c);
        iVar9 = *(s32 *)((u8 *)iVar4 + 0xf8);
    }
    iVar5 = func_020289d0(param_1, 0, 1);
    if (iVar5 != 0) {
        return;
    }
    bVar3 = func_0203592c(param_1, (u8 *)iVar4);
    if (bVar3 != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar3 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar3 = 0;
    } else {
        if (iVar4 != 0) {
            if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
                bVar3 = 1;
            } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && func_020c1f34((u8 *)iVar4) == 0) {
                bVar3 = 1;
            } else {
                bVar3 = 0;
            }
            if (bVar3 == 0) {
                goto Lcall;
            }
        }
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar3 = 1;
        goto LAB_tail;
    }
    goto LAB_tail;
Lcall:
    bVar3 = func_02026c40(param_1, (u8 *)iVar4);
    if (bVar3 != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar3 = 1;
    } else {
        bVar3 = 0;
    }
LAB_tail:
    if (bVar3 != 0) {
        return;
    }
    iVar4 = func_02028124(param_1);
    if (iVar8 > mulr(iVar9 + 0x10000, iVar4)) {
        func_ov003_0219a368(param_1);
        return;
    }
    iVar4 = func_02028124(param_1);
    if (iVar8 >= mulr(iVar9 + 0x2000, iVar4)) {
        return;
    }
    func_0203e908(param_1, 0x3f6);
}
