#include "ctx.h"

extern int func_02036578(u8 *p);
extern void func_02027668(int a, int *b);
extern void func_02067e34(int *a, int *b, int *c);
extern void func_02027654(int a, u32 *b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, int a);
extern void func_02035be8(u8 *p);
extern int func_020289d0(u8 *p, int a, int b);
extern int func_0203592c(u8 *p, int a);
extern int func_020357c8(u8 *p, int a);
extern void func_020362f8(u8 *p);
extern int func_0202fcc0(u8 *p);

void func_0204b1a0(u8 *param_1)
{
    int iVar2;
    int iVar3;
    int iv;
    int iv2;
    int bv;
    int aiStack_18[3];

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02027668(iVar2, aiStack_18);
        func_02067e34((int *)(param_1 + 0x2a0), aiStack_18, (int *)(param_1 + 0x26c));
        func_02027654(iVar2, (u32 *)(param_1 + 0x3b4));
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        iVar2 = 1;
        goto L2f0;
    }
    iVar3 = func_0203592c(param_1, 0);
    if (iVar3 != 0) {
        iVar2 = 1;
        goto L2f0;
    }
    iVar3 = func_020357c8(param_1, 0);
    if (iVar3 != 0) {
        iVar2 = 1;
        goto L2f0;
    }
    if (iVar2 != 0) {
        iv = *(s16 *)(iVar2 + 0xea);
        if (iv < 642) {
            goto z1;
        }
        if (iv <= 644) {
            bv = 1;
            goto t1;
        }
    z1:
        bv = 0;
    t1:
        if (bv != 0) {
            bv = 1;
            goto L130;
        }
        if (iv < 601) {
            goto z2;
        }
        if (iv > 607) {
            goto z2;
        }
        bv = 1;
        goto t2;
    z2:
        bv = 0;
    t2:
        if (bv == 0) {
            goto L12c;
        }
        iv2 = *(s16 *)(iVar2 + 0xee);
        if (iv2 < 642) {
            goto z3;
        }
        if (iv2 <= 644) {
            bv = 1;
            goto t3;
        }
    z3:
        bv = 0;
    t3:
        if (bv != 0) {
            bv = 1;
            goto L130;
        }
    L12c:
        bv = 0;
    L130:
        if (bv != 0) {
            goto Lzero;
        }
    }
Lcalls:
    func_020362f8(param_1);
    iVar2 = func_0202fcc0(param_1);
    goto L2f0;
Lzero:
    iVar2 = 0;
L2f0:
    if (iVar2 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 120) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
    }
}
