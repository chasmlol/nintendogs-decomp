#include "ctx.h"

extern int *data_0215942c;
extern s32 func_020364cc(int a);
extern void func_02037450(int a, int b);
extern void func_02035be8(int a);
extern void func_02035aa0(int a);
extern s32 func_020289d0(int a, int b, int c);
extern s32 func_0203592c(int a, int b);
extern s32 func_020c1f34(int a);
extern void func_0203e908(int a, int b);
extern void func_020362f8(int a);
extern s32 func_02026c40(int a, int b);
extern void func_0202fd7c(int a);
extern s32 func_020365c8(int a, int b);
extern void func_ov003_0219a368(int a);
extern s32 func_0200ce4c(int a);
extern s32 func_02036a88(int a, int b, int c, int d, int e);
extern s32 func_ov003_02198eac(int a, int b, int c, int d);

typedef struct {
    u32 w[3];
} T3;

void func_ov003_02197008(int param_1)
{
    int iVar3;
    int iVar4;
    int iVar7;
    int bVar2;
    s16 asStack_14[2];

    iVar3 = func_020364cc(param_1);
    if (iVar3 != 0) {
        *(T3 *)(param_1 + 620) = *(T3 *)(iVar3 + 188);
        *(T3 *)(param_1 + 632) = *(T3 *)(param_1 + 620);
        func_02037450(param_1, 0x300);
    }
    func_02035be8(param_1);
    func_02035aa0(param_1);
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return;
    }
    if (func_0203592c(param_1, iVar3) != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = 0;
        goto L2164;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = 0;
        goto L2164;
    }
    if (iVar3 != 0) {
        if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34(iVar3) == 0) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (bVar2 == 0) {
            goto P130;
        }
    }
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar2 = 1;
    goto L2164;
P130:
    bVar2 = func_02026c40(param_1, iVar3);
    if (bVar2 != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
L2164:
    if (bVar2 != 0) {
        return;
    }
    if (iVar3 != 0 && func_020365c8(param_1, iVar3) == 0) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (func_0200ce4c(param_1) != 0) {
        return;
    }
    if (iVar3 != 0 && *(u16 *)(iVar3 + 0x96) <= 1) {
        iVar7 = *(s32 *)(iVar3 + 0xf8);
        iVar4 = func_02036a88(param_1, iVar3, param_1 + 0x26c, param_1 + 0x26c, (int)asStack_14);
        iVar3 = func_ov003_02198eac(param_1, iVar4, iVar7, iVar3);
        if (iVar3 == 0) {
            func_ov003_0219a368(param_1);
        }
        return;
    }
    func_ov003_0219a368(param_1);
}
