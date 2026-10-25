#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern s32 *data_02159444_unused;
extern s32 *data_0215942c;
extern s32 *data_0214f464;
extern void func_02035aa0(u8 *p);
extern void func_02037e4c(u8 *p);
extern u8 *func_020364cc(u8 *p);
extern void func_02036bac(u8 *p, s32 *a, s32 *b);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_020365c8(u8 *p, u8 *q);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_0219693c(u8 *param_1)
{
    s32 local[6];
    u8 *iVar3;
    s32 iVar4;
    s32 bVar2;
    s32 uVar5;
    s32 t0;
    s32 t1;
    s32 t2;

    func_02035aa0(param_1);
    func_02037e4c(param_1);
    iVar3 = func_020364cc(param_1);
    if (iVar3 != 0) {
        *(Tri3 *)local = *(Tri3 *)(iVar3 + 0xbc);
        t2 = *(s32 *)(iVar3 + 0xe8);
        t1 = *(s32 *)(iVar3 + 0xe4);
        t0 = *(s32 *)(iVar3 + 0xe0);
        local[3] = t0;
        local[4] = t1;
        local[5] = t2;
        func_02036bac(param_1, local, &local[3]);
    }
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    bVar2 = func_0203592c(param_1, iVar3);
    if (bVar2 != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = 0;
    } else {
        if (iVar3 == 0) {
            goto L93;
        }
        if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34(iVar3) == 0) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (bVar2 == 0) {
            goto L26;
        }
L93:
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar2 = 1;
        goto LAB_tail;
L26:
        bVar2 = func_02026c40(param_1, iVar3);
        if (bVar2 != 0) {
            func_0202fd7c(param_1);
            func_020362f8(param_1);
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
    }
LAB_tail:
    if (bVar2 != 0) {
        return;
    }
    if (iVar3 != 0) {
        bVar2 = func_020365c8(param_1, iVar3);
        if (bVar2 != 0) {
            func_ov003_0219a368(param_1);
            return;
        }
    }
    if (*(s8 *)(param_1 + 0xa0) != 0) {
        if (*(u16 *)(param_1 + 0xfc) <= 150) {
            return;
        }
        uVar5 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = uVar5;
        if ((u16)(((u32)(u16)uVar5 * 3) >> 16) != 0) {
            return;
        }
    }
    func_0203e908(param_1, 0x3fe);
}
