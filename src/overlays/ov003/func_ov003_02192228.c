#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T12;

extern u8 data_0215942c[];
extern u8 *func_020364cc(u8 *p);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, int v);
extern s32 func_02036b94(u8 *p, s32 *q);
extern s32 func_02028124(u8 *p);
extern void func_0203e8cc(u8 *p, int a, int b);
extern void func_020266f8(u8 *p);
extern void func_02026bac(u8 *p);
extern s32 func_020289d0(u8 *p, int a, int b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, int v);
extern s32 func_020365c8(u8 *p, u8 *q);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_02192228(u8 *param_1)
{
    s64 lVar1;
    s32 bVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    u8 *puVar8;

    iVar3 = (s32)func_020364cc(param_1);
    if (iVar3 != 0) {
        puVar8 = param_1 + 0x26c;
        *(T12 *)(param_1 + 0x26c) = *(T12 *)(iVar3 + 0xbc);
        *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x26c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x312);
        iVar4 = func_02036b94(param_1, (s32 *)puVar8);
        iVar3 = *(s32 *)(iVar3 + 0xf8);
        if (*(s32 *)(param_1 + 0x464) != 0) {
            iVar5 = func_02028124(param_1);
            lVar1 = (s64)(iVar3 + 0x10000) * iVar5 + 0x800;
            if (iVar4 > (s32)(lVar1 >> 12)) {
                *(u32 *)(param_1 + 0x464) = 0;
                func_0203e8cc(param_1, 0, 0x11);
                func_020266f8(param_1);
                *(vu8 *)(param_1 + 0xaf) = 1;
            }
        } else {
            iVar5 = func_02028124(param_1);
            lVar1 = (s64)(iVar3 + 0x9000) * iVar5 + 0x800;
            if (iVar4 < (s32)(lVar1 >> 12)) {
                *(u32 *)(param_1 + 0x464) = 1;
                func_0203e8cc(param_1, 0, 0);
                func_02026bac(param_1);
                *(vu8 *)(param_1 + 0xaf) = 2;
            }
        }
    }
    iVar3 = (s32)func_020364cc(param_1);
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    bVar2 = func_0203592c(param_1, (u8 *)iVar3);
    if (bVar2) {
        return;
    }
    *(s32 *)((int)param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)*(u8 **)data_0215942c == 0x8003) {
        bVar2 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = 0;
    } else {
        if (iVar3 == 0) goto five;
        if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34((u8 *)iVar3) == 0) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (bVar2 == 0) goto out;
    five:
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar2 = 1;
        goto done;
    out:
        bVar2 = func_02026c40(param_1, (u8 *)iVar3);
        if (bVar2) {
            func_0202fd7c(param_1);
            func_020362f8(param_1);
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
    }
done:
    if (bVar2) {
        return;
    }
    if (iVar3 != 0 && (bVar2 = func_020365c8(param_1, (u8 *)iVar3)) == 0) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        func_ov003_0219a368(param_1);
        return;
    }
}
