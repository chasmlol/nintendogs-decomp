#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 v[3]; } T3;
#define FXS(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))
#define FXU(a, b) ((u32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern s32 func_020364cc(u8 *);
extern void func_0203942c(u8 *);
extern void func_02037450(u8 *, s32);
extern s32 func_02036b94(u8 *, void *);
extern s32 func_02028124(u8 *);
extern void func_0203e8cc(u8 *, s32, s32);
extern void func_02026bac(u8 *);
extern void func_020266f8(u8 *);
extern s32 func_02035770(u8 *, s32);
extern u32 func_02028130(u8 *);
extern s32 func_020289d0(u8 *, s32, s32);
extern s32 func_0203592c(u8 *, s32);
extern s32 func_020c1f34(s32);
extern void func_0203e908(u8 *, s32);
extern void func_020362f8(u8 *);
extern s32 func_02026c40(u8 *, s32);
extern void func_0202fd7c(u8 *);
extern s32 func_020365c8(u8 *, s32);
extern void func_ov003_0219a368(u8 *);
extern s32 data_0215942c;

static inline void SwapV(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02191f30(u8 *param_1, s32 param_2)
{
    s32 iVar4, iVar5, iVar6;
    s32 bVar3;
    s32 *puVar2;
    u32 uVar7;
    s32 iVar8;

    iVar4 = func_020364cc(param_1);
    if (iVar4 != 0) {
        *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar4 + 0xbc);
        func_0203942c(param_1);
        func_02037450(param_1, 0x312);
        iVar5 = func_02036b94(param_1, param_1 + 0x26c);
        iVar4 = *(s32 *)(iVar4 + 0xf8);
        if (*(s32 *)(param_1 + 0x464) != 0) {
            iVar6 = func_02028124(param_1);
            if (iVar5 > FXS(iVar4 + 0x10000, iVar6)) {
                *(s32 *)(param_1 + 0x464) = 0;
                func_0203e8cc(param_1, 0, 0x11);
                func_020266f8(param_1);
                SwapV(1, (vu8 *)(param_1 + 175));
            }
        } else {
            iVar6 = func_02028124(param_1);
            if (iVar5 < FXS(iVar4 + 0x9000, iVar6)) {
                *(s32 *)(param_1 + 0x464) = 1;
                func_0203e8cc(param_1, 0, param_2);
                func_02026bac(param_1);
                SwapV(2, (vu8 *)(param_1 + 175));
            }
        }
    }
    if (*(s32 *)(param_1 + 0x464) != 0 && func_02035770(param_1, 0x32) != 0) {
        uVar7 = func_02028130(param_1);
        *(u32 *)(param_1 + 0x920) = FXU((s32)uVar7, 0x233c);
    }
    iVar8 = func_020364cc(param_1);
    iVar5 = func_020289d0(param_1, 0, 1);
    if (iVar5 != 0) {
        return;
    }
    bVar3 = func_0203592c(param_1, iVar8);
    if (bVar3) {
        return;
    }
    *(vu32 *)(param_1 + 0x488) = *(vu32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)*(s32 *)&data_0215942c == 0x8003) {
        bVar3 = 0;
        goto LAB;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar3 = 0;
        goto LAB;
    }
    if (iVar8 != 0) {
        if (*(s16 *)(iVar8 + 0x90) == 0 || *(s16 *)(iVar8 + 0x90) == 2) {
            bVar3 = 1;
        } else if (*(s16 *)(iVar8 + 0x94) == 0x35 && func_020c1f34(iVar8) == 0) {
            bVar3 = 1;
        } else {
            bVar3 = 0;
        }
        if (bVar3 == 0) {
            goto B254;
        }
    }
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar3 = 1;
    goto LAB;
B254:
    bVar3 = func_02026c40(param_1, iVar8);
    if (bVar3) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar3 = 1;
    } else {
        bVar3 = 0;
    }
LAB:
    if (bVar3) {
        return;
    }
    if (iVar8 != 0 && (bVar3 = func_020365c8(param_1, iVar8), !bVar3)) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    func_ov003_0219a368(param_1);
}
