#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

typedef struct { s32 v[3]; } T3;

static inline void SwapByte(vu8 *p, u32 v)
{
    *(u8 *)(p) = (u8)(v);
}


extern u8 data_0215942c[];
extern u8 data_ov003_0219a728[];
extern u8 data_ov003_0219a720[];
extern void func_02035be8(void *p);
extern void func_02035aa0(void *p);
extern u8 *func_020364cc(void *p);
extern void func_ov003_021975fc(void *p, void *q);
extern s32 func_02036a88(void *p, void *q, void *r, void *s, s16 *t);
extern void func_0203942c(void *p);
extern void func_02037450(void *p, s32 v);
extern s32 func_02027ec8(void *p, s32 v);
extern void func_02037fa0(void *p, s32 v);
extern s32 func_020289d0(void *p, s32 a, s32 b);
extern s32 func_0203592c(void *p, void *q);
extern s32 func_020c1f34(void *q);
extern s32 func_02026c40(void *p, void *q);
extern void func_0202fd7c(void *p);
extern void func_020362f8(void *p);
extern void func_0203e908(void *p, s32 v);
extern s32 func_020365c8(void *p, void *q);
extern void func_ov003_0219a368(void *p);
extern s32 func_0200cf20(void *p);
extern s32 func_02028124(void *p);
extern s32 func_ov003_02198ba0(void *p, s32 a, s32 b, void *c);
extern void func_ov003_02198eac(void *p, s32 a, s32 b, void *c);

void func_ov003_0219728c(u8 *param_1)
{
    u32 iVar5;
    s32 iVar10;
    s16 local_1c[2];
    s32 unaff_r5;
    u16 bVar2;
    u32 bVar4;
    int iVar6;
    s64 lv;
        s16 t;
    s32 *piVar9;

    iVar10 = 0;
    {
        if (*(u16 *)*(u8 **)data_0215942c == 10) {
            t = 1;
        } else if (*(u16 *)*(u8 **)data_0215942c == 1) {
            t = 1;
        } else {
            t = 0;
        }
        bVar2 = (0 != t);
    }
    func_02035be8(param_1);
    func_02035aa0(param_1);
    iVar5 = (s32)func_020364cc(param_1);
    if (0 != iVar5) {
        func_ov003_021975fc(param_1, (void *)iVar5);
        iVar10 = *(s32 *)(iVar5 + 0xf8);
        piVar9 = (s32 *)(param_1 + 0x26c);
        *(T3 *)(0x26c + param_1) = *(T3 *)(iVar5 + 0xbc);
        unaff_r5 = func_02036a88(param_1, (void *)iVar5, piVar9, piVar9, local_1c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x312);
        if (local_1c[0] == 2) {
            SwapByte((vu8 *)(param_1 + 0x97), 1);
        } else {
            SwapByte((vu8 *)(0x97 + param_1), 0);
        }
        if (*(u16 *)(iVar5 + 0xa4) <= 250) {
            iVar6 = func_02027ec8(param_1, 1);
            if (unaff_r5 >= iVar6 * 0x19a + 0x384000) {
                goto set148;
            }
        }
        iVar6 = func_02027ec8(param_1, 1);
        func_02037fa0(param_1, iVar6);
        goto after_cfg;
set148:
        *(s16 *)(0x148 + param_1) = 0x11;
    }
after_cfg:
    iVar6 = func_020289d0(param_1, 0, 1);
    if (iVar6 != 0) {
        return;
    }
    bVar4 = func_0203592c(param_1, (void *)iVar5);
    if (bVar4) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)*(u8 **)data_0215942c == 0x8003) {
        bVar4 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar4 = 0;
    } else {
        if (iVar5 == 0) goto B5d;
        if (*(s16 *)(iVar5 + 0x90) == 0 || *(s16 *)(iVar5 + 0x90) == 2) {
            bVar4 = 1;
        } else if (*(s16 *)(iVar5 + 0x94) == 0x35 && func_020c1f34((void *)iVar5) == 0) {
            bVar4 = 1;
        } else {
            bVar4 = 0;
        }
        if (bVar4 == 0) goto B26c;
B5d:
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar4 = 1;
        goto LAB_c4;
B26c:
        bVar4 = func_02026c40(param_1, (void *)iVar5);
        if (bVar4) {
            func_0202fd7c(param_1);
            func_020362f8(param_1);
            bVar4 = 1;
        } else {
            bVar4 = 0;
        }
    }
LAB_c4:
    if (bVar4) {
        return;
    }
    if (0 != iVar5) {
        bVar4 = func_020365c8(param_1, (void *)iVar5);
        if (!bVar4) {
            func_ov003_0219a368(param_1);
            return;
        }
    }
    bVar4 = func_0200cf20(param_1);
    if (bVar4) {
        func_0203e908(param_1, 0x3c6);
        return;
    }
    if (unaff_r5 < (s32)(((s64)(iVar10 + *(s32 *)(data_ov003_0219a728 + bVar2 * 4)) * (s64)func_02028124(param_1) + 0x800) >> 12)) {
        iVar6 = func_ov003_02198ba0(param_1, unaff_r5, iVar10, (void *)iVar5);
        if (iVar6 != 0) {
            return;
        }
    }
    if (unaff_r5 < (s32)(((s64)(iVar10 + *(s32 *)(data_ov003_0219a720 + bVar2 * 4)) * (s64)func_02028124(param_1) + 0x800) >> 12)) {
        func_ov003_02198eac(param_1, unaff_r5, iVar10, (void *)iVar5);
    }
    return;
}
