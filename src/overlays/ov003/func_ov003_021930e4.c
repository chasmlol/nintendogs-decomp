#include "ctx.h"

extern u8 data_0215942c[];
extern s32 func_02028124(u8 *p);
extern s32 func_0202508c(u8 *p, int a, int b, s32 c);
extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, int v);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203592c(u8 *p, u8 *q);
extern void func_0203e908(u8 *p, int v);
extern void func_020362f8(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_ov003_0219a368(u8 *p);

typedef struct { u32 w[3]; } T12;

static inline s32 FXM(s32 x, s32 k)
{
    s64 v = (s64)x * k + 0x800;
    return (s32)(v >> 12);
}

void func_ov003_021930e4(u8 *param_1)
{
    s32 bVar2;
    s32 iVar4;
    s32 iVar5;
    u8 *q;
    s32 r;

    r = func_02028124(param_1);
    iVar4 = func_0202508c(param_1, 0xf, 0x1e, FXM(r, 0xb8));
    if (iVar4 == 0) {
        r = func_02028124(param_1);
        func_0202508c(param_1, 0x29, 0x38, FXM(r, -0xb8));
    }
    q = func_020364cc(param_1);
    iVar4 = (s32)q;
    if (q != 0) {
        if (*(s16 *)(q + 0x90) == 0 || *(s16 *)(q + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(q + 0x94) == 0x35 && func_020c1f34(q) == 0) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (!bVar2) {
            func_02039448(param_1);
            *(T12 *)(param_1 + 0x278) = *(T12 *)(q + 0xbc);
            func_02037450(param_1, 0x300);
        }
    }
    iVar5 = func_0203567c(param_1);
    if (iVar5 == 0) {
        return;
    }
    bVar2 = func_0203592c(param_1, (u8 *)iVar4);
    if (bVar2) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)*(u8 **)data_0215942c == 0x8003) {
        bVar2 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = 0;
    } else {
        if (iVar4 != 0) {
            if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
                bVar2 = 1;
            } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && func_020c1f34((u8 *)iVar4) == 0) {
                bVar2 = 1;
            } else {
                bVar2 = 0;
            }
            if (!bVar2) goto LAB_A;
        }
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar2 = 1;
        goto done;
LAB_A:
        bVar2 = func_02026c40(param_1, (u8 *)iVar4);
        if (bVar2) {
            func_0202fd7c(param_1);
            func_020362f8(param_1);
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
    }
done:
    if (!bVar2) {
        func_ov003_0219a368(param_1);
    }
}
