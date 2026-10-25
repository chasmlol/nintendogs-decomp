#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u8 *data_0215942c;
extern u8 *func_020364cc(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern void func_020362f8(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_02196054(u8 *param_1)
{
    u8 *iVar3;
    s32 iVar4;
    s32 bVar2;

    iVar3 = func_020364cc(param_1);
    if (iVar3 != 0) {
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)(iVar3 + 0xbc);
    }
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    if (func_0203592c(param_1, iVar3) != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = 0;
        goto L144;
    }
    if (*(s16 *)(param_1 + 0xfa) == 35) {
        bVar2 = 0;
        goto L144;
    }
    if (iVar3 == 0) {
        goto Lfx;
    }
    if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
        bVar2 = 1;
    } else if (*(s16 *)(iVar3 + 0x94) == 53 && func_020c1f34(iVar3) == 0) {
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
    if (bVar2 == 0) {
        goto L118;
    }
Lfx:
    func_0203e908(param_1, 93);
    func_020362f8(param_1);
    bVar2 = 1;
    goto L144;
L118:
    bVar2 = func_02026c40(param_1, iVar3);
    if (bVar2 != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
L144:
    if (bVar2 != 0) {
        return;
    }
    func_ov003_0219a368(param_1);
}
