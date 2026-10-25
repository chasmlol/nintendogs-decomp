#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern int *data_0215942c;
extern s32 func_02028124(int a);
extern void func_0202508c(int a, int b, int c, u32 d);
extern s32 func_020364cc(int a);
extern s32 func_020c1f34(int a);
extern void func_02039448(int a);
extern void func_02037450(int a, int b);
extern s32 func_0203567c(int a);
extern s32 func_0203592c(int a, int b);
extern void func_0203e908(int a, int b);
extern void func_020362f8(int a);
extern s32 func_02026c40(int a, int b);
extern void func_0202fd7c(int a);
extern void func_ov003_0219a368(int a);

void func_ov003_02192eec(int param_1)
{
    u32 uVar3;
    int iVar4;
    int iVar5;
    int bV;

    uVar3 = func_02028124(param_1);
    func_0202508c(param_1, 5, 0x11, (u32)((((s64)(s32)uVar3) * -630 + 0x800) >> 12));
    iVar4 = func_020364cc(param_1);
    if (iVar4 != 0) {
        if (*(s16 *)(iVar4 + 0x90) == 0) goto t1;
        if (*(s16 *)(iVar4 + 0x90) != 2) goto s1;
    t1:
        bV = 1;
        goto j1;
    s1:
        if (*(s16 *)(iVar4 + 0x94) != 0x35) goto f1;
        if (func_020c1f34(iVar4) == 0) {
            bV = 1;
            goto j1;
        }
    f1:
        bV = 0;
    j1:
        if (bV == 0) {
            func_02039448(param_1);
            *(T3 *)(param_1 + 632) = *(T3 *)(iVar4 + 188);
            func_02037450(param_1, 0x300);
        }
    }
    iVar5 = func_0203567c(param_1);
    if (iVar5 == 0) return;
    if (func_0203592c(param_1, iVar4) != 0) return;
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bV = 0;
        goto end;
    }
    if (*(s16 *)(param_1 + 250) == 35) {
        bV = 0;
        goto end;
    }
    if (iVar4 == 0) goto L180;
    if (*(s16 *)(iVar4 + 0x90) == 0) goto t2;
    if (*(s16 *)(iVar4 + 0x90) != 2) goto s2;
t2:
    bV = 1;
    goto j2;
s2:
    if (*(s16 *)(iVar4 + 0x94) != 0x35) goto f2;
    if (func_020c1f34(iVar4) == 0) {
        bV = 1;
        goto j2;
    }
f2:
    bV = 0;
j2:
    if (bV == 0) goto L19c;
L180:
    func_0203e908(param_1, 93);
    func_020362f8(param_1);
    bV = 1;
    goto end;
L19c:
    bV = func_02026c40(param_1, iVar4);
    if (bV != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bV = 1;
    } else {
        bV = 0;
    }
end:
    if (!bV) func_ov003_0219a368(param_1);
}
